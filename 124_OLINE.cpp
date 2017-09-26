#include <fstream>

int main(int argc, char *argv[])
{
    std::ofstream outfile("TEST.txt");

    outfile << "Приходит Март. Я сызнова служу.\n";
    outfile << "В несчастливом кружении событий \n";
    outfile << "изменчивую прелесть нахожу \n";
    outfile << "в смешеньи незначительных наитий. \n";

    return EXIT_SUCCESS;
}
