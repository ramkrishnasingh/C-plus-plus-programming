// this is a program to know ascii value of a character
// #include "iostream"

// int main(int argc, char const *argv[])
// {
// 	std::cout<<"Enter a character to find it's ascii value: "<<std::endl;
// 	char x;
// 	std::cin>>x;
// 	std::cout<<x<<" has ascii value: "<<static_cast<int>(x)<<std::endl;
// 	return 0;
// }


//this is a program to find of printable ascii table 

#include <iostream>
int main(int argc, char const *argv[])
{
	for (int i = 0; i < 128; ++i)
	{
		std::cout<<"ascii code "<<i<<" has character:\t\t"<<static_cast<char>(i)<<std::endl;
	}
	return 0;
}