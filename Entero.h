//
// Created by Usuario on 4/18/2022.
//

#ifndef BASE_CPP_ENTERO_H
#define BASE_CPP_ENTERO_H
#include "Natural.h"


class Entero : public Natural {
public:
	Entero();
	Entero(int value);
	~Entero();
	bool isNatural();
	
};

#endif //BASE_CPP_ENTERO_H
