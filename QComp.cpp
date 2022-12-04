#ifndef QCOMP_CPP_12_2_2022_21_55
#define QCOMP_CPP_12_2_2022_21_55

#include <iostream>
#include "QComp.h"

QComp::QComp()
{
    this->state = new State();
}

QComp::~QComp()
{
    delete this->state;
}

void QComp::apply(Gate *gate)
{
    gate->applyGate(this->state);
}

bool QComp::measure(int q) {
    // TODO
}

void QComp::printState()
{
    std::cout << state->toString();
}

#endif
