#include <iostream>

	void FindOddNumbers(int Limit, bool isOdd)
{	
		for (int i = isOdd; i < Limit; i += 2)
		std::cout << i << std :: endl; 
}
   
	int main()
{
		FindOddNumbers(20,true);
		
}

	




