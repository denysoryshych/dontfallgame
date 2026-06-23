#include "raylib.h"
#include <iostream>
#include "Platform.h"
#include "Hero.h"
#include <vector>

using namespace std;

const int screen_width = 1280;
const int screen_height = 720;
const int FPS = 60;

const int cell_width = 10;
const int cell_height = 10;


int main() {
    InitWindow(screen_width, screen_height, "Don't Fall!");
    SetTargetFPS(FPS);


    while (WindowShouldClose() == false) {
        Platform platform;
        Hero hero;
        BeginDrawing();
            ClearBackground(BLUE);

            // DEBUG GRID
            // for (int i = 0; i < screen_width / cell_width; ++i) {
            //     DrawLine(i * cell_width, 0, i * cell_width, screen_height, BLACK);
            // }
            //
            // for (int i = 0; i < screen_height / cell_height; ++i) {
            //     DrawLine(0, i * cell_height, screen_width, i * cell_height, BLACK);
            // }

            platform.Draw(250, 500);
            platform.Draw(550, 400);
            platform.Draw(850, 450);
            hero.Draw();
        EndDrawing();
    }

    CloseWindow();
}