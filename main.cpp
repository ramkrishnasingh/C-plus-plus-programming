#include <iostream>
#include "addheader.h"
 
int main()
{
	int x ;
	std::cin>>x;
    std::cout << "The sum of 3 and "<<x<<" is: " << add(x, 3) << std::endl;
    #ifndef PRINT_BOB
	std::cout << "Bob" << std::endl;
	#endif
	
	#ifdef RAM
	std::cout << "Bob" << std::endl;
	#endif
    return 0;
}
#define RAM