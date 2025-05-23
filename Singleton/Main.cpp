#include <iostream>

class Singleton
{
public:
	Singleton(const Singleton&) = delete;

	static Singleton& Get()
	{
		static Singleton instance;
		return instance;
	}


	static float Function(){ return Get().FunctionImpl(); }

private:
	Singleton() {}

	float m_floatMember;
	float FunctionImpl() { return m_floatMember; }
};


int main() {
	auto& instance = Singleton::Get();
	//instance.Function();
	Singleton::Function();
}
