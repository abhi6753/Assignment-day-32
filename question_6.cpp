/*6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your
choice.*/
#include <iostream>
#include<string>
using namespace std;
class Person
{
    string name;
    short unsigned age;
    public:
    Person(){}
    Person(string name,short unsigned age):name(name),age(age){}
    void displayPerson()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Age  = "<<age<<endl;
    }

};
class Student:public Person
{
    int batch;
    public:
    Student(){};
    Student(int batch,string name ,short unsigned int age):Person(name,age)
    {
        this->batch =batch;
    }
    void displayStudent()
    {
        displayPerson();
        cout<<"Batch = "<<batch<<endl;

    }
};
class Topper:public  Student
{
    int rank;
    public:
    Topper(){}
    Topper(int rank,int batch,string name,short unsigned int age):Student(batch,name,age)
    {
        this->rank = rank;
    }
    void displayRank()
    {
       displayStudent();
       cout<<"Rank = "<<rank<<endl;
    }
};
int main()
{
   Topper t1(1,3,"Abhishek kumar",22);
    t1.displayRank();
    return 0;
}
