#ifndef graph_shape
#define graph_shape

#include <iostream>

namespace shape{

class Shape{
protected:
    int x=0;
    int y=0;
public:
    Shape(){};
    Shape(int a, int b):x(a),y(b){};
    ~Shape(){std::cout<<"Destructor shape, adieu, cruel world."<<std::endl;}
};

}

#endif // graph_shape
