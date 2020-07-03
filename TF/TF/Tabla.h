#pragma once
#include "Fila.h"
#include "Columna.h"

ref class CTabla
{
	CColumna* colum = new CColumna;
	CFila* fila = new CFila ;
	bool mandarfila;
public:
	CTabla();
	~CTabla();

	void Titulos();
	void AgregarColumnas(string dato, int columna);
	void CantColum(int a);
	void Mandar(int filas);
	void LlamarFiltro(int filtro, int colum, string dato, int tipo);
	vector<vector<string*>> GetVector();
	void VaciarTodo();
	void LeerColumna(int tab);
	int GetFilas();
};


CTabla::CTabla()
{
	mandarfila = false;
}


CTabla::~CTabla()
{
}


void CTabla::AgregarColumnas(string dato , int columna) {
	this->colum->agregardato(dato, columna);
}

void CTabla::CantColum(int a) {
	this->colum->setNcolumnas(a);
}

void CTabla::Mandar(int filas) {
	if (filas>1) {
		colum->SetContador(1);
	}
	for (int i = 0; i < filas;i++) {
		fila->recibirvector(colum->LlenarYRetornar(fila->enviarvector()));
	}
}

void  CTabla::LlamarFiltro(int filtro, int colum, string dato,int tipo) {
	fila->Filtros(filtro,colum,dato,tipo);
}

vector<vector<string*>> CTabla::GetVector() {
	return this->fila->GetVectorFilas();
}

void CTabla::Titulos() {
	this->colum->AgregarTitulos();
}

void CTabla::VaciarTodo(){
	this->fila->LimpiarDV();

	this->colum->LimpiarColumnas();
}

void CTabla::LeerColumna(int tab) {
	this->colum->LeerYMandar(tab);
}

int CTabla::GetFilas() {
	return this->colum->GetFilas();
}