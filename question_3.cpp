/*3. Define a base class Animals having member function sound() . Define another
derived class from Animals class named Dogs. You need to override the sound
function of the base class in the derived class.*/
#include <iostream>
#include <string>
using namespace std;
class Animals
{
protected:
    string sound;

public:
    void set_sound(string sound)
    {
        this->sound = sound;
    }
    string Sound()
    {
        return sound;
    }
};
class Dog : public Animals
{
private:
    string dog_sound;

public:
    void set_sound(string sound)
    {
        dog_sound = sound;
    }
    string Sound() // Modified function
    {
        return dog_sound;
    }
};
int main()
{
    Animals cat;
    cat.set_sound("Meow");
    cout << "Sound of cat is : " << cat.Sound() << endl;
    Dog rolly;
    rolly.set_sound("bow");
    cout << "Sound of Dog is : " << rolly.Sound() << endl;
    return 0;
}
