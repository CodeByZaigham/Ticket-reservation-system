#pragma once

#include "Ticket.h"

using namespace System;

ref class BusinessTicket : public Ticket
{
public:

	BusinessTicket(String^ to, String^ from, String^ date, String^ time, int price) : Ticket(to, from,date,time, price) {}

	BusinessTicket() {}


    bool setPrice(int amount, String^ type) {
        if (amount < 1 || String::IsNullOrEmpty(type), String::IsNullOrWhiteSpace(type)) {
            return false;
        }

        if (type != "One Way" && type != "Return") {
            return false;
        }

        if (type == "One Way") {
            price = amount * 2;
            return true;
        }


        price = amount * 3;
        return true;

    }
};


