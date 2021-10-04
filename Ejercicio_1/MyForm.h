#include "List.h";
#pragma once

namespace Ejercicio1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		List* list1 = new List();

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ btn_SetItem;
	private: System::Windows::Forms::TextBox^ txt_pos;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_Num;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_GetItem;
	private: System::Windows::Forms::Button^ btn_GetItem;
	private: System::Windows::Forms::Button^ btn_Insert;
	private: System::Windows::Forms::TextBox^ txt_Posicion;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_IndexOf;
	private: System::Windows::Forms::Button^ btn_Indice;
	private: System::Windows::Forms::TextBox^ txt_Search;
	private: System::Windows::Forms::Button^ btn_Contains;
	private: System::Windows::Forms::Button^ btn_Count;
	private: System::Windows::Forms::Button^ btn_Clean;
	private: System::Windows::Forms::Button^ btn_Add;
	private: System::Windows::Forms::TextBox^ txt_Dato;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_RemoveAt;
	private: System::Windows::Forms::Button^ btn_RemoveAt;
	private: System::Windows::Forms::TextBox^ txt_numero;
	private: System::Windows::Forms::TextBox^ txt_LastIndex;
	private: System::Windows::Forms::Button^ btn_Remove;
	private: System::Windows::Forms::Button^ btn_LastIndex;
	private: System::Windows::Forms::ListBox^ lstLista;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txt_RemoveAt = (gcnew System::Windows::Forms::TextBox());
			this->btn_RemoveAt = (gcnew System::Windows::Forms::Button());
			this->txt_numero = (gcnew System::Windows::Forms::TextBox());
			this->txt_LastIndex = (gcnew System::Windows::Forms::TextBox());
			this->btn_Remove = (gcnew System::Windows::Forms::Button());
			this->btn_SetItem = (gcnew System::Windows::Forms::Button());
			this->txt_pos = (gcnew System::Windows::Forms::TextBox());
			this->btn_LastIndex = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_Num = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_GetItem = (gcnew System::Windows::Forms::TextBox());
			this->btn_GetItem = (gcnew System::Windows::Forms::Button());
			this->btn_Insert = (gcnew System::Windows::Forms::Button());
			this->txt_Posicion = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_IndexOf = (gcnew System::Windows::Forms::TextBox());
			this->btn_Indice = (gcnew System::Windows::Forms::Button());
			this->txt_Search = (gcnew System::Windows::Forms::TextBox());
			this->btn_Contains = (gcnew System::Windows::Forms::Button());
			this->btn_Count = (gcnew System::Windows::Forms::Button());
			this->btn_Clean = (gcnew System::Windows::Forms::Button());
			this->btn_Add = (gcnew System::Windows::Forms::Button());
			this->txt_Dato = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lstLista = (gcnew System::Windows::Forms::ListBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel1->Controls->Add(this->txt_RemoveAt);
			this->panel1->Controls->Add(this->btn_RemoveAt);
			this->panel1->Controls->Add(this->txt_numero);
			this->panel1->Controls->Add(this->txt_LastIndex);
			this->panel1->Controls->Add(this->btn_Remove);
			this->panel1->Controls->Add(this->btn_SetItem);
			this->panel1->Controls->Add(this->txt_pos);
			this->panel1->Controls->Add(this->btn_LastIndex);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->txt_Num);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->txt_GetItem);
			this->panel1->Controls->Add(this->btn_GetItem);
			this->panel1->Controls->Add(this->btn_Insert);
			this->panel1->Controls->Add(this->txt_Posicion);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->txt_IndexOf);
			this->panel1->Controls->Add(this->btn_Indice);
			this->panel1->Controls->Add(this->txt_Search);
			this->panel1->Controls->Add(this->btn_Contains);
			this->panel1->Controls->Add(this->btn_Count);
			this->panel1->Controls->Add(this->btn_Clean);
			this->panel1->Controls->Add(this->btn_Add);
			this->panel1->Controls->Add(this->txt_Dato);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(224, 677);
			this->panel1->TabIndex = 0;
			// 
			// txt_RemoveAt
			// 
			this->txt_RemoveAt->Location = System::Drawing::Point(130, 363);
			this->txt_RemoveAt->Name = L"txt_RemoveAt";
			this->txt_RemoveAt->Size = System::Drawing::Size(75, 20);
			this->txt_RemoveAt->TabIndex = 24;
			// 
			// btn_RemoveAt
			// 
			this->btn_RemoveAt->Location = System::Drawing::Point(15, 358);
			this->btn_RemoveAt->Name = L"btn_RemoveAt";
			this->btn_RemoveAt->Size = System::Drawing::Size(98, 29);
			this->btn_RemoveAt->TabIndex = 23;
			this->btn_RemoveAt->Text = L"Remover en";
			this->btn_RemoveAt->UseVisualStyleBackColor = true;
			this->btn_RemoveAt->Click += gcnew System::EventHandler(this, &MyForm::btn_RemoveAt_Click);
			// 
			// txt_numero
			// 
			this->txt_numero->Location = System::Drawing::Point(130, 317);
			this->txt_numero->Name = L"txt_numero";
			this->txt_numero->Size = System::Drawing::Size(75, 20);
			this->txt_numero->TabIndex = 10;
			// 
			// txt_LastIndex
			// 
			this->txt_LastIndex->Location = System::Drawing::Point(130, 581);
			this->txt_LastIndex->Name = L"txt_LastIndex";
			this->txt_LastIndex->Size = System::Drawing::Size(75, 20);
			this->txt_LastIndex->TabIndex = 22;
			// 
			// btn_Remove
			// 
			this->btn_Remove->Location = System::Drawing::Point(15, 315);
			this->btn_Remove->Name = L"btn_Remove";
			this->btn_Remove->Size = System::Drawing::Size(98, 23);
			this->btn_Remove->TabIndex = 9;
			this->btn_Remove->Text = L"Remover";
			this->btn_Remove->UseVisualStyleBackColor = true;
			this->btn_Remove->Click += gcnew System::EventHandler(this, &MyForm::btn_Remove_Click);
			// 
			// btn_SetItem
			// 
			this->btn_SetItem->Location = System::Drawing::Point(15, 269);
			this->btn_SetItem->Name = L"btn_SetItem";
			this->btn_SetItem->Size = System::Drawing::Size(190, 23);
			this->btn_SetItem->TabIndex = 20;
			this->btn_SetItem->Text = L"Cambiar";
			this->btn_SetItem->UseVisualStyleBackColor = true;
			this->btn_SetItem->Click += gcnew System::EventHandler(this, &MyForm::btn_SetItem_Click);
			// 
			// txt_pos
			// 
			this->txt_pos->Location = System::Drawing::Point(130, 232);
			this->txt_pos->Name = L"txt_pos";
			this->txt_pos->Size = System::Drawing::Size(75, 20);
			this->txt_pos->TabIndex = 19;
			// 
			// btn_LastIndex
			// 
			this->btn_LastIndex->Location = System::Drawing::Point(15, 573);
			this->btn_LastIndex->Name = L"btn_LastIndex";
			this->btn_LastIndex->Size = System::Drawing::Size(98, 34);
			this->btn_LastIndex->TabIndex = 21;
			this->btn_LastIndex->Text = L"Última ocurrencia de:";
			this->btn_LastIndex->UseVisualStyleBackColor = true;
			this->btn_LastIndex->Click += gcnew System::EventHandler(this, &MyForm::btn_LastIndex_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 235);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Ingresar posición";
			// 
			// txt_Num
			// 
			this->txt_Num->Location = System::Drawing::Point(130, 196);
			this->txt_Num->Name = L"txt_Num";
			this->txt_Num->Size = System::Drawing::Size(75, 20);
			this->txt_Num->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Ingresar un número:";
			// 
			// txt_GetItem
			// 
			this->txt_GetItem->Location = System::Drawing::Point(130, 631);
			this->txt_GetItem->Name = L"txt_GetItem";
			this->txt_GetItem->Size = System::Drawing::Size(75, 20);
			this->txt_GetItem->TabIndex = 15;
			// 
			// btn_GetItem
			// 
			this->btn_GetItem->Location = System::Drawing::Point(15, 622);
			this->btn_GetItem->Name = L"btn_GetItem";
			this->btn_GetItem->Size = System::Drawing::Size(98, 37);
			this->btn_GetItem->TabIndex = 14;
			this->btn_GetItem->Text = L"Obtener en posición";
			this->btn_GetItem->UseVisualStyleBackColor = true;
			this->btn_GetItem->Click += gcnew System::EventHandler(this, &MyForm::btn_GetItem_Click);
			// 
			// btn_Insert
			// 
			this->btn_Insert->Location = System::Drawing::Point(15, 150);
			this->btn_Insert->Name = L"btn_Insert";
			this->btn_Insert->Size = System::Drawing::Size(190, 23);
			this->btn_Insert->TabIndex = 13;
			this->btn_Insert->Text = L"Insertar";
			this->btn_Insert->UseVisualStyleBackColor = true;
			this->btn_Insert->Click += gcnew System::EventHandler(this, &MyForm::btn_Insert_Click);
			// 
			// txt_Posicion
			// 
			this->txt_Posicion->Location = System::Drawing::Point(130, 113);
			this->txt_Posicion->Name = L"txt_Posicion";
			this->txt_Posicion->Size = System::Drawing::Size(75, 20);
			this->txt_Posicion->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Ingresar posición";
			// 
			// txt_IndexOf
			// 
			this->txt_IndexOf->Location = System::Drawing::Point(130, 529);
			this->txt_IndexOf->Name = L"txt_IndexOf";
			this->txt_IndexOf->Size = System::Drawing::Size(75, 20);
			this->txt_IndexOf->TabIndex = 10;
			// 
			// btn_Indice
			// 
			this->btn_Indice->Location = System::Drawing::Point(15, 521);
			this->btn_Indice->Name = L"btn_Indice";
			this->btn_Indice->Size = System::Drawing::Size(98, 34);
			this->btn_Indice->TabIndex = 9;
			this->btn_Indice->Text = L"Primera ocurrencia de:";
			this->btn_Indice->UseVisualStyleBackColor = true;
			this->btn_Indice->Click += gcnew System::EventHandler(this, &MyForm::btn_Indice_Click);
			// 
			// txt_Search
			// 
			this->txt_Search->Location = System::Drawing::Point(130, 485);
			this->txt_Search->Name = L"txt_Search";
			this->txt_Search->Size = System::Drawing::Size(75, 20);
			this->txt_Search->TabIndex = 8;
			// 
			// btn_Contains
			// 
			this->btn_Contains->Location = System::Drawing::Point(15, 483);
			this->btn_Contains->Name = L"btn_Contains";
			this->btn_Contains->Size = System::Drawing::Size(98, 23);
			this->btn_Contains->TabIndex = 6;
			this->btn_Contains->Text = L"¿Contiene\?";
			this->btn_Contains->UseVisualStyleBackColor = true;
			this->btn_Contains->Click += gcnew System::EventHandler(this, &MyForm::btn_Contains_Click);
			// 
			// btn_Count
			// 
			this->btn_Count->Location = System::Drawing::Point(15, 443);
			this->btn_Count->Name = L"btn_Count";
			this->btn_Count->Size = System::Drawing::Size(190, 23);
			this->btn_Count->TabIndex = 5;
			this->btn_Count->Text = L"Contar";
			this->btn_Count->UseVisualStyleBackColor = true;
			this->btn_Count->Click += gcnew System::EventHandler(this, &MyForm::btn_Count_Click);
			// 
			// btn_Clean
			// 
			this->btn_Clean->Location = System::Drawing::Point(15, 405);
			this->btn_Clean->Name = L"btn_Clean";
			this->btn_Clean->Size = System::Drawing::Size(190, 23);
			this->btn_Clean->TabIndex = 4;
			this->btn_Clean->Text = L"Limpiar";
			this->btn_Clean->UseVisualStyleBackColor = true;
			this->btn_Clean->Click += gcnew System::EventHandler(this, &MyForm::btn_Clean_Click);
			// 
			// btn_Add
			// 
			this->btn_Add->Location = System::Drawing::Point(15, 62);
			this->btn_Add->Name = L"btn_Add";
			this->btn_Add->Size = System::Drawing::Size(190, 23);
			this->btn_Add->TabIndex = 3;
			this->btn_Add->Text = L"Agregar";
			this->btn_Add->UseVisualStyleBackColor = true;
			this->btn_Add->Click += gcnew System::EventHandler(this, &MyForm::btn_Add_Click);
			// 
			// txt_Dato
			// 
			this->txt_Dato->Location = System::Drawing::Point(130, 25);
			this->txt_Dato->Name = L"txt_Dato";
			this->txt_Dato->Size = System::Drawing::Size(75, 20);
			this->txt_Dato->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingresar un número:";
			// 
			// lstLista
			// 
			this->lstLista->FormattingEnabled = true;
			this->lstLista->Location = System::Drawing::Point(273, 12);
			this->lstLista->Name = L"lstLista";
			this->lstLista->Size = System::Drawing::Size(77, 654);
			this->lstLista->TabIndex = 15;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(395, 694);
			this->Controls->Add(this->lstLista);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
		void LLenarLista() {			
			lstLista->Items->Clear();
			for (int i = 0; i < list1->Count(); i++)
			{
				lstLista->Items->Add(list1->GetItem(i));
			}
		}
#pragma endregion
	private: System::Void btn_Add_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int data = Convert::ToInt32(txt_Dato->Text);
			list1->Add(data);
			LLenarLista();
		}
		catch (Exception^ e) {
			MessageBox::Show("Se detecto un error",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
	}
		   
private: System::Void btn_Insert_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int posicion = Convert::ToUInt32(txt_Posicion->Text);
		int dato = Convert::ToInt32(txt_Dato->Text);
		list1->Insert(posicion, dato);
		LLenarLista();
	}
	catch (Exception^ e) {
		MessageBox::Show("Se detecto un error",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btn_SetItem_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int posicion = Convert::ToUInt32(txt_pos->Text);
		int dato = Convert::ToInt32(txt_Num->Text);
		if (posicion < list1->Count())
		{
			list1->SetItem(posicion, dato);
			LLenarLista();
		}
		else {
			MessageBox::Show("La posición es mayor a la cantidad de elementos de la lista",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Se detecto un error",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btn_Remove_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (list1->Count() != 0)
		{
			int dato = Convert::ToInt32(txt_numero->Text);
			if (list1->Remove(dato)) {
				MessageBox::Show("Se pudo eliminar el dato exitosamente",
					"Operación exitosa",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("No se pudo eliminar el dato",
					"Operación fallida",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}
			LLenarLista();
		}
		else {
			MessageBox::Show("La lista esta vacía",
				"Operación fallida",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Se detecto un error",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btn_RemoveAt_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int posicion = Convert::ToInt32(txt_RemoveAt->Text);
		if (posicion < list1->Count())
		{
			list1->RemoveAt(posicion);
			LLenarLista();
		}
		else {
			MessageBox::Show("La posición es mayor a la cantidad de elementos de la lista",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("No se pudo hacer la operación",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btn_Clean_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (list1->Count() > 0) {
			list1->Clear();
			LLenarLista();
		}
		else {
			MessageBox::Show("La lista esta vacía",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
		
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo hacer la operación",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btn_Count_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int cantidad = list1->Count();
		MessageBox::Show("Cantidad de datos: " + cantidad,
			"Contar",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo hacer la operación",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btn_Contains_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int dato = Convert::ToInt32(txt_Search->Text);
		if (list1->Contains(dato)) {
			MessageBox::Show("El dato se encuentra en la lista",
				"Busqueda exitosa",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("El dato no se encuentra en la lista",
				"Busqueda fallida",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo hacer la operación",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btn_Indice_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int x = Convert::ToInt32(txt_IndexOf->Text);
		int y = list1->IndexOf(x);
		if (list1->Contains(x))
		{
			MessageBox::Show("Primer índice: " + y,
				"Índice",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("No se encontro el índice",
				"Índice",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo hacer la operación",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btn_LastIndex_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int x = Convert::ToInt32(txt_LastIndex->Text);
		int y = list1->LastIndexOf(x);
		if (list1->Contains(x))
		{
			MessageBox::Show("Último índice: " + y,
				"Índice",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("No se encontro el índice",
				"Índice",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo hacer la operación",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void btn_GetItem_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int pos = Convert::ToInt32(txt_GetItem->Text);
		if (pos < 0 || pos > list1->Count()) {
			MessageBox::Show("La posición ingresada no es válida",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
		else {
			int dato = list1->GetItem(pos);
			MessageBox::Show("Dato en la posicion específicada: " + dato,
				"Obtener dato",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No se pudo hacer la operación",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
};
}
