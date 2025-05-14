#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	Entity(const std::string& name)
		: m_Name(name), m_Age(-1)
	{
	}


	//Entity(int age)
	//	: m_Name("Unknown"), m_Age(age)
	//{
	//}

	explicit Entity(int age)
		: m_Name("Unknown"), m_Age(age)
	{
	}

};

void PrintEntity(const Entity& entity) {
	// Printing 
}


int main() {
	Entity e0 = std::string("Cherno");
	//Entity e1 = 22;
	Entity e2(22);

	//PrintEntity(22);
	PrintEntity(std::string("Cherno"));
}
