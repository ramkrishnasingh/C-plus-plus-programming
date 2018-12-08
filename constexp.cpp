#include <iostream>
using std::cout;
constexpr int avogadro = 40594;
int main(int argc, char const *argv[])
{
	//constexpr is better way to use symbolic constant than,
	// #define var replacement because of 
	// 1. easier in debbuging steps 
	// 2. doesn't have file scope so easier to rename variable 
	//   with same name in different place of same file.
	cout<<"This is not avogadro we know: "<<avogadro<<std::endl;
	return 0;
}