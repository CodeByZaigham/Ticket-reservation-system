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
	int price,index;
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

	void set_index(int i) {
		index = i;
	}

	int get_index() {
		return index;
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
		static int i = 0;
		if (!String::IsNullOrWhiteSpace(to) && !String::IsNullOrWhiteSpace(from) && !String::IsNullOrWhiteSpace(time) && !String::IsNullOrWhiteSpace(date) && !String::IsNullOrWhiteSpace(p)) {
			if (to->Length > 3 && from->Length > 3 && date->Length > 1 && time->Length > 2 && Int32::TryParse(p, price) && price>0) {
				ob.insert("ticket.txt", to + "," + from + "," + price + "," + date + "," + time + "," + i++);
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

	/*String^ generateID(String^ ticketType) {
		String^ uppercaseLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		String^ lowercaseLetters = "abcdefghijklmnopqrstuvwxyz";
		String^ numbers = "1234567890";
		String^ id = ticketType + "-";
		std::random_device rd;
		std::mt19937 generator(rd());

		auto getRandomChar = [&](String^ charSet) {
			int index = std::uniform_int_distribution<int>(0, charSet->Length - 1)(generator);
			return charSet[index];
			};

		for (int i = 0; i < 7; i++) {
			if (i < 2) {
				id += getRandomChar(uppercaseLetters);
			}
			else if (i < 4) {
				id += getRandomChar(lowercaseLetters);
			}
			else {
				id += getRandomChar(numbers);
			}
		}

		return id;
	}*/

};