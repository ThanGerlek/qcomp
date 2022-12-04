#ifndef STATE_CPP_QCOMP_12_2_2022_21_55
#define STATE_CPP_QCOMP_12_2_2022_21_55

#include <cmath>
#include <sstream>
#include "State.h"

State::State()
{
    initStateVector();
}

State::~State() {}

void State::initStateVector()
{
    this->stateVector[0] = Amplitude(1, 0);
    for (int i = 1; i < SIZE; ++i)
    {
        this->stateVector[i] = Amplitude();
    }
}

std::string State::toString()
{
    std::stringstream ss;
    ss << "[ ";
    for (int i = 0; i < SIZE; ++i)
    {
        ss << stateVector[i].toString() << " ";
    }
    ss << "]" << std::endl;
    return ss.str();
}

void State::normalize()
{
    double sum = 0;
    for (int i = 0; i < SIZE; ++i)
    {
        sum += stateVector[i].normSq();
    }

    sum = std::sqrt(sum);

    for (int i = 0; i < SIZE; ++i)
    {
        stateVector[i].scaleD(sum);
    }
}

void State::set(int i, Amplitude val)
{
    stateVector[i] = val;
}

Amplitude State::get(int i)
{
    return stateVector[i];
}

void State::setStateVector(Amplitude sVector[SIZE])
{
    for (int i = 0; i < SIZE; ++i)
    {
        this->stateVector[i] = sVector[i];
    }
}

#endif
