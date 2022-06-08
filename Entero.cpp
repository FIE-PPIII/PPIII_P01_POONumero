//
// Created by Usuario on 6/8/2022.
//

#include "Entero.h"

using namespace std;

Entero::Entero(){
    this->value = 0;
}

Entero::Entero(int value) {
    this->value = value;
}

Entero::~Entero(){}

bool Entero::isNatural() {
	return this->value >= 1;
}
