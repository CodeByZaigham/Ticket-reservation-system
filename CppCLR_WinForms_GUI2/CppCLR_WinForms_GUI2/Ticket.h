#pragma once

#include <iostream>
#include <random>
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

public:

	
	Ticket(String ^id, String^ to, String^ from, int price) : id(id), to(to), from(from), price(price) {}
	Ticket() {}

	String^ getID() {
		return id;
	}

	bool setID(String^ id) {
		if (String::IsNullOrEmpty(id) || String::IsNullOrWhiteSpace(id)) {
			return false;
		}
		else {
			this->id = id;
			return true;
		}
	}

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

	int getPrice() {
		return price;
	}

	bool setPrice(int price) {
		if (price < 1) {
			return false;
		}
		else {
			this->price = price;
			return true;
		}
	}

	String^ generateID(const std::string ticketType) {

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
	}
};