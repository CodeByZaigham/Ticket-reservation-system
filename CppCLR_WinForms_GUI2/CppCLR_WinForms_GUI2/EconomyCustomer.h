#pragma once

#include "Customer.h"

using namespace System;

ref class EconomyCustomer : public Customer
{
public:

	EconomyCustomer(Customer^ customer) 
		: Customer(customer->getName(), customer->getPassword(), customer->getEmail(), customer->getPhoneNumber(), customer->getGender(), "Economy")

	{}

	EconomyCustomer() {}

};

