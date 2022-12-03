#ifndef MAIN_QCOMP_12_2_2022_21_55
#define MAIN_QCOMP_12_2_2022_21_55

#include "QComp.h"

int main()
{

    Amplitude z(2, 3);
    Amplitude w(4, 5);

    z = Amplitude::add(z, w);

    return 0;
}

#endif
