#include "raylib.h"
#include <iostream>
#include <vector>

using namespace std;

const int screen_width = 1280;
const int screen_height = 720;
const int FPS = 60;



int main() {
    InitWindow(screen_width, screen_height, "Don't Fall!");
    SetTargetFPS(FPS);

    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
}