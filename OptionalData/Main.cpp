#include <iostream>
#include <fstream>
#include <optional>

std::optional<std::string> ReadFileAsString(const std::string& filepath) {
	std::ifstream stream(filepath);
	if (stream) {
		std::string result;
		//read file
		stream.close();
		return result;
	}

	return {};
}

int main() {
	std::optional<std::string> data = ReadFileAsString("data.txt");
	std::string value = data.value_or("Not Present");
	//if (data.has_value()) 
	if(data)
	{
		std::cout << "File read successfully!\n";
	}
	else {
		std::cout << "File could not be opened!\n";
	}
	std::cout << value << std::endl;
	std::cin.get();
}