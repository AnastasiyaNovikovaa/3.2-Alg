#include <iostream>
#include "Class.h"

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	cout << "Дамы и господа!Леди и джентельмены!\n";
	cout << "Перед вами 2-ая лабораторная работа по АЛГиСТД\n";
	cout << "Выполнена Новиковой Анастасией, студенткой группы 7302\n";
	cout << "Приятного времяпровождения\n";
	LinkedList lst;
	lst.push_back(4);
	lst.push_back(1);
	lst.push_back(5);
	lst.push_back(7);
	lst.push_front(2);
	lst.push_front(8);
	lst.push_front(0);
	lst.push_front(2);
	lst.push_front(3);
	lst.push_front(6);
	cout << "------------------------------------------------------------------";
	cout << endl;
	cout << "Наш 1-ый списочек получился вот таким:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	cout << "Размер списка= " << lst.get_size();
	cout << endl;

	lst.pop_front();
	cout << "Список,после удаления первого элемента:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	cout << "Вывод списка без использования функции at:\n";
	lst.print_to_console();
	cout << endl;
	lst.pop_back();
	cout << "Список,после удаления последнего элемента элемента:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;

	lst.insert(-1, 3);
	cout << "Список,после добавление числа -1 по индексу 3 :\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;

	lst.deletee(5);
	cout << "Список,после удаления числа по 5 индексу :\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	lst.set(4,2);
	cout << "Наш список после замены числа на 4 позиции на число 2:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;

	LinkedList lst1;
	lst1.push_back(1);
	lst1.push_back(2);
	lst1.push_back(3);
	lst1.push_back(4);
	cout << "Наш 2-ой списочек получился вот таким:\n";
	for (size_t i = 0; i < lst1.get_size(); i++)
	{
		cout << lst1.at(i) << " ";
	}
	cout << endl;

	cout << "Соединяем наши списки\n";
	lst.push_front_list(&lst1);
	
	cout << endl;

	cout << "Удаление 1-го списка\n";
	lst.clear();
	cout << "Проверка на пустоту 1-го списка:\n ";
	if (lst.isEmpty() == true) cout << "Список №1 пуст\n";
	else
		cout << " Список не пуст";
	cout << endl;
	cout << "Удаление 2-го списка\n";
	lst1.clear();
	cout << "Проверка на пустоту 2-го списка:\n ";
	if (lst1.isEmpty() == true) cout << "Список №2 пуст\n";
	else
		cout << " Список не пуст";
	cout << endl;
	
	system("pause");
	return 0;
}