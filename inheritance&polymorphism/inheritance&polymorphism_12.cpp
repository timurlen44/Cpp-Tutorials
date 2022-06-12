#include<iostream>
using namespace std;

class Shape
{
public:

    void setWidth(double w)
    {
        width = w;
    }
    void setHeight(double h)
    {
        height = h;
    }
    void setSquareDim(double s)
    {
        aSquare = s;
    }
    void setRadius(double r)
    {
        radius = r;
    }
protected://sadece türeyen sýnýflarda kullanabileceðiz.
    double width;
    double height;
    double aSquare;
    double radius;
    int choiceConst;
    Shape(double ShapeWidth, double shapeHeight):width(ShapeWidth),height(shapeHeight)
    {

    }
    Shape(double shapeSquare, int choice):aSquare(shapeSquare),choiceConst(choice)
    {

    }
    Shape(double shapeCircle):radius(shapeCircle)
    {

    }
    ~Shape(){

    }

};

class Rectangle : public Shape
{
public:
    Rectangle(double width, double height):Shape(width,height)
    {

    }
    void getArea()
    {
        double result = width * height;
        cout<<"Area Of Rectangle: "<<result<<endl;
    }
};


class Square : public Shape
{
public:
    Square(double squDim, int cho):Shape(squDim,cho)
    {

    }
    void getArea()
    {
        double result = aSquare * aSquare;
        cout<<"Area Of Square: "<<result<<endl;
    }
};

class Circle : public Shape
{
public:
    Circle(double radius):Shape(radius)
    {

    }
    void getArea()
    {
        double result = 3.14 * radius * radius;
        cout<<"Area Of Circle: "<<result<<endl;
    }
};


int main()
{


    Rectangle r(4.0,5.0);
    r.getArea();

    Square s(3.5,0);
    s.getArea();

    Circle c(10);
    c.getArea();


    return 0;
}
