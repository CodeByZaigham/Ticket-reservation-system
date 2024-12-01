#pragma once

#include <iostream>
#include <random>
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::IO;

ref class Ticket
{
protected:

	String^ id;
	String^ to;
	String^ from;
	int price;

public:

	
	Ticket(String ^id, String^ to, String^ from, int price) : id(id), to(to), from(from), price(price) {}

	String^ getID() {
		return id;
	}

	void setID(String^ id) {
		if (id->IsNullOrEmpty || id->IsNullOrWhiteSpace) {
			return;
		}

		this->id = id;
	}

	String^ getTo() {
		return to;
	}

	void setTo(String^ to) {
		if (to->IsNullOrEmpty || to->IsNullOrWhiteSpace) {
			return;
		}

		this->to = to;
	}

	String^ getFrom() {
		return from;
	}

	void setFrom(String ^ from) {
		if (from->IsNullOrEmpty || from->IsNullOrWhiteSpace) {
			return;
		}

		this->from = from;
	}

	int getPrice() {
		return price;
	}

	void setPrice(int price) {
		if (price < 1) {
			return;
		}

		this->price = price;
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

		return msclr::interop::marshal_as<String^>(id);
	}
};