//
// Created by Usuario on 4/18/2022.
//

#ifndef BASE_CPP_NATURAL_H
#define BASE_CPP_NATURAL_H


class Natural {
private:
    int value;
public:

    Natural(int value);
    ~Natural();
    void setNatural(int num);
    int getNatural();
    bool isOne();
    bool isPrime();
    bool isCompound();
    bool isNatural();
    void sum(int num);
    void sum(Natural num);
    void multiply(int num);
    void multiply(Natural num);

};

inline int Natural::getNatural() {
    return this->value;
}

inline void Natural::setNatural(int num) {
    this->value = num;
}

inline bool Natural::isOne() {
    return this->value == 1;
}

inline void Natural::sum(int num) {
    this->value = this->value + num;
}

inline void Natural::multiply(int num) {
    this->value = this->value * num;
}

inline bool Natural::isNatural() {
    return true;
}

#endif //BASE_CPP_NATURAL_H
