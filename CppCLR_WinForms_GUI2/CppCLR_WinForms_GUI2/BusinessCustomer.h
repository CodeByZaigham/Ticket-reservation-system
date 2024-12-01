#pragma once
#include "Customer.h"
ref class BusinessCustomer : public Customer
{
public:

	BusinessCustomer(Customer^ customer)
		: Customer(customer->getName(), customer->getPassword(), customer->getEmail(), customer->getPhoneNumber(), customer->getGender(), "Business")

	{}

	BusinessCustomer(String^ username, String^ password, String^ email, String^ phoneNumber, String^ gender, String^ category)
		: Customer(username, password, email, phoneNumber, gender, "Business")
	{}
};

