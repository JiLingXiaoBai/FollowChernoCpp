#include <iostream>
#include <string>

#define WAIT std::cin.get()
//#define PR_DEBUG 1
#if PR_DEBUG == 1
#define LOG(x) std::cout << x << std::endl
#elif defined(PR_RELEASE)
#define LOG(x)
#endif

#if 0
#define MAIN int main()\
{\
std::cin.get();\
}
#endif

//MAIN;

int main()
{
	LOG("Hello");
	WAIT;
}