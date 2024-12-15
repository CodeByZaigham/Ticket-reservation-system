#pragma once

#include "EconomyTicket.h"
#include "BusinessTicket.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Vehicle
{
	String^ vehicleName;
	List<EconomyTicket^>^ economyTickets = nullptr;
	List<BusinessTicket^>^ businessTickets = nullptr;

private:

	Vehicle() {}

	//All Constructors are not final but exist if their need arises all unused constructors will be removed in the future

	bool setVehicleID(String^ vehicleName) {
		if (String::IsNullOrEmpty(vehicleName) || String::IsNullOrWhiteSpace(vehicleName) || vehicleName->Length < 4) {
			return false;
		}
		else {
			this->vehicleName = vehicleName;
			return true;
		}
	}

	String^ getVehicleName() {
		return vehicleName;
	}

	bool setEconomySeatsLimit(int seatLimit, Ticket^ ticket) {

		if (seatLimit < 1) {
			return false;
		}
		else {

			List<EconomyTicket^>^ economyTickets = gcnew List<EconomyTicket^>();

			for (int i = 0; i < seatLimit; i++) {

				EconomyTicket^ economyTicket = gcnew EconomyTicket(ticket);
				economyTickets->Add(economyTicket);
			}

			this->economyTickets = economyTickets;
			return true;
		}
	}

	bool setBusinessSeatsLimit(int seatLimit, Ticket^ ticket) {
		if (seatLimit < 1) {
			return false;
		}
		else {

			List<BusinessTicket^>^ businessTickets = gcnew List<BusinessTicket^>();

			for (int i = 0; i < seatLimit; i++) {

				BusinessTicket^ businessTicket = gcnew BusinessTicket(ticket);
				businessTickets->Add(businessTicket);
			}

			this->businessTickets = businessTickets;

			return true;
		}
	}
	int getBusinessSeatsAmount() {
		return businessTickets->Count;
	}

	int getEconomySeatsAmount() {
		return economyTickets->Count;
	}

	void decrementTicket() {

	}
};

//vehicleid changed to vehiclename

