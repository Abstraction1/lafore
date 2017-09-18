#include<iostream>

class Distance
{
private:
    int feet;
    int inches;
public:
    Distance() : feet(0), inches(0.0) { }
    Distance(int ft, float in) : feet(ft), inches(in) { }
    void show_dist() {
        std::cout << feet << "\'-" << inches << '/"';
    }
    float square();
};

float Distance::square() {
    float fltfeet = feet + inches / 12;
    float feetsqrd = fltfeet * fltfeet;
    return feetsqrd;
}

int main(int argc, char *argv[])
{
    Distance dist (3, 6.0);
    float sqft;

    sqft = dist.square();
    std::cout << "\nРасстояние = "; dist.show_dist();
    std::cout << "\nКвадрат расст. = " << sqft << " кв. футов\n";
    return EXIT_SUCCESS;
}
