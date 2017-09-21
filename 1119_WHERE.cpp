#include <iostream>

class where
{
private:
    char chrarray[10];
public:
    void reveal()
    {
        std::cout << "\nMy adress - " << this;
    }
};

int main(int argc, char *argv[])
{
    where w1, w2, w3;
    w1.reveal();
    w2.reveal();
    w3.reveal();
    std::cout << std::endl;
    return EXIT_SUCCESS;
}
