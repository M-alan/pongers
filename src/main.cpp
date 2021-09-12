#include "alan.h"

int main()
{
  InitWindow(screenWidth, screenHeight, "Hello this is my test window");

  SetTargetFPS(fps); // 60

  while(!WindowShouldClose())
  {
    movement();
    paddle_wall_collision();
 
    BeginDrawing();
      ClearBackground(BEIGE);

      DrawRectangleRec(player, DARKGRAY);
      DrawRectangleRec(opponent, DARKGRAY);
      DrawCircle(ball.x, ball.y, 20, DARKGRAY);
    EndDrawing();
  }
  CloseWindow(); 
  return 0;
}
