#ifndef L_CANVAS_H
#define L_CANVAS_H

#include "canvas.h"
#include "game.h"
#include "lua_api/l_base.h"
#include "lua_api/l_internal.h"

class ModApiCanvas : public ModApiBase
{
private:
    static int l_create_canvas(lua_State* L);
    static int l_destroy_canvas(lua_State *L);
    static int l_get_pixel(lua_State* L);
    static int l_set_pixel(lua_State* L);
    static int l_get_cursor(lua_State* L);
    static int l_get_pressed(lua_State* L);

public:
    static void Initialize(lua_State* L, int top);
};

#endif // L_CANVAS_H
