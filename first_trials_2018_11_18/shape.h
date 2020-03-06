#ifndef graph_square
#define graph_square

#include "rect.h"

namespace square{

class Square: public rect::Rect{
public:
    Square();
    Square(int);
    int get_length();
    virtual void set_length(int) final;
    virtual void set_width(int) final;
    ~Square();
};

}

#endif // graph_square
