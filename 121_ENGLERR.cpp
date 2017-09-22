#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int isFeet(string);

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance()
    {
        feet = 0;
        inches = 0.0;
    }

    Distance(int ft, float in)
    {
        feet = ft;
        inches = in;
    }

    void show_dist()
    {
        cout << feet << "\'-" << inches << '\"';
    }

    void get_dist();
};

void Distance::get_dist()
{
    string instr;

    while (true)
    {
        cout << "\n\nEnter feet: ";
        cin.unsetf(ios::skipws);
        cin >> instr;
        if(isFeet(instr))
        {
            cin.ignore(10, '\n');
            feet = atoi(instr.c_str());
            break;
        }
        cin.ignore(10, '\n');
        cout << "Feet must be < 1000\n";
    }

    while (true)
    {
        cout << "Enter inches: ";
        cin.unsetf(ios::skipws);
        cin >> inches;
        if(inches >= 12.0 || inches < 0.0)
        {
            cout << "inches must be between 0.0 and 11.99\n";
            cin.clear(ios::failbit);
        }
        if(cin.good())
        {
            cin.ignore(10, '\n');
            break;
        }
        cin.clear();
        cin.ignore(10, '\n');
        cout << "incorrect inches\n";
    }
}

int isFeet(string str)
{
    int slen = str.size();
    if(slen == 0 || slen > 5)
    {
        return 0;
    }

    for (int i = 0; i < slen; ++i)
    {
        if((str[i] < '0' || str[i] > '9') && str[i] != '-')
        {
            return 0;
        }
    }

    double n = atof(str.c_str());
    if(n <- 999.0 || n > 999.0)
    {
        return 0;
    }
    return 1;
}

int main(int argc, char *argv[])
{
    Distance d;
    char ans;
    do
    {
        d.get_dist();
        cout << "\ndistance = ";
        d.show_dist();
        cout << "\nOne more time (y/n)";
        cin >> ans;
        cin.ignore(10, '\n');
    }
    while(ans != 'n');
    return EXIT_SUCCESS;
}
