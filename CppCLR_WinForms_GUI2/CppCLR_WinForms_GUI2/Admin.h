#pragma once

#include "Person.h"
#include "Ticket.h"

#include <iostream>

using namespace System;

ref class Admin : public Person
{

public:

	Admin() {
		username = "ADMIN";
		password = "1234";
	}

	bool login(String^ username, String^ password) override {
		if (password != this->password || username != this->username) {
			return false;
		}
		else {
			this->username = username;

			return true;
		}
	}
};

