//
// Created by   Denys Oryshych on 23.06.2026.
//

#include "Platform.h"

Platform::Platform() {
    Image image = LoadImage("graphics/platform.png");
    texture = LoadTextureFromImage(image);
    UnloadImage(image);
}

Platform::~Platform() {
    UnloadTexture(texture);
}

void Platform::Draw(float x, float y) {
    DrawTexture(texture, x, y, WHITE);
}
