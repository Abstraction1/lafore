#include <fstream>
#include <iostream>

int main(int argc, char *argv[])
{
    const int MAX = 80;
    char buffer[MAX];
    std::ifstream infile("TEST.txt");
    while (!infile.eof()) {
        infile.getline(buffer, MAX);
        std::cout << buffer << std::endl;
    }
    return EXIT_SUCCESS;
}
