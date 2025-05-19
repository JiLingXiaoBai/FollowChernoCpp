#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

namespace apple { namespace functions {
		void print(const char* text){
			std::cout << text << std::endl;
		}
	}

}


int main(){


// Alternative 1
	using namespace apple::functions;
	// using namespace apple;
	// using namespace functions;
	print("Hello");

// Alternative 2
	apple::functions::print("Hello");

// Alternative 3 - Using namespace alias
	namespace a = apple::functions;
	a::print("Hello"); 
	return 0;
}