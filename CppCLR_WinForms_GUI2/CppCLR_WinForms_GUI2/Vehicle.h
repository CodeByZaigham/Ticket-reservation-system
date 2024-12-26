#pragma once

#include "EconomyTicket.h"
#include "BusinessTicket.h"
#include "Database.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Vehicle
{
	String^ vehicleType;
	int economyTickets;
	int businessTickets;
	int index;
	Database ob;

	public:

	Vehicle() {}

	//All Constructors are not final but exist if their need arises all unused constructors will be removed in the future

	bool setVehicleType(String^ vehicleType) {
		if (String::IsNullOrEmpty(vehicleType) || String::IsNullOrWhiteSpace(vehicleType) || vehicleType->Length < 1) {
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

	bool setEconomySeatsLimit(String^ s) {
		int seatLimit;
		if (Int32::TryParse(s, seatLimit) && seatLimit > 0) {
			economyTickets = seatLimit;
			return true;
		}
		else {
			return false;
		}

	}

	void set_index(int i) {
		index = i;
	}

	int get_index() {
		return index;
	}

	bool setBusinessSeatsLimit(String^ s) {
		int seatLimit;
		if (Int32::TryParse(s, seatLimit) && seatLimit > 0) {
			businessTickets = seatLimit;
			return true;
		}
		else {
			return false;
			
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

		//businessTickets -= bookedTickets;
		return true;
	}

	bool decrementEconomyTicket(int bookedTickets) {
		if (bookedTickets >= economyTickets) {
			return false;
		}

		//economyTickets -= bookedTickets;
		return true;
	}

	bool registervehicle(String^ vehicleType , String^ e , String^ b) {
		int busseats;
		int ecoseats;
		int i;
		if (File::Exists("vehicle.txt")) {
			array<String^>^ lines = ob.read("vehicle.txt");
			array<String^>^ var = lines[lines->Length - 1]->Split(',');
			i = Convert::ToInt32(var[3]) + 1;
		}
		else {
			i = 0;
		}
		if (!String::IsNullOrWhiteSpace(vehicleType) && !String::IsNullOrWhiteSpace(e) && !String::IsNullOrWhiteSpace(b) ){
			if (vehicleType->Length > 1 && Int32::TryParse(e, ecoseats) > 0 && Int32::TryParse(b, busseats) > 0 && ecoseats > 0 && busseats > 0) {
				ob.insert("vehicle.txt", vehicleType + "," + ecoseats + "," + busseats + "," + i);
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

//vehicleid changed to vehiclename

