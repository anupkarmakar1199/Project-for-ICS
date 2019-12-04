#include <iostream>
using namespace std;

class Rectangle
{
    int length, width;
public:
    void setValues(int l, int w);
    void setValues(int l);
    void setValues();

    void getValues();
    int area();
};

class Circle
{
    int radius;
public:
    void setValues(int r);
    void getValues();
    float area();
};

void Rectangle::setValues(int l, int w)
{
    length=l;
    width=w;
}

void Rectangle::setValues(int l)
{
    length =l;
}

void Rectangle::setValues()
{
    length=0;
    width=0;
}
void Rectangle::getValues()
{
    cout<<"In Rectangle Class: "<<endl;
    cout<<"Length = "<<length<<endl;
    cout<<"Width = "<<width<<endl;
}

void Circle::setValues(int r)
{
    radius = r;
}

int Rectangle::area()
{
    return length * width;
}

float Circle::area()
{
    return 3.1416 * radius * radius;
}

void Circle::getValues()
{
    cout<<"In Circle class: "<<endl;
    cout<<"Radius = "<<radius<<endl;
}

int main()
{

    Rectangle r1,r2,r3;
    r1.setValues(24);
    r2.setValues(2,4);
    r3.setValues();

   r1.getValues();
   r2.getValues();
   r3.getValues();



}

