#include <iostream>

class Stack
{
	private:
		enum 
		{
			MAX = 10
		};

		int st[MAX];
		int top;
	public:
		Stack()
		{
			top = 0;
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

int main()
{
	Stack s1;
	s1.push(11);
	s1.push(22);
	
	std::cout << "1: " << s1.pop() << std::endl;
	std::cout << "2: " << s1.pop() << std::endl;
	
	s1.push(33);
	s1.push(44);
	s1.push(55);
	s1.push(66);

	std::cout << "3: " << s1.pop() << std::endl;
	std::cout << "4: " << s1.pop() << std::endl;
	std::cout << "5: " << s1.pop() << std::endl;
	std::cout << "6: " << s1.pop() << std::endl;
	
	return 0;
}
