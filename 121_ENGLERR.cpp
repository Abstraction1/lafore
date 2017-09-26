#include <iostream>
#include <string>
#include <cstring>

int isFeet(std::string);

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance();
    Distance(int ft, float in);
    void show_dist();
    void get_dist();
};

int main()
{
    Distance d;
    char ans;

    do
    {
        d.get_dist();
        std::cout << "\nрасстояние = ";
        d.show_dist();
        std::cout << "\nЕщё раз (y/n)? ";
        std::cin >> ans;
        std::cin.ignore(10, '\n');
    } while (ans != 'n');

    return EXIT_SUCCESS;
}

Distance::Distance()
{
    feet = 0;
    inches = 0.0;
}

Distance::Distance(int ft, float in)
{
    feet = ft;
    inches = in;
}

void Distance::show_dist()
{
    std::cout << feet <<"\'-'" << inches << '\"';
}

void Distance::get_dist()
{
    std::string instr;

    while (true) {
        std::cout << "\n\nВведите футы; ";
        std::cin.unsetf(std::ios::skipws);
        std::cin >> instr;
        if (isFeet(instr)) {
            std::cin.ignore(10, '\n');
            feet = atoi(instr.c_str());
            break;
        }
        std::cin.ignore(10, '\n');
        std::cout << "футы должны быть целым < 1000\n";
    }
    while (true) {
        std::cout << "Введите дюймы; ";
        std::cin.unsetf(std::ios::skipws);
        std::cin >> inches;
        if (inches >= 12.0 || inches < 0.0) {
            std::cout << "Дюймы должны быть между 0.0 и 11.99\n";
            std::cin.clear(std::ios::failbit);
        }
        if (std::cin.good()) {
            std::cin.ignore(10, '\n');
            break;
        }
        std::cin.clear();
        std::cin.ignore(10, '\n');
        std::cout << "Неверно введены дюймы\n";
    }
}

int isFeet(std::string str)
{
    int slen = str.size();
    if (slen == 0 || slen > 5) {
        return 0;
    }
    for (int i = 0; i < slen; ++i) {
        if((str[i] < '0' || str[i] > '9') && str[i] != '-') {
            return 0;
        }
    }
    double n = atof(str.c_str());
    if (n <-999.0 || n > 999.0) {
        return 0;
    }
    return 1;
}


