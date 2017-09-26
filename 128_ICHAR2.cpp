#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    std::ifstream infile("TEST.TXT");
    std::cout << infile.rdbuf();
    std::cout << std::endl;
    return EXIT_SUCCESS;
}
