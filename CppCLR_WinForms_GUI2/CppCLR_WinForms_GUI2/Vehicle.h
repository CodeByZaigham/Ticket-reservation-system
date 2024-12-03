#pragma once

#include "EconomyTicket.h"
#include "BusinessTicket.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Vehicle
{
	String^ vehicleName;
	String^ departureTime;
	List<EconomyTicket^>^ economyTickets = nullptr;
	List<BusinessTicket^>^ businessTickets = nullptr;

private:

	Vehicle() {}

	//All Constructors are not final but exist if their need arises all unused constructors will be removed in the future

	void setVehicleID(String^ vehicleName) {
		if (String::IsNullOrEmpty(vehicleName) || String::IsNullOrWhiteSpace(vehicleName) || vehicleName->Length < 4) {
			return;
		}
		else {
			this->vehicleName = vehicleName;
		}
	}

	String^ getVehicleName() {
		return vehicleName;
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

	void setDepartureTime(String^ departureTime) {
		this->departureTime = departureTime;
	}

	String^ getDepartureTime() {
		return departureTime;
	}

	int getBusinessSeatsAmount() {
		return businessTickets->Count;
	}

	int getEconomySeatsAmount() {
		return economyTickets->Count;
	}
};

//vehicleid changed to vehiclename

