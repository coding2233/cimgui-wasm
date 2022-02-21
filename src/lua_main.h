#pragma once

extern "C"
{
#include "lua-5.4.4/src/lauxlib.h"
#include "lua-5.4.4/src/lua.h"
#include "lua-5.4.4/src/lualib.h"
}

class LuaMain
{
private:
    /* data */
    lua_State *global_state_ = nullptr;
    //Registering C functions
    void RegisterCFunction();
    //Set the search Lua file folder
    void SetLuaSearchPath();

    void LuaPCall(lua_State *pL, int nargs, int nresults);

public:
    LuaMain(/* args */);
    ~LuaMain();

    void Draw();
};
