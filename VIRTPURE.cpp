#include<iostream>
class Base {
public:
    virtual void show() = 0;
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
    Base* arr[2];
    A a;
    B b;
    arr[0]=&a;
    arr[1]=&b;

    arr[0]->show();
    arr[1]->show();

    return EXIT_SUCCESS;
}


