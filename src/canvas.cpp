#include "canvas.h"

void Canvas::setupCanvas(video::IVideoDriver* driver)
{
    image = driver->createImage(video::ECF_A8R8G8B8, driver->getScreenSize());
}

void Canvas::draw(video::IVideoDriver *driver)
{
    ImageTexture(image);
    driver->draw2DImage(image, core::vector2d<s32>(0, 0));
}

void Canvas::setPixel(u32 x, u32 y, video::SColor color)
{
    image->setPixel(x, y, color);
}

void Canvas::getPixel(u32 x, u32 y)
{
    return image->getPixel(x, y);
}
