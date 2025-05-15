#include <iostream>
#include <string>
#include <memory>

class Entity
{
public:
	Entity() {
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity() {
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void Print() {}
};


int main() {
	{
		std::unique_ptr<Entity> uniqueEntity0(new Entity());
		uniqueEntity0->Print();

		std::unique_ptr<Entity> uniqueEntity1 = std::make_unique<Entity>();
		uniqueEntity1->Print();

		//std::unique_ptr<Entity> copy = entity0; // Error, can not copy unique_ptr

		std::shared_ptr<Entity> copyShared;
		std::weak_ptr<Entity> weakEntity;
		{

			std::shared_ptr<Entity> sharedEntity0(new Entity());
			sharedEntity0->Print();

			std::shared_ptr<Entity> sharedEntity1 = std::make_shared<Entity>();
			sharedEntity1->Print();

			copyShared = sharedEntity1; // reference count ++;
			weakEntity = sharedEntity1; // weak ptr doesn't add reference count
		}
	}

	std::cin.get();
}
