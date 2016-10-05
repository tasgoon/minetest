#include "l_canvas.h"

void ModApiCanvas::Initialize(lua_State* L, int top)
{
    API_FCT(create_canvas);
    API_FCT(get_pixel);
    API_FCT(set_pixel);
    API_FCT(get_cursor);
    API_FCT(get_pressed);
}

int ModApiCanvas::l_create_canvas(lua_State *L)
{
    lua_getfield(L, 1, "init");
    lua_call(L, 0, 0);
    //std::cout << "Hi!" << std::endl;
    return 0;
}

int ModApiCanvas::l_destroy_canvas(lua_State *L)
{

}

int ModApiCanvas::l_get_pixel(lua_State *L)
{
    return 1;
}

int ModApiCanvas::l_set_pixel(lua_State *L)
{
    return 0;
}

int ModApiCanvas::l_get_cursor(lua_State *L)
{
    return 1;
}

int ModApiCanvas::l_get_pressed(lua_State *L)
{
    return 1;
}
