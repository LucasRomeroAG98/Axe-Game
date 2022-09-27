#include "raylib.h"
int main()
{
  // Window dimensions
  int width{800};
  int height{450};
  InitWindow(width, height, "Axe Game");

  // Circle coordinates

  int circle_x{200};
  int circle_y{200};
  int circle_radius{25};

  // Axe coordinates

  int axe_x{400};
  int axe_y{0};

  int direction{10};

  SetTargetFPS(60);

 while (WindowShouldClose() == false)
 {
  BeginDrawing();
  ClearBackground(WHITE);

  // Game logic begins

  DrawCircle(circle_x, circle_y, circle_radius, BLUE);

  // Circle movement

  if (IsKeyDown(KEY_D) && circle_x < width)
  {
    circle_x += 10;
  }

  if (IsKeyDown(KEY_A) && circle_x > 0)
  {
    circle_x -= 10;
  }

  DrawRectangle(axe_x, axe_y, 50, 50, RED);

  // Axe movement

  axe_y += direction;
  if (axe_y > height || axe_y < 0)
  {
    direction = -direction;
  }

  // Game logic ends
  EndDrawing();
 }
}