//8. Write a C++ program to find the factorial of a number using copy constructor
#include<iostream>
#include<string>
using namespace std;
class Fact
{
    int x,facti;
    public:
    Fact(int x):x(x){facti =1;}
    Fact(Fact &z)
    {
        x=z.x;
        facti =1;
    }
    void calculate()
    {
        for(int i=1;i<=x;i++)
        {
            facti *=i; 
        }
    }
    void display()
    {
        cout<<"Factorial : "<<facti<<endl;
    }

};
int main()
{
    int n;
    cout<<"Enter value : ";
    cin>>n;
    Fact f1(n);
    f1.calculate();
    f1.display();

    Fact f2(f1);
    f2.calculate();
    f2.display();
    return 0;
}