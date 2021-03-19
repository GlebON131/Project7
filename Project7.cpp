#include <iostream>
#include <string>

using namespace std;
class Animal
{
public:

    virtual void Voice() const = 0;
};

class Dog : public Animal
{
    void Voice() const override
    {
       cout << "Woof!\n";
    }
};

class Cat : public Animal
{
    void Voice() const override
    {
        cout << "Meaw!\n";
    }
};

class Cow : public Animal
{
    void Voice() const override
    {
        cout << "Moo!\n";
    }
};

int main()
{
    Animal* animals[3];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    for (Animal* a : animals)
        a->Voice();
}
