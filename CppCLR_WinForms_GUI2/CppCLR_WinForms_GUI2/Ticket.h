#pragma once

#include <iostream>
#include <random>
#include "Database.h"
//#include <msclr/marshal_cppstd.h> 

using namespace System;
using namespace System::IO;

ref class Ticket 
{

protected:

	String^ id;
	String^ to;
	String^ from;
	String^ date;
	String^ time;
	int price;
	Database ob;

public:

	
	Ticket(String^ to, String^ from, String^ date, String^ time, int price) : to(to), from(from),date(date) ,time(time), price(price) {}
	Ticket() {}

	String^ getTo() {
		return to;
	}

	bool setTo(String^ to) {
		if (String::IsNullOrEmpty(to) || String::IsNullOrWhiteSpace(to)) {
			return false;
		}
		else {
			this->to = to;
			return true;
		}
	}

	String^ getFrom() {
		return from;
	}

	bool setFrom(String^ from) {
		if (String::IsNullOrEmpty(from) || String::IsNullOrWhiteSpace(from)) {
			return false;
		}
		else {
			this->from = from;
			return true;
		}
	}

	String^ getDate() {
		return date;
	}

	bool setDate(String^ date) {
		if (String::IsNullOrEmpty(date) || String::IsNullOrWhiteSpace(date)) {
			return false;
		}
		else {
			this->date = date;
			return true;
		}
	}

	String^ getTime() {
		return time;
	}

	bool setTime(String^ time) {
		if (String::IsNullOrEmpty(time) || String::IsNullOrWhiteSpace(time)) {
			return false;
		}
		else {
			this->time = time;
			return true;
		}
	}

	int getPrice() {
		return price;
	}

	bool setPrice(String^ p) {
		int price;
		if (Int32::TryParse(p, price) && price > 0) {
			this->price = price;
			return true;
		}
		else {
			return false;
		}
	}

	bool registerTicket(String^ to, String^ from, String^ date, String^ time, String^ p) {
		int price;
		if (!String::IsNullOrWhiteSpace(to) && !String::IsNullOrWhiteSpace(from) && !String::IsNullOrWhiteSpace(time) && !String::IsNullOrWhiteSpace(date) && !String::IsNullOrWhiteSpace(p)) {
			if (to->Length > 3 && from->Length > 3 && date->Length > 1 && time->Length > 2 && Int32::TryParse(p, price) && price>0) {
				ob.insert("ticket.txt", to + "," + from + "," + price + "," + date + "," + time);
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

	/*String^ generateID(const std::string ticketType) {

		const std::string uppercaseLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		const std::string lowercaseLetters = "abcdefghijklmnopqrstuvwxyz";
		const std::string numbers = "1234567890";

		std::string id = ticketType + '-';

		std::random_device rd;
		std::mt19937 generate(rd());

		for (int i = 0; i < 7; i++) {
			if (i <= 1) {
				std::uniform_int_distribution<> distribution(0, uppercaseLetters.size() - 1);
				id += uppercaseLetters[distribution(generate)];

			}
			else if (i >= 1 && i <= 3) {
				std::uniform_int_distribution<> distribution(0, lowercaseLetters.size() - 1);
				id += lowercaseLetters[distribution(generate)];
			}
			else {
				std::uniform_int_distribution<> distribution(0, numbers.size() - 1);
				id += numbers[distribution(generate)];
			}
		}

		return gcnew String(id.c_str());
	}*/
};