#pragma once
#include "Vehicle.h"
#include "Ticket.h"
#include "Customer.h"

ref class mapper
{
public:
	static array<Ticket^>^ mapticket(array<String^>^ rows) {
		array<Ticket^>^ ob = gcnew array<Ticket^>(rows->Length);

		for (int i = 0; i < ob->Length; i++) {
			array<String^>^ temp = rows[i]->Split(',');
			if (temp->Length > 1) {
				ob[i] = gcnew Ticket();
				ob[i]->setTo(temp[0]);
				ob[i]->setFrom(temp[1]);
				ob[i]->setPrice(temp[2]);
				ob[i]->setDate(temp[4]);
				ob[i]->setTime(temp[3]);
				ob[i]->set_index(Convert::ToInt32(temp[5]));
			}
		}
		return ob;
	}

	static array<Vehicle^>^ mapvehicle(array<String^>^ rows) {
		array<Vehicle^>^ ob = gcnew array<Vehicle^>(rows->Length);

		for (int i = 0; i < rows->Length; i++) {
			array<String^>^ temp = rows[i]->Split(',');
			ob[i] = gcnew Vehicle();
			ob[i]->setVehicleType(temp[0]);
			ob[i]->setEconomySeatsLimit(temp[1]);
			ob[i]->setBusinessSeatsLimit(temp[2]);
			ob[i]->set_index(Convert::ToInt32(temp[3]));
		}
		return ob;
	}

	/*static array<Customer^>^ mapuser(array<String^>^ rows) {
		array<Customer^>^ ob = gcnew array<Customer^>(rows->Length);

		for (int i = 0; i < rows->Length; i++) {
			array<String^>^ temp = rows[i]->Split(',');
			ob[i] = gcnew Customer();
			ob[i]->setName(temp[2]);
			ob[i]->setEmail(temp[0]);
			ob[i]->setPhoneNumber(temp[3]);
		}
		return ob;
	}*/
	
	
};

