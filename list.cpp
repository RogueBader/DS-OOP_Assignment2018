#include <iostream>
using namespace std;
#include "list.h"

complex_list::complex_list()
{
	head = NULL;
}
void complex_list::insert_at_start(int val, int val2)
{
	node * N = new node;
	N->next = head;
	head = N;
	N->val_Re = val;
	N->val_Im = val2;
}
void complex_list::del_at_start()
{
	node * temp = new node;
	temp = head->next;
	delete head;
	head = temp;
}
void complex_list::insert_at_end(int val, int val2)
{
	node * N = head;
	node * temp = new node;

	while (N->next != NULL)
	{
		N = N->next;
	}

	N->next = temp;
	temp->val_Re = val;
	temp->val_Im = val2;
	temp->next = NULL;
}
void complex_list::del_end()
{
	node * current = head;
	node * previous = head;

	while (current->next != NULL)
	{
		previous = current;
		current = current->next;

	}

	previous->next = NULL;
	delete current;
}

void complex_list::insert_at_sp(int val, int val2, int pos)
{
	node * temp = new node;
	node * N = head;

	for (int count = 1; count < pos; count++)
	{
		N = N->next;
	}
	temp->next = N->next;
	N->next = temp;
	temp->val_Re = val;
	temp->val_Im = val2;
}
void complex_list::del_sp(int pos)
{
	node * current = head;
	node * previous = head;


	for (int count = 1; count <pos; count++)
	{
		previous = current;
		current = current->next;

	}
	previous->next = current->next;
	delete current;
}
void complex_list::traverse()
{
	cout << "Final list is:" << endl;
	node * temp = head;
	while (temp != NULL)

	{
		if (temp->val_Im > 0)
		{
			cout << temp->val_Re << "" << "+" << temp->val_Im << "i" << endl;
		}
		else if (temp->val_Im == 0)
		{
			cout << temp->val_Re << "" << "+" << temp->val_Im << "i" << endl;
		}
		else
			cout << temp->val_Re << "" << temp->val_Im << "i" << endl;
			temp = temp->next;
	}
}