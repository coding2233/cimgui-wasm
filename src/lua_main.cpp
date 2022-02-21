#include "lua_main.h"

LuaMain::LuaMain(/* args */)
{
    global_state_ = luaL_newstate();
}

LuaMain::~LuaMain()
{
    lua_close(global_state_);
    //Load the Lua base library
    luaL_openlibs(global_state_);
    //Registering C functions
    RegisterCFunction();
    //Set the search Lua file folder
    SetLuaSearchPath();
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
}

void LuaMain::SetLuaSearchPath()
{
    // luaL_dostring(global_state_, R"(package.path="./lua-src/?.lua;../lua-src/?.lua;./lua-libs/?.lua;../lua-libs/?.lua;"..package.path)");
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
}