#pragma once

using namespace System;

ref class Person abstract
{
protected:
	String^ name;
	String^ password;

public:

	Person(String^ name, String^ password) 
		: name(name), password(password) 
	{}

	Person() {}

	void setName(String^ name) {
		if (String::IsNullOrWhiteSpace(name) || String::IsNullOrEmpty(name)) {
			return;
		}
		else {
			this->name = name;
		}
	}

	String^ getName() {
		return name;
	}

	void setPassword(String^ password) {
		if(String::IsNullOrWhiteSpace(password) || String::IsNullOrEmpty(password) || password->Length < 8) {
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