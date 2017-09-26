#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::string str = "Время - великий учитель, но, увы, "
                 "оно убивает своих учников. Берлиоз";

    std::ofstream outfile("TEST.TXT");
    for (int i = 0; i < str.size(); ++i) {
        outfile.put(str[i]);
    }
    std::cout << "Файл записан\n";
    return EXIT_SUCCESS;
}
