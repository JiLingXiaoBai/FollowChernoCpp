#include <iostream>

int main() {
	//int* array = new int[50];
	
	int** a2d = new int* [50];
	for (int i = 0; i < 50; i++)
	{
		a2d[i] = new int[50];
	}

	for (int i = 0; i < 50; i++)
	{
		delete[] a2d[i];
	}
	delete[] a2d;

	int*** a3d = new int** [50];
	for (int i = 0; i < 50; i++) {
		a3d[i] = new int* [50];
		for (int j = 0; j < 50; j++)
		{
			int** ptr = a3d[i];
			ptr[j] = new int[50];
		}
	}

	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++)
		{
			delete[] a3d[i][j];
		}
		delete[] a3d[i];
	}
	delete[] a3d;


	std::cin.get();
}