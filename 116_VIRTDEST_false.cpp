#include <iostream>

class Base {
public:
    ~Base() {
        std::cout << "Base delete\n";
    }
};

class A : public Base
{
public:
    ~A () {
        std::cout << "A delete\n";
    }
};

int main(int argc, char *argv[])
{
    Base* b = new A;
    delete b;
    return EXIT_SUCCESS;
}
