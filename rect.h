#include "shape.h"

#ifndef graph_rect
#define graph_rect

namespace rect{

class Rect:public shape::Shape{

public:
    Rect();
    Rect(int, int);
    int get_width();
    int get_length();
    virtual void set_width(int);
    virtual void set_length(int);
    ~Rect();
};

}

#endif
