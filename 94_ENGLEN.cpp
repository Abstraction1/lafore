#include <iostream>

enum 
{
	pos,
	neg
};

class Distance
{
	protected:
		int feet;
		float inches;
	public:
		Distance() : feet(0), inches(0.0)
		{

		}

		Distance (int ft, float in) : feet(ft), inches(in)
		{

		}

		void get_dist()
		{
			std::cout << "\nВведите футы: ";
			std::cin >> feet;

			std::cout << "\nВведите дюймы: ";
			std::cin >> inches;
		}

		void show_dist() const
		{
			std::cout << feet << "\'-" << inches << '\"';
		}
};

class DistSign : public Distance
{

	private:
		posneg sign;
	public:
		DistSign() : Distance()
		{
			sign = pos;
		}

		DistSign(int ft, float in, posneg sg = pos) : 
			DistSign(ft, in)
		{
			sign = sg;
		}
		
		void get_dist()
		{
			Distance::get_dist();
			char ch;
			std::cout << "Введите знак (+ или -): "; 
			std::cin >> ch;
			sign = (ch == '+') ? pos : neg;
		}

		void show_dist() const
		{
			std::cout << ((sign == pos) ? "(+)" : "(-)");
			Distance::show_dist();
		}
};


int main()
{
	DistSign alpha;
	alpha.get_dist();

	DistSign beta(11, 6.25);
	DistSign gamma(100, 5.5, neg);

	std::cout << "\nA = ";
	alpha.show_dist();
	
	std::cout << "\nB = ";
	beta.show_dist();
	
	std::cout << "\nC = "
	gamma.show_dist();

	return 0;
}

