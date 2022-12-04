#ifndef GENGATE_H_QCOMP_12_3_2022_17_43
#define GENGATE_H_QCOMP_12_3_2022_17_43

#include "Gate.h"

class GenGate : public Gate
{
public:
    GenGate();
    GenGate(Amplitude matrix[SIZE][SIZE]);
    ~GenGate();
    void applyGate(State *state) const;
    int getSize() const;

private:
    Amplitude matrix[SIZE][SIZE];
};

#endif
