#ifndef H_GATE_CPP_QCOMP_12_3_2022_17_55
#define H_GATE_CPP_QCOMP_12_3_2022_17_55

#include "OneQubitGate.h"

OneQubitGate::OneQubitGate()
{
    // Default: identity
    this->matrix[0][0] = Amplitude(1, 0);
    this->matrix[0][1] = Amplitude(0, 0);
    this->matrix[1][0] = Amplitude(0, 0);
    this->matrix[1][1] = Amplitude(1, 0);
}

OneQubitGate::OneQubitGate(Amplitude matrix[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            this->matrix[i][j] = matrix[i][j];
        }
    }
}

OneQubitGate::~OneQubitGate() {}

void OneQubitGate::applyGate(State *state, int *targets) const
{
    applyGate(state, targets[0]);
}

void OneQubitGate::applyGate(State *state, int target) const
{
    // TODO test applyGate()
    // Swap target qubit to index 0
    Amplitude targetAmplitude = state->get(target);
    state->set(target, state->get(0));
    state->set(0, targetAmplitude);

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

    // Swap target qubit back
    targetAmplitude = state->get(target);
    state->set(target, state->get(0));
    state->set(0, targetAmplitude);
}

int OneQubitGate::getSize() const
{
    return 2;
}

#endif
