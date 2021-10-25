#include <iostream>
#include <raylib.h>

constexpr auto SCREEN_WIDTH = 640;
constexpr auto SCREEN_HEIGHT = 480;
constexpr auto TITLE = "Rusty Tank";
constexpr auto TARGET_FPS = 60;

int main(int argc, char* argv[])
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, TITLE);
    SetTargetFPS(TARGET_FPS);

    bool isGameRunning = true;

    while (isGameRunning)
    {
        // Update
        isGameRunning = !WindowShouldClose();

        // Render
        BeginDrawing();
        ClearBackground(RAYWHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
