#include "square.h"
#include "shape.h"
#include <iostream>

using namespace square;

Square::Square(){};

// Square::Square(int _x,int _y): shape::Shape(_x,_y){}; //legal only when 'shape' is direct predecessor

Square::Square(int _x){
    x=_x;
    y=_x;
};


void Square::set_length(int m){
    x=m; // variable can be traced back indirectly, not constructor
    y=m;
};

void Square::set_width(int m){
    x=m;
    y=m;
};

int Square::get_length(){return x;}

Square::~Square(){std::cout<<"Destructor square, adieu, cruel world"<<std::endl;}
