#pragma once
#include "Tabla.h"

namespace TF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class MyForm : public System::Windows::Forms::Form
	{
		CTabla ^tabla;
		int contador;
		int *tipos;
	private: System::Windows::Forms::Panel^  Nombres;
	private: System::Windows::Forms::Button^  BtConfirmarNombre;
	private: System::Windows::Forms::TextBox^  tbPonerNombre;
	private: System::Windows::Forms::Label^  lbPreguntarNombre;

			 int cant;
			 int x;
			 int y;
			 int filas;
			 int Numcolum;
			 int MaxLen;
			 bool cambios;
			 int filtro;
			 int CantidadTabla;
	private: System::Windows::Forms::Button^  btFilas;
	private: System::Windows::Forms::Button^  BTCONFFILA;
	private: System::Windows::Forms::TextBox^  TXTColum1;
	private: System::Windows::Forms::TextBox^  TXTColum2;
	private: System::Windows::Forms::TextBox^  TXTColum3;
	private: System::Windows::Forms::TextBox^  TXTColum4;
	private: System::Windows::Forms::TextBox^  TXTColum5;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  columna1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mayorAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menorAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  igualAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  iniciaConToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  finalizaConToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  estaContenidoEnToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  noEstaContenidoEnToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  columna2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mayorAToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  menorAToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  igualAToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  iniciaConToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  finalizaConToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  estaContenidoEnToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  noEstaContenidoEnToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  columna3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mayorAToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  menorAToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  igualAToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  iniciaConToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  finalizaConToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  estaContenidoEnToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  noEstaContenidoEnToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  columna4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  columna5ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mayorAToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  menorAToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  igualAToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  iniciaToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  finalizaConToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  estaContenidoEnToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  noEstaContenidoEnToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  mayorAToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  menorAToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  igualAToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  iniciaConToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  finalizaConToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  estaContenidoEnToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  noEstaContenidoEnToolStripMenuItem4;
	private: System::Windows::Forms::Panel^  PanelEscoger;
	private: System::Windows::Forms::Label^  lbEscoger;

	private: System::Windows::Forms::ToolStripMenuItem^  ordenarAscendenteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ordenarDescendenteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ordenarAscendenteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ordenarDescendenteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ordenarAscendenteToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  ordenarDescendenteToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  ordenarAscendenteToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  ordenarDescendenteToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  ordenarAscendenteToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  ordenarDescendenteToolStripMenuItem4;
	private: System::Windows::Forms::TextBox^  txtEscoger;
	private: System::Windows::Forms::Button^  btConfirmarCambio;
	private: System::Windows::Forms::Label^  lbpregunta;
	private: System::Windows::Forms::Panel^  panelPrincipal;
	private: System::Windows::Forms::Panel^  panelCambioTabla;
	private: System::Windows::Forms::TextBox^  txtCambioTabla;
	private: System::Windows::Forms::Label^  lbCambioTabla;
	private: System::Windows::Forms::Button^  btCambioTabla;
	private: System::Windows::Forms::Button^  btConfirCambioTabla;

			 int sumx;
	public:
		MyForm(void)
		{
			InitializeComponent();
			tabla = gcnew CTabla;
			contador = 0;
			x = y = 60;
			filas = 0;
			tipos = new int[5];
			Numcolum = 0;
			MaxLen = 0;
			cambios = true;
			filtro = 0;
			CantidadTabla = 1;
		}

	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::RadioButton^  Texto;
	private: System::Windows::Forms::RadioButton^  Numero;
	private: System::Windows::Forms::Label^  Elegir;
	private: System::Windows::Forms::Button^  Confirmar;

	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Confirmar = (gcnew System::Windows::Forms::Button());
			this->Texto = (gcnew System::Windows::Forms::RadioButton());
			this->Numero = (gcnew System::Windows::Forms::RadioButton());
			this->Elegir = (gcnew System::Windows::Forms::Label());
			this->PanelEscoger = (gcnew System::Windows::Forms::Panel());
			this->btConfirmarCambio = (gcnew System::Windows::Forms::Button());
			this->txtEscoger = (gcnew System::Windows::Forms::TextBox());
			this->lbEscoger = (gcnew System::Windows::Forms::Label());
			this->Nombres = (gcnew System::Windows::Forms::Panel());
			this->BtConfirmarNombre = (gcnew System::Windows::Forms::Button());
			this->tbPonerNombre = (gcnew System::Windows::Forms::TextBox());
			this->lbPreguntarNombre = (gcnew System::Windows::Forms::Label());
			this->btFilas = (gcnew System::Windows::Forms::Button());
			this->BTCONFFILA = (gcnew System::Windows::Forms::Button());
			this->TXTColum1 = (gcnew System::Windows::Forms::TextBox());
			this->TXTColum2 = (gcnew System::Windows::Forms::TextBox());
			this->TXTColum3 = (gcnew System::Windows::Forms::TextBox());
			this->TXTColum4 = (gcnew System::Windows::Forms::TextBox());
			this->TXTColum5 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->columna1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mayorAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menorAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->igualAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iniciaConToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finalizaConToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estaContenidoEnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->noEstaContenidoEnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenarAscendenteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenarDescendenteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->columna2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mayorAToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menorAToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->igualAToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iniciaConToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finalizaConToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estaContenidoEnToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->noEstaContenidoEnToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenarAscendenteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenarDescendenteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->columna3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mayorAToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menorAToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->igualAToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iniciaConToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finalizaConToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estaContenidoEnToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->noEstaContenidoEnToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenarAscendenteToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenarDescendenteToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->columna4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mayorAToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menorAToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->igualAToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iniciaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finalizaConToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estaContenidoEnToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->noEstaContenidoEnToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenarAscendenteToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenarDescendenteToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->columna5ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mayorAToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menorAToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->igualAToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iniciaConToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finalizaConToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estaContenidoEnToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->noEstaContenidoEnToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenarAscendenteToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ordenarDescendenteToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lbpregunta = (gcnew System::Windows::Forms::Label());
			this->panelPrincipal = (gcnew System::Windows::Forms::Panel());
			this->panelCambioTabla = (gcnew System::Windows::Forms::Panel());
			this->txtCambioTabla = (gcnew System::Windows::Forms::TextBox());
			this->lbCambioTabla = (gcnew System::Windows::Forms::Label());
			this->btCambioTabla = (gcnew System::Windows::Forms::Button());
			this->btConfirCambioTabla = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->PanelEscoger->SuspendLayout();
			this->Nombres->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->panelPrincipal->SuspendLayout();
			this->panelCambioTabla->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(658, 523);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Confirmar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->comboBox1->Location = System::Drawing::Point(514, 531);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel1->Controls->Add(this->Confirmar);
			this->panel1->Controls->Add(this->Texto);
			this->panel1->Controls->Add(this->Numero);
			this->panel1->Controls->Add(this->Elegir);
			this->panel1->Location = System::Drawing::Point(277, 244);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(283, 140);
			this->panel1->TabIndex = 2;
			this->panel1->Visible = false;
			// 
			// Confirmar
			// 
			this->Confirmar->Location = System::Drawing::Point(134, 57);
			this->Confirmar->Name = L"Confirmar";
			this->Confirmar->Size = System::Drawing::Size(121, 45);
			this->Confirmar->TabIndex = 3;
			this->Confirmar->Text = L"Confirmar";
			this->Confirmar->UseVisualStyleBackColor = true;
			this->Confirmar->Click += gcnew System::EventHandler(this, &MyForm::Confirmar_Click);
			// 
			// Texto
			// 
			this->Texto->AutoSize = true;
			this->Texto->Location = System::Drawing::Point(22, 90);
			this->Texto->Name = L"Texto";
			this->Texto->Size = System::Drawing::Size(64, 21);
			this->Texto->TabIndex = 2;
			this->Texto->Text = L"Texto";
			this->Texto->UseVisualStyleBackColor = true;
			// 
			// Numero
			// 
			this->Numero->AutoSize = true;
			this->Numero->Checked = true;
			this->Numero->Location = System::Drawing::Point(22, 48);
			this->Numero->Name = L"Numero";
			this->Numero->Size = System::Drawing::Size(79, 21);
			this->Numero->TabIndex = 1;
			this->Numero->TabStop = true;
			this->Numero->Text = L"Numero";
			this->Numero->UseVisualStyleBackColor = true;
			// 
			// Elegir
			// 
			this->Elegir->AutoSize = true;
			this->Elegir->Location = System::Drawing::Point(3, 11);
			this->Elegir->Name = L"Elegir";
			this->Elegir->Size = System::Drawing::Size(46, 17);
			this->Elegir->TabIndex = 0;
			this->Elegir->Text = L"label1";
			// 
			// PanelEscoger
			// 
			this->PanelEscoger->BackColor = System::Drawing::SystemColors::GrayText;
			this->PanelEscoger->Controls->Add(this->btConfirmarCambio);
			this->PanelEscoger->Controls->Add(this->txtEscoger);
			this->PanelEscoger->Controls->Add(this->lbEscoger);
			this->PanelEscoger->Location = System::Drawing::Point(612, 113);
			this->PanelEscoger->Name = L"PanelEscoger";
			this->PanelEscoger->Size = System::Drawing::Size(227, 116);
			this->PanelEscoger->TabIndex = 4;
			this->PanelEscoger->Visible = false;
			// 
			// btConfirmarCambio
			// 
			this->btConfirmarCambio->Location = System::Drawing::Point(64, 86);
			this->btConfirmarCambio->Name = L"btConfirmarCambio";
			this->btConfirmarCambio->Size = System::Drawing::Size(90, 27);
			this->btConfirmarCambio->TabIndex = 3;
			this->btConfirmarCambio->Text = L"Confirmar";
			this->btConfirmarCambio->UseVisualStyleBackColor = true;
			this->btConfirmarCambio->Click += gcnew System::EventHandler(this, &MyForm::btConfirmarCambio_Click);
			// 
			// txtEscoger
			// 
			this->txtEscoger->Location = System::Drawing::Point(6, 58);
			this->txtEscoger->Name = L"txtEscoger";
			this->txtEscoger->Size = System::Drawing::Size(218, 22);
			this->txtEscoger->TabIndex = 2;
			this->txtEscoger->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::ValidarEscoger);
			// 
			// lbEscoger
			// 
			this->lbEscoger->AutoSize = true;
			this->lbEscoger->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbEscoger->Location = System::Drawing::Point(3, 17);
			this->lbEscoger->Name = L"lbEscoger";
			this->lbEscoger->Size = System::Drawing::Size(46, 17);
			this->lbEscoger->TabIndex = 1;
			this->lbEscoger->Text = L"label1";
			// 
			// Nombres
			// 
			this->Nombres->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Nombres->Controls->Add(this->BtConfirmarNombre);
			this->Nombres->Controls->Add(this->tbPonerNombre);
			this->Nombres->Controls->Add(this->lbPreguntarNombre);
			this->Nombres->Location = System::Drawing::Point(142, 47);
			this->Nombres->Name = L"Nombres";
			this->Nombres->Size = System::Drawing::Size(310, 163);
			this->Nombres->TabIndex = 0;
			this->Nombres->Visible = false;
			// 
			// BtConfirmarNombre
			// 
			this->BtConfirmarNombre->Location = System::Drawing::Point(22, 102);
			this->BtConfirmarNombre->Name = L"BtConfirmarNombre";
			this->BtConfirmarNombre->Size = System::Drawing::Size(258, 52);
			this->BtConfirmarNombre->TabIndex = 2;
			this->BtConfirmarNombre->Text = L"Confirmar ";
			this->BtConfirmarNombre->UseVisualStyleBackColor = true;
			this->BtConfirmarNombre->Click += gcnew System::EventHandler(this, &MyForm::ConfirmarNombres_Click);
			// 
			// tbPonerNombre
			// 
			this->tbPonerNombre->Location = System::Drawing::Point(91, 69);
			this->tbPonerNombre->Name = L"tbPonerNombre";
			this->tbPonerNombre->Size = System::Drawing::Size(105, 22);
			this->tbPonerNombre->TabIndex = 1;
			// 
			// lbPreguntarNombre
			// 
			this->lbPreguntarNombre->AutoSize = true;
			this->lbPreguntarNombre->Location = System::Drawing::Point(19, 11);
			this->lbPreguntarNombre->Name = L"lbPreguntarNombre";
			this->lbPreguntarNombre->Size = System::Drawing::Size(46, 17);
			this->lbPreguntarNombre->TabIndex = 0;
			this->lbPreguntarNombre->Text = L"label1";
			// 
			// btFilas
			// 
			this->btFilas->Location = System::Drawing::Point(680, 27);
			this->btFilas->Name = L"btFilas";
			this->btFilas->Size = System::Drawing::Size(113, 28);
			this->btFilas->TabIndex = 3;
			this->btFilas->Text = L"Agregar Fila";
			this->btFilas->UseVisualStyleBackColor = true;
			this->btFilas->Visible = false;
			this->btFilas->Click += gcnew System::EventHandler(this, &MyForm::btFilas_Click);
			// 
			// BTCONFFILA
			// 
			this->BTCONFFILA->BackColor = System::Drawing::SystemColors::Highlight;
			this->BTCONFFILA->Location = System::Drawing::Point(750, 573);
			this->BTCONFFILA->Name = L"BTCONFFILA";
			this->BTCONFFILA->Size = System::Drawing::Size(54, 31);
			this->BTCONFFILA->TabIndex = 4;
			this->BTCONFFILA->UseVisualStyleBackColor = false;
			this->BTCONFFILA->Visible = false;
			this->BTCONFFILA->Click += gcnew System::EventHandler(this, &MyForm::BTCONFFILA_Click);
			// 
			// TXTColum1
			// 
			this->TXTColum1->Location = System::Drawing::Point(12, 142);
			this->TXTColum1->Name = L"TXTColum1";
			this->TXTColum1->Size = System::Drawing::Size(100, 22);
			this->TXTColum1->TabIndex = 5;
			this->TXTColum1->Visible = false;
			this->TXTColum1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::colum1Valid);
			// 
			// TXTColum2
			// 
			this->TXTColum2->Location = System::Drawing::Point(12, 174);
			this->TXTColum2->Name = L"TXTColum2";
			this->TXTColum2->Size = System::Drawing::Size(100, 22);
			this->TXTColum2->TabIndex = 6;
			this->TXTColum2->Visible = false;
			this->TXTColum2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::colum2Valid);
			// 
			// TXTColum3
			// 
			this->TXTColum3->Location = System::Drawing::Point(12, 213);
			this->TXTColum3->Name = L"TXTColum3";
			this->TXTColum3->Size = System::Drawing::Size(100, 22);
			this->TXTColum3->TabIndex = 7;
			this->TXTColum3->Visible = false;
			this->TXTColum3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::colum3Valid);
			// 
			// TXTColum4
			// 
			this->TXTColum4->Location = System::Drawing::Point(12, 254);
			this->TXTColum4->Name = L"TXTColum4";
			this->TXTColum4->Size = System::Drawing::Size(100, 22);
			this->TXTColum4->TabIndex = 8;
			this->TXTColum4->Visible = false;
			this->TXTColum4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::colum4Valid);
			// 
			// TXTColum5
			// 
			this->TXTColum5->Location = System::Drawing::Point(12, 298);
			this->TXTColum5->Name = L"TXTColum5";
			this->TXTColum5->Size = System::Drawing::Size(100, 22);
			this->TXTColum5->TabIndex = 9;
			this->TXTColum5->Visible = false;
			this->TXTColum5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::colum5Valid);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->columna1ToolStripMenuItem,
					this->columna2ToolStripMenuItem, this->columna3ToolStripMenuItem, this->columna4ToolStripMenuItem, this->columna5ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(804, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// columna1ToolStripMenuItem
			// 
			this->columna1ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->mayorAToolStripMenuItem,
					this->menorAToolStripMenuItem, this->igualAToolStripMenuItem, this->iniciaConToolStripMenuItem, this->finalizaConToolStripMenuItem,
					this->estaContenidoEnToolStripMenuItem, this->noEstaContenidoEnToolStripMenuItem, this->ordenarAscendenteToolStripMenuItem, this->ordenarDescendenteToolStripMenuItem
			});
			this->columna1ToolStripMenuItem->Name = L"columna1ToolStripMenuItem";
			this->columna1ToolStripMenuItem->Size = System::Drawing::Size(92, 24);
			this->columna1ToolStripMenuItem->Text = L"Columna 1";
			this->columna1ToolStripMenuItem->Visible = false;
			// 
			// mayorAToolStripMenuItem
			// 
			this->mayorAToolStripMenuItem->Name = L"mayorAToolStripMenuItem";
			this->mayorAToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->mayorAToolStripMenuItem->Text = L"Mayor a";
			this->mayorAToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mayorAToolStripMenuItem_Click);
			// 
			// menorAToolStripMenuItem
			// 
			this->menorAToolStripMenuItem->Name = L"menorAToolStripMenuItem";
			this->menorAToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->menorAToolStripMenuItem->Text = L"Menor a";
			this->menorAToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::menorAToolStripMenuItem_Click);
			// 
			// igualAToolStripMenuItem
			// 
			this->igualAToolStripMenuItem->Name = L"igualAToolStripMenuItem";
			this->igualAToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->igualAToolStripMenuItem->Text = L"Igual a ";
			this->igualAToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::igualAToolStripMenuItem_Click);
			// 
			// iniciaConToolStripMenuItem
			// 
			this->iniciaConToolStripMenuItem->Name = L"iniciaConToolStripMenuItem";
			this->iniciaConToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->iniciaConToolStripMenuItem->Text = L"Inicia con ";
			this->iniciaConToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::iniciaConToolStripMenuItem_Click);
			// 
			// finalizaConToolStripMenuItem
			// 
			this->finalizaConToolStripMenuItem->Name = L"finalizaConToolStripMenuItem";
			this->finalizaConToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->finalizaConToolStripMenuItem->Text = L"Finaliza con";
			this->finalizaConToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::finalizaConToolStripMenuItem_Click);
			// 
			// estaContenidoEnToolStripMenuItem
			// 
			this->estaContenidoEnToolStripMenuItem->Name = L"estaContenidoEnToolStripMenuItem";
			this->estaContenidoEnToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->estaContenidoEnToolStripMenuItem->Text = L"Esta contenido en";
			this->estaContenidoEnToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::estaContenidoEnToolStripMenuItem_Click);
			// 
			// noEstaContenidoEnToolStripMenuItem
			// 
			this->noEstaContenidoEnToolStripMenuItem->Name = L"noEstaContenidoEnToolStripMenuItem";
			this->noEstaContenidoEnToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->noEstaContenidoEnToolStripMenuItem->Text = L"No esta contenido en";
			this->noEstaContenidoEnToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::noEstaContenidoEnToolStripMenuItem_Click);
			// 
			// ordenarAscendenteToolStripMenuItem
			// 
			this->ordenarAscendenteToolStripMenuItem->Name = L"ordenarAscendenteToolStripMenuItem";
			this->ordenarAscendenteToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->ordenarAscendenteToolStripMenuItem->Text = L"Ordenar ascendente";
			this->ordenarAscendenteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ordenarAscendenteToolStripMenuItem_Click);
			// 
			// ordenarDescendenteToolStripMenuItem
			// 
			this->ordenarDescendenteToolStripMenuItem->Name = L"ordenarDescendenteToolStripMenuItem";
			this->ordenarDescendenteToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->ordenarDescendenteToolStripMenuItem->Text = L"Ordenar descendente";
			this->ordenarDescendenteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ordenarDescendenteToolStripMenuItem_Click);
			// 
			// columna2ToolStripMenuItem
			// 
			this->columna2ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->mayorAToolStripMenuItem1,
					this->menorAToolStripMenuItem1, this->igualAToolStripMenuItem1, this->iniciaConToolStripMenuItem1, this->finalizaConToolStripMenuItem1,
					this->estaContenidoEnToolStripMenuItem1, this->noEstaContenidoEnToolStripMenuItem1, this->ordenarAscendenteToolStripMenuItem1,
					this->ordenarDescendenteToolStripMenuItem1
			});
			this->columna2ToolStripMenuItem->Name = L"columna2ToolStripMenuItem";
			this->columna2ToolStripMenuItem->Size = System::Drawing::Size(92, 24);
			this->columna2ToolStripMenuItem->Text = L"Columna 2";
			this->columna2ToolStripMenuItem->Visible = false;
			// 
			// mayorAToolStripMenuItem1
			// 
			this->mayorAToolStripMenuItem1->Name = L"mayorAToolStripMenuItem1";
			this->mayorAToolStripMenuItem1->Size = System::Drawing::Size(226, 26);
			this->mayorAToolStripMenuItem1->Text = L"Mayor a ";
			this->mayorAToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::mayorAToolStripMenuItem1_Click);
			// 
			// menorAToolStripMenuItem1
			// 
			this->menorAToolStripMenuItem1->Name = L"menorAToolStripMenuItem1";
			this->menorAToolStripMenuItem1->Size = System::Drawing::Size(226, 26);
			this->menorAToolStripMenuItem1->Text = L"Menor a";
			this->menorAToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::menorAToolStripMenuItem1_Click);
			// 
			// igualAToolStripMenuItem1
			// 
			this->igualAToolStripMenuItem1->Name = L"igualAToolStripMenuItem1";
			this->igualAToolStripMenuItem1->Size = System::Drawing::Size(226, 26);
			this->igualAToolStripMenuItem1->Text = L"Igual a";
			this->igualAToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::igualAToolStripMenuItem1_Click);
			// 
			// iniciaConToolStripMenuItem1
			// 
			this->iniciaConToolStripMenuItem1->Name = L"iniciaConToolStripMenuItem1";
			this->iniciaConToolStripMenuItem1->Size = System::Drawing::Size(226, 26);
			this->iniciaConToolStripMenuItem1->Text = L"Inicia con";
			this->iniciaConToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::iniciaConToolStripMenuItem1_Click);
			// 
			// finalizaConToolStripMenuItem1
			// 
			this->finalizaConToolStripMenuItem1->Name = L"finalizaConToolStripMenuItem1";
			this->finalizaConToolStripMenuItem1->Size = System::Drawing::Size(226, 26);
			this->finalizaConToolStripMenuItem1->Text = L"Finaliza con";
			this->finalizaConToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::finalizaConToolStripMenuItem1_Click);
			// 
			// estaContenidoEnToolStripMenuItem1
			// 
			this->estaContenidoEnToolStripMenuItem1->Name = L"estaContenidoEnToolStripMenuItem1";
			this->estaContenidoEnToolStripMenuItem1->Size = System::Drawing::Size(226, 26);
			this->estaContenidoEnToolStripMenuItem1->Text = L"Esta contenido en";
			this->estaContenidoEnToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::estaContenidoEnToolStripMenuItem1_Click);
			// 
			// noEstaContenidoEnToolStripMenuItem1
			// 
			this->noEstaContenidoEnToolStripMenuItem1->Name = L"noEstaContenidoEnToolStripMenuItem1";
			this->noEstaContenidoEnToolStripMenuItem1->Size = System::Drawing::Size(226, 26);
			this->noEstaContenidoEnToolStripMenuItem1->Text = L"No esta contenido en";
			this->noEstaContenidoEnToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::noEstaContenidoEnToolStripMenuItem1_Click);
			// 
			// ordenarAscendenteToolStripMenuItem1
			// 
			this->ordenarAscendenteToolStripMenuItem1->Name = L"ordenarAscendenteToolStripMenuItem1";
			this->ordenarAscendenteToolStripMenuItem1->Size = System::Drawing::Size(226, 26);
			this->ordenarAscendenteToolStripMenuItem1->Text = L"Ordenar ascendente";
			this->ordenarAscendenteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ordenarAscendenteToolStripMenuItem1_Click);
			// 
			// ordenarDescendenteToolStripMenuItem1
			// 
			this->ordenarDescendenteToolStripMenuItem1->Name = L"ordenarDescendenteToolStripMenuItem1";
			this->ordenarDescendenteToolStripMenuItem1->Size = System::Drawing::Size(226, 26);
			this->ordenarDescendenteToolStripMenuItem1->Text = L"Ordenar descendente";
			this->ordenarDescendenteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ordenarDescendenteToolStripMenuItem1_Click);
			// 
			// columna3ToolStripMenuItem
			// 
			this->columna3ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->mayorAToolStripMenuItem2,
					this->menorAToolStripMenuItem2, this->igualAToolStripMenuItem2, this->iniciaConToolStripMenuItem2, this->finalizaConToolStripMenuItem2,
					this->estaContenidoEnToolStripMenuItem2, this->noEstaContenidoEnToolStripMenuItem2, this->ordenarAscendenteToolStripMenuItem2,
					this->ordenarDescendenteToolStripMenuItem2
			});
			this->columna3ToolStripMenuItem->Name = L"columna3ToolStripMenuItem";
			this->columna3ToolStripMenuItem->Size = System::Drawing::Size(92, 24);
			this->columna3ToolStripMenuItem->Text = L"Columna 3";
			this->columna3ToolStripMenuItem->Visible = false;
			// 
			// mayorAToolStripMenuItem2
			// 
			this->mayorAToolStripMenuItem2->Name = L"mayorAToolStripMenuItem2";
			this->mayorAToolStripMenuItem2->Size = System::Drawing::Size(226, 26);
			this->mayorAToolStripMenuItem2->Text = L"Mayor a";
			this->mayorAToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::mayorAToolStripMenuItem2_Click);
			// 
			// menorAToolStripMenuItem2
			// 
			this->menorAToolStripMenuItem2->Name = L"menorAToolStripMenuItem2";
			this->menorAToolStripMenuItem2->Size = System::Drawing::Size(226, 26);
			this->menorAToolStripMenuItem2->Text = L"Menor a";
			this->menorAToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::menorAToolStripMenuItem2_Click);
			// 
			// igualAToolStripMenuItem2
			// 
			this->igualAToolStripMenuItem2->Name = L"igualAToolStripMenuItem2";
			this->igualAToolStripMenuItem2->Size = System::Drawing::Size(226, 26);
			this->igualAToolStripMenuItem2->Text = L"Igual a";
			this->igualAToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::igualAToolStripMenuItem2_Click);
			// 
			// iniciaConToolStripMenuItem2
			// 
			this->iniciaConToolStripMenuItem2->Name = L"iniciaConToolStripMenuItem2";
			this->iniciaConToolStripMenuItem2->Size = System::Drawing::Size(226, 26);
			this->iniciaConToolStripMenuItem2->Text = L"Inicia con";
			this->iniciaConToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::iniciaConToolStripMenuItem2_Click);
			// 
			// finalizaConToolStripMenuItem2
			// 
			this->finalizaConToolStripMenuItem2->Name = L"finalizaConToolStripMenuItem2";
			this->finalizaConToolStripMenuItem2->Size = System::Drawing::Size(226, 26);
			this->finalizaConToolStripMenuItem2->Text = L"Finaliza con";
			this->finalizaConToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::finalizaConToolStripMenuItem2_Click);
			// 
			// estaContenidoEnToolStripMenuItem2
			// 
			this->estaContenidoEnToolStripMenuItem2->Name = L"estaContenidoEnToolStripMenuItem2";
			this->estaContenidoEnToolStripMenuItem2->Size = System::Drawing::Size(226, 26);
			this->estaContenidoEnToolStripMenuItem2->Text = L"Esta contenido en";
			this->estaContenidoEnToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::estaContenidoEnToolStripMenuItem2_Click);
			// 
			// noEstaContenidoEnToolStripMenuItem2
			// 
			this->noEstaContenidoEnToolStripMenuItem2->Name = L"noEstaContenidoEnToolStripMenuItem2";
			this->noEstaContenidoEnToolStripMenuItem2->Size = System::Drawing::Size(226, 26);
			this->noEstaContenidoEnToolStripMenuItem2->Text = L"No esta contenido en";
			this->noEstaContenidoEnToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::noEstaContenidoEnToolStripMenuItem2_Click);
			// 
			// ordenarAscendenteToolStripMenuItem2
			// 
			this->ordenarAscendenteToolStripMenuItem2->Name = L"ordenarAscendenteToolStripMenuItem2";
			this->ordenarAscendenteToolStripMenuItem2->Size = System::Drawing::Size(226, 26);
			this->ordenarAscendenteToolStripMenuItem2->Text = L"Ordenar ascendente";
			this->ordenarAscendenteToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::ordenarAscendenteToolStripMenuItem2_Click);
			// 
			// ordenarDescendenteToolStripMenuItem2
			// 
			this->ordenarDescendenteToolStripMenuItem2->Name = L"ordenarDescendenteToolStripMenuItem2";
			this->ordenarDescendenteToolStripMenuItem2->Size = System::Drawing::Size(226, 26);
			this->ordenarDescendenteToolStripMenuItem2->Text = L"Ordenar descendente";
			this->ordenarDescendenteToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::ordenarDescendenteToolStripMenuItem2_Click);
			// 
			// columna4ToolStripMenuItem
			// 
			this->columna4ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->mayorAToolStripMenuItem3,
					this->menorAToolStripMenuItem3, this->igualAToolStripMenuItem3, this->iniciaToolStripMenuItem, this->finalizaConToolStripMenuItem3,
					this->estaContenidoEnToolStripMenuItem3, this->noEstaContenidoEnToolStripMenuItem3, this->ordenarAscendenteToolStripMenuItem3,
					this->ordenarDescendenteToolStripMenuItem3
			});
			this->columna4ToolStripMenuItem->Name = L"columna4ToolStripMenuItem";
			this->columna4ToolStripMenuItem->Size = System::Drawing::Size(92, 24);
			this->columna4ToolStripMenuItem->Text = L"Columna 4";
			this->columna4ToolStripMenuItem->Visible = false;
			// 
			// mayorAToolStripMenuItem3
			// 
			this->mayorAToolStripMenuItem3->Name = L"mayorAToolStripMenuItem3";
			this->mayorAToolStripMenuItem3->Size = System::Drawing::Size(226, 26);
			this->mayorAToolStripMenuItem3->Text = L"Mayor a";
			this->mayorAToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::mayorAToolStripMenuItem3_Click);
			// 
			// menorAToolStripMenuItem3
			// 
			this->menorAToolStripMenuItem3->Name = L"menorAToolStripMenuItem3";
			this->menorAToolStripMenuItem3->Size = System::Drawing::Size(226, 26);
			this->menorAToolStripMenuItem3->Text = L"Menor a";
			this->menorAToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::menorAToolStripMenuItem3_Click);
			// 
			// igualAToolStripMenuItem3
			// 
			this->igualAToolStripMenuItem3->Name = L"igualAToolStripMenuItem3";
			this->igualAToolStripMenuItem3->Size = System::Drawing::Size(226, 26);
			this->igualAToolStripMenuItem3->Text = L"Igual a";
			this->igualAToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::igualAToolStripMenuItem3_Click);
			// 
			// iniciaToolStripMenuItem
			// 
			this->iniciaToolStripMenuItem->Name = L"iniciaToolStripMenuItem";
			this->iniciaToolStripMenuItem->Size = System::Drawing::Size(226, 26);
			this->iniciaToolStripMenuItem->Text = L"Inicia con";
			this->iniciaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::iniciaToolStripMenuItem_Click);
			// 
			// finalizaConToolStripMenuItem3
			// 
			this->finalizaConToolStripMenuItem3->Name = L"finalizaConToolStripMenuItem3";
			this->finalizaConToolStripMenuItem3->Size = System::Drawing::Size(226, 26);
			this->finalizaConToolStripMenuItem3->Text = L"Finaliza con";
			this->finalizaConToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::finalizaConToolStripMenuItem3_Click);
			// 
			// estaContenidoEnToolStripMenuItem3
			// 
			this->estaContenidoEnToolStripMenuItem3->Name = L"estaContenidoEnToolStripMenuItem3";
			this->estaContenidoEnToolStripMenuItem3->Size = System::Drawing::Size(226, 26);
			this->estaContenidoEnToolStripMenuItem3->Text = L"Esta contenido en";
			this->estaContenidoEnToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::estaContenidoEnToolStripMenuItem3_Click);
			// 
			// noEstaContenidoEnToolStripMenuItem3
			// 
			this->noEstaContenidoEnToolStripMenuItem3->Name = L"noEstaContenidoEnToolStripMenuItem3";
			this->noEstaContenidoEnToolStripMenuItem3->Size = System::Drawing::Size(226, 26);
			this->noEstaContenidoEnToolStripMenuItem3->Text = L"No esta contenido en";
			this->noEstaContenidoEnToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::noEstaContenidoEnToolStripMenuItem3_Click);
			// 
			// ordenarAscendenteToolStripMenuItem3
			// 
			this->ordenarAscendenteToolStripMenuItem3->Name = L"ordenarAscendenteToolStripMenuItem3";
			this->ordenarAscendenteToolStripMenuItem3->Size = System::Drawing::Size(226, 26);
			this->ordenarAscendenteToolStripMenuItem3->Text = L"Ordenar ascendente";
			this->ordenarAscendenteToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::ordenarAscendenteToolStripMenuItem3_Click);
			// 
			// ordenarDescendenteToolStripMenuItem3
			// 
			this->ordenarDescendenteToolStripMenuItem3->Name = L"ordenarDescendenteToolStripMenuItem3";
			this->ordenarDescendenteToolStripMenuItem3->Size = System::Drawing::Size(226, 26);
			this->ordenarDescendenteToolStripMenuItem3->Text = L"Ordenar descendente";
			this->ordenarDescendenteToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::ordenarDescendenteToolStripMenuItem3_Click);
			// 
			// columna5ToolStripMenuItem
			// 
			this->columna5ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->mayorAToolStripMenuItem4,
					this->menorAToolStripMenuItem4, this->igualAToolStripMenuItem4, this->iniciaConToolStripMenuItem3, this->finalizaConToolStripMenuItem4,
					this->estaContenidoEnToolStripMenuItem4, this->noEstaContenidoEnToolStripMenuItem4, this->ordenarAscendenteToolStripMenuItem4,
					this->ordenarDescendenteToolStripMenuItem4
			});
			this->columna5ToolStripMenuItem->Name = L"columna5ToolStripMenuItem";
			this->columna5ToolStripMenuItem->Size = System::Drawing::Size(92, 24);
			this->columna5ToolStripMenuItem->Text = L"Columna 5";
			this->columna5ToolStripMenuItem->Visible = false;
			// 
			// mayorAToolStripMenuItem4
			// 
			this->mayorAToolStripMenuItem4->Name = L"mayorAToolStripMenuItem4";
			this->mayorAToolStripMenuItem4->Size = System::Drawing::Size(226, 26);
			this->mayorAToolStripMenuItem4->Text = L"Mayor a";
			this->mayorAToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::mayorAToolStripMenuItem4_Click);
			// 
			// menorAToolStripMenuItem4
			// 
			this->menorAToolStripMenuItem4->Name = L"menorAToolStripMenuItem4";
			this->menorAToolStripMenuItem4->Size = System::Drawing::Size(226, 26);
			this->menorAToolStripMenuItem4->Text = L"Menor a";
			this->menorAToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::menorAToolStripMenuItem4_Click);
			// 
			// igualAToolStripMenuItem4
			// 
			this->igualAToolStripMenuItem4->Name = L"igualAToolStripMenuItem4";
			this->igualAToolStripMenuItem4->Size = System::Drawing::Size(226, 26);
			this->igualAToolStripMenuItem4->Text = L"Igual a";
			this->igualAToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::igualAToolStripMenuItem4_Click);
			// 
			// iniciaConToolStripMenuItem3
			// 
			this->iniciaConToolStripMenuItem3->Name = L"iniciaConToolStripMenuItem3";
			this->iniciaConToolStripMenuItem3->Size = System::Drawing::Size(226, 26);
			this->iniciaConToolStripMenuItem3->Text = L"Inicia con";
			this->iniciaConToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::iniciaConToolStripMenuItem3_Click);
			// 
			// finalizaConToolStripMenuItem4
			// 
			this->finalizaConToolStripMenuItem4->Name = L"finalizaConToolStripMenuItem4";
			this->finalizaConToolStripMenuItem4->Size = System::Drawing::Size(226, 26);
			this->finalizaConToolStripMenuItem4->Text = L"Finaliza con";
			this->finalizaConToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::finalizaConToolStripMenuItem4_Click);
			// 
			// estaContenidoEnToolStripMenuItem4
			// 
			this->estaContenidoEnToolStripMenuItem4->Name = L"estaContenidoEnToolStripMenuItem4";
			this->estaContenidoEnToolStripMenuItem4->Size = System::Drawing::Size(226, 26);
			this->estaContenidoEnToolStripMenuItem4->Text = L"Esta contenido en";
			this->estaContenidoEnToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::estaContenidoEnToolStripMenuItem4_Click);
			// 
			// noEstaContenidoEnToolStripMenuItem4
			// 
			this->noEstaContenidoEnToolStripMenuItem4->Name = L"noEstaContenidoEnToolStripMenuItem4";
			this->noEstaContenidoEnToolStripMenuItem4->Size = System::Drawing::Size(226, 26);
			this->noEstaContenidoEnToolStripMenuItem4->Text = L"No esta contenido en";
			this->noEstaContenidoEnToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::noEstaContenidoEnToolStripMenuItem4_Click);
			// 
			// ordenarAscendenteToolStripMenuItem4
			// 
			this->ordenarAscendenteToolStripMenuItem4->Name = L"ordenarAscendenteToolStripMenuItem4";
			this->ordenarAscendenteToolStripMenuItem4->Size = System::Drawing::Size(226, 26);
			this->ordenarAscendenteToolStripMenuItem4->Text = L"Ordenar ascendente";
			this->ordenarAscendenteToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::ordenarAscendenteToolStripMenuItem4_Click);
			// 
			// ordenarDescendenteToolStripMenuItem4
			// 
			this->ordenarDescendenteToolStripMenuItem4->Name = L"ordenarDescendenteToolStripMenuItem4";
			this->ordenarDescendenteToolStripMenuItem4->Size = System::Drawing::Size(226, 26);
			this->ordenarDescendenteToolStripMenuItem4->Text = L"Ordenar descendente";
			this->ordenarDescendenteToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::ordenarDescendenteToolStripMenuItem4_Click);
			// 
			// lbpregunta
			// 
			this->lbpregunta->AutoSize = true;
			this->lbpregunta->BackColor = System::Drawing::SystemColors::Control;
			this->lbpregunta->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbpregunta->Location = System::Drawing::Point(511, 491);
			this->lbpregunta->Name = L"lbpregunta";
			this->lbpregunta->Size = System::Drawing::Size(191, 17);
			this->lbpregunta->TabIndex = 11;
			this->lbpregunta->Text = L"Elija la cantidad de columnas";
			// 
			// panelPrincipal
			// 
			this->panelPrincipal->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelPrincipal.BackgroundImage")));
			this->panelPrincipal->Controls->Add(this->comboBox1);
			this->panelPrincipal->Controls->Add(this->lbpregunta);
			this->panelPrincipal->Controls->Add(this->button1);
			this->panelPrincipal->Location = System::Drawing::Point(0, 27);
			this->panelPrincipal->Name = L"panelPrincipal";
			this->panelPrincipal->Size = System::Drawing::Size(804, 595);
			this->panelPrincipal->TabIndex = 12;
			// 
			// panelCambioTabla
			// 
			this->panelCambioTabla->Controls->Add(this->btConfirCambioTabla);
			this->panelCambioTabla->Controls->Add(this->txtCambioTabla);
			this->panelCambioTabla->Controls->Add(this->lbCambioTabla);
			this->panelCambioTabla->Location = System::Drawing::Point(483, 68);
			this->panelCambioTabla->Name = L"panelCambioTabla";
			this->panelCambioTabla->Size = System::Drawing::Size(219, 109);
			this->panelCambioTabla->TabIndex = 13;
			this->panelCambioTabla->Visible = false;
			// 
			// txtCambioTabla
			// 
			this->txtCambioTabla->Location = System::Drawing::Point(3, 45);
			this->txtCambioTabla->Name = L"txtCambioTabla";
			this->txtCambioTabla->Size = System::Drawing::Size(213, 22);
			this->txtCambioTabla->TabIndex = 1;
			this->txtCambioTabla->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TablaValid);
			// 
			// lbCambioTabla
			// 
			this->lbCambioTabla->AutoSize = true;
			this->lbCambioTabla->Location = System::Drawing::Point(3, 11);
			this->lbCambioTabla->Name = L"lbCambioTabla";
			this->lbCambioTabla->Size = System::Drawing::Size(46, 17);
			this->lbCambioTabla->TabIndex = 0;
			this->lbCambioTabla->Text = L"label1";
			// 
			// btCambioTabla
			// 
			this->btCambioTabla->Location = System::Drawing::Point(0, 27);
			this->btCambioTabla->Name = L"btCambioTabla";
			this->btCambioTabla->Size = System::Drawing::Size(100, 43);
			this->btCambioTabla->TabIndex = 14;
			this->btCambioTabla->Text = L"Cambiar de tabla";
			this->btCambioTabla->UseVisualStyleBackColor = true;
			this->btCambioTabla->Visible = false;
			this->btCambioTabla->Click += gcnew System::EventHandler(this, &MyForm::btCambioTabla_Click);
			// 
			// btConfirCambioTabla
			// 
			this->btConfirCambioTabla->Location = System::Drawing::Point(66, 74);
			this->btConfirCambioTabla->Name = L"btConfirCambioTabla";
			this->btConfirCambioTabla->Size = System::Drawing::Size(86, 23);
			this->btConfirCambioTabla->TabIndex = 2;
			this->btConfirCambioTabla->Text = L"Confirmar";
			this->btConfirCambioTabla->UseVisualStyleBackColor = true;
			this->btConfirCambioTabla->Click += gcnew System::EventHandler(this, &MyForm::btConfirCambioTabla_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(804, 616);
			this->Controls->Add(this->btCambioTabla);
			this->Controls->Add(this->panelCambioTabla);
			this->Controls->Add(this->panelPrincipal);
			this->Controls->Add(this->PanelEscoger);
			this->Controls->Add(this->TXTColum5);
			this->Controls->Add(this->TXTColum4);
			this->Controls->Add(this->TXTColum3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->TXTColum2);
			this->Controls->Add(this->TXTColum1);
			this->Controls->Add(this->BTCONFFILA);
			this->Controls->Add(this->btFilas);
			this->Controls->Add(this->Nombres);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->PanelEscoger->ResumeLayout(false);
			this->PanelEscoger->PerformLayout();
			this->Nombres->ResumeLayout(false);
			this->Nombres->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panelPrincipal->ResumeLayout(false);
			this->panelPrincipal->PerformLayout();
			this->panelCambioTabla->ResumeLayout(false);
			this->panelCambioTabla->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		panelPrincipal->Visible = false;
		cant = Convert::ToInt16(comboBox1->SelectedItem);
		this->tabla->CantColum(cant);
		comboBox1->Visible = false;
		button1->Visible = false;
		lbpregunta->Visible = false;
		panel1->Visible = true;
		int px = ClientSize.Width/2 -panel1->Size.Width/2;
		int py = ClientSize.Height/2 - panel1->Size.Height/2;
		this->panel1->Location = System::Drawing::Point(px, py);
		px = ClientSize.Width / 2 - PanelEscoger->Size.Width / 2;
		py = ClientSize.Height / 2 - PanelEscoger->Size.Height / 2;
		this->PanelEscoger->Location = System::Drawing::Point(px, py);
		Elegir->Text = "¿Que tipo de dato hay en la columna 1 ?";
	}

	public:System::Windows::Forms::Label^ AddLabel(TextBox^ txt, int posx, int posy) {
		System::Windows::Forms::Label^  efe = (gcnew System::Windows::Forms::Label());
		this->Controls->Add(efe);
		efe->Name = "Fila" + filas.ToString() + "Columna" + contador.ToString();
		efe->Top = posy;
		efe->Left = posx;
		efe->Text = txt->Text;
		efe->BackColor = Color::Transparent;
		efe->BringToFront();
		x = x + sumx;
		if (contador == cant - 1) {
			y = y + 25;
			x = 60;
		}
		return efe;
	}
	
	public:System::Windows::Forms::Label^ AddLabelEscritura(string texto,int posx, int posy) {
		System::Windows::Forms::Label^  efe = (gcnew System::Windows::Forms::Label());
		this->Controls->Add(efe);
		efe->Name = "Fila" + filas.ToString() + "Columna" + contador.ToString();
		efe->Top = posy;
		efe->Left = posx;
		String^ nom = gcnew String(texto.c_str());
		efe->Text = nom;
		efe->BackColor = Color::Transparent;
		efe->BringToFront();
		x = x + sumx;
		if (contador == cant - 1) {
			y = y + 25;
			x = 60;
		}
		efe->BringToFront();
		return efe;
	}

	public:System::Windows::Forms::Panel^ AddPanel() {
		System::Windows::Forms::Panel ^ nvpanel = (gcnew System::Windows::Forms::Panel());
		this->Controls->Add(nvpanel);
		nvpanel->Name = "NuevoPanel";
		nvpanel->Location = System::Drawing::Point(0, 85);
		nvpanel->Size = System::Drawing::Size(this->ClientSize.Width, y);
		nvpanel->BackColor = System::Drawing::SystemColors::Window;
		nvpanel->BringToFront();
		x = 60;
		y = 85;
		return nvpanel;
	}

	private: System::Void Confirmar_Click(System::Object^  sender, System::EventArgs^  e) {
		int tipo;
		if (Numero->Checked == true) {
			tipo = 1;
		}
		else {
			tipo = 0;
		}
		tipos[contador] = tipo;
		contador++;
		Elegir->Text = "¿Que tipo de dato hay en la columna "+ (contador+1).ToString()+ " ?";
		if (contador==cant) {
			panel1->Visible = false;
			Nombres->Visible = true;
			int px = ClientSize.Width/2 - Nombres->Size.Width/2;
			int py = ClientSize.Height/2 - Nombres->Size.Height/2;
			this->Nombres->Location = System::Drawing::Point(px, py);
			contador = 0;
			lbPreguntarNombre->Text = "¿Que nombre va a tener la columna " + (contador+1).ToString() + " ?";
		}
		
	}

	private: System::Void ConfirmarNombres_Click(System::Object^  sender, System::EventArgs^  e) {
		sumx = (ClientSize.Width - 40) / cant;
		AddLabel(tbPonerNombre,x,y);
		almacenar(tbPonerNombre);
		contador++;
		tbPonerNombre->Text = "";
		if (contador == cant) {
			Nombres->Visible = false;
			contador = 0;
			btFilas->Visible = true;
		}
		lbPreguntarNombre->Text = "¿Que nombre va a tener la columna " + (contador+1).ToString() + " ?";
	}

	private: System::Void btFilas_Click(System::Object^  sender, System::EventArgs^  e) {
		btFilas->Visible = false;
		BTCONFFILA->Visible = true;
		DisponibleTXT();
		this->btCambioTabla->Visible = false;
		this->columna1ToolStripMenuItem->Visible = false;
		this->columna2ToolStripMenuItem->Visible = false;
		this->columna3ToolStripMenuItem->Visible = false;
		this->columna4ToolStripMenuItem->Visible = false;
		this->columna5ToolStripMenuItem->Visible = false;
		TXTColum1->BringToFront();
		TXTColum2->BringToFront();
		TXTColum3->BringToFront();
		TXTColum4->BringToFront();
		TXTColum5->BringToFront();
	}	

	private: System::Void BTCONFFILA_Click(System::Object^  sender, System::EventArgs^  e) {
		btFilas->Visible = true;
		this->btCambioTabla->Visible = true;
		BTCONFFILA->Visible = false;
		PasarTexto();
		contador = 0;
		while (contador < cant)
		{
			switch (contador)
			{
			case 0:
				this->columna1ToolStripMenuItem->Visible = true;
				if (tipos[contador]==1) {
					this->estaContenidoEnToolStripMenuItem->Visible = false;
					this->noEstaContenidoEnToolStripMenuItem->Visible = false;
				}
				break;
			case 1:
				this->columna2ToolStripMenuItem->Visible = true;
				if (tipos[contador] == 1) {
					this->estaContenidoEnToolStripMenuItem1->Visible = false;
					this->noEstaContenidoEnToolStripMenuItem1->Visible = false;
				}
				break;
			case 2:
				this->columna3ToolStripMenuItem->Visible = true;
				if (tipos[contador] == 1) {
					this->estaContenidoEnToolStripMenuItem2->Visible = false;
					this->noEstaContenidoEnToolStripMenuItem2->Visible = false;
				}
				break;
			case 3:
				this->columna4ToolStripMenuItem->Visible = true;
				if (tipos[contador] == 1) {
					this->estaContenidoEnToolStripMenuItem3->Visible = false;
					this->noEstaContenidoEnToolStripMenuItem3->Visible = false;
				}
				break;
			case 4:
				this->columna5ToolStripMenuItem->Visible = true;
				if (tipos[contador] == 1) {
					this->estaContenidoEnToolStripMenuItem4->Visible = false;
					this->noEstaContenidoEnToolStripMenuItem4->Visible = false;
				}
				break;
			}
			contador++;
		}
	}

	void DisponibleTXT() {
		contador = 0;
		while (contador < cant)
		{
			switch (contador)
			{
			case 0:
				TXTColum1->Location = System::Drawing::Point(x, y);
				x = x + sumx;
				TXTColum1->Visible = true;
				columna1ToolStripMenuItem->Visible = true;
				break;
			case 1:
				TXTColum2->Location = System::Drawing::Point(x, y);
				x = x + sumx;
				TXTColum2->Visible = true;
				columna2ToolStripMenuItem->Visible = true;
				break;
			case 2:
				TXTColum3->Location = System::Drawing::Point(x, y);
				x = x + sumx;
				TXTColum3->Visible = true;
				columna3ToolStripMenuItem->Visible = true;
				break;
			case 3:
				TXTColum4->Location = System::Drawing::Point(x, y);
				x = x + sumx;
				TXTColum4->Visible = true;
				columna4ToolStripMenuItem->Visible = true;
				break;
			case 4:
				TXTColum5->Location = System::Drawing::Point(x, y);
				x = x + sumx;
				TXTColum5->Visible = true;
				columna5ToolStripMenuItem->Visible = true;
				break;
			}
			contador++;
		}
		x = 60;
		contador = 0;
	}

	void PasarTexto() {
		contador = 0;
		while (contador < cant)
		{
			switch (contador)
			{
			case 0:
				AddLabel(TXTColum1,x,y);
				almacenar(TXTColum1);
				TXTColum1->Visible = false;
				TXTColum1->Text = "";
				break;
			case 1:
				AddLabel(TXTColum2, x, y);
				almacenar(TXTColum2);
				TXTColum2->Visible = false;
				TXTColum2->Text = "";
				break;
			case 2:
				AddLabel(TXTColum3, x, y);
				almacenar(TXTColum3);
				TXTColum3->Visible = false;
				TXTColum3->Text = "";
				break;
			case 3:
				AddLabel(TXTColum4, x, y);
				almacenar(TXTColum4);
				TXTColum4->Visible = false;
				TXTColum4->Text = "";
				break;
			case 4:
				AddLabel(TXTColum5, x, y);
				almacenar(TXTColum5);
				TXTColum5->Visible = false;
				TXTColum5->Text = "";
				break;
			}
			contador++;
		}
		contador = 0;
		TXTColum2->Visible = false;
		TXTColum2->Text = "";
		TXTColum3->Visible = false;
		TXTColum3->Text = "";
		TXTColum4->Visible = false;
		TXTColum4->Text = "";
		TXTColum5->Visible = false;
		TXTColum5->Text = "";
	}

	void almacenar(TextBox^txt) {
		ofstream myfile;
		myfile.open("Tablas.txt", ios::app);
		if (cambios == true) {
			myfile << endl;
			myfile << "TABLA " << CantidadTabla<<endl;
			if (CantidadTabla !=1) {
				tabla->Titulos();
			}
			cambios = false;
			myfile << endl;
		}
		String^n = txt->Text;
		string nom;
		for (int i = 0; i < n->Length; i++) {
			nom += (char)n[i];
		}

		tabla->AgregarColumnas(nom,contador+1);

		myfile << nom << "\t" << "\t";
		if (contador == cant-1) {
			myfile << endl;
			if (filas>0) {
				this->tabla->Mandar(1);
			}
			filas++;
		}

	}

	void AlmacenarFiltro(string texto) {
		ofstream myfile;
		myfile.open("Tablas.txt", ios::app);
		if (cambios == true) {
			myfile << endl;
			myfile << "TABLA " << CantidadTabla << endl << endl;
			tabla->Titulos();
			myfile << endl;
			cambios = false;
		}
		myfile << texto << "\t" << "\t";
		if (contador == cant - 1) {
			myfile << endl;
			filas++;
		}
	}

	void Escribir(vector<vector<string*>> vectordatos) {
		this->AddPanel();
		for (int i = 0; i < vectordatos.size();i++) {
			contador = 0;
			while (contador<cant)
			{
				switch (contador)
				{
				case 0:
					this->AddLabelEscritura(*vectordatos.at(i).at(contador),x,y);
					this->AlmacenarFiltro(*vectordatos.at(i).at(contador));
					break;
				case 1:
					this->AddLabelEscritura(*vectordatos.at(i).at(contador), x, y);
					this->AlmacenarFiltro(*vectordatos.at(i).at(contador));
					break;
				case 2:
					this->AddLabelEscritura(*vectordatos.at(i).at(contador), x, y);
					this->AlmacenarFiltro(*vectordatos.at(i).at(contador));
					break;
				case 3:
					this->AddLabelEscritura(*vectordatos.at(i).at(contador), x, y);
					this->AlmacenarFiltro(*vectordatos.at(i).at(contador));
					break;
				case 4:
					this->AddLabelEscritura(*vectordatos.at(i).at(contador), x, y);
					this->AlmacenarFiltro(*vectordatos.at(i).at(contador));
					break;
				}
				contador++;
			}
		}

	}

	//Menu columna 1
	private: System::Void mayorAToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Es mayor a:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 1;
		filtro = 1;
	}
	private: System::Void menorAToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Es menor a:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 1;
		filtro = 2;
	}
	private: System::Void igualAToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Es igual a:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 1;
		filtro = 3;
	}
	private: System::Void iniciaConToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Inicia con:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 1;
		MaxLen = 1;
		filtro = 4;
	}
	private: System::Void finalizaConToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Finaliza con:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 1;
		MaxLen = 1;
		filtro = 5;
	}
	private: System::Void estaContenidoEnToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Esta contenido en:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 1;
		MaxLen = 0;
		filtro = 6;
	}
	private: System::Void noEstaContenidoEnToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "No esta contenido en:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 1;
		MaxLen = 0;
		filtro = 7;
	}
	private: System::Void ordenarAscendenteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		tabla->LlamarFiltro(8, 1, "None", tipos[0]);
		this->panelCambioTabla->Visible = false;
		cambios = true;
		CantidadTabla++;
		this->Escribir(tabla->GetVector());
	}
	private: System::Void ordenarDescendenteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		tabla->LlamarFiltro(9, 1, "None", tipos[0]);
		this->panelCambioTabla->Visible = false;
		cambios = true;
		CantidadTabla++;
		this->Escribir(tabla->GetVector());
	}

	//Menu columna 2
	private: System::Void mayorAToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Es mayor a:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 2;
		filtro = 1;
	}
	private: System::Void menorAToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Es menor a:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 2;
		filtro = 2;
	}
	private: System::Void igualAToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Es igual a:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 2;
		filtro = 3;
	}
	private: System::Void iniciaConToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Inicia con:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 2;
		MaxLen = 1;
		filtro = 4;
	}
	private: System::Void finalizaConToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Finaliza con:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 2;
		MaxLen = 1;
		filtro = 5;
	}
	private: System::Void estaContenidoEnToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Esta contenido en:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 2;
		MaxLen = 0;
		filtro = 6;
	}
	private: System::Void noEstaContenidoEnToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "No esta contenido en:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 2;
		MaxLen = 0;
		filtro = 7;
	}
	private: System::Void ordenarAscendenteToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		tabla->LlamarFiltro(8, 2, "None", tipos[1]);
		this->panelCambioTabla->Visible = false;
		cambios = true;
		CantidadTabla++;
		this->Escribir(tabla->GetVector());
	}
	private: System::Void ordenarDescendenteToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		tabla->LlamarFiltro(9, 2, "None", tipos[1]);
		cambios = true;
		this->panelCambioTabla->Visible = false;
		CantidadTabla++;
		this->Escribir(tabla->GetVector());
	}

	//Menu columna 3
	private: System::Void mayorAToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Es mayor a:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 3;
		filtro = 1;
	}
	private: System::Void menorAToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Es menor a:";
		Numcolum = 3;
		this->panelCambioTabla->Visible = false;
		filtro = 2;
	}
	private: System::Void igualAToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Es igual a:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 3;
		filtro = 3;
	}
	private: System::Void iniciaConToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Inicia con:";
		Numcolum = 3;
		this->panelCambioTabla->Visible = false;
		filtro = 4;
	}
	private: System::Void finalizaConToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Finaliza con:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 3;
		filtro = 5;
	}
	private: System::Void estaContenidoEnToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->panelCambioTabla->Visible = false;
		this->lbEscoger->Text = "Esta contenido en:";
		Numcolum = 3;
		filtro = 6;
	}
	private: System::Void noEstaContenidoEnToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->panelCambioTabla->Visible = false;
		this->lbEscoger->Text = "No esta contenido en:";
		Numcolum = 3;
		filtro = 7;
	}
	private: System::Void ordenarAscendenteToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
		tabla->LlamarFiltro(8, 3, "None", tipos[2]);
		this->panelCambioTabla->Visible = false;
		cambios = true;
		CantidadTabla++;
		this->Escribir(tabla->GetVector());
	}
	private: System::Void ordenarDescendenteToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
		tabla->LlamarFiltro(9, 3, "None", tipos[2]);
		this->panelCambioTabla->Visible = false;
		cambios = true;
		CantidadTabla++;
		this->Escribir(tabla->GetVector());
	}

	//Menu columna 4
	private: System::Void mayorAToolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Es mayor a:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 4;
		filtro = 1;
	}
	private: System::Void menorAToolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Es menor a:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 4;
		filtro = 2;
	}
	private: System::Void igualAToolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Es igual a:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 4;
		filtro = 3;
	}
	private: System::Void iniciaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Inicia con:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 4;
		MaxLen = 1;
		filtro = 4;
	}
	private: System::Void finalizaConToolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Finaliza con:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 4;
		MaxLen = 1;
		filtro = 5;
	}
	private: System::Void estaContenidoEnToolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "Esta contenido en:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 4;
		MaxLen = 0;
		filtro = 6;
	}
	private: System::Void noEstaContenidoEnToolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->lbEscoger->Text = "No esta contenido en:";
		this->panelCambioTabla->Visible = false;
		Numcolum = 4;
		filtro = 7;
		MaxLen = 0;
	}
	private: System::Void ordenarAscendenteToolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
		tabla->LlamarFiltro(8, 4, "None", tipos[3]);
		this->panelCambioTabla->Visible = false;
		cambios = true;
		CantidadTabla++;
		this->Escribir(tabla->GetVector());
	}
	private: System::Void ordenarDescendenteToolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
		tabla->LlamarFiltro(9, 4, "None", tipos[3]);
		this->panelCambioTabla->Visible = false;
		cambios = true;
		CantidadTabla++;
		this->Escribir(tabla->GetVector());
	}

	//Menu columna 5
	private: System::Void mayorAToolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->panelCambioTabla->Visible = false;
		this->lbEscoger->Text = "Es mayor a:";
		Numcolum = 5;
		filtro = 1;
	}
	private: System::Void menorAToolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->panelCambioTabla->Visible = false;
		this->lbEscoger->Text = "Es menor a:";
		Numcolum = 5;
		filtro = 2;
	}
	private: System::Void igualAToolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->panelCambioTabla->Visible = false;
		this->lbEscoger->Text = "Es igual a:";
		Numcolum = 5;
		filtro = 3;
	}
	private: System::Void iniciaConToolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->panelCambioTabla->Visible = false;
		this->lbEscoger->Text = "Inicia con:";
		Numcolum = 5;
		MaxLen = 1;
		filtro = 4;
	}
	private: System::Void finalizaConToolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->panelCambioTabla->Visible = false;
		this->lbEscoger->Text = "Finaliza con:";
		Numcolum = 5;
		MaxLen = 1;
		filtro = 5;
	}
	private: System::Void estaContenidoEnToolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->panelCambioTabla->Visible = false;
		this->lbEscoger->Text = "Esta contenido en:";
		Numcolum = 5;
		filtro = 6;
		MaxLen = 0;
	}
	private: System::Void noEstaContenidoEnToolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PanelEscoger->Visible = true;
		this->PanelEscoger->BringToFront();
		this->panelCambioTabla->Visible = false;
		this->lbEscoger->Text = "No esta contenido en:";
		Numcolum = 5;
		filtro = 7;
		MaxLen = 0;
	}
	private: System::Void ordenarAscendenteToolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
		tabla->LlamarFiltro(8, 5, "None", tipos[4]);
		this->panelCambioTabla->Visible = false;
		cambios = true;
		CantidadTabla++;
		this->Escribir(tabla->GetVector());
	}
	private: System::Void ordenarDescendenteToolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
		tabla->LlamarFiltro(9, 5, "None", tipos[4]);
		this->panelCambioTabla->Visible = false;
		cambios = true;
		CantidadTabla++;
		this->Escribir(tabla->GetVector());
	}

	//Validacion de datos
	private: System::Void colum1Valid(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (tipos[0]==1) {
			if ((e->KeyChar >= '0' && e->KeyChar <= '9') || e->KeyChar == 8) {
				e->Handled = false;
			}
			else
				e->Handled = true;
		}
	}
	private: System::Void colum2Valid(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (tipos[1] == 1) {
			if ((e->KeyChar >= '0' && e->KeyChar <= '9') || e->KeyChar == 8) {
				e->Handled = false;
			}
			else
				e->Handled = true;
		}
	}
	private: System::Void colum3Valid(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (tipos[2] == 1) {
			if ((e->KeyChar >= '0' && e->KeyChar <= '9') || e->KeyChar == 8) {
				e->Handled = false;
			}
			else
				e->Handled = true;
		}
	}
	private: System::Void colum4Valid(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (tipos[3] == 1) {
			if ((e->KeyChar >= '0' && e->KeyChar <= '9') || e->KeyChar == 8) {
				e->Handled = false;
			}
			else
				e->Handled = true;
		}
	}
	private: System::Void colum5Valid(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (tipos[4] == 1) {
			if ((e->KeyChar >= '0' && e->KeyChar <= '9') || e->KeyChar == 8) {
				e->Handled = false;
			}
			else
				e->Handled = true;
		}
	}
	private: System::Void ValidarEscoger(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (tipos[Numcolum-1]==1) {
			
			if ((e->KeyChar >= '0' && e->KeyChar <= '9') || e->KeyChar==8 ) {
				e->Handled = false;
			}
			else
				e->Handled = true;
		}
	}
	

	//BotonParaConfirmarFiltro
	private: System::Void btConfirmarCambio_Click(System::Object^  sender, System::EventArgs^  e) {
		String^n = txtEscoger->Text;
		string nom;
		for (int i = 0; i < n->Length; i++) {
			nom += (char)n[i];
		}
		tabla->LlamarFiltro(filtro, Numcolum, nom, tipos[Numcolum-1]);
		filtro = 0;
		Numcolum = 0;
		this->PanelEscoger->Visible = false;
		cambios = true;
		CantidadTabla++;
		this->Escribir(tabla->GetVector());
		this->txtEscoger->Text = "";
	}
	
	private: System::Void btCambioTabla_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panelCambioTabla->Visible = true;
		int px = ClientSize.Width / 2 - panelCambioTabla->Size.Width / 2;
		int py = ClientSize.Height / 2 - panelCambioTabla->Size.Height / 2;
		this->panelCambioTabla->Location = System::Drawing::Point(px, py);
		string text;
		text = "¿A que tabla desea cambiar?\n Existen ";
		string text2;
		text2 = " tablas";
		String^ nom = gcnew String(text.c_str());
		String^num = gcnew String(text2.c_str());
		this->lbCambioTabla->Text = nom + CantidadTabla.ToString()+num;
		this->panelCambioTabla->BringToFront();
	}

	private: System::Void TablaValid(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((e->KeyChar >= '0' && e->KeyChar <= '9') || e->KeyChar == 8) {
			e->Handled = false;
		}
		else
			e->Handled = true;
	}

	private: System::Void btConfirCambioTabla_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panelCambioTabla->Visible = false;
		this->tabla->VaciarTodo();
		int a = Convert::ToInt16(this->txtCambioTabla->Text);
		this->tabla->LeerColumna(a);
		this->tabla->Mandar(tabla->GetFilas());
		cambios = true;
		CantidadTabla++;
		this->Escribir(this->tabla->GetVector());
		txtCambioTabla->Text = "";
	}
};
}
