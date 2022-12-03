#ifndef QCOMP_H_12_2_2022_21_59
#define QCOMP_H_12_2_2022_21_59

#include "Gate.h"
#include "State.h"

class QComp
{
public:
    QComp();
    ~QComp();
    void clear();
    void applyCNot(int q1, int q2);
    void applyH(int q);
    void applyX(int q);
    void applyY(int q);
    void applyZ(int q);
    bool measure(int q);

private:
    State *state;
};

#endif
