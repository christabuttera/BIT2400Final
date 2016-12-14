#pragma once

//libraries
#include <stdio.h>
//for sqrt (square root)
#include <math.h>
#include "allegro5/allegro.h"
//use image addon for loading images, dialog boxes, and primitive shapes
#include <allegro5/allegro_image.h>
//use primitives addon to draw primitive shapes like line
#include <allegro5/allegro_primitives.h>
//use font addon for writing text
#include <allegro5/allegro_font.h> //fixed font
#include <allegro5/allegro_ttf.h> //truetype font
//our header files
//include the header file for any class we use in this source file
//there are two methods:
//1. include header files only in cpp files (no #include in headers)
//2. include header files in any .h or .cpp files that need them
#include "GameObject.h"
#include "AnimatedObject.h"
#include "SimpleEnemy.h"
#include "SmartEnemy.h"
#include "Effect.h"
#include "Edge.h"
#include "Render.h"
#include "Physics.h"
#include "Game.h"
