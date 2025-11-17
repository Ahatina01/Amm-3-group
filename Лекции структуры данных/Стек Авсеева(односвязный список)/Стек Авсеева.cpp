#include <iostream>
#include "Tstack.h"

using std::cout;
using std::endl;

using namespace std;

int main()
{
  setlocale(LC_ALL,"ru");


  cout << "=== Тест 1: Основные операции ===" << endl;
  Tstack stack1;


  cout << "Стек пуст: " << (stack1.isEmpty() ? "Да" : "Нет") << endl;

  // Добавление элементов
  stack1.push('A');
  stack1.push('B');
  stack1.push('C');

  cout << "Верхний элемент: " << stack1.peak() << endl; // Должен быть 'C'

  // Удаление элементов
  stack1.pop();
  cout << "После pop, верхний элемент: " << stack1.peak() << endl; // Должен быть 'B'


  cout << "\n=== Тест 2: Конструктор копирования ===" << endl;
  Tstack stack2 = stack1; // Копирование
  cout << "Оригинал, верхний элемент: " << stack1.peak() << endl;
  cout << "Копия, верхний элемент: " << stack2.peak() << endl;

  // Изменяем копию, оригинал не должен измениться
  stack2.push('X');
  cout << "После push в копию:" << endl;
  cout << "Оригинал, верхний элемент: " << stack1.peak() << endl;
  cout << "Копия, верхний элемент: " << stack2.peak() << endl;


  cout << "\n=== Тест 3: Оператор присваивания ===" << endl;
  Tstack stack3;
  stack3.push('1');
  stack3.push('2');
  cout << "stack3 до присваивания: " << stack3.peak() << endl;

  stack3 = stack1; // Присваивание
  cout << "stack3 после присваивания: " << stack3.peak() << endl;

  cout << "\n=== Тест 4: Очистка стека ===" << endl;
  stack3.clear();
  cout << "Стек пуст после clear: " << (stack3.isEmpty() ? "Да" : "Нет") << endl;

  return 0;
}