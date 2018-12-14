namespace circle{
class Circle{
private:
    int x=0;
    int y=0;
    double radius=0.0;
public:
    Circle(int,int,double);
    double get_radius() const;
    int get_pos_X() const;
    int get_pos_Y() const;
    double calcul_area();
    ~Circle();
};
}

