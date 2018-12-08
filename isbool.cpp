//here we can we sure that cin , cout only works for 0 or 1 as false or true ..
// use boolalpha to print true or false as bool , use noboolalpha to stop it
// if you enter true or false in cin it will panic as it understand only 0 or 1 as a bool

#include "iostream"

int main(int argc, char const *argv[])
{
	bool b(true);
	std::cout<<b<<std::endl;
	std::cout<<std::boolalpha<<b<<std::endl;
	std::cout<<std::noboolalpha<<b<<std::endl;
	return 0;
}