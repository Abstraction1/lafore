#include<iostream>

class Person {
protected:
    char name [40];
public:
    void getName(){
        std::cout << "Введите имя: "; std::cin >> name;
    }
    void putName() {
        std::cout << "\nИмя: " << name << std::endl;
    }
    virtual void getData() = 0;
    virtual bool isOutstanding() = 0;
};

class Student : public Person {
private:
    float gpa;
public:
    void getData() {
        Person::getName();
        std::cout << "Cредний бал ученика; " ; std::cin >> gpa;
    }
    bool isOutstanding() {
        return (gpa > 3.5) ? true : false;
    }
};

class Professor : public Person {
private:
    int numPubs;
public:
    void getData() {
        Person::getName();
        std::cout<<"Число публикаций: "; std::cin >> numPubs;
    }
    bool isOutstanding() {
        return (numPubs > 100) ? true : false;
    }
};

int main(int argc, char *argv[])
{
    Person* per[100];
    int n = 0;
    char choice;
    do {
        std::cout << "Учащийся (s) или педого (p): ";
        std::cin >> choice;
        if (choice == 's') {
            per[n] = new Student;
        }
        else {
            per[n] = new Professor;
        }
        per[n++]->getData();
        std::cout << "Ввести ещё персону(y/n): ";
        std::cin >> choice;
    }while (choice == 'y');

    for (int i = 0; i < n; ++i) {
        per[i] ->putName();
        if (per[i]->isOutstanding()) {
            std::cout << "Выдающийся человек! \n";
        }
    }
    return EXIT_SUCCESS;
}
