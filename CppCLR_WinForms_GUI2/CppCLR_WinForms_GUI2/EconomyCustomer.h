#pragma once
#include "Customer.h"
ref class EconomyCustomer : public Customer
{
public:

	EconomyCustomer(Customer^ customer) 
		: Customer(customer->getUsername(), customer->getPassword(), customer->getEmail(), customer->getPhoneNumber(), customer->getGender(), "Economy")

	{}

	EconomyCustomer() {}

};

