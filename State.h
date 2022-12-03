#pragma once

#include "Amplitude.h"

#ifndef SIZE
#define SIZE 8
#endif

class State
{
public:
    State();
    ~State();
    std::string toString();
    void normalize();

private:
    Amplitude *matrix[SIZE][SIZE];
    void initMatrix();
};
