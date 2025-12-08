// TreePr.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "MyTree.h"

int main()
{
	BinaryTree<int> root;
	root.inputFromFile("text.txt");
	root.print();
	std::cout << root.findMaxBFS() << std::endl;
	std::cout << root.get_max();
}
