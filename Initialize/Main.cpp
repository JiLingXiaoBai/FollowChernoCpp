#include <iostream>
#include <string>

class Example 
{
public:
	Example() {
		std::cout << "Created Entity!" << std::endl;
	}

	Example(int x) {
		std::cout << "Created Entity with " << x << "!" << std::endl;
	}
};

class Entity
{
private:
	std::string m_Name;
	int m_Score;
	Example m_Example;
public:
	/*Entity() {
		m_Name = std::string("Unknown");
		m_Score = 0;
		m_Example = Example(8);
	}*/

	//Entity()
	//	: m_Example(Example(8)) {
	//	m_Name = std::string("Unknown");
	//	m_Score = 0;
	//}

	Entity()
		: m_Example(8) {
		m_Name = std::string("Unknown");
		m_Score = 0;
	}


	//Entity() {
	//	m_Name = "Unknown";
	//}

	//Entity()
	//	: m_Name("Unknown")
	//{
	//}

	//Entity()
	//	: m_Name("Unknown"), m_Score(0)
	//{
	//}

	//Entity(const std::string& name) {
	//	m_Name = name;
	//}

	//Entity(const std::string& name)
	//	:m_Name(name)
	//{
	//}

	const std::string& GetName() const { return m_Name; }
};

int main() {
	Entity e0;
	std::cout << e0.GetName() << std::endl;

	//Entity e1("Cherno");
	//std::cout << e1.GetName() << std::endl;

	std::cin.get();
}