/*4. Define a class Addition that can add 2 or 3 numbers of different data types using
function overloading.*/

#include<iostream>
using namespace std;
class Addition
{
  int sum;
public:
int add(int a,int b)
{
  return a+b;
}
float add(int a,float b)
{
  return a+b;
}
float add(float a,int b)
{
  return a+b;
}
float add(float a,float b)
{
  return a+b;
}
double add(float a,double b)
{
  return a+b;
}
double add(double a, float b)
{
  return a+b;
}
double add(double a,double b)
{
  return a+b;
}
double add(int a,double b)
{
  return a+b;
}
double add(double a,int b)
{
  return a+b;
}
int add(int a,int b,int c)
{
  return a+b+c;
}
float add(int a,int b,float c)
{
  return a+b+c;
}
float add(int a,float b,float c)
{
  return a+b+c;
}
float add(int a,float b,int c)
{
  return a+b+c;
}
float add(float a,int b,int c)
{
  return a+b+c;
}
float add(float a,int b,float c)
{
  return a+b+c;
}
float add(float a,float b,int c)
{
  return a+b+c;
}
float add(float a,float b,float c)
{
  return a+b+c;
}

double add(int a,int b,double c)
{
  return a+b+c;
}
double add(int a,double b,double c)
{
  return a+b+c;
}
double add(int a,double b,int c)
{
  return a+b+c;
}
double add(double a,int b,int c)
{
  return a+b+c;
}
double add(double a,int b,double c)
{
  return a+b+c;
}
double add(double a,double b,int c)
{
  return a+b+c;
}
double add(double a,double b,double c)
{
  return a+b+c;
}

double add(float a,float b,double c)
{
  return a+b+c;
}
double add(float a,double b,double c)
{
  return a+b+c;
}
double add(float a,double b,float c)
{
  return a+b+c;
}
double add(double a,float b,float c)
{
  return a+b+c;
}
double add(double a,float b,double c)
{
  return a+b+c;
}
double add(double a,double b,float c)
{
  return a+b+c;
}

};
int main()
{
  Addition a;
  cout<<"sum = "<<a.add(1,2,4);
  return 0;
}
