/*1. Create a class FLOAT that contains one float data member. Overload all the four
arithmetic operators so that they can operate on the objects of FLOAT.*/
#include<iostream>
using namespace std;
class FLOAT
{
    float num;
    public:
    FLOAT()
    {

    }
    FLOAT (float data)
    {
        num = data;
    }
    FLOAT operator+(FLOAT f)
    {
        FLOAT temp;
        temp.num = num+f.num;
        return temp;
    }
    FLOAT operator-(FLOAT f)
    {
        FLOAT temp;
        temp.num = num-f.num;
        return temp;
    }
    FLOAT operator*(FLOAT f)
    {
        FLOAT temp;
        temp.num = num*f.num;
        return temp;
    }
    FLOAT operator/(FLOAT f)
    {
        FLOAT temp;
        temp.num = num/f.num;
        return temp;
    }
    friend ostream& operator <<(ostream&,FLOAT);
    friend istream& operator>>(istream&,FLOAT&);
};
istream& operator >> (istream &in,FLOAT&temp) 
{
    cin>>temp.num;
    return cin;
}
ostream & operator<<(ostream &out,FLOAT temp)
{
    cout<<temp.num;
    return cout;
}
int main()
{
    FLOAT x,y,z;
    cout<<"Enter First float number : ";
    cin>>x;
    cout<<"Enter Second float number : ";
    cin>>y;
    z = x+y;
    cout<<"The sum of "<<x<<" and "<<y<<" = "<<z<<endl;
    return 0;
}