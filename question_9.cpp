//9. Write a C++ program to calculate the area of triangle, rectangle and circle using\
constructor overloading. The program should be menu driven.
#include <iostream>
using namespace std;
class Shape
{
protected:
    float area;

public:
    virtual void Area() = 0;
};
class Triangle : public Shape
{
    float base, height;

public:
    Triangle()
    {    
    }
    void Area()
    {
        cout << "Enter base : ";
        cin >> base;
        cout << "Enter height : ";
        cin >> height;
        area = (base * height) / 2.0;
    }
    void Display()
    {
        cout << "Area of Triangle = " << area << endl<<endl;
    }
};
class Rectangle : public Shape
{
    float length, breadth;

public:
    Rectangle()
    {     
    }
    void Area()
    {
        cout << "Enter length  : ";
        cin >> length;
        cout << "Enter breadth : ";
        cin >> breadth;
        area = length * breadth;
    }
    void Display()
    {
        cout << "Area of Rectangle = " << area << endl<<endl;
    }
};
class Circle : public Shape
{
    float radius;

public:
    Circle()
    {   
    }
    void Area()
    {
        cout << "Enter radius : ";
        cin >> radius;
        const float PI = 3.14f;
        area = PI * radius * radius;
    }
    void Display()
    {
        cout << "Area of Circle = " << area << endl<<endl;
    }
};
int main()
{
    char ch;
    Triangle t1;
    Rectangle r1;
    Circle c1;
    while (true)
    {
        cout << "1. Calculate the area of triangle." << endl;
        cout << "2. Calculate the area of rectangle." << endl;
        cout << "3. Calculate the area of circle." << endl;
        cout << "4. Exit" << endl<< endl;
        cout << "Enter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case '1':
            
            t1.Area();
            t1.Display();
            break;
        case '2':
           
            r1.Area();
            r1.Display();
            break;
        case '3':
            
            c1.Area();
            c1.Display();
            break;
        case '4':
            break;
        }
    }
    return 0;
}
