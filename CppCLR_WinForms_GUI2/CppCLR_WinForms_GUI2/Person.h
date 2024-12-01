#pragma once

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
		if (username->IsNullOrWhiteSpace || username->IsNullOrEmpty) {
			return;
		}
		else {
			this->username = username;
		}
	}

	String^ getName() {
		return username;
	}

	void setPassword(String^ password) {
		if(password->IsNullOrWhiteSpace || password->IsNullOrEmpty || password->Length < 8) {
			return;
		}
		else {
			this->password = password;
		}
	}

	String^ getPassword() {
		return password;
	}

	virtual bool login(String^ name, String^ password) = 0;
};