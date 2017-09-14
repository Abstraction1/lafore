#include<iostream>

class beta;

class alpha
{
private:
    int data;
public:
    alpha() : data(3) { }
    friend int friendfunc(alpha, beta);
};

class beta
{
private:
    int data;
public:
    beta() : data(7) { }
    friend int friendfunc(alpha, beta);
};

int friendfunc(alpha a, beta b) {
    return (a.data + b.data);
}

int main(int argc, char *argv[])
{
    alpha aa;
    beta bb;
    std::cout << friendfunc(aa, bb);
    return EXIT_SUCCESS;
}
