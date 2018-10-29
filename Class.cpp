#include <stdexcept>
#include <iostream>
#include "Class.h"

using namespace std;
void LinkedList::reset_list()//для конструктора
{
	head = nullptr;
	tail = nullptr;
}

LinkedList::LinkedList()//конструктор класса
{
	reset_list();
	size = 0;
}


LinkedList::~LinkedList()
{
}

void LinkedList::add_first(int newElem)
{
	head = new Node(newElem);
	tail = head;
}


size_t LinkedList::get_size() const//размер списка
{
	return size;
}

void LinkedList::push_back(int newElem)//в конец списка
{
	if (size == 0) {
		add_first(newElem);
	}
	else {
		tail->next = new Node(newElem);
		tail = tail->next;
	}
	size++;
}


void LinkedList::push_front(int newElem)//добавление в начало
{
	if (size == 0) {
		add_first(newElem);
	}
	else {
		head = new Node(newElem, head);
	}
	size++;

}

void LinkedList::pop_back()//удаление последнего
{
	if (size == 0) return;

	if (size == 1) {
		delete head;
		reset_list();
	}
	else {
		Node * current = head;
		while (current->next != tail) {
			current = current->next;
		}
		current->next = nullptr;
		delete tail;
		tail = current;
	}
	size--;
}
void LinkedList::pop_front()//удаление первого
{
	if (size == 0) return;

	if (size == 1) 
	{
		delete head;
		reset_list();
	}
	else
	{
		Node * current = head;
		head = head->next;
	
		delete current;
	}
	size--;
}

int LinkedList::at(size_t index) const//ПОЛУКЧЕНИЕ ЭЛЕМЕНТА ПО ИНДЕКСУ
{
	if (index >= size) {
		throw out_of_range("Index is greater than list size");
	}
	else {
		size_t counter = 0;
		Node * current = head;
		while (counter != index) {
			current = current->next;
			counter++;
		}
		return current->data;
	}
}

void LinkedList::insert(int new_elem, size_t index)//добавление элемента по индексу 
{ 
if (index > size) { 
throw out_of_range("Index is greater than list size"); 
} 
else { 
if (index == 0) 
{ 
push_front(new_elem);
} 
else { 
if (index == size) 
{ 
push_back(new_elem);

} 
else 
{ 
size_t counter = 0; 
Node * current = head; 
while (counter != index - 1) { 
current = current->next; 
counter++; 
} 
//head = new Node(newElem, head); 
Node *newelem = new Node( new_elem);
newelem->next = current->next; 
current->next = newelem; 
size++; 
} 
} 
} 

}
void LinkedList::deletee(size_t index) //удаление ЭЛЕМЕНТА ПО ИНДЕКСУ
{
	if (index >= size) 
	{
		throw out_of_range("Index is greater than list size");
	}
	else 
	{
		size_t counter = 0;
		Node * current = head;
		Node * prev = head;

		while (counter != index) 
		{
			prev = current;
			current = current->next;
			counter++;
		}

		if (current == head)
		{
			head = current->next;
		}
		else
		{
			prev->next = current->next;
		}

		delete(current);
		size--;
	}

}
void LinkedList::print_to_console()
{
	Node * current = head;
	while (current != NULL) {
		cout << current->data<<" ";
		current = current->next;
		
	}
}
void LinkedList::clear()
{
	
	if (size == 0) return;

	if (size == 1) {
		reset_list();
		delete head;
		delete tail;
	}
	else {
		while (head != nullptr) {
			pop_front();
		}
		reset_list();
		delete head;
		delete tail;
	}
}
void LinkedList::set(size_t index, int elem)//замена
{
	if (index >= size) {
		throw out_of_range("Index is greater than list size");
	}
	else {
		size_t counter = 0;
		Node * current = head;
		while (counter != index) {
			current = current->next;
			counter++;
		}
		current->data = elem;
	
	}

}
bool LinkedList::isEmpty()
{
	if (size == 0)
		return true;
	else
		return false;
}
void LinkedList::push_front_list(LinkedList *list)
{
	
	Node * current_2= list-> head;//2-ой,который вставляю
	
	//довожу второйй список до конца
	while (current_2 ->next!= NULL) {
	
		current_2= current_2->next;
    }
	//последнему элементу присваиваю голову второго
	current_2->next= head;
	
	Node * current_3 = list->head;

	cout << "Соединенные списки:\n";
	while (current_3->next != NULL)
	{
		cout << current_3->data << " ";
		current_3 = current_3->next;

	}
	
}
bool LinkedList::equals(LinkedList * list) const
{
	if (size != list->size)
		return false;
	for (int i = 0; i < size; i++)
	{
		if (at(i) != list->at(i))
			return false;
	}
	return true;
}