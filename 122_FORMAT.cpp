#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
    char ch = 'x';
    int j = 77;
    double d = 6.02;
    std::string str1 = "Kafka";
    std::string str2 = "Proust";

    std::ofstream outfile("fdata.txt");

    outfile << ch
            << j
            << ' '
            << d
            << str1
            << ' '
            << str2;
    std::cout << "файл записан\n";
    return 0;
}

