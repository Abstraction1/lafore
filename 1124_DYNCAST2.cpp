#include <iostream>
#include <typeinfo>

class Base
{
protected:
    int ba;
public:
    Base() : ba(0)
    {

    }

    Base(int b) : ba(b)
    {

    }

    virtual void vert_func()
    {

    }

    void show()
    {
        std::cout << "Base: ba =" << ba << std::endl;
    }
};

class Derv : public Base
{
private:
    int da;
public:
    Derv(int b, int d) : da(d)
    {
        da = b;
    }

    void show()
    {
        std::cout << "Derv: ba =" << ba << ", da =" << da << std::endl;
    }
};

int main(int argc, char *argv[])
{
    Base* pBase = new Base(10);
    Derv* pDerv = new Derv(21, 22);

    pBase = dynamic_cast<Base*> (pDerv);
    pBase->show();

    pBase = new Derv(31, 32);
    pDerv = dynamic_cast<Derv*>(pBase);
    pDerv->show();

    return EXIT_SUCCESS;
}
