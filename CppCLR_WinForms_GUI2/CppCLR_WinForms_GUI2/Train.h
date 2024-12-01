#pragma once

#include "EconomyTicket.h"
#include "BusinessTicket.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Train
{
	String^ trainID;
	String^ deparetureTime;
	List<EconomyTicket^>^ economyTickets = nullptr;
	List<BusinessTicket^>^ businessTickets = nullptr;

private:

	void setTrainID(String^ trainID) {
		if (trainID->IsNullOrEmpty || trainID->IsNullOrWhiteSpace || trainID->Length < 4) {
			return;
		}

		this->trainID = trainID;
	}

	String^ getTrainID() {
		return trainID;
	}

	void setBusinessSeatsLimit(int seatLimit, Ticket^ ticket) {

		if (seatLimit < 1) {
			return;
		}

		List<EconomyTicket^>^ economyTickets = gcnew List<EconomyTicket^>();

		for (int i = 0; i < seatLimit; i++) {

			EconomyTicket^ economyTicket = gcnew EconomyTicket(ticket);
			economyTickets->Add(economyTicket);
		} 

		this->economyTickets = economyTickets;
	}

	void setEconomySeatsLimit(int seatLimit, Ticket^ ticket) {
		if (seatLimit < 1) {
			return;
		}

		List<BusinessTicket^>^ businessTickets = gcnew List<BusinessTicket^>();

		for (int i = 0; i < seatLimit; i++) {

			BusinessTicket^ economyTicket = gcnew BusinessTicket(ticket);
			businessTickets->Add(economyTicket);
		}

		this->businessTickets = businessTickets;
	}

	int getBusinessSeatsAmount() {
		return businessTickets->Count;
	}

	int getEconomySeatsAmount() {
		return economyTickets->Count;
	}
};

