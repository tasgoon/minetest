#include "canvas.h"

Canvas::Canvas(video::IVideoDriver *driver)
{
    this->driver = driver;
}

Canvas::~Canvas()
{
    delete image;
}

void Canvas::setDriver(video::IVideoDriver *driver)
{
    this->driver = driver;
}

void Canvas::setupCanvas()
{
    image = driver->createImage(video::ECF_A8R8G8B8, driver->getScreenSize());
    initialized = true;
}

void Canvas::destroyCanvas()
{
    initialized = false;
    image->drop();
}

void Canvas::draw(video::IVideoDriver *driver)
{
    video::ITexture* frame = driver->addTexture("canvas", image);
    frame->grab();
    driver->draw2DImage(frame, core::vector2d<s32>(0, 0));
    frame->drop();
}

void Canvas::setPixel(u32 x, u32 y, video::SColor color)
{
    image->setPixel(x, y, color);
}

video::SColor Canvas::getPixel(u32 x, u32 y)
{
    return image->getPixel(x, y);
}
