#pragma once
#include "Cabin.h"
#include<iostream>
ref class BussCabin : public Cabin
{
public:
    BussCabin() {
        SeatLimit = 20;
    }
};

