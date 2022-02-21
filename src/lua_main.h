#pragma once

extern "C"
{
#include "lauxlib.h"
#include "lua.h"
#include "lualib.h"
}

#include "imgui.h"

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

    int DrawButton(lua_State *pl);

public:
    LuaMain(/* args */);
    ~LuaMain();

    void Draw();
};
