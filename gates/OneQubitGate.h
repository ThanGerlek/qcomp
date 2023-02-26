#ifndef H_GATE_H_QCOMP_12_3_2022_17_55
#define H_GATE_H_QCOMP_12_3_2022_17_55

#include "Gate.h"

class OneQubitGate : public Gate
{
public:
    OneQubitGate();
    OneQubitGate(Amplitude matrix[2][2]);
    ~OneQubitGate();
    void applyGate(State *state, int *targets) const;
    void applyGate(State *state, int target) const;
    void applyGate(State *state) const;
    int getSize() const;
    void printMatrix() const;

private:
    Amplitude matrix[2][2];
    Amplitude fullMatrix[SIZE][SIZE];
    void generateFullMatrix();
    void generateFullMatrix(int n);
};

#endif
