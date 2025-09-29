

#include <iostream>
#include <string>

using namespace std;

class Engine
{
protected:
    int hp;

public:
    Engine(int a)
    {
        hp = a;
    }

    void startEngine()
    {
        cout << "Engine started with " << hp << " HP" << endl;
    }
};

class Vehicle
{
protected:
    string brand;

public:
    Vehicle(const string &b)
    {
        brand = b;
    }

    void info()
    {
        cout << "Vehicle brand: " << brand << endl;
    }
};

class Car : public Engine, public Vehicle
{
    string model;

public:
    Car(const string &a, const string &b, int hp)
        : Vehicle(a), Engine(hp)
    {
        model = b;
    }

    void display()
    {
        cout << "Car: " << brand << " " << model << ", "
             << hp << " HP" << endl;
    }
};

int main()
{
    Car myCar("Tesla", "Model S", 1020);

    myCar.startEngine();
    myCar.info();
    myCar.display();

    return 0;
}
