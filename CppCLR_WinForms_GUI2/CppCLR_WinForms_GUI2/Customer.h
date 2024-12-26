#pragma once

#include "Person.h"
#include "Database.h"

using namespace System;

ref class Customer : public Person
{
protected:

	String^ email;
	String^ phoneNumber;
	String^ gender;
	String^ category;
	Database ob;
	static String^ currentname;
	static String^ currentemail;
	static String^ currentphone;


public:

	Customer(String^ username, String^ password, String^ email, String^ phoneNumber, String^ gender, String^ category)
		: Person(username, password), email(email), phoneNumber(phoneNumber), gender(gender), category("NotAssigned")
	{}

	Customer() {}


	bool registerInfo(String^ username, String^ password, String^ email, String^ phoneNumber, String^ gender) {
		if (username->Length > 3 && password->Length > 3 && email->Length > 3 && phoneNumber->Length >= 8 && gender->Length > 3) {
			ob.insert("login.txt", email + "," + password + "," + username + "," + phoneNumber + "," + gender);
			return true;
		}
		else {
			return false;
		}
	}

	bool login(String^ email, String^ password) override {
		array<String^>^ data = ob.search("login.txt", email, 0);
		for (int i = 0; i < data->Length; i++) {
			array<String^>^ var = data[i]->Split(',');
			if (data->Length > 0) {
				if (var[0] == email && var[1]==password) {
					currentname = var[2];
					currentemail = var[0];
					currentphone = var[3];
					return true;
				}
			}
		}
		return false;
	}

	static String^ getcurrentname() {
		return currentname;
	}

	static String^ getcurrentemail() {
		return currentemail;
	}

	static String^ getcurrentnum() {
		return currentphone;
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