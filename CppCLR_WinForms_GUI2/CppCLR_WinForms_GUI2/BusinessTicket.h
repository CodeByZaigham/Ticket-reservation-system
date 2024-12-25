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
    bool registerBusTicket(String^ to, String^ from, String^ date, String^ time, String^ vehicletype, String^ username, String^ phonenumber, String^ email) {
        if (!String::IsNullOrWhiteSpace(to) && !String::IsNullOrWhiteSpace(from) && !String::IsNullOrWhiteSpace(time) && !String::IsNullOrWhiteSpace(date)) {
            if (to->Length > 3 && from->Length > 3 && date->Length > 1 && time->Length > 2 && price > 0) {
                ob.insert("Bookings.txt", to + "," + from + "," + price + "," + date + "," + time + "," + "Business" + "," + vehicletype + "," + username + "," + phonenumber + "," + email + "," + "unpaid");
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


