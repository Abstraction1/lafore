#include <iostream>

int main()
{
	int age[4];
	for(int i = 0; i < 4; ++i)
	{
		std::cout << "Введите возраст: ";
		std::cin >> age[i];
	}

	for(int i = 0; i < 4; ++i)
	{
		std::cout << "Вы ввели: " << age[i] << std::endl;
	}
}
