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


	void registerInfo(String^ username, String^ password, String^ email, String^ phoneNumber, String^ gender) {
		//working needs to be implemented after database implementation
	}

	bool login(String^ username, String^ password) override {
		//working needs to be implemented after database implementation
	}

	void setGender(String^ gender) {
		if (gender->IsNullOrEmpty || gender->IsNullOrWhiteSpace) {
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
		if (category->IsNullOrEmpty || category->IsNullOrWhiteSpace) {
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
		if (email->IsNullOrEmpty || email->IsNullOrWhiteSpace) {
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
		if (phoneNumber->IsNullOrEmpty || phoneNumber->IsNullOrWhiteSpace) {
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