#ifndef CNOT_GATE_H_QCOMP_12_3_2022_17_55
#define CNOT_GATE_H_QCOMP_12_3_2022_17_55

#include "Gate.h"

class CNotGate : public Gate
{
public:
    CNotGate();
    ~CNotGate();
    void applyGate(State *state, int *targets) const;
    int getSize() const;
};

#endif
