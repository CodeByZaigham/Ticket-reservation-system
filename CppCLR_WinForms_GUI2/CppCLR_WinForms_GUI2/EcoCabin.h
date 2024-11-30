#pragma once
#include "Cabin.h"
#include<iostream>
ref class EcoCabin : public Cabin
{
public:
    EcoCabin() {
        SeatLimit = 50;
    }
};

