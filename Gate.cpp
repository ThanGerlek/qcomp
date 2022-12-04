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

#endif
