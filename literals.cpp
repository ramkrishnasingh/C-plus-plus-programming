#include <iostream>
using std::cout;
int main(int argc, char const *argv[])
{
	cout<<"\101"<<std::endl;
	int a(0b10000);
	cout<<"in binary value 100,00:\t\t"<<a<<std::endl;
	a=013;
	cout<<"in octal system 13:\t\t"<<a<<std::endl;
	//here literal of floating point num is by defualt to double , so use f to change it 
	double ram =1.4f;
	//maximun size which can be used wothout overflow 
	/* * so in scientific uses of a 83 and 83.00 gives us sense of precession being 
	   * followed but for c++ both are equivalent , there is a concept of trailing 
	   * zero which can be used , see if dont remember 
	*/
	cout<<sizeof(size_t)<<std::endl;
	return 0;
}