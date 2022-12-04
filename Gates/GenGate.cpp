#ifndef GATE_CPP_QCOMP_12_2_2022_21_55
#define GATE_CPP_QCOMP_12_2_2022_21_55

#include "GenGate.h"

GenGate::GenGate()
{
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            this->matrix[i][j] = (i == j) ? Amplitude(1, 0) : Amplitude(0, 0);
        }
    }
}

GenGate::GenGate(Amplitude matrix[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            this->matrix[i][j] = matrix[i][j];
        }
    }
}

GenGate::~GenGate()
{
    //
}

void GenGate::applyGate(State *state) const
{
    // ultra-naive method: O(n^2), out-of-place
    Amplitude newSVector[SIZE];
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            Amplitude product = Amplitude::mult2(state->get(j), this->matrix[i][j]);
            newSVector[i].add(product);
        }
    }
    state->setStateVector(newSVector);
}

int GenGate::getSize() const {
    return SIZE;
}

#endif
