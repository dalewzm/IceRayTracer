#include "screenBuffer.h"

ScreenBuffer& getScreenBuffer()
{
    ScreenBuffer obj;
    return obj;
}

ScreenBuffer::ScreenBuffer()
{
    used = 0;
}

ScreenBuffer::ScreenBuffer(const ScreenBuffer &)
{

}

