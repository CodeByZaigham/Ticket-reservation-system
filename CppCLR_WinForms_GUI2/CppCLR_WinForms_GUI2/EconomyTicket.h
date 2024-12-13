#pragma once
#include "Ticket.h"
#include<iostream>
#include <string>

using namespace System;
using namespace System::IO;

ref class EconomyTicket : public Ticket
{
public:
    //Will be used when converting parent class ticket to economy and business
    EconomyTicket(Ticket^ ticket) : Ticket(generateID("EC"), ticket->getTo(), ticket->getFrom(), ticket->getPrice()) {}

    EconomyTicket(String^ id, String^ to, String^ from, int price) : Ticket(id, to, from, price) {}
};

