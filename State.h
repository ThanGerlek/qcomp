#ifndef STATE_H_QCOMP_12_2_2022_21_55
#define STATE_H_QCOMP_12_2_2022_21_55

#include "Amplitude.h"

#ifndef SIZE
#define SIZE 4
#endif

class State
{
public:
    State();
    ~State();
    std::string toString();
    void normalize();
    void set(int i, Amplitude val);
    Amplitude get(int i);
    void initStateVector();
    void setStateVector(Amplitude stateVector[SIZE]);

private:
    Amplitude stateVector[SIZE];
};

#endif
