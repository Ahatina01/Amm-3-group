#include "Header.h"

int main()
{
  setlocale(LC_ALL, "RU");
  Node* head = nullptr;
  Node* tail = nullptr;

  // Инициализация списка
  init(head, tail);

  // Проверка пустого списка
  cout << "Список пуст: " << (isEmpty(head) ? "Да" : "Нет") << "\n";

  // Построение списка: 5 → 10 → 15 → 20 → 25
  addBeforeNode(nullptr, head, tail, 10);  // Создаем первый элемент: 10
  addAfterNode(head, tail, 20);           // 10 → 20
  addBeforeNode(tail, head, tail, 15);    // 10 → 15 → 20
  addBeforeNode(head, head, tail, 5);     // 5 → 10 → 15 → 20
  addAfterNode(tail, tail, 25);           // 5 → 10 → 15 → 20 → 25

  cout << "Итоговый список: ";
  Show(head);
  cout << '\n';

  clear(head, tail);
  cout << "Пустой список: ";
  Show(head);
  cout << '\n';

  return 0;
}


