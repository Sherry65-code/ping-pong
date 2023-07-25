#include "libs/raylib.h"

int main() {
    InitWindow(800, 450, "Ping Pong");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Congrats! Welcome to Ping pong game");
    }
}