#include <iostream>
#include <typeinfo>

class base
{
    virtual void vert_func()
    {

    }
};

class dev1 : public base
{

};

class dev2 : public base
{

};

bool isDev1(base* pUnKnown)
{
    dev1* pDev1;
    if(pDev1 = dynamic_cast<dev1*>(pUnKnown))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char *argv[])
{
    dev1* d1 = new dev1;
    dev2* d2 = new dev2;

    if(isDev1(d1))
    {
        std::cout << "d1 class Dev1\n";
    }
    else
    {
        std::cout << "d1 is not a Dev1 class\n";
    }

    if(isDev1(d2))
    {
        std::cout << "d2 class Dev1\n";
    }
    else
    {
        std::cout << "d2 is not a Dev1 class\n";
    }
    return EXIT_SUCCESS;
}
