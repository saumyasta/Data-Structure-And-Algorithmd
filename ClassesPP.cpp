/// Classes - Uniform Initialization with overloaded Consructors :
/// Example of Rectangle Class
#include<iostream>
using namespace std;

class Rectangle
{
private:
    int width, height;
public:
    Rectangle(int , int);
    Rectangle(): width(0), height(0){}
    Rectangle(Rectangle& r);
    Rectangle(int t)
    {
        width = t;
        height = t;
    }
    int Area() { return width * height;}
};

Rectangle::Rectangle(int w, int h)
{
    width = w;
    height = h;
}

Rectangle::Rectangle(Rectangle& r)
{
    width = r.width;
    height = r.height;
}
int main()
{
    Rectangle R;
    Rectangle R1(3,4);
    Rectangle R3 = 10;
    Rectangle R4 {10,4};
    Rectangle R5 = { 6, 4};
    Rectangle R2(R1);
    cout<<"Area using default constructor is...."<<R.Area()<<endl;
    cout<<"Area using paramerized constructor is...."<<R1.Area()<<endl;
    cout<<"Area copy constructor is...."<<R2.Area()<<endl;
    cout<<"Area using constructor with one parameter is...."<<R3.Area()<<endl;
    cout<<"Area using constructor with two parameter is...."<<R4.Area()<<endl;
    cout<<"Area using constructor with two parameter is...."<<R5.Area()<<endl;
    return 0;
}
