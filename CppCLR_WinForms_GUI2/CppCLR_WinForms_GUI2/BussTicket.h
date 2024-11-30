#pragma once
#include "Ticket.h"
#include<iostream>
using namespace System;
using namespace System::IO;

ref class BussTicket : public Ticket
{
public:
    BussTicket() {
        PRICE = 5000;
    }
    void generateTicketId() override {
        array<String^>^ TicketId = gcnew array<String^>(50);

        for (int i = 0; i < 50; i++) {
            TicketId[i] = "BU-" + (i + 1).ToString();
        }
    }
};


