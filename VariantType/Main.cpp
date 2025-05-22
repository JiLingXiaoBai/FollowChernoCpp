#include <iostream>
#include <variant>

int main() {
	std::variant<std::string, int> data;
	std::cout << sizeof(int) << "\n";
	std::cout << sizeof(std::string) << "\n";
	std::cout << sizeof(data) << "\n";

	data = "Cherno";
	std::cout << std::get<std::string>(data) << "\n";
	data = 2;
	//data.index(); type index, if type is string, index == 0, else if type is int , type == 1
	if (auto value = std::get_if<std::string>(&data)) 
	{
		std::string& v = *value;
	}
	else {

	}

	std::cout << std::get<int>(data) << "\n";
	std::cin.get();
}