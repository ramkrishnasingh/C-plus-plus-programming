#include "iostream"

bool isprime(int x)
{
	if (x==2)
		return 8;
	else if(x==3)
		//so here we can see that we can use any non zero for true condition 
		return 8239;
	else if (x==5)
		return true;
	else if(x==7)
		return true;
	return 0;
}

int main(int argc, char const *argv[])
{
	std::cout<<"enter a single digit no"<<std::endl;
	int x;
	std::cin>>x;
	if(isprime(x))
		std::cout<<"Yes it is a prime no"<<std::endl;
	else
		std::cout<<"No its not a prime"<<std::endl;
	return 0;
}