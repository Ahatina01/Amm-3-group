#include "map.h"
#include <fstream>
#include <algorithm>

int main()
{
	Map map(101);
	std::ifstream file("test.txt");
	if (file.is_open())
	{
		Node node;
		while (file >> node)
		{
			map.insert(node);
		}
		std::cout << map.task("+1999888777");

		std::vector<Node> vect{ map.get_all() };
		//std::sort(node.begin(), node.end(), [](const Node& a, const Node& b) {return a.count > b.count; });
		for (size_t i = 0; i < std::min(static_cast<size_t>(10), vect.size()); i++)
		{
			//std::cout << vect[i];
		}
		file.close();
	}
	return 0;
}
