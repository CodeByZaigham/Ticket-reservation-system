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

    bool registerEcoTicket(String^ to, String^ from, String^ date, String^ time ,String^ vehicletype, String^ username ,String^ phonenumber ,String^ email ) {
        if (!String::IsNullOrWhiteSpace(to) && !String::IsNullOrWhiteSpace(from) && !String::IsNullOrWhiteSpace(time) && !String::IsNullOrWhiteSpace(date) ) {
            if (to->Length > 3 && from->Length > 3 && date->Length > 1 && time->Length > 2 && price > 0) {
                ob.insert("Bookings.txt", to + "," + from + "," + price + "," + date + "," + time + "," +  "Economy" + "," + vehicletype + "," + username + "," + phonenumber + "," + email + "," + "unpaid");
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }

    }
};

