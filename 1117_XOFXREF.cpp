#include<iostream>

class alpha
{
private:
    int data;
public:
    alpha()
    { }
    alpha(int d)
    {
        data = d;
    }
    alpha(alpha& a)
    {
        data = a.data;
        std::cout << "\nЗапущен конструктор копирования";
    }
    void display()
    {
        std::cout << data;
    }
    void operator =(alpha& a)
    {
        data = a.data;
        std::cout << "\nзапущен оператор присваивания";
    }
};

int main(int argc, char *argv[])
{
    alpha a1(37);
    alpha a2;

    a2 = a1;
    std::cout << "\na2 = "; a2.display();

    alpha a3(a1);
    //alpha a3 = a1;
    std::cout << "\na3 = "; a3.display();
    std::cout << std::endl;
    return EXIT_SUCCESS;
}
