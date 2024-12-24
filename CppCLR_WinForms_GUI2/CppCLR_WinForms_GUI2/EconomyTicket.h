#pragma once
#include "Ticket.h"
#include<iostream>
#include <string>

using namespace System;
using namespace System::IO;

ref class EconomyTicket : public Ticket
{
public:

    EconomyTicket(String^ to, String^ from, String^ date, String^ time , int price) : Ticket(to, from,date,time, price) {}

    EconomyTicket() {}

    bool setPrice(int amount, String^ type) {
        if (amount < 1 || String::IsNullOrEmpty(type), String::IsNullOrWhiteSpace(type)) {
            return false;
        }

        if (type != "One Way" && type != "Return") {
            return false;
        }

        if (type == "One Way") {
            price = amount;
            return true;
        }


        price = amount * 2;
        return true;

    }
};

