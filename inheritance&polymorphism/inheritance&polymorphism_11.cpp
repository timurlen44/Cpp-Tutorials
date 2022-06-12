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

};

class Rectangle : public Shape
{
public:
    void getArea()
    {
        double result = width * height;
        cout<<"Area Of Rectangle: "<<result<<endl;
    }
};


class Square : public Shape
{
public:
    void getArea()
    {
        double result = aSquare * aSquare;
        cout<<"Area Of Square: "<<result<<endl;
    }
};

class Circle : public Shape
{
public:
    void getArea()
    {
        double result = 3.14 * radius * radius;
        cout<<"Area Of Circle: "<<result<<endl;
    }
};


int main()
{

    Rectangle r;
    r.setHeight(5.0);
    r.setWidth(5.0);
    r.getArea();

    Square s;
    s.setSquareDim(12);
    s.getArea();

    Circle c;
    c.setRadius(2);
    c.getArea();
    return 0;
}
