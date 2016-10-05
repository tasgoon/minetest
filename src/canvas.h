#ifndef CANVAS_H
#define CANVAS_H

#include "irrlichttypes_extrabloated.h"

class Canvas
{
public:
    void setupCanvas(video::IVideoDriver* driver);
    void draw(video::IVideoDriver* driver);

    void setPixel(u32 x, u32 y, video::SColor color);
    video::SColor getPixel(u32 x, u32 y);

    bool initialized = false;
private:
    video::IImage* image;
};

Canvas* canvas = new Canvas();

#endif // CANVAS_H
