#include "lua_main.h"

LuaMain::LuaMain(/* args */)
{
    global_state_ = luaL_newstate();

    //Load the Lua base library
    luaL_openlibs(global_state_);
    //Registering C functions
    RegisterCFunction();
    //Set the search Lua file folder
    SetLuaSearchPath();

    luaL_dostring(global_state_, R"(require "main")");
}

LuaMain::~LuaMain()
{
    lua_close(global_state_);
}

int DrawButton(lua_State *pl)
{
    const char *str = lua_tostring(pl, 1);
    bool result = ImGui::Button(str);
    lua_pushboolean(pl, result);
    return 1;
}

void LuaMain::RegisterCFunction()
{
    /*lua_pushcfunction(global_state_, fn);
		lua_setglobal(global_state_, fn)*/
    //lua_register(global_state_, "xx", fn);
    // lua_register(global_state_, "log", LuaLog);
    // lua_register(global_state_, "print", LuaLog);
    // lua_register(global_state_, "RegisterActor", RegisterActor);
    // lua_register(global_state_, "SendMail", SendMail);

    lua_register(global_state_, "DrawButton", DrawButton);
}

void LuaMain::SetLuaSearchPath()
{
    luaL_dostring(global_state_, R"(package.path="data/lua/?.lua;"..package.path)");
    // luaL_dostring(global_state_, R"(package.cpath="./lua-libs/?.so;../lua-libs/?.so;"..package.cpath)");
}

void LuaMain::LuaPCall(lua_State *pL, int nargs, int nresults)
{
    if (lua_pcall(pL, nargs, nresults, 0) != 0)
    {
        // int argc = lua_gettop(pL);
        // LOG(ERROR) << "[LuaPCall ERROR] " << argc << "  " << lua_tostring(pL, -1);
        // std::string log = "[LuaPCall ERROR] " + std::string(lua_tostring(pL, -1)) + "\n" + std::string(lua_tostring(pL, -2));
        // LOG(ERROR) << log;
    }
}

void LuaMain::Draw()
{
    //获取lua中的showinfo函数
    lua_getglobal(global_state_, "OnDraw");
    LuaPCall(global_state_, 0, 0);

    lua_getglobal(global_state_, "ButtonName");
    LuaPCall(global_state_, 0, 1);

    ImGui::Button(lua_tostring(global_state_, 1));
}