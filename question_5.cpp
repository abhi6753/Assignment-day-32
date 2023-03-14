/*5. Define a class A having multiple constructors. Define another class B derived from
class A. Create derived class constructors and show use of constructor in this single
inheritance.*/
#include <iostream>
#include<string>
using namespace std;
class Person
{
    protected:
    string name;
    short unsigned age;
    public:
    Person(){}
    Person(string name,short unsigned age):name(name),age(age){}

};
class Student:public Person
{
    int rank;
    public:
    Student(){};
    Student(int rank,string name,short unsigned int age):Person(name,age)
    {
        this->rank = rank;
    }
    void show_data()
    {
       cout<<"Name = "<<name<<endl;
       cout<<"Age  = "<<age<<endl;
       cout<<"Rank = "<<rank<<endl;
    }
};
int main()
{
    Student s(3,"Abhishek kumar",22);
    s.show_data();
    return 0;
}
