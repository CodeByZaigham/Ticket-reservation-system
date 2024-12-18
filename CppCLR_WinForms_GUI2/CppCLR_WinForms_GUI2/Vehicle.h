#pragma once

#include "EconomyTicket.h"
#include "BusinessTicket.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Vehicle
{
	String^ vehicleType;
	int economyTickets;
	int businessTickets;

private:

	Vehicle() {}

	//All Constructors are not final but exist if their need arises all unused constructors will be removed in the future

	bool setVehicleType(String^ vehicleType) {
		if (String::IsNullOrEmpty(vehicleType) || String::IsNullOrWhiteSpace(vehicleType) || vehicleType->Length < 4) {
			return false;
		}
		else {
			this->vehicleType = vehicleType;
			return true;
		}
	}

	String^ getVehicleType() {
		return vehicleType;
	}

	bool setEconomySeatsLimit(int seatLimit) {

		if (seatLimit < 1) {
			return false;
		}
		else {

			economyTickets = seatLimit;
			return true;
		}

	}

	bool setBusinessSeatsLimit(int seatLimit) {

		if (seatLimit < 1) {
			return false;
		}
		else {

			businessTickets = seatLimit;
			return true;
		}

	}
	int getBusinessSeatsAmount() {
		return businessTickets;
	}

	int getEconomySeatsAmount() {
		return economyTickets;
	}

	bool decrementBusinessTicket(int bookedTickets) {
		if (bookedTickets >= businessTickets) {
			return false;
		}

		businessTickets -= bookedTickets;
		return true;
	}

	bool decrementEconomyTicket(int bookedTickets) {
		if (bookedTickets >= economyTickets) {
			return false;
		}

		economyTickets -= bookedTickets;
		return true;
	}
};

//vehicleid changed to vehiclename

