#pragma once

#include "QComp.h"

int main()
{

    Amplitude z(2, 3);
    Amplitude w(4, 5);

    z = Amplitude::add(z, w);

    return 0;
}
