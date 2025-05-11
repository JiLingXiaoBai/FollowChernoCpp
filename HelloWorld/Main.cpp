#include <iostream>
//use quote to indicate the relative path
#include "Log.h"

int Multiply(int a, int b);

int main() {
	Log("Hello World!");
	std::cout << Multiply(5, 8) << std::endl;
	std::cin.get();
}