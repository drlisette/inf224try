#include "circle.h"
#include <iostream>

using namespace circle; //otherwise  Circle not yet declared, instance variables not in this scope

Circle::Circle(int _x,int _y,double _r):x(_x),y(_y),radius(_r){}

double Circle::get_radius()const {return radius;}

int Circle::get_pos_X() const {return x;}

int Circle::get_pos_Y() const {return y;}

double Circle::calcul_area() {return radius*radius*3.14;}

Circle::~Circle(){std::cout<<"Destructor circle, adieu, cruel world"<<std::endl;}
