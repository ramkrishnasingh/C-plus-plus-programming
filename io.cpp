
#include <iostream>
int readNumber()
{
	int x = 0;
	std::cin>>x;
	return x;
}

void writeAnswer(int x , int y)
{
	std::cout<<"Sum is: "<<x+y<<std::endl;
}
