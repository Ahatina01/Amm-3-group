// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//найти первый минимальный и отсортировать эл-ты после него

#include <iostream>
#include<functional>
using TFunc = std::function<bool(int, int)>;




void sort(int* array, int N, TFunc Compare)
{
	std::function<void(int&, int&)>Swap = [](int& a, int& b)
		{
			int tmp = a;
			a = b;
			b = tmp;
		};

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (Compare(array[i]  ,array[j]))
			{
				Swap(array[i], array[j]);
			}
		}
	}
}

void show(int* array, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

int findpos(int* array, int size, TFunc Compare)
{
	int index = 0;
	for (int i = 0; i < size; ++i)
	{
		if (Compare(array[index], array[i]))
			index = i;
	}
	return index;
}

int main()
{
	int mas[]{ 5,52,56,2,3,36,6 };
	int size = sizeof(mas) / sizeof(mas[0]);

	TFunc Less = [](int a, int b)
		{
			return a > b;
		};

	TFunc More = [](int a, int b)
		{
			return a < b;
		};
	sort(mas, size, Less);
	show(mas, size);

	int pos{};
	pos = findpos(mas, size, Less);
	std::cout << pos;

	sort(mas + pos + 1, size - pos  -1, More);
	show(mas, size);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
