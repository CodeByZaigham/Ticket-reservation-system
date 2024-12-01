#pragma once

#include "Person.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Customer : public Person
{
protected:

	String^ email;
	String^ phoneNumber;
	String^ gender;
	String^ category;

	List<String^>^ userActivity = gcnew List<String^>();

public:

	Customer(String^ username, String^ password, String^ email, String^ phoneNumber, String^ gender, String^ category)
		: Person(username, password), email(email), phoneNumber(phoneNumber), gender(gender), category(""), userActivity({})
	{}

	Customer() {}

	void registerInfo(String^ username, String^ password, String^ email, String^ phoneNumber, String^ gender) {
		//working needs to be implemented after database implementation
	}

	bool login(String^ username, String^ password) override {
		//working needs to be implemented after database implementation
	}

	void addToUserActivity(String^ action) {
		userActivity->Add(action);
	}

	List<String^>^ getActivity() {
		return userActivity;
	}

	String^ getGender() {
		return gender;
	}

	String^ getCategory() {
		return category;
	}

	String^ getEmail() {
		return email;
	}

	String^ getPhoneNumber() {
		return phoneNumber;
	}
};