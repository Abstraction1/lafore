#include <iostream>

class Stack
{

	protected:
		enum 
		{
			MAX = 10
		};

		int st[MAX];
		int top;
	public:
		Stack()
		{
			top = -1;
		}

		void push(int var)
		{
			st[++top] = var;
		}

		int pop()
		{
			return st[top--];
		}
};

class Stack2 : public Stack
{
	public:
		void push(int var)
		{
			if(top >= MAX - 1)
			{
				std::cout << "\nОшибка: Стек полон!";
				exit(1);
			}
			Stack::push(var);
		}
		int pop()
		{
			if(top < 0)
			{
				std::cout << "\nОшибка: Стек пуст\n";
				exit(1);
			}
			return Stack::pop();
		}
};

int main()
{
	Stack2 s1;
	s1.push(11);
	s1.push(22);
	s1.push(33);

	std::cout << std::endl << s1.pop();
	std::cout << std::endl << s1.pop();
	std::cout << std::endl << s1.pop();
	std::cout << std::endl << s1.pop();
	std::cout << std::endl;
}


