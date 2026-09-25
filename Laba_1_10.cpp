//10. Дан одномерный массив из целых чисел. Найти количество простых чисел.

#include <iostream>
#include <Windows.h>
#include <process.h>


const size_t COUNT{ 110 };
const int NTHREAD{ 4 };

DWORD mainID{GetCurrentThreadId()};

struct INFORM
{
	int* arr;
	int count;
	int prime_count;// количество простых чисел
};

bool is_prime(int num)
{
	bool is_p{ true };
	if (num < 2)
	{
		 is_p = false;
	}
	for (int i = 2; i*i <= num ; ++ i)
	{
		if (num % i == 0)
		{
			is_p = false;
		}
	}
	return is_p;
}

int calculate_p_count(int * arr, int size)
{
	int result{};

	for (int i = 0; i < size; ++i)
	{
		if (is_prime(arr[i]))
		{
			result++;
		}
	}
	return result;
}

unsigned __stdcall prime_count_win_API(void* param)
{
	INFORM* inform = (INFORM*)param;
	inform->prime_count = calculate_p_count(inform->arr, inform->count);
	DWORD currentID{GetCurrentThreadId()};
	std::cout << "ID from WIN_API: " << currentID << ": " << inform->prime_count << "\n";
	if (currentID != mainID)
	{
		_endthreadex(0);
	}

	return 0;
}

int calculate_p_count_parallel(int* arr)
{
	HANDLE thr[NTHREAD - 1]{};
	INFORM informs[NTHREAD]{};// пакеты
	int chunk{ COUNT / NTHREAD };
	for (int i = 0; i < NTHREAD; ++i)
	{
		informs[i].arr = arr + chunk * i;
		informs[i].count = chunk;
		informs[i].prime_count = 0;
		if (i < NTHREAD - 1) // 0,1,2
		{
			thr[i] = (HANDLE)_beginthreadex(nullptr, 0, &prime_count_win_API, &informs[i], 0, nullptr);
		}
		else
		{
			informs[i].count = chunk + COUNT % NTHREAD; // main_thread
		}
	}
	prime_count_win_API(informs + NTHREAD - 1); // это обработка main_thread

	int global_count{informs[NTHREAD -1].prime_count};// сразу положим результат main_thread
	for (int i = 0; i < NTHREAD - 1; ++i)
	{
		WaitForSingleObject(thr[i], INFINITE);
		CloseHandle(thr[i]);
		global_count += informs[i].prime_count;
	}
	return global_count;
}

void fill(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i+1;
	}
}



int main()
{
	std::cout << "main ID = " << mainID << '\n';
	int arr[COUNT]{};
	fill(arr, COUNT);
	std::cout << "calculate nonparallel = " << calculate_p_count(arr, COUNT) << " calculate parallel = " << calculate_p_count_parallel(arr) << "\n";
}