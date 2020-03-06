#include "rect.h"
#include "square.h"
#include "circle.h"
#include <iostream>

using namespace circle; //²»ÄÜÉ¾È¥£¬·ñÔòCircle not declared in this scope

int main()
{
    Circle *c=new Circle(0,0,12);
    std::cout<<"Area: "<<c->calcul_area()<<std::endl;
    std::cout<<"X: "<<c->get_pos_X()<<'\t'<<"Y: "<<c->get_pos_Y()<<std::endl;
    delete c;
    c=nullptr;
    std::cout<<std::endl;

    rect::Rect *r1=new rect::Rect(1,4);
    square::Square *s1=new square::Square(7);
    delete r1;
    r1=nullptr;
    std::cout<<std::endl;

    delete s1;
    s1=nullptr;
    std::cout<<std::endl;
    square::Square *&s2=s1;
    s2=new square::Square(10);
    std::cout<<s2->get_length()<<' '<<s1->get_length()<<std::endl;
    s1=new square::Square(9);
    std::cout<<s2->get_length()<<' '<<s1->get_length()<<std::endl;

    return 0;
}
