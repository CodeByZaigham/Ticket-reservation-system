#pragma once

#include "Customer.h"

using namespace System;

ref class EconomyCustomer : public Customer
{
public:

	EconomyCustomer(Customer^ customer) 
		: Customer(customer->getName(), customer->getPassword(), customer->getEmail(), customer->getPhoneNumber(), customer->getGender(), "Economy")

	{}

	EconomyCustomer(String^ username, String^ password, String^ email, String^ phoneNumber, String^ gender, String^ category)
		: Customer(username, password, email, phoneNumber, gender, "Economy")
	{}

};

