#include <iostream>
#include <vector>

struct Vertex {
	float x, y, z;

	Vertex(float x, float y, float z)
		: x(x), y(y), z(z) 
	{
	}

	Vertex(const Vertex& vertex)
		: x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied!" << std::endl;
	}
};

int main() {
	std::vector<Vertex> vertices;
	//std::vector<Vertex> vertices(3); // it will construct 3 vertex objects and fill it in the vector
	vertices.reserve(3);
	vertices.emplace_back(1, 2, 3);
	vertices.emplace_back(4, 5, 6);
	vertices.emplace_back(7, 8, 9);


	std::cin.get();
}
