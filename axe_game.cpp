#include "raylib.h"
int main()
{
  int width{350};
  int height{200};
  InitWindow(width, height, "Axe Game");

 while (WindowShouldClose() == false)
 {
  BeginDrawing();
  ClearBackground(RED);
  EndDrawing();
 }
}