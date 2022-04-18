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

bool Natural::isPrime() {
    if (this->value == 2 || this->value == 3)
        return true;

    if (this->value <= 1 || this->value % 2 == 0 || this->value % 3 == 0)
        return false;

    for (int i = 5; i * i <= this->value; i += 6)
    {
        if (this->value % i == 0 || this->value % (i + 2) == 0)
            return false;
    }

    return true;
}