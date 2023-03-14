//2. Define a class Rectangle and overload area function for different types of data type.
#include<iostream>
using namespace std;
class Rectangle
{
    public:
    float Area(float l,float b)
    {
        return l*b;
    }
    float Area(int l,float b)
    {
        return l*b;
    }
    float Area(float l,int b)
    {
        return l*b;
    }
    int Area(int l,int b)
    {
        return l*b;
    }
    double Area(double l,double b)
    {
        return l*b;
    }
    double Area(int l,double b)
    {
        return l*b;
    }
    double Area(double l,int b)
    {
        return l*b;
    }
    double Area(float l,double b)
    {
        return l*b;
    }
    double Area(double l,float b)
    {
        return l*b;
    }

};
int main()
{
    Rectangle r1;
    cout<<"Area of Rectangle = "<<r1.Area(2.5f,3.5f);
    return 0;
}