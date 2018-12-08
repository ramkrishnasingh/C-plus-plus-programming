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
	cout<<sizeof(size_t)<<std::endl;
	return 0;
}