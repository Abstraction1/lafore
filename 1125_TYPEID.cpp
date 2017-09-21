#include <iostream>
#include <typeinfo>

class Base
{
virtual void virt_func()
    {

    }
};

class Derv1 : public Base
{

};

class Derv2 : public Base
{

};

void display_name(Base* pB)
{
    std::cout << "pointer to class object ";
    std::cout << typeid(*pB).name() << std::endl;
}

int main(int argc, char *argv[])
{
    Base* pBase = new Derv1;
    display_name(pBase);
    pBase = new Derv2;
    display_name(pBase);
    return EXIT_SUCCESS;
}
