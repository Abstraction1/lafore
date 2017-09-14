#include <iostream>

class Parent {
protected:
    int baseData;
};

class A : virtual public Parent
{
public:

};

class B : virtual public Parent
{
public:

};

class C : public A, public B
{
public:
    int getData() {
        return baseData;
    }
};

int main(int argc, char *argv[]) {
    return EXIT_SUCCESS;
}

