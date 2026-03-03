#include "map.h"

size_t Map::word_to_hash(std::string word)
{
	size_t res{ 0 };
	for (char c : word)
	{
		res = res * 31 + c;
	}
	return res;
}

size_t Map::hash_to_index(std::string word)
{
	size_t hash{ word_to_hash(word) };
	hash = (hash % 10 + hash / 100 % 10 + hash / 10000 % 10) * 31 % size;
	return hash;
}

Map::Map(size_t _size) :size(_size), table(_size) {}

void Map::insert(Node elem)
{
	size_t index{ hash_to_index(elem.number) };
	table[index].push_back(elem);
}

std::ostream& operator<<(std::ostream& st, const Node& elem)
{
	st << elem.number << ' ' << elem.name << ' ' << elem.address << '\n';
	return st;
}

std::istream& operator>>(std::istream& st, Node& elem)
{
	//char c;
	st >> elem.number >> elem.name >> elem.address;
	return st;
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

void Map::del(Node object)
{
	size_t index{ hash_to_index(object.number) };
	bool is_find{ false };
	for (auto it = table[index].begin(); it != table[index].end() && !is_find; it++)
	{
		if (it->number == object.number)
		{
			table[index].erase(it);
			is_find = true;
		}
	}
}

bool Map::is_find(Node object)
{
	size_t index{ hash_to_index(object.number) };
	bool is_find{ false };
	for (auto it = table[index].begin(); it != table[index].end() && !is_find; it++)
	{
		if (it->number == object.number)
		{
			is_find = true;
		}
	}
	return is_find;
}

std::string Map::task(std::string num)
{
	size_t index{ hash_to_index(num) };
	bool is_find_f{ false };
	std::string st{ "" };
	for (auto it = table[index].begin(); it != table[index].end() && !is_find_f; it++)
	{
		if (it->number == num)
		{
			st = it->name + ' ' + it->address;
			is_find_f = true;
		}
	}
	return st;
}



