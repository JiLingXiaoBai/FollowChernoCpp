#include <iostream>

// lvalue and temp r value
void PrintName(const std::string& name)
{
	std::cout << "[lvalue]" << name << std::endl;
}

void PrintName(std::string&& name)
{
	std::cout << "[rvalue]" << name << std::endl;
}

int main() {
	std::string firstName = "Yan";
	std::string lastName = "Chernikov";
	std::string fullName = firstName + lastName;
	PrintName(fullName);
	PrintName(firstName + lastName);
}