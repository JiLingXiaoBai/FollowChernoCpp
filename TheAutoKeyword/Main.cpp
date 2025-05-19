#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

std::string GetName() {
	return "Cherno";
}

class Device {};

class DeviceManager {
private:
	std::unordered_map<std::string, std::vector<Device*>> m_Devices;
public:
	const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const {
		return m_Devices;
	}
};

int main() {
	int a = 5;

	auto b = a;

	auto c = 6;

	auto d = GetName();

	std::vector<std::string> strings;
	strings.push_back("Apple");
	strings.push_back("Oriange");

	/*for (std::vector<std::string>::iterator it = strings.begin();
		it != strings.end(); it++) 
	{
		std::cout << *it << std::endl;
	}*/
	for (auto it = strings.begin(); it != strings.end(); it++) 
	{
		std::cout << *it << std::endl;
	}

	DeviceManager dm;
	//using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>;
	//typedef std::unordered_map<std::string, std::vector<Device*>> DeviceMap;
	//const DeviceMap& devices0 = dm.GetDevices();
	const auto& devices1 = dm.GetDevices();

	std::cin.get();
}