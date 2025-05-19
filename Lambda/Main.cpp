#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>


void ForEach(const std::vector<int>& values, const std::function<void(int)>& func) {
	for (int value : values)
		func(value);
}


int main() {
	std::vector<int> values = { 1, 5, 3, 4, 2 };
	int a = 5;
	auto lambda = [=](int value) {std::cout << "Value: " << a << " " << value << std::endl; };
	ForEach(values, lambda);

	auto it = std::find_if(values.begin(), values.end(), [](int value) {return value > 3; });
	std::cout << *it << std::endl;

	std::cin.get();
}