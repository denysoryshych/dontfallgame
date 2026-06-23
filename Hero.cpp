//
// Created by   Denys Oryshych on 23.06.2026.
//

#include "Hero.h"

#include <raylib.h>
using namespace std;

Hero::Hero() {
    Image image = LoadImage("graphics/hero.png");
    texture = LoadTextureFromImage(image);
    UnloadImage(image);
}

Hero::~Hero() {
    UnloadTexture(texture);
}

void Hero::Draw() {
    DrawTexture(texture, 250, 500 - 88, WHITE);
}
