#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace System;

ref class Person abstract
{
protected:
	String^ username;
	String^ password;

public:

	Person(String^ username, String^ password) 
		: username(username), password(password) 
	{}

	Person() {}

	void setName(String^ username) {
		if (username->Empty) {
			return;
		}

		this->username = username;
	}

	String^ getName() {
		return username;
	}

	void setPassword(String^ password) {
		if (password->Empty) {
			return;
		}
	}

	String^ getPassword() {
		return password;
	}

	virtual bool login(String^ name, String^ password) = 0;
};

#endif

