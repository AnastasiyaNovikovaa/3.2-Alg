#include <iostream>
#include "Class.h"

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	cout << "���� � �������!���� � ������������!\n";
	cout << "����� ���� 2-�� ������������ ������ �� �������\n";
	cout << "��������� ��������� ����������, ���������� ������ 7302\n";
	cout << "��������� ����������������\n";
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
	cout << "��� 1-�� �������� ��������� ��� �����:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	cout << "������ ������= " << lst.get_size();
	cout << endl;

	lst.pop_front();
	cout << "������,����� �������� ������� ��������:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	cout << "����� ������ ��� ������������� ������� at:\n";
	lst.print_to_console();
	cout << endl;
	lst.pop_back();
	cout << "������,����� �������� ���������� �������� ��������:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;

	lst.insert(-1, 3);
	cout << "������,����� ���������� ����� -1 �� ������� 3 :\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;

	lst.deletee(5);
	cout << "������,����� �������� ����� �� 5 ������� :\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	lst.set(4,2);
	cout << "��� ������ ����� ������ ����� �� 4 ������� �� ����� 2:\n";
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
	cout << "��� 2-�� �������� ��������� ��� �����:\n";
	for (size_t i = 0; i < lst1.get_size(); i++)
	{
		cout << lst1.at(i) << " ";
	}
	cout << endl;

	cout << "��������� ���� ������\n";
	lst.push_front_list(&lst1);
	
	cout << endl;

	cout << "�������� 1-�� ������\n";
	lst.clear();
	cout << "�������� �� ������� 1-�� ������:\n ";
	if (lst.isEmpty() == true) cout << "������ �1 ����\n";
	else
		cout << " ������ �� ����";
	cout << endl;
	cout << "�������� 2-�� ������\n";
	lst1.clear();
	cout << "�������� �� ������� 2-�� ������:\n ";
	if (lst1.isEmpty() == true) cout << "������ �2 ����\n";
	else
		cout << " ������ �� ����";
	cout << endl;
	
	system("pause");
	return 0;
}