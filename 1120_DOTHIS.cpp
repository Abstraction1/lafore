#include <iostream>

class what
{
private:
    int alpha;
public:
    void tester()
    {
        this->alpha = 11;
        std::cout << this->alpha;
    }
};

int main(int argc, char *argv[])
{
    what w;
    w.tester();
    std::cout << std::endl;
    return EXIT_SUCCESS;
}
