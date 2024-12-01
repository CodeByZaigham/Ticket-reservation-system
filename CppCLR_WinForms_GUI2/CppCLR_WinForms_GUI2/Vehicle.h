#pragma once

#include "EconomyTicket.h"
#include "BusinessTicket.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Vehicle
{
	String^ vehicleID;
	String^ deparetureTime;
	List<EconomyTicket^>^ economyTickets = nullptr;
	List<BusinessTicket^>^ businessTickets = nullptr;

private:

	void setVehicleID(String^ vehicleID) {
		if (vehicleID->IsNullOrEmpty || vehicleID->IsNullOrWhiteSpace || vehicleID->Length < 4) {
			return;
		}
		else {
			this->vehicleID = vehicleID;
		}
	}

	String^ getVehicleID() {
		return vehicleID;
	}

	void setEconomySeatsLimit(int seatLimit, Ticket^ ticket) {

		if (seatLimit < 1) {
			return;
		}
		else {

			List<EconomyTicket^>^ economyTickets = gcnew List<EconomyTicket^>();

			for (int i = 0; i < seatLimit; i++) {

				EconomyTicket^ economyTicket = gcnew EconomyTicket(ticket);
				economyTickets->Add(economyTicket);
			}

			this->economyTickets = economyTickets;
		}
	}

	void setBusinessSeatsLimit(int seatLimit, Ticket^ ticket) {
		if (seatLimit < 1) {
			return;
		}
		else {

			List<BusinessTicket^>^ businessTickets = gcnew List<BusinessTicket^>();

			for (int i = 0; i < seatLimit; i++) {

				BusinessTicket^ businessTicket = gcnew BusinessTicket(ticket);
				businessTickets->Add(businessTicket);
			}

			this->businessTickets = businessTickets;
		}
	}

	int getBusinessSeatsAmount() {
		return businessTickets->Count;
	}

	int getEconomySeatsAmount() {
		return economyTickets->Count;
	}
};

