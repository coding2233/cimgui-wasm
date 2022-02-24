local defs = require "output/definitions"
local definitionsPath = "ImGuiForLua/imgui_lua_definitions.h"


function WriteToFile(line)
    local file = io.open(definitionsPath,'a')
    io.output(file)
    io.write(line)
    io.close(file)
end

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
    local file = io.open(definitionsPath,'a')
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
        local ret = funcTab[1]["ret"]
        io.write("\treturn 1;\n")
    end
    io.write("}\n\n")
    io.close(file)
end

WriteToFile("#include \"lauxlib.h\"\n")
WriteToFile("#include \"lua.h\"\n")
WriteToFile("#include \"lualib.h\"\n")
WriteToFile("#include \"imgui.h\"\n")
WriteToFile("#include \"cimgui.h\"\n")
WriteToFile("\n")

for key, value in pairs(defs) do
    print(key)
    WriteFunction(key,value)
end