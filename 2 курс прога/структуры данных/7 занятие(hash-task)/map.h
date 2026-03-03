#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
struct Node
{
	std::string number;
	std::string name;
	std::string address;
};

std::ostream& operator<<(std::ostream& st, const Node& elem);

std::istream& operator>>(std::istream& st, Node& elem);

//friend std::ostream& operator<<(std::ostream& st);

class Map
{
private:
	std::vector<std::vector<Node>> table;
	size_t size;
	size_t word_to_hash(std::string word);
	size_t hash_to_index(std::string word);


public:
	Map(size_t _size = 101);

	void insert(Node elem);

	std::vector<Node> get_all();

	void del(Node object);

	bool is_find(Node object);

	std::string task(std::string num);
};

