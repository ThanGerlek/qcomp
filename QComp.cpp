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

void QComp::apply(Gate *gate, int *targets)
{
    gate->applyGate(this->state, targets);
}

bool QComp::measure(int q)
{
    // TODO
    return false;
}

void QComp::printState()
{
    std::cout << state->toString();
}

#endif
