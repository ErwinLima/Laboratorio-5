#pragma once
class List
{
	//Nodo simple
	struct Node
	{
		//Información a almacenar
		int data;
		//Apuntador al siguiente nodoS
		Node* next;
	};

private:
	Node* header = nullptr;	

public:
	void Add(int item) {
		Node* nuevo = new Node();
		nuevo->data = item;
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

	void Clear() {		
		while (header != nullptr)
		{
			RemoveAt(0);
		}
	}

	int Count() {
		int cantidad = 0;
		for (Node* i = header; i != nullptr; i = i->next) {
			cantidad++;
		}
		return cantidad;
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

	void Insert(int index, int item) {
		Node* nuevo = new Node();
		nuevo->data = item;		
		if (index == 0 || Count() == 0)
		{
			nuevo->next = header;
			header = nuevo;
		}
		else if (index >= Count())
		{
			Add(item);
		}
		else {
			Node* anterior = header;
			Node* temporal = header->next;			
			int pos = 1;
			while (pos < index)
			{
				anterior = temporal;
				temporal = temporal->next;
				pos++;
			}
			nuevo->next = temporal;
			anterior->next = nuevo;
		}
				
	}

	void SetItem(int index, int item) {
		if (index > 0 || index < Count()) {
			Node* temporal = header;
			int pos = 0;
			while (pos < index)
			{
				temporal = temporal->next;
				pos++;
			}
			temporal->data = item;
		}
	}

	int GetItem(int index) {
		if (index >= 0 || index < Count()) {
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
	bool Remove(int item) {
		if (Contains(item)) {
			int pos = IndexOf(item);
			RemoveAt(pos);
			return true;
		}
		else {
			return false;
		}
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

