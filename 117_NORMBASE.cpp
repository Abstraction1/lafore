#include <iostream>

class Parent {
protected:
    int baseData;
};

class A : public Parent
{
public:

};

class B : public Parent
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
