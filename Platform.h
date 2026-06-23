//
// Created by   Denys Oryshych on 23.06.2026.
//

#ifndef MYGAME_PLATFORM_H
#define MYGAME_PLATFORM_H
#include <raylib.h>


class Platform {
public:
    int width = 200, height = 46;
    Texture2D texture;
    Platform();

    ~Platform();

    void Draw(float x, float y);
};


#endif //MYGAME_PLATFORM_H