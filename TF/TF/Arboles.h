#pragma once
#include "Librerias.h"

#define max(a, b) (a > b? a : b)

using namespace std;

template<typename T, typename R = T>
class AVLBST {
	struct Node;
	Node*           root;
	function<R(T)>  key;
	int             len;
public:
	AVLBST(function<R(T)> key = [](T a ) { return a; })
		: key(key), root(nullptr), len(0) {}
	~AVLBST() { clear(root); }

	int height() { return height(root); }
	int size() { return len; }
	void clear() { clear(root); len = 0; }

	void add(T elem,int tipo) { add(root, elem,tipo); }

	R find(R val) { return find(root, val); }
	R greaterThan(R val) { return greaterThan(root, val); }

	

	void LlamarFiltro(R eleme, vector<T>& vectorps, int filtro, int tipo);
private:
	
	void MayorQue(Node* node, R elem, vector<T>& vectorps, int tipo);
	void MenorQue(Node* node, R elem, vector<T>& vectorps, int tipo);
	void IgualQue(Node* node, R elem, vector<T>& vectorps);
	void IniciaCon(Node* node, R elem, vector<T>& vectorps);
	void FinalizaCon(Node* node, R elem, vector<T>& vectorps);
	void IncluidoEn(Node* node, R elem, vector<T>& vectorps);
	void NoIncluidoEn(Node* node, R elem, vector<T>& vectorps);
	void Ascendente(Node* node, vector<T>& vectorps);
	void Descendente(Node* node, vector<T>& vectorps);

	void    clear(Node*& node);
	int     height(Node* node);
	void    add(Node*& node, T elem,int tipo);
	R       find(Node* node, R val, int tipo);
	R       greaterThan(Node* node, R val, int tipo);

	void    updateHeight(Node* node);
	void    rotateLeft(Node*& node);
	void    rotateRight(Node*& node);
	void    balance(Node*& node);
};

template<typename T, typename R>
void AVLBST<T, R>::clear(Node*& node) {
	if (node != nullptr) {
		clear(node->left);
		clear(node->right);
		delete node;
		node = nullptr;
	}
}

template<typename T, typename R>
struct AVLBST<T, R>::Node {
	T       element;
	Node*   left;
	Node*   right;
	int     height;

	Node(T element)
		: element(element), height(0),
		left(nullptr), right(nullptr) {}
};

template<typename T, typename R>
int AVLBST<T, R>::height(Node* node) {
	return node == nullptr ? -1 : node->height;
}

template<typename T, typename R>
void AVLBST<T, R>::add(Node*& node, T elem, int tipo) {
	int j;
	j = 0;
	if (tipo==0) {
		if (node == nullptr) {
			node = new Node(elem);
			++len;
		}
		else {
			if (key(elem) < key(node->element)) {
				add(node->left, elem,tipo);
			}
			else {
				add(node->right, elem, tipo);
			}
			balance(node);
		}
	}
	else {
		if (node == nullptr) {
			node = new Node(elem);
			++len;
		}
		else {
			if ((key(elem)).size()<(key(node->element)).size()) {
				add(node->left, elem, tipo);
			}
			else if ((key(elem)).size() > (key(node->element)).size()) {
				add(node->right, elem, tipo);
			}
			else {
				for (int i = 0; i < (key(elem)).size();i++) {
					j = 1;
					if ((key(elem)).at(i) < (key(node->element)).at(i)) {
						add(node->left, elem, tipo);
						j = 0;
						break;
					}
					else if ((key(elem)).at(i) > (key(node->element)).at(i)) {
						add(node->right, elem, tipo);
						j = 0;
						break;
					}
					
				}
				if (j !=0) {
					add(node->left, elem, tipo);
				}
			}
			balance(node);
		}
	}
}

template<typename T, typename R>
R AVLBST<T, R>::find(Node* node, R val,int tipo) {
	if (node == nullptr) {
		return "None";
	}
	else if (val == key(node->element)) {
		return node->element;
	}
	else if (val < key(node->element)) {
		return find(node->left, val);
	}
	else {
		return find(node->right, val);
	}
}

template<typename T, typename R>
R AVLBST<T, R>::greaterThan(Node* node, R val, int tipo) {
	if (node == nullptr) {
		if (tipo == 1) {
			return 0
		}
		else
			return "NONE";
	}
	else if (val < key(node->element)) {
		return node->element;
	}
	return greaterThan(node->right, val);
}

template<typename T, typename R>
void AVLBST<T, R>::updateHeight(Node* node) {
	if (node != nullptr) {
		int hl = height(node->left);
		int hr = height(node->right);

		node->height = max(hl, hr) + 1;
	}
}

template<typename T, typename R>
void AVLBST<T, R>::rotateLeft(Node*& node) {
	Node* aux = node->right;
	node->right = aux->left;
	updateHeight(node);
	aux->left = node;
	updateHeight(aux);
	node = aux;
}

template<typename T, typename R>
void AVLBST<T, R>::rotateRight(Node*& node) {
	Node* aux = node->left;
	node->left = aux->right;
	updateHeight(node);
	aux->right = node;
	updateHeight(aux);
	node = aux;
}

template<typename T, typename R>
void AVLBST<T, R>::balance(Node*& node) {
	int hl = height(node->left);
	int hr = height(node->right);

	if (hr - hl < -1) {
		hl = height(node->left->left);
		hr = height(node->left->right);
		if (hr > hl) {
			rotateLeft(node->left);
		}
		rotateRight(node);
	}
	else if (hr - hl > 1) {
		hl = height(node->right->left);
		hr = height(node->right->right);
		if (hl > hr) {
			rotateRight(node->right);
		}
		rotateLeft(node);
	}
	else {
		updateHeight(node);
	}
}


template<typename T, typename R>
void AVLBST<T, R>::LlamarFiltro(R eleme, vector<T>& vectorps,int filtro, int tipo) {
	switch (filtro)	{
	case 1:
		//Mayor que
		this->MayorQue(root,eleme,vectorps,tipo);
		break;
	case 2:
		//Menor Que
		this->MenorQue(root,eleme, vectorps,tipo);
		break;
	case 3:
		//Igual que
		this->IgualQue(root,eleme, vectorps);
		break;
	case 4:
		//Inicia con
		this->IniciaCon(root,eleme, vectorps);
		break;
	case 5:
		//Finaliza con
		this->FinalizaCon(root,eleme, vectorps);
		break;
	case 6:
		//Esta Incluido en
		this->IncluidoEn(root, eleme, vectorps);
		break;
	case 7:
		//No Esta Incluido en
		this->NoIncluidoEn(root, eleme, vectorps);
		break;
	case 8:
		//Ascendente
		this->Ascendente(root, vectorps);
		break;
	case 9:
		//Descendente
		this->Descendente(root,vectorps);
		break;
	}
}

template<typename T, typename R>
void AVLBST<T, R>::MayorQue(Node* node, R elem, vector<T>& vectorps,int tipo) {
	if (node != nullptr){
		if (tipo==0) {
			if (key(node->element) > elem) {
				vectorps.push_back(node->element);
			}
			MayorQue(node->left, elem, vectorps, tipo);
			MayorQue(node->right, elem, vectorps, tipo);
		}
		else
		{
			if (elem.size() < (key(node->element)).size()) {
				vectorps.push_back(node->element);
			}
			else if (elem.size() == (key(node->element)).size()) {
				int i = 0;
				if (elem.at(i) < (key(node->element)).at(i)) {
					vectorps.push_back(node->element);
				}
				while (elem.at(i) == (key(node->element)).at(i))
				{
					i++;
					if (elem.at(i) < (key(node->element)).at(i)) {
						vectorps.push_back(node->element);
						break;
					}
					
				}
			}
			MayorQue(node->left, elem, vectorps, tipo);
			MayorQue(node->right, elem, vectorps, tipo);
		}
	}
}

template<typename T, typename R>
void AVLBST<T, R>::MenorQue(Node* node, R elem, vector<T>& vectorps, int tipo) {
	if (node != nullptr) {
		if (tipo==0) {
			if (key(node->element) < elem) {
				vectorps.push_back(node->element);
			}
			MenorQue(node->left, elem, vectorps,tipo);
			MenorQue(node->right, elem, vectorps, tipo);
		}
		else {
			if (elem.size() > ((key(node->element)).size())) {
				vectorps.push_back(node->element);
			}
			else if (elem.size() == (key(node->element)).size()) {
				int i = 0;
				if (elem.at(i) > (key(node->element)).at(i)) {
					vectorps.push_back(node->element);
				}
				while (elem.at(i) == (key(node->element)).at(i))
				{
					i++;
					if (elem.at(i) > (key(node->element)).at(i)) {
						vectorps.push_back(node->element);
						break;
					}
				}
			}
			MenorQue(node->left, elem, vectorps, tipo);
			MenorQue(node->right, elem, vectorps, tipo);
		}
	}
}

template<typename T, typename R>
void AVLBST<T, R>::IgualQue(Node* node, R elem, vector<T>& vectorps) {
	if (node != nullptr) {
		if (key(node->element) == elem) {
			vectorps.push_back(node->element);
		}
		IgualQue(node->left, elem, vectorps);
		IgualQue(node->right, elem, vectorps);
	}
}

template<typename T, typename R>
void AVLBST<T, R>::IniciaCon(Node* node, R elem, vector<T>& vectorps) {
	int j = 0;
	if (node != nullptr) {

		for (int i = 0; i < elem.size(); ++i) {
			if (key(node->element).at(i) == toupper(elem.at(i)) || key(node->element).at(i) == tolower(elem.at(i)))
				j++;

			if (j == elem.size())
				vectorps.push_back(node->element);
		}


		IniciaCon(node->left, elem, vectorps);
		IniciaCon(node->right, elem, vectorps);

	}
}

template<typename T, typename R>
void AVLBST<T, R>::FinalizaCon(Node* node, R elem,vector<T>& vectorps) {
	int j = 0;
	if (node != nullptr) {

		for (int i = 1; i <= elem.size(); ++i) {
			if (key(node->element).at(key(node->element).size() - i) == toupper(elem.at(elem.size() - i)) ||
				key(node->element).at(key(node->element).size() - i) == tolower(elem.at(elem.size() - i)))
				j++;

			if (j == elem.size())
				vectorps.push_back(node->element);
		}


		FinalizaCon(node->left, elem, vectorps);
		FinalizaCon(node->right, elem, vectorps);
	}
}

template<typename T, typename R>
void AVLBST<T, R>::IncluidoEn(Node* node, R elem, vector<T>& vectorps) {
	int a = 0;
	int j = 1;
	bool entro=false;
	if (node != nullptr) {
		entro = false;
		for (int i = 0; i < key(node->element).size();i++) {
			if (key(node->element).at(i)== toupper(elem.at(0)) || key(node->element).at(i) == tolower(elem.at(0))) {
				a = i+1;
				while (j<=elem.size()) {
					if (j == elem.size()) {
						vectorps.push_back(node->element);
						entro = true;
						break;
					}
					if (key(node->element).at(a) == tolower(elem.at(j))) {
						j++;
						a++;
					}
					else
						break;
				}
				a = 0;
				j = 1;
			}
			if (entro==true) {
				break;
			}
		}
		IncluidoEn(node->left, elem, vectorps);
		IncluidoEn(node->right, elem, vectorps);
	}
}

template<typename T, typename R>
void AVLBST<T, R>::NoIncluidoEn(Node* node, R elem, vector<T>& vectorps) {
	int a = 0;
	int j = 1;
	bool entro = false;
	if (node != nullptr) {
		entro = false;
		for (int i = 0; i < key(node->element).size(); i++) {
			if (key(node->element).at(i) == toupper(elem.at(0)) || key(node->element).at(i) == tolower(elem.at(0))) {
				a = i + 1;
				while (j <= elem.size()) {
					if (j == elem.size()) {
						entro = true;
						break;
					}
					if (key(node->element).at(a) == tolower(elem.at(j))) {
						j++;
						a++;
					}
					else
						break;
				}
				a = 0;
				j = 1;
			}
			if (entro == true) {
				break;
			}
		}
		if (entro==false) {
			vectorps.push_back(node->element);
		}
		NoIncluidoEn(node->left, elem, vectorps);
		NoIncluidoEn(node->right, elem, vectorps);
	}
}

template<typename T, typename R>
void AVLBST<T, R>::Ascendente(Node* node, vector<T>& vectorps) {
	if (node != nullptr) {
		Ascendente(node->left, vectorps);
		vectorps.push_back(node->element);
		Ascendente(node->right, vectorps);
	}
}

template<typename T, typename R>
void AVLBST<T, R>::Descendente(Node* node, vector<T>& vectorps) {
	if (node != nullptr) {
		Descendente(node->right, vectorps);
		vectorps.push_back(node->element);
		Descendente(node->left, vectorps);
	}
}