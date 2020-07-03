#pragma once
#include "Librerias.h"

class CColumna
{
	vector<string> c1;
	vector<string> c2;
	vector<string> c3;
	vector<string> c4;
	vector<string> c5;
	int contador;
	int Ncolumas;
	int filas;
public:
	CColumna();
	~CColumna();

	void AgregarTitulos();
	void agregardato(string elem, int columna);
	vector<string*> LlenarYRetornar(vector<string*>& fill);
	void setNcolumnas(int a);
	void LimpiarColumnas();
	void LeerYMandar(int tab);
	int GetFilas();
	void SetContador(int a);
};


CColumna::CColumna()
{
	contador = 1;
}


CColumna::~CColumna()
{
	this->LimpiarColumnas();
}


void CColumna::agregardato(string elem, int columna) {
	switch (columna)
	{
	case 1:
		c1.push_back(elem);
		break;
	case 2:
		c2.push_back(elem);
		break;
	case 3:
		c3.push_back(elem);
		break;
	case 4:
		c4.push_back(elem);
		break;
	case 5:
		c5.push_back(elem);
		break;
	}

}

vector<string*> CColumna::LlenarYRetornar(vector<string*>& fill) {
	if (Ncolumas >=1) {
		string *dato1;
		dato1 = new string;
		*dato1 = c1.at(contador);
		fill.push_back(dato1);
	}
	if (Ncolumas >= 2) {
		string *dato2;
		dato2 = new string;
		*dato2 = c2.at(contador);
		fill.push_back(dato2);
	}
	if (Ncolumas >= 3) {
		string *dato3;
		dato3 = new string;
		*dato3 = c3.at(contador);
		fill.push_back(dato3);
	}
	if (Ncolumas >= 4) {
		string *dato4;
		dato4 = new string;
		*dato4 = c4.at(contador);
		fill.push_back(dato4);
	}
	if (Ncolumas >= 5) {
		string *dato5;
		dato5 = new string;
		*dato5 = c5.at(contador);
		fill.push_back(dato5);
	}
	contador++;
	return fill;
}

void CColumna::setNcolumnas(int a) {
	this->Ncolumas = a;
}

void CColumna::AgregarTitulos() {
	ofstream myfile;
	myfile.open("Tablas.txt", ios::app);
	if (Ncolumas >= 1) {
		myfile << c1.at(0) << "\t" << "\t";
	}
	if (Ncolumas >= 2) {
		myfile << c2.at(0) << "\t" << "\t";
	}
	if (Ncolumas >= 3) {
		myfile << c3.at(0) << "\t" << "\t";
	}
	if (Ncolumas >= 4) {
		myfile << c4.at(0) << "\t" << "\t";
	}
	if (Ncolumas >= 5) {
		myfile << c5.at(0) << "\t" << "\t";
	}
}

void CColumna::LimpiarColumnas() {
	c1.clear();
	c2.clear();
	c3.clear();
	c4.clear();
	c5.clear();
}

void CColumna::LeerYMandar(int tab) {
	ifstream myfile;
	myfile.open("Tablas.txt");
	string text;
	int cont=0;
	for (int i = 0; i < tab;i++) {
		myfile >> text;
		while (text != "TABLA")
		{
			myfile >> text;
		}
	}
	myfile >> text;
	while (text != "TABLA")
	{
		myfile >> text;
		if (text == "TABLA") {
			break;
		}
		else {
			if (Ncolumas >= 1) {
				c1.push_back(text);
			}
			if (Ncolumas >= 2) {
				myfile >> text;
				c2.push_back(text);
			}
			if (Ncolumas >= 3) {
				myfile >> text;
				c3.push_back(text);
			}
			if (Ncolumas >= 4) {
				myfile >> text;
				c4.push_back(text);
			}
			if (Ncolumas >= 5) {
				myfile >> text;
				c5.push_back(text);
			}
		}
	}
	
}

int CColumna::GetFilas() {
	filas = c1.size() - 1;
	return filas;
}

void CColumna::SetContador(int a) {
	this->contador = a;
}