#ifndef GENGATE_CPP_QCOMP_12_3_2022_17_43
#define GENGATE_CPP_QCOMP_12_3_2022_17_43

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

GenGate::~GenGate() {}

void GenGate::applyGate(State *state, int *targets) const
{
    applyGate(state);
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

int GenGate::getSize() const
{
    return SIZE;
}

#endif
