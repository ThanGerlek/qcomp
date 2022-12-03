#ifndef STATE_CPP_QCOMP_12_2_2022_21_55
#define STATE_CPP_QCOMP_12_2_2022_21_55

#include "State.h"

State::State()
{
    //
    initMatrix();
}

State::~State()
{
    //
}

void State::initMatrix()
{
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            this->matrix[i][j] = new Amplitude();
        }
    }
}

std::string State::toString()
{
    //
}

void State::normalize()
{
    double avg = 0;
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; j++)
        {
            avg += matrix[i][j]->norm();
        }
    }

    avg /= SIZE * SIZE;

    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; j++)
        {
            matrix[i][j]->scaleD(avg);
        }
    }
}

#endif
