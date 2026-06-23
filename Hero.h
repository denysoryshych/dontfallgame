//
// Created by   Denys Oryshych on 23.06.2026.
//

#include <raylib.h>
#ifndef MYGAME_HERO_H
#define MYGAME_HERO_H


class Hero {
public:
    int width = 58, height = 88;
    Texture2D texture;
    Hero();
    ~Hero();
    void Draw();
};


#endif //MYGAME_HERO_H