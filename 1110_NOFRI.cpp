#include<iostream>

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0.0) { }
    Distance(float flfeet) {
        feet = static_cast<int>(flfeet);
        inches = 12 * (flfeet - feet);
    }
    Distance(int ft, float in) {
        feet = ft;
        inches = in;
    }
    void showDist() {
        std::cout << feet << "\'-" << inches << '\"';
    }
    Distance operator +(Distance);
};

Distance Distance::operator +(Distance d2) {
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if (i >= 12) {
        i -= 12.0;
        f++;
    }
    return Distance (f, i);
}

int main(int argc, char *argv[])
{
    Distance d1 = 2.5;
    Distance d2 = 1.25;
    Distance d3;
    std::cout << "\nd1 = "; d1.showDist();
    std::cout << "\nd2 = "; d2.showDist();

    d3 = d1 + 10.0;
    std::cout << "\nd3 = "; d3.showDist();
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
