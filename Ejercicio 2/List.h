#pragma once
using namespace System;

class List
{
	//Nodo simple
	struct Node
	{
		//Número de la carta
		int data;
		//Color de la carta
		char color;
		//Apuntador al siguiente nodos		
		Node* next;
	};

private:
	Node* header = nullptr;

public:
	void Add(int item, char pigmento) {
		Node* nuevo = new Node();
		nuevo->data = item;
		nuevo->color = pigmento;
		if (header == nullptr) {
			header = nuevo;
		}
		else {
			Node* temporal = header;
			while (temporal->next != nullptr)
			{
				temporal = temporal->next;
			}
			temporal->next = nuevo;
		}
	}

	int Count() {
		int cantidad = 0;
		for (Node* i = header; i != nullptr; i = i->next) {
			cantidad++;
		}
		return cantidad;
	}

	int GetNumero(int index) {
		if (index >= 0 && index < Count()) {
			Node* temporal = header;
			int pos = 0;
			while (pos < index)
			{
				temporal = temporal->next;
				pos++;
			}			
			return temporal->data;
		}
	}

	char GetColor(int index) {
		if (index >= 0 && index < Count()) {
			Node* temporal = header;
			int pos = 0;
			while (pos < index)
			{
				temporal = temporal->next;
				pos++;
			}
			return temporal->color;
		}
	}

	bool Contains(int item) {
		Node* temporal = header;
		while (temporal != nullptr && temporal->data != item)
		{
			temporal = temporal->next;
		}
		if (temporal != nullptr)
		{
			if (temporal->data == item)
			{
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}

	int IndexOf(int item) {
		Node* temporal = header;
		int pos = 0;
		while (temporal != nullptr && temporal->data != item)
		{
			temporal = temporal->next;
			pos++;
		}
		if (temporal == nullptr) {
			pos = -1;
		}
		return pos;
	}

	int LastIndexOf(int item) {
		Node* temporal = header;
		int pos = 0, x = 0;
		while (temporal != nullptr)
		{
			if (temporal->data == item) {
				x = pos;
			}
			temporal = temporal->next;
			pos++;

		}
		return x;
	}

	void RemoveAt(int index) {
		Node* temporal = header;
		if (Count() != 0) {
			if (Count() == 1 || index == 0)
			{
				header = header->next;
			}
			else if (index >= Count()) {
				Node* anterior = header;
				temporal = anterior->next;
				while (temporal != nullptr)
				{
					anterior = temporal;
					temporal = temporal->next;
				}
				anterior->next = temporal->next;
			}
			else {
				Node* anterior = header;
				temporal = anterior->next;
				int posicion = 1;
				while (temporal != nullptr && posicion < index)
				{
					anterior = temporal;
					temporal = temporal->next;
					posicion++;
				}
				anterior->next = temporal->next;
			}
		}
	}
};

