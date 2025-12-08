#pragma once
#include <iostream>
#include <queue>
#include <fstream>


template<typename T>

class BinaryTree {
private:
	struct Node {
		T data;
		Node* left;
		Node* right;

		Node(T _data){
			data = _data;
			left = nullptr;
			right = nullptr;
		}
	};
	Node* root;

	void insertAtFreePosition(T _data) {
		Node* p = new Node(_data);
		if (!root) {
			root = p;
			return;
		}

		std::queue<Node*> q;
		q.push(root);
		while (!q.empty()) {
			Node* tmp = q.front();
			q.pop();
			if (!tmp->left) {
				tmp->left = p;
				return;
			}
			else
				q.push(tmp->left);
			if (!tmp->right) {
				tmp->right = p;
				return;
			}
			else
				q.push(tmp->right);
		}
	}

	void printTree(Node* _root, int space) {
		if (!_root) {
			return;
		}

		int inDent = 5;
		space += inDent;

		printTree(_root->right, space);
		std::cout << std::string(space - inDent, ' ') << _root->data << "\n";
		printTree(_root->left, space);
	}

	T findMaxRecur(Node* _root) {
		if (_root) {
			T leftMax, rightMax;
			leftMax = findMaxRecur(_root->left);
			rightMax = findMaxRecur(_root->right);
			return std::max(_root->data, std::max(leftMax, rightMax));
		}
		else {
			return std::numeric_limits<T>::min();
		}
	}

public:
	BinaryTree() :root(nullptr){}

	void insert(T _data) {
		insertAtFreePosition(_data);
	}

	void inputFromFile(std::string file) {
		std::ifstream in;
		in.open(file);
		if (in.is_open()) {
			T val;
			while (in >> val) {
				insert(val);
			}
			in.close();
		}
		else
			std::cout << "unlucky" << std::endl;
	}

	void print() {
		if (root) {
			printTree(root, 0);
		}
	}

	T findMaxBFS() {
		if (root) {
			T maximum = root->data;
			std::queue<Node*> q;
			q.push(root);
			while (!q.empty()) {
				Node* p = q.front();
				q.pop();
				if (p->data > maximum)
					maximum = p->data;
				if (p->left)
					q.push(p->left);
				if (p->right)
					q.push(p->right);
			}

			return maximum;
		}

		return -1;
	};

	T get_max() {
		return findMaxRecur(root);
	}
};