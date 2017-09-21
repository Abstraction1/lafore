#include <iostream>

class Array
{
private:
    int* ptr;
    int size;
public:
    Array(int s)
    {
        size = s;
        ptr = new int[s];
    }
    ~Array()
    {
        delete[] ptr;
    }
    int& operator [](int j)
    {
        return *(ptr + j);
    }
};

int main(int argc, char *argv[])
{
    const int ASIZE = 10;
    Array arr(ASIZE);
    for (int i = 0; i < ASIZE; ++i) {
        arr[i] = i * i;
    }
    for (int i = 0; i < ASIZE; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;;
    return EXIT_SUCCESS;
}
