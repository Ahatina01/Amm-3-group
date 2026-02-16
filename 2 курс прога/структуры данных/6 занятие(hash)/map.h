#pragma once
#include <string>
#include <iostream>
#include <vector>
struct Node
{
	std::string elem;
	size_t count;
};

class Map
{
private:
	std::vector<std::vector<Node>> table;
	size_t size;
	size_t word_to_hash(std::string word);
	size_t hash_to_index(std::string word);


public:
	Map(size_t _size = 101);

	void insert(std::string word);

	std::vector<Node> get_all();
};