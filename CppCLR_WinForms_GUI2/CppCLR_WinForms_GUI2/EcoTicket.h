#pragma once
#include "Ticket.h"
#include<iostream>
#include <string>

using namespace System;
using namespace System::IO;

ref class EcoTicket : public Ticket
{
public:
    EcoTicket() {
        PRICE = 1500;
    }
    void generateTicketId() override {
        array<String^>^ TicketId = gcnew array<String^>(50); 

        for (int i = 0; i < 50; i++) {
            TicketId[i] = "EC-" + (i + 1).ToString(); 
        }
    }
};

