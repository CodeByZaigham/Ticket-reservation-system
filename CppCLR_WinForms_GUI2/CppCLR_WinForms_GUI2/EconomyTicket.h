#pragma once
#include "Ticket.h"
#include<iostream>
#include <string>

using namespace System;
using namespace System::IO;

ref class EconomyTicket : public Ticket
{
public:

    EconomyTicket(String^ id, String^ to, String^ from, int price) : Ticket(id, to, from, price) {}

    EconomyTicket() {}

    bool setPrice(int amount, String^ type) override {
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

