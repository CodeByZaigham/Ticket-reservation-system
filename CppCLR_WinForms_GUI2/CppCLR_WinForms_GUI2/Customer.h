#pragma once

#include "Person.h"

using namespace System;

ref class Customer : public Person
{
protected:

	String^ email;
	String^ phoneNumber;
	String^ gender;
	String^ category;

public:

	Customer(String^ username, String^ password, String^ email, String^ phoneNumber, String^ gender, String^ category)
		: Person(username, password), email(email), phoneNumber(phoneNumber), gender(gender), category("NotAssigned")
	{}

	Customer() {}


	bool registerInfo(String^ username, String^ password, String^ email, String^ phoneNumber, String^ gender) {
		//working needs to be implemented after database implementation

		// this return is only added to avoid errors when compiling
		return true;
	}

	bool login(String^ email, String^ password) override {
		//working needs to be implemented after database implementation

		// this return is only added to avoid errors when compiling
		return true;
	}

	void setGender(String^ gender) {
		if (String::IsNullOrEmpty(gender) || String::IsNullOrWhiteSpace(gender)) {
			return;
		}
		else {
			this->gender = gender;
		}
	}

	String^ getGender() {
		return gender;
	}

	void setCategory(String^ category) {
		if (String::IsNullOrEmpty(category) || String::IsNullOrWhiteSpace(category)) {
			return;
		}
		else {
			this->category = category;
		}
	}

	String^ getCategory() {
		return category;
	}

	void setEmail(String^ email) {
		if (String::IsNullOrEmpty(email) || String::IsNullOrWhiteSpace(email)) {
			return;
		}
		else {
			this->email = email;
		}
	}

	String^ getEmail() {
		return email;
	}

	void setPhoneNumber(String^ phoneNumber) {
		if (String::IsNullOrEmpty(phoneNumber) || String::IsNullOrWhiteSpace(phoneNumber)) {
			return;
		}
		else {
			this->phoneNumber = phoneNumber;
		}
	}

	String^ getPhoneNumber() {
		return phoneNumber;
	}
};

/*login should be done using email of user
username will be remaned to name
login should return true or false*/