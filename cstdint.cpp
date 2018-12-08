#include <iostream>
#include <cstdint>

int main(int argc, char const *argv[])
{
	//this is used to represent char or int so avoid
	//using it so we can use int16_t or int_fast32_t
	std::int8_t i(65);
//int_fast32_t favours performance 
	//int_least32_t will favour memory conservation
	std::cout<<i<<std::endl;
	return 0;
}