#include<iostream>
class Base {
public:
    virtual void show() {
        std::cout << "\nBase";
    }
};
class A : public Base {
public:
    void show() {
        std::cout << "\nA";
    }
};
class B : public Base {
public:
    void show() {
        std::cout << "\nB";
    }
};
int main(int argc, char *argv[])
{
    A a;
    B b;
    Base* ptr;
    ptr = &a;
    ptr->show();
    ptr = &b;
    ptr->show();
    return EXIT_SUCCESS;
}


