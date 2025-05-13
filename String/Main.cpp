#include <iostream>
#include <string>

void PrintString(const std::string& string) {
	std::cout << string << std::endl;
}

int main() {
	const char* name = "Cherno";

	char* name1 = (char*)"Cherno";
	//name1[2] = 'a'; // Error

	char name2[7] = { 'C', 'h', 'e', 'r', 'n', 'o', 0 };
	std::string name3 = "Cherno";

	bool contains = name3.find("no") != std::string::npos;

	PrintString(name);
	PrintString(name1);
	PrintString(name2);
	PrintString(name3);

	const char* name4 = u8"Charno"; // 1 byte utf-8
	std::cout << name4 << std::endl;

	const wchar_t* name5 = L"Cherno"; // 2 bytes or more 
	std::cout << name5 << std::endl;

	const char16_t* name6 = u"Cherno"; // 2 bytes utf-16
	std::cout << name6 << std::endl;

	const char32_t* name7 = U"Cherno"; // 4 bytes utf-32
	std::cout << name7 << std::endl;

	using namespace std::string_literals;
	std::u32string name8 = U"Cherno"s + U" Hello";

	// R ignore escape character
	const char* example = R"(Line1
Line2
Line3)";

	PrintString(example);

	const char* example1 = "Line1\n"
		"Line2\n"
		"Line3\n";

	PrintString(example1);
	std::cin.get();
}