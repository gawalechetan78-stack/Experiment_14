

#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
public:
    Animal(const string& n) : name(n) {}
    void eat() {
        cout << name << " is eating" << endl;
    }
};

class Dog : public Animal {
public:
    Dog(const string& n) : Animal(n) {}

    void bark() {
        cout << name << " says: Woof Woof" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(const string& n) : Animal(n) {}

    void meow() {
        cout << name << " says: Meow" << endl;
    }
};

int main() {
    Dog dog("Buddy");
    Cat cat("Whiskers");

    dog.eat();
    dog.bark();

    cat.eat();
    cat.meow();

    return 0;
}
