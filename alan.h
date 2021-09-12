#ifndef ALAN_H
#define ALAN_H
#include "raylib.h"
#include <cstdint>


extern const int screenWidth;
extern const int screenHeight;
extern const int fps;
extern const int speed;

void movement();
void paddle_wall_collision();

extern Rectangle ball;
extern Rectangle player;
extern Rectangle opponent;
#endif
