#pragma once
#include "Librerias.h"
#include "Arboles.h"

class CFila
{
	vector<vector<string*>> vectordatos;
	int cantidad;
	int cont;
public:
	CFila();
	~CFila();

	void setcant(int a);
	vector<string*> enviarvector();
	void recibirvector(vector<string*>& fill);
	void LimpiarDV();
	void Filtros(int filtro, int colum, string elem, int tipo);
	void COL1(int filtro,string elem, int tipo);
	void COL2(int filtro,string elem, int tipo);
	void COL3(int filtro,string elem, int tipo);
	void COL4(int filtro,string elem, int tipo);
	void COL5(int filtro,string elem, int tipo);
	vector<vector<string*>> GetVectorFilas();
};


CFila::CFila()
{
	cont = 0;
}


CFila::~CFila()
{
}


void CFila::setcant(int a){
	this->cantidad = a;
}

vector<string*> CFila::enviarvector() {
	vector<string*> fil;
	return fil;
}

void CFila::recibirvector(vector<string*>& fill) {
	vectordatos.push_back(fill);
}


void CFila::LimpiarDV() {
	vectordatos.clear();
}

void CFila::Filtros(int filtro , int colum, string elem, int tipo) {
	switch (colum)
	{
	case 1:
		this->COL1(filtro, elem,  tipo);
		break;
	case 2:
		this->COL2(filtro, elem, tipo);
		break;
	case 3:
		this->COL3(filtro, elem, tipo);
		break;
	case 4:
		this->COL4(filtro, elem, tipo);
		break;
	case 5:
		this->COL5(filtro, elem, tipo);
		break;
	}
}

void  CFila::COL1(int filtro,string elem, int tipo) {
	auto func = [](vector<string*> a) { return *a.at(0); };
	AVLBST<vector<string*>, string>* arbolitoc1 = new AVLBST<vector<string*>, string>(func);
	for (int i = 0; i < vectordatos.size(); i++) {
		arbolitoc1->add(vectordatos.at(i),tipo);
	}
	this->LimpiarDV();
	arbolitoc1->LlamarFiltro(elem,vectordatos,filtro, tipo);
	delete arbolitoc1;
}
void  CFila::COL2(int filtro, string elem, int tipo) {
	auto func = [](vector<string*> a) { return *a.at(1); };
	AVLBST<vector<string*>, string>* arbolitoc1 = new AVLBST<vector<string*>, string>(func);
	for (int i = 0; i < vectordatos.size(); i++) {
		arbolitoc1->add(vectordatos.at(i), tipo);
	}
	this->LimpiarDV();
	arbolitoc1->LlamarFiltro(elem, vectordatos, filtro, tipo);
	delete arbolitoc1;
}
void  CFila::COL3(int filtro, string elem, int tipo) {
	auto func = [](vector<string*> a) { return *a.at(2); };
	AVLBST<vector<string*>, string>* arbolitoc1 = new AVLBST<vector<string*>, string>(func);
	for (int i = 0; i < vectordatos.size(); i++) {
		arbolitoc1->add(vectordatos.at(i), tipo);
	}
	this->LimpiarDV();
	arbolitoc1->LlamarFiltro(elem, vectordatos, filtro, tipo);
	delete arbolitoc1;
}
void  CFila::COL4(int filtro, string elem, int tipo) {
	auto func = [](vector<string*> a) { return *a.at(3); };
	AVLBST<vector<string*>, string>* arbolitoc1 = new AVLBST<vector<string*>, string>(func);
	for (int i = 0; i < vectordatos.size(); i++) {
		arbolitoc1->add(vectordatos.at(i), tipo);
	}
	this->LimpiarDV();
	arbolitoc1->LlamarFiltro(elem, vectordatos, filtro, tipo);
	delete arbolitoc1;
}
void  CFila::COL5(int filtro, string elem, int tipo) {
	auto func = [](vector<string*> a) { return *a.at(4); };
	AVLBST<vector<string*>, string>* arbolitoc1 = new AVLBST<vector<string*>, string>(func);
	for (int i = 0; i < vectordatos.size(); i++) {
		arbolitoc1->add(vectordatos.at(i), tipo);
	}
	this->LimpiarDV();
	arbolitoc1->LlamarFiltro(elem, vectordatos, filtro, tipo);
	delete arbolitoc1;
}

vector<vector<string*>> CFila::GetVectorFilas() {
	return this->vectordatos;
}