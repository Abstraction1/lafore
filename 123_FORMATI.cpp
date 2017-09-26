#include <fstream>
#include <iostream>
#include <string>

int main()
{
    char ch;
    int j;
    double d;
    std::string str1;
    std::string str2;

    std::ifstream infile("fdata.txt");

    infile >> ch >> j >> d >> str1 >> str2;

    std::cout << ch << std::endl
              << j << std::endl
              << d << std::endl
              << str1 << std::endl
              << str2 << std::endl;

    return 0;
}
