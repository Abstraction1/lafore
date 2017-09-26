#include <fstream>
#include <iostream>

int main(int argc, char *argv[])
{
    char ch;
    std::ifstream infile("TEST.TXT");
    while (infile) {
        infile.get(ch);
        std::cout << ch;
    }
    std::cout << std::endl;
    return EXIT_SUCCESS;
}
