#include <iostream>

int main(int argc, char const *argv[])
{
	unsigned short x (65535) ;
	// std::cout<<sizeof(x)<<std::endl;
	std::cout<<"the value of x is: "<<x<<std::endl;
	x = x+1;
	//don't add x+1 as it will be evaluated as rvalue 
	std::cout<<"adding 1 to it :"<<x<<std::endl<<"magic !!"<<std::endl;
	return 0;
}