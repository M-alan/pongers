#include "alan.h"

// vars for screen 
const int screenWidth{800};
const int screenHeight{450};
const int fps{60};
const int speed{3};

//----vars for player
int playerX{10};
int playerHeight{120};
int playerY{(screenHeight / 2) - (playerHeight / 2)};


//----vars for opponent
int opponentX{GetScreenWidth() + 765};
int opponentHeight{120};
int opponentY{(screenHeight / 2) - (opponentHeight / 2)};

//----ball vars 
int ballX{(screenWidth / 2)};
int ballY{(screenHeight / 2)};



Rectangle player{(float)playerX, (float)playerY, 25, (float)playerHeight};
Rectangle opponent{(float)opponentX, (float)opponentY, 25, (float)opponentHeight};
Rectangle ball{(float)ballX,(float)ballY, 25,25};

//-----functions

void movement()
{
  if(IsKeyDown(KEY_W)) player.y -= speed;
  if(IsKeyDown(KEY_S)) player.y += speed;
  if(IsKeyDown(KEY_UP)) opponent.y -= speed;
  if(IsKeyDown(KEY_DOWN)) opponent.y += speed;
}


void paddle_wall_collision()
{
  if(player.y < 1) player.y += speed;
  if((player.y + playerHeight) >= screenHeight) player.y -= speed;


  if(opponent.y < 1) opponent.y += speed;
  if((opponent.y + opponentHeight) >= screenHeight) opponent.y -= speed;
}

void ball_movement()
{
  if((ball.x < 0) && ball.y > ) 
}
// notes
// check for each section ands and ors
