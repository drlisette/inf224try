#include "rect.h"
#include <iostream>

using namespace rect;

Rect::Rect(){}

Rect::Rect(int _x, int _y):shape::Shape(_x,_y){}

int Rect::get_width(){return x;}

int Rect::get_length(){return y;}

void Rect::set_width(int _x) {x=_x;}

void Rect::set_length(int _y) {y=_y;}

Rect::~Rect(){std::cout<<"Destructor rect, adieu, cruel world"<<std::endl;}
