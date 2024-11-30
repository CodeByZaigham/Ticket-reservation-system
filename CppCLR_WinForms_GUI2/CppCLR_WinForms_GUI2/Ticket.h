#pragma once
#include<iostream>
using namespace System;
using namespace System::IO;

ref class Ticket
{
protected:
	String ^ID, ^TO, ^FROM;
	int PRICE;

public:
	Ticket() : PRICE(0){}
	virtual void generateTicketId() = 0;
};

