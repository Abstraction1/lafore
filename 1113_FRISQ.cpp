#include<iostream>

class Distance
{

private:
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0.0)
    { }
    Distance(int ft, float in) : feet(ft), inches(in)
    { }
    void showDist() {
        std::cout << feet << "\'-" << inches << '\"';
    }
    friend float square(Distance);
};

float square(Distance d) {
    float fltfeet = d.feet + d.inches / 12;
    float feetsqrd = fltfeet * fltfeet;
    return feetsqrd;
}

int main(int argc, char *argv[])
{
    Distance dist(3, 6.0);
    float sqft;
    sqft = square(dist);
    std::cout << "\nРасстояние = "; dist.showDist();
    std::cout << "\nКвдрат расстояния = " << sqft << " square feet\n";
    return EXIT_SUCCESS;
}
