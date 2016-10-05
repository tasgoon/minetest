#ifndef CANVAS_H
#define CANVAS_H

#include "irrlichttypes_extrabloated.h"

class Canvas
{
public:
    Canvas(video::IVideoDriver* driver);
    ~Canvas();

    void setupCanvas();
    void destroyCanvas();
    void draw(video::IVideoDriver* driver);

    void setPixel(u32 x, u32 y, video::SColor color);
    video::SColor getPixel(u32 x, u32 y);

    bool initialized = false;
private:
    video::IImage* image;
    video::IVideoDriver* driver;
};

#endif // CANVAS_H
