#include "map.h"
#include <fstream>
#include <algorithm>

int main()
{
	Map map(101);
	std::ifstream file("test.txt");
	if (file.is_open())
	{
		std::string word{ "" };
		while (file >> word)
		{
			map.insert(word);
		}
		std::vector<Node> node{map.get_all()};
		std::sort(node.begin(), node.end(), [](const Node& a, const Node& b) {return a.count > b.count; });
		for (size_t i = 0; i < std::min(static_cast<size_t>( 10), node.size()); i++)
		{
			std::cout << node[i].elem << ' ' << node[i].count << '\n';
		}
		file.close();
	}
	return 0;
}
