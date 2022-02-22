local defs = require "output/definitions"
local definitionsPath = "ImGuiForLua/imgui_lua_definitions.h"


function TypeToLua(type)
if type=="int" then
    return "(int)lua_tonumber"
elseif type == "bool" then
    return "lua_toboolean"
elseif type=="const char*" then
    return "lua_tostring"
end

if string.find(type,"*") == nil then
    return "*("..type.."*)".."lua_touserdata"
else
    return "("..type..")".."lua_touserdata"
end

end

function WriteFunction(name,funcTab)
    file = io.open(definitionsPath,'a')
    io.output(file)
    io.write("int "..name.."(lua_State *pl)\n")
    io.write("{\n")

    local argsT = funcTab[1]["argsT"]
    for index, value in ipairs(argsT) do
        local luaArg = value["type"].." "..value["name"].." = "
        luaArg = luaArg..TypeToLua(value["type"]).."(pl,"..tostring(index)..");"
        io.write("\t"..luaArg.."\n")
    end

    if funcTab[1]["ret"]=="void" then
        io.write("\treturn 0;\n")
    else
        io.write("\treturn 1;\n")
    end
    io.write("}\n\n")
    io.close(file)
end



for key, value in pairs(defs) do
    print(key)
    WriteFunction(key,value)
end