#pragma once
#include "List.h";

namespace Ejercicio2 {

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
		List* Cartas = new List();
		List* Mazo = new List();
		List* g1 = new List();
		List* g2 = new List();
		List* g3 = new List();
		List* g4 = new List();
		List* g5 = new List();
		List* g6 = new List();
		List* g7 = new List();	
	public:
		   

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
	private: System::Windows::Forms::Button^ btn_Repartir;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnMazo;
	private: System::Windows::Forms::TextBox^ txtPosicion;
	private: System::Windows::Forms::ListBox^ lstMazo;
	private: System::Windows::Forms::Button^ btn_Mover;
	private: System::Windows::Forms::TextBox^ txtDestino;
	private: System::Windows::Forms::TextBox^ txtOrigen;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ lstG1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ lstG2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ lstG4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ lstG3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListBox^ lstG7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ListBox^ lstG6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ListBox^ lstG5;
	private: System::Windows::Forms::Label^ label7;
	protected:

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
			this->btn_Repartir = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtPosicion = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btn_Mover = (gcnew System::Windows::Forms::Button());
			this->txtDestino = (gcnew System::Windows::Forms::TextBox());
			this->txtOrigen = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnMazo = (gcnew System::Windows::Forms::Button());
			this->lstMazo = (gcnew System::Windows::Forms::ListBox());
			this->lstG1 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lstG2 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lstG4 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lstG3 = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lstG7 = (gcnew System::Windows::Forms::ListBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lstG6 = (gcnew System::Windows::Forms::ListBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lstG5 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_Repartir
			// 
			this->btn_Repartir->Location = System::Drawing::Point(23, 22);
			this->btn_Repartir->Name = L"btn_Repartir";
			this->btn_Repartir->Size = System::Drawing::Size(169, 23);
			this->btn_Repartir->TabIndex = 0;
			this->btn_Repartir->Text = L"R";
			this->btn_Repartir->UseVisualStyleBackColor = true;
			this->btn_Repartir->Click += gcnew System::EventHandler(this, &MyForm::btn_Repartir_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox1->Controls->Add(this->txtPosicion);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->btn_Mover);
			this->groupBox1->Controls->Add(this->txtDestino);
			this->groupBox1->Controls->Add(this->txtOrigen);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->btnMazo);
			this->groupBox1->Controls->Add(this->lstMazo);
			this->groupBox1->Controls->Add(this->btn_Repartir);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(216, 257);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Acciones";
			// 
			// txtPosicion
			// 
			this->txtPosicion->Location = System::Drawing::Point(133, 140);
			this->txtPosicion->Name = L"txtPosicion";
			this->txtPosicion->Size = System::Drawing::Size(61, 23);
			this->txtPosicion->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(22, 143);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 15);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Posición";
			// 
			// btn_Mover
			// 
			this->btn_Mover->Location = System::Drawing::Point(66, 219);
			this->btn_Mover->Name = L"btn_Mover";
			this->btn_Mover->Size = System::Drawing::Size(75, 23);
			this->btn_Mover->TabIndex = 7;
			this->btn_Mover->Text = L"MOVER";
			this->btn_Mover->UseVisualStyleBackColor = true;
			this->btn_Mover->Click += gcnew System::EventHandler(this, &MyForm::btn_Mover_Click);
			// 
			// txtDestino
			// 
			this->txtDestino->Location = System::Drawing::Point(133, 178);
			this->txtDestino->Name = L"txtDestino";
			this->txtDestino->Size = System::Drawing::Size(61, 23);
			this->txtDestino->TabIndex = 6;
			// 
			// txtOrigen
			// 
			this->txtOrigen->Location = System::Drawing::Point(131, 102);
			this->txtOrigen->Name = L"txtOrigen";
			this->txtOrigen->Size = System::Drawing::Size(61, 23);
			this->txtOrigen->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 181);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Grupo destino";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Grupo origen";
			// 
			// btnMazo
			// 
			this->btnMazo->Location = System::Drawing::Point(23, 58);
			this->btnMazo->Name = L"btnMazo";
			this->btnMazo->Size = System::Drawing::Size(70, 23);
			this->btnMazo->TabIndex = 2;
			this->btnMazo->Text = L"MAZO";
			this->btnMazo->UseVisualStyleBackColor = true;
			this->btnMazo->Click += gcnew System::EventHandler(this, &MyForm::btnMazo_Click);
			// 
			// lstMazo
			// 
			this->lstMazo->FormattingEnabled = true;
			this->lstMazo->ItemHeight = 15;
			this->lstMazo->Location = System::Drawing::Point(111, 58);
			this->lstMazo->Name = L"lstMazo";
			this->lstMazo->Size = System::Drawing::Size(81, 19);
			this->lstMazo->TabIndex = 1;
			// 
			// lstG1
			// 
			this->lstG1->FormattingEnabled = true;
			this->lstG1->Location = System::Drawing::Point(275, 70);
			this->lstG1->Name = L"lstG1";
			this->lstG1->Size = System::Drawing::Size(54, 225);
			this->lstG1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(288, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 15);
			this->label3->TabIndex = 5;
			this->label3->Text = L"G1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(374, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 15);
			this->label4->TabIndex = 7;
			this->label4->Text = L"G2";
			// 
			// lstG2
			// 
			this->lstG2->FormattingEnabled = true;
			this->lstG2->Location = System::Drawing::Point(361, 70);
			this->lstG2->Name = L"lstG2";
			this->lstG2->Size = System::Drawing::Size(54, 225);
			this->lstG2->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(536, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 15);
			this->label5->TabIndex = 11;
			this->label5->Text = L"G4";
			// 
			// lstG4
			// 
			this->lstG4->FormattingEnabled = true;
			this->lstG4->Location = System::Drawing::Point(523, 70);
			this->lstG4->Name = L"lstG4";
			this->lstG4->Size = System::Drawing::Size(54, 225);
			this->lstG4->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(450, 42);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 15);
			this->label6->TabIndex = 9;
			this->label6->Text = L"G3";
			// 
			// lstG3
			// 
			this->lstG3->FormattingEnabled = true;
			this->lstG3->Location = System::Drawing::Point(437, 70);
			this->lstG3->Name = L"lstG3";
			this->lstG3->Size = System::Drawing::Size(54, 225);
			this->lstG3->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(782, 42);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(25, 15);
			this->label8->TabIndex = 17;
			this->label8->Text = L"G7";
			// 
			// lstG7
			// 
			this->lstG7->FormattingEnabled = true;
			this->lstG7->Location = System::Drawing::Point(769, 70);
			this->lstG7->Name = L"lstG7";
			this->lstG7->Size = System::Drawing::Size(54, 225);
			this->lstG7->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(706, 42);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(25, 15);
			this->label9->TabIndex = 15;
			this->label9->Text = L"G6";
			// 
			// lstG6
			// 
			this->lstG6->FormattingEnabled = true;
			this->lstG6->Location = System::Drawing::Point(693, 70);
			this->lstG6->Name = L"lstG6";
			this->lstG6->Size = System::Drawing::Size(54, 225);
			this->lstG6->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(620, 42);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(25, 15);
			this->label10->TabIndex = 13;
			this->label10->Text = L"G5";
			// 
			// lstG5
			// 
			this->lstG5->FormattingEnabled = true;
			this->lstG5->Location = System::Drawing::Point(607, 70);
			this->lstG5->Name = L"lstG5";
			this->lstG5->Size = System::Drawing::Size(54, 225);
			this->lstG5->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 326);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lstG7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->lstG6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->lstG5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lstG4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->lstG3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lstG2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lstG1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void CrearMazo() {
			for (int i = 1; i < 27; i++)
			{
				if (i >= 0 && i <= 13) {
					Cartas->Add(i, 'R');
				}
				else {
					Cartas->Add(i - 13, 'R');
				}
			}

			for (int i = 1; i < 27; i++)
			{
				if (i >= 0 && i <= 13) {
					Cartas->Add(i, 'N');
				}
				else {
					Cartas->Add(i - 13, 'N');
				}
			}

			Random^ rmd = gcnew Random();
			while (Cartas->Count() != 0)
			{
				int posicion = rmd->Next(0, Cartas->Count());
				int newNumero = Cartas->GetNumero(posicion);
				char newColor = Cartas->GetColor(posicion);
				Mazo->Add(newNumero, newColor);
				Cartas->RemoveAt(posicion);
			}			

		}
		
		bool Verificar(List* origen, List* destino, int p1, int p2) {
			if (origen->GetNumero(p1) < destino->GetNumero(p2)) {
				if (origen->GetColor(p1) != destino->GetColor(p2))
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

		void Movimiento(List* origen, List* destino, int p1) {
			int n = origen->GetNumero(p1);
			int c = origen->GetColor(p1);
			destino->Add(n, c);
			origen->RemoveAt(p1);
		}


		void LLenarLista(ListBox^ x, List* y) {
			x->Items->Clear();
			int i = y->Count() - 1;
			int ascii = y->GetColor(i);
			String^ datos;
			if (ascii == 82) {
				datos = Convert::ToString(y->GetNumero(i)) + "R";
			}
			else {
				datos = Convert::ToString(y->GetNumero(i)) + "N";
			}
			x->Items->Add(datos);
		}

		void RepartirCartas() {
			CrearMazo();
			Random^ aleatorio = gcnew Random();
			int pos = aleatorio->Next(0, Mazo->Count());			
			int number = Mazo->GetNumero(pos);
			char color = Mazo->GetColor(pos);
			g1->Add(number, color);
			Mazo->RemoveAt(pos);			

			/*------------------Se llena la pila 2------------------*/
			for (int i = 0; i < 2; i++)
			{
				int p = aleatorio->Next(0, Mazo->Count());
				int n = Mazo->GetNumero(pos);
				char c = Mazo->GetColor(pos);
				if (i == 0)
				{
					g2->Add(n, c);
					Mazo->RemoveAt(pos);
				}				
				else if (i > 0 && Verificar(Mazo, g2, p, 0)) {
					Movimiento(Mazo, g2, p);
				}
				else {
					i--;
				}
			}
			/*------------------Se llena la pila 3------------------*/
			for (int i = 0; i < 3; i++)
			{
				int p = aleatorio->Next(0, Mazo->Count());
				int n = Mazo->GetNumero(pos);
				char c = Mazo->GetColor(pos);				
				if (i == 0) {
					g3->Add(n, c);
					Mazo->RemoveAt(pos);
				}								
				else {
					int x = n - 1;
					int posicion = g3->IndexOf(x);
					if (posicion != -1)
					{
						if (g3->GetNumero(i - 1) != 1 && (g3->GetColor(i - 1) != Mazo->GetColor(posicion))) {
							if (i > 0 && Verificar(Mazo, g3, p, i - 1)) {
								Movimiento(Mazo, g3, p);
							}
							else {
								i--;
							}
						}
						else {
							i = 3;
						}
					}
					else {
						i--;
					}
				}
			}
			
			/*------------------Se llena la pila 4------------------*/
			for (int i = 0; i < 4; i++)
			{
				int p = aleatorio->Next(0, Mazo->Count());
				int n = Mazo->GetNumero(pos);
				char c = Mazo->GetColor(pos);
				if (i == 0) {
					g4->Add(n, c);
					Mazo->RemoveAt(pos);
				}
				else {
					int x = n - 1;
					int posicion = g4->IndexOf(x);
					if (posicion != -1)
					{
						if (g4->GetNumero(i - 1) != 1 && (g4->GetColor(i - 1) != Mazo->GetColor(posicion))) {
							if (i > 0 && Verificar(Mazo, g4, p, i - 1)) {
								Movimiento(Mazo, g4, p);
							}
							else {
								i--;
							}
						}
						else {
							i = 4;
						}
					}
				}
			}

			/*------------------Se llena la pila 5------------------*/
			for (int i = 0; i < 5; i++)
			{
				int p = aleatorio->Next(0, Mazo->Count());
				int n = Mazo->GetNumero(pos);
				char c = Mazo->GetColor(pos);
				int x = n - 1;
				if (i == 0) {
					g5->Add(n, c);
					Mazo->RemoveAt(pos);
				}
				else {
					int x = n - 1;
					int posicion = g5->IndexOf(x);
					if (posicion != -1)
					{
						if (g5->GetNumero(i - 1) != 1 && (g5->GetColor(i - 1) != Mazo->GetColor(posicion))) {
							if (i > 0 && Verificar(Mazo, g5, p, i - 1)) {
								Movimiento(Mazo, g5, p);
							}
							else {
								i--;
							}
						}
						else {
							i = 5;
						}
					}
				}
			}

			/*------------------Se llena la pila 6------------------*/
			for (int i = 0; i < 6; i++)
			{
				int p = aleatorio->Next(0, Mazo->Count());
				int n = Mazo->GetNumero(pos);
				char c = Mazo->GetColor(pos);
				if (i == 0) {
					g6->Add(n, c);
					Mazo->RemoveAt(pos);
				}
				else {
					int x = n - 1;
					int posicion = g6->IndexOf(x);
					if (posicion != -1)
					{
						if (g5->GetNumero(i - 1) != 1 && (g6->GetColor(i - 1) != Mazo->GetColor(posicion))) {
							if (i > 0 && Verificar(Mazo, g6, p, i - 1)) {
								Movimiento(Mazo, g6, p);
							}
							else {
								i--;
							}
						}
						else {
							i = 6;
						}
					}
				}
			}

			/*------------------Se llena la pila 7------------------*/
			for (int i = 0; i < 7; i++)
			{
				int p = aleatorio->Next(0, Mazo->Count());
				int n = Mazo->GetNumero(pos);
				char c = Mazo->GetColor(pos);
				if (i == 0) {
					g7->Add(n, c);
					Mazo->RemoveAt(pos);
				}
				else {
					int x = n - 1;
					int posicion = g7->IndexOf(x);
					if (posicion != -1)
					{
						if (g5->GetNumero(i - 1) != 1 && (g7->GetColor(i - 1) != Mazo->GetColor(posicion))) {
							if (i > 0 && Verificar(Mazo, g7, p, i - 1)) {
								Movimiento(Mazo, g7, p);
							}
							else {
								i--;
							}
						}
						else {
							i = 7;
						}
					}
				}
			}
			
		}

		void Ganar() {
			if (g1->Count() == 6 || g2->Count() == 7 || g3->Count() == 8 || g4->Count() == 9 || g5->Count() == 10 || g6->Count() == 11 || g7->Count() == 12) {
				MessageBox::Show("USTED HA GANADO",
					"Felicidades",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
			}
		}

#pragma endregion
	private: System::Void btn_Repartir_Click(System::Object^ sender, System::EventArgs^ e) {
		RepartirCartas();
		LLenarLista(lstMazo, Mazo);
		LLenarLista(lstG1, g1);
		LLenarLista(lstG2, g2);
		LLenarLista(lstG3, g3);
		LLenarLista(lstG4, g4);
		LLenarLista(lstG5, g5);
		LLenarLista(lstG6, g6);
		LLenarLista(lstG7, g7);
		btn_Repartir->Enabled = false;
	}
private: System::Void btn_Mover_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int origen = Convert::ToInt32(txtOrigen->Text);
		int destino = Convert::ToInt32(txtDestino->Text);
		int posicion = Convert::ToInt32(txtPosicion->Text);
		switch (origen)
		{
		case 1:
			if (posicion >= 0 && posicion < g1->Count()) {
				if (destino == 2) {
					if (Verificar(g1,g2,posicion, g2->Count() - 1))
					{
						while (posicion != g1->Count())
						{
							Movimiento(g1, g2, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 3) {
					if (Verificar(g1, g3, posicion, g3->Count() - 1))
					{
						while (posicion != g1->Count())
						{
							Movimiento(g1, g3, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 4) {
					if (Verificar(g1, g4, posicion, g4->Count() - 1))
					{
						while (posicion != g1->Count())
						{
							Movimiento(g1, g4, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 5) {
					if (Verificar(g1, g5, posicion, g5->Count() - 1))
					{
						while (posicion != g1->Count())
						{
							Movimiento(g1, g5, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 6) {
					if (Verificar(g1, g6, posicion, g6->Count() - 1))
					{
						while (posicion != g1->Count())
						{
							Movimiento(g1, g6, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 7) {
					if (Verificar(g1, g7, posicion, g7->Count() - 1))
					{
						while (posicion != g1->Count())
						{
							Movimiento(g1, g7, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else {
					MessageBox::Show("Grupo destino no válido",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
			}
			else {
				MessageBox::Show("La posición es mayor a la cantidad de elementos de la lista",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}			
			break;
		case 2:
			if (posicion >= 0 && posicion < g2->Count())
			{
				if (destino == 1) {
					if (Verificar(g2, g1, posicion, g1->Count() - 1))
					{
						while (posicion != g2->Count())
						{
							Movimiento(g2, g1, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}				
				else if (destino == 3) {
					if (Verificar(g2, g3, posicion, g3->Count() - 1))
					{
						while (posicion != g2->Count())
						{
							Movimiento(g2, g3, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 4) {
					if (Verificar(g2, g4, posicion, g4->Count() - 1))
					{
						while (posicion != g2->Count())
						{
							Movimiento(g2, g4, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 5) {
					if (Verificar(g2, g5, posicion, g5->Count() - 1))
					{
						while (posicion != g2->Count())
						{
							Movimiento(g2, g5, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 6) {
					if (Verificar(g2, g6, posicion, g6->Count() - 1))
					{
						while (posicion != g2->Count())
						{
							Movimiento(g2, g6, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 7) {
					if (Verificar(g2, g7, posicion, g7->Count() - 1))
					{
						while (posicion != g2->Count())
						{
							Movimiento(g2, g7, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else {
					MessageBox::Show("Grupo destino no válido",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
			}
			else {
				MessageBox::Show("La posición es mayor a la cantidad de elementos de la lista",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}
			break;
		case 3:
			if (posicion >= 0 && posicion < g3->Count())
			{
				if (destino == 1) {
					if (Verificar(g3, g1, posicion, g1->Count() - 1))
					{
						while (posicion != g3->Count())
						{
							Movimiento(g3, g1, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 2) {
					if (Verificar(g3, g2, posicion, g2->Count() - 1))
					{
						while (posicion != g3->Count())
						{
							Movimiento(g3, g2, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}				
				else if (destino == 4) {
					if (Verificar(g3, g4, posicion, g4->Count() - 1))
					{
						while (posicion != g3->Count())
						{
							Movimiento(g3, g4, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 5) {
					if (Verificar(g3, g5, posicion, g5->Count() - 1))
					{
						while (posicion != g3->Count())
						{
							Movimiento(g3, g5, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 6) {
					if (Verificar(g3, g6, posicion, g6->Count() - 1))
					{
						while (posicion != g3->Count())
						{
							Movimiento(g3, g6, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 7) {
					if (Verificar(g3, g7, posicion, g7->Count() - 1))
					{
						while (posicion != g3->Count())
						{
							Movimiento(g3, g7, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else {
					MessageBox::Show("Grupo destino no válido",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
			}
			else {
				MessageBox::Show("La posición es mayor a la cantidad de elementos de la lista",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}			
			break;
		case 4:
			if (posicion >= 0 && posicion < g4->Count())
			{
				if (destino == 1) {
					if (Verificar(g4, g1, posicion, g1->Count() - 1))
					{
						while (posicion != g4->Count())
						{
							Movimiento(g4, g1, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 2) {
					if (Verificar(g4, g2, posicion, g2->Count() - 1))
					{
						while (posicion != g4->Count())
						{
							Movimiento(g4, g2, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 3) {
					if (Verificar(g4, g3, posicion, g3->Count() - 1))
					{
						while (posicion != g4->Count())
						{
							Movimiento(g4, g3, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}				
				else if (destino == 5) {
					if (Verificar(g4, g5, posicion, g5->Count() - 1))
					{
						while (posicion != g4->Count())
						{
							Movimiento(g4, g5, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 6) {
					if (Verificar(g4, g6, posicion, g6->Count() - 1))
					{
						while (posicion != g4->Count())
						{
							Movimiento(g4, g6, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 7) {
					if (Verificar(g4, g7, posicion, g7->Count() - 1))
					{
						while (posicion != g4->Count())
						{
							Movimiento(g4, g7, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else {
					MessageBox::Show("Grupo destino no válido",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
			}
			else {
				MessageBox::Show("La posición es mayor a la cantidad de elementos de la lista",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}			
			break;
		case 5:
			if (posicion >= 0 && posicion < g5->Count())
			{
				if (destino == 1) {
					if (Verificar(g5, g1, posicion, g1->Count() - 1))
					{
						while (posicion != g5->Count())
						{
							Movimiento(g5, g1, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 2) {
					if (Verificar(g5, g2, posicion, g2->Count() - 1))
					{
						while (posicion != g5->Count())
						{
							Movimiento(g5, g2, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 3) {
					if (Verificar(g5, g3, posicion, g3->Count() - 1))
					{
						while (posicion != g5->Count())
						{
							Movimiento(g5, g3, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 4) {
					if (Verificar(g5, g4, posicion, g4->Count() - 1))
					{
						while (posicion != g5->Count())
						{
							Movimiento(g5, g4, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}				
				else if (destino == 6) {
					if (Verificar(g5, g6, posicion, g6->Count() - 1))
					{
						while (posicion != g5->Count())
						{
							Movimiento(g5, g6, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 7) {
					if (Verificar(g5, g7, posicion, g7->Count() - 1))
					{
						while (posicion != g5->Count())
						{
							Movimiento(g5, g7, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else {
					MessageBox::Show("Grupo destino no válido",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
			}
			else {
				MessageBox::Show("La posición es mayor a la cantidad de elementos de la lista",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}			
			break;
		case 6:
			if (posicion >= 0 && posicion < g6->Count())
			{
				if (destino == 1) {
					if (Verificar(g6, g1, posicion, g1->Count() - 1))
					{
						while (posicion != g6->Count())
						{
							Movimiento(g6, g1, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 2) {
					if (Verificar(g6, g2, posicion, g2->Count() - 1))
					{
						while (posicion != g6->Count())
						{
							Movimiento(g6, g2, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 3) {
					if (Verificar(g6, g3, posicion, g3->Count() - 1))
					{
						while (posicion != g6->Count())
						{
							Movimiento(g6, g3, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 4) {
					if (Verificar(g6, g4, posicion, g4->Count() - 1))
					{
						while (posicion != g6->Count())
						{
							Movimiento(g6, g4, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 5) {
					if (Verificar(g6, g5, posicion, g5->Count() - 1))
					{
						while (posicion != g6->Count())
						{
							Movimiento(g6, g5, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 7) {
					if (Verificar(g6, g7, posicion, g7->Count() - 1))
					{
						while (posicion != g6->Count())
						{
							Movimiento(g6, g7, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else {
					MessageBox::Show("Grupo destino no válido",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
			}
			else {
				MessageBox::Show("La posición es mayor a la cantidad de elementos de la lista",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}
			break;
		case 7:
			if (posicion >= 0 && posicion < g7->Count())
			{
				if (destino == 1) {
					if (Verificar(g7, g1, posicion, g1->Count() - 1))
					{
						while (posicion != g7->Count())
						{
							Movimiento(g7, g1, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 2) {
					if (Verificar(g7, g2, posicion, g2->Count() - 1))
					{
						while (posicion != g7->Count())
						{
							Movimiento(g7, g2, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 3) {
					if (Verificar(g7, g3, posicion, g3->Count() - 1))
					{
						while (posicion != g7->Count())
						{
							Movimiento(g7, g3, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 4) {
					if (Verificar(g7, g4, posicion, g4->Count() - 1))
					{
						while (posicion != g7->Count())
						{
							Movimiento(g7, g4, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 5) {
					if (Verificar(g7, g5, posicion, g5->Count() - 1))
					{
						while (posicion != g7->Count())
						{
							Movimiento(g7, g5, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else if (destino == 6) {
					if (Verificar(g7, g6, posicion, g6->Count() - 1))
					{
						while (posicion != g7->Count())
						{
							Movimiento(g7, g6, posicion);
						}
					}
					else {
						MessageBox::Show("No se pudo hacer el movimiento",
							"Error",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
				}
				else {
					MessageBox::Show("Grupo destino no válido",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
			}
			else {
				MessageBox::Show("La posición es mayor a la cantidad de elementos de la lista",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}
			break;
		default:
			MessageBox::Show("Grupo origen no válido",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
			break;
		}
		LLenarLista(lstMazo, Mazo);
		LLenarLista(lstG1, g1);
		LLenarLista(lstG2, g2);
		LLenarLista(lstG3, g3);
		LLenarLista(lstG4, g4);
		LLenarLista(lstG5, g5);
		LLenarLista(lstG6, g6);
		LLenarLista(lstG7, g7);
		Ganar();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Ingreso de datos no válido",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation);
	}
}
private: System::Void btnMazo_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int destino = Convert::ToInt32(txtDestino->Text);
		if (Mazo->Count() > 0)
		{
			switch (destino)
			{
			case 1:
				if (Verificar(Mazo, g1, Mazo->Count() - 1, g1->Count() - 1))
				{
					Movimiento(Mazo, g1, Mazo->Count() - 1);
				}
				else {
					MessageBox::Show("No se pudo tomar la carta del mazo",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
				break;
			case 2:
				if (Verificar(Mazo, g2, Mazo->Count() - 1, g2->Count() - 1))
				{
					Movimiento(Mazo, g2, Mazo->Count() - 1);
				}
				else {
					MessageBox::Show("No se pudo tomar la carta del mazo",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
				break;
			case 3:
				if (Verificar(Mazo, g3, Mazo->Count() - 1, g3->Count() - 1))
				{
					Movimiento(Mazo, g3, Mazo->Count() - 1);
				}
				else {
					MessageBox::Show("No se pudo tomar la carta del mazo",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
				break;
			case 4:
				if (Verificar(Mazo, g4, Mazo->Count() - 1, g4->Count() - 1))
				{
					Movimiento(Mazo, g4, Mazo->Count() - 1);
				}
				else {
					MessageBox::Show("No se pudo tomar la carta del mazo",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
				break;
			case 5:
				if (Verificar(Mazo, g5, Mazo->Count() - 1, g5->Count() - 1))
				{
					Movimiento(Mazo, g5, Mazo->Count() - 1);
				}
				else {
					MessageBox::Show("No se pudo tomar la carta del mazo",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
				break;
			case 6:
				if (Verificar(Mazo, g6, Mazo->Count() - 1, g6->Count() - 1))
				{
					Movimiento(Mazo, g6, Mazo->Count() - 1);
				}
				else {
					MessageBox::Show("No se pudo tomar la carta del mazo",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
				break;
			case 7:
				if (Verificar(Mazo, g7, Mazo->Count() - 1, g7->Count() - 1))
				{
					Movimiento(Mazo, g7, Mazo->Count() - 1);
				}
				else {
					MessageBox::Show("No se pudo tomar la carta del mazo",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
				break;
			default:
				MessageBox::Show("Grupo destino no válido",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Exclamation);
				break;
			}
			LLenarLista(lstMazo, Mazo);
			LLenarLista(lstG1, g1);
			LLenarLista(lstG2, g2);
			LLenarLista(lstG3, g3);
			LLenarLista(lstG4, g4);
			LLenarLista(lstG5, g5);
			LLenarLista(lstG6, g6);
			LLenarLista(lstG7, g7);
			Ganar();
		}
		else {
			MessageBox::Show("El mazo esta vacio",
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Ingreso de datos no válido",
			"Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation);
	}
}
};
}
