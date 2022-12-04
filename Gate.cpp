#ifndef GATE_CPP_QCOMP_12_2_2022_21_55
#define GATE_CPP_QCOMP_12_2_2022_21_55

#include "Gate.h"

Gate::Gate()
{
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            this->matrix[i][j] = (i == j) ? Amplitude(1, 0) : Amplitude(0, 0);
        }
    }
}

Gate::Gate(Amplitude matrix[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            this->matrix[i][j] = matrix[i][j];
        }
    }
}

Gate::~Gate()
{
    //
}

void Gate::applyGate(State *state) const
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

#endif
