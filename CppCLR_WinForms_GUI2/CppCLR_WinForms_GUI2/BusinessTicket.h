#pragma once

#include "Ticket.h"

using namespace System;

ref class BusinessTicket : public Ticket
{
public:

	BusinessTicket(String^ id, String^ to, String^ from, int price) : Ticket(id, to, from, price) {}

	BusinessTicket() {}


    bool setPrice(int amount, String^ type) override {
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


