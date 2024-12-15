#pragma once

#include "Ticket.h"

using namespace System;

ref class BusinessTicket : public Ticket
{
public:

	BusinessTicket(Ticket^ ticket) : Ticket(generateID("BU"), ticket->getTo(), ticket->getFrom(), ticket->getPrice() * 2) {}

	BusinessTicket(String^ id, String^ to, String^ from, int price) : Ticket(id, to, from, price) {}

	BusinessTicket() {}
};


