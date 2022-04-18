//
// Created by Usuario on 4/18/2022.
//

#include "Natural.h"

using namespace std;

Natural::Natural(int value) {
    this->value = value;
}

void Natural::sum(Natural num) {
    this->value = this->value + num.value;
}

void Natural::multiply(Natural num) {
    this->value = this->value * num.value;
}

