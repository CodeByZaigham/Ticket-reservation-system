#pragma once
#include<iostream>
using namespace System;
using namespace System::IO;

ref class Cabin

{
protected:
	int SeatLimit;
	String ^ID;
public:
	Cabin(): SeatLimit(0){}
};

