
#include <iostream>

int main()
{
		int n = 0; 
	std::cout << "Enter the number: ";
	std::cin >> n; 
	for (int i = 1; i < n; ++i) 
	{
		if (i % 2 == 0) 
		{
			std::cout << i << std :: endl; 
		}
	}
	return 0; 
}
