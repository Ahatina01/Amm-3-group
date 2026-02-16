#include "map.h"

size_t Map::word_to_hash(std::string word)
{
	size_t res{0};
	for (char c : word)
	{
		res = res * 31 + c;
	}
	return res;
}

size_t Map::hash_to_index(std::string word)
{
	size_t hash{ word_to_hash(word) };
	hash = (hash % 10 + hash / 100 % 10 + hash / 10000 % 10) * 31 %size;
	return hash;
}

Map::Map(size_t _size):size(_size),table(_size){}

void Map::insert(std::string word)
{
	size_t index{ hash_to_index(word) };
	bool is_find{ false };
	for (auto &bantik : table[index])
	{
		if (word == bantik.elem)
		{
			bantik.count++;
			is_find = true;
			break;
		}
	}
	if (!is_find)
	{
		table[index].push_back({ word,1 });
	}
}

std::vector<Node> Map::get_all()
{
	std::vector<Node> node;
	for (auto& drugoi_bantik : table)
	{
		for (auto& tretiy_bantik : drugoi_bantik)
		{
			node.push_back(tretiy_bantik);
		}
	}
	return node;
}


