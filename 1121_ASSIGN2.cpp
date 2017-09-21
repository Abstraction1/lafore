#include <iostream>

class alpha
{
private:
    int data;
public:
    alpha()
    {

    }

    alpha(int d)
    {
        data = d;
    }

    void display()
    {
        std::cout << data;
    }

    alpha& operator =(alpha& a)
    {
        data = a.data;
        std::cout << "\nЗапущен оператор присваивания";
        return *this;
    }
};

int main(int argc, char *argv[])
{
    alpha a1(37);
    alpha a2, a3;

    a3 = a2 = a1;
    std::cout << "\na2 = "; a2.display();
    std::cout << "\na3 = "; a3.display();
    std::cout << std::endl;
    return EXIT_SUCCESS;
}
