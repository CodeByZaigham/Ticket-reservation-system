// header2.h
#pragma once
// In contrast to header1.h, here is no strong separation  
// of the business logic and the user interface. Because of 
// these two using directives

namespace N_header_2
{
	using namespace System;
	using namespace System::Windows::Forms;
	// Windows Forms types can be used in this header file.

	int plus_2(int x) // another very simple example for application logic
	{
		return x + 2;
	}

	// The Windows Forms type TextBox is used as function 
	// parameter type. So you can place the GUI call close 
	// to the application logic (here plus_2):
	void plus_2_Click(TextBox^ in_textBox, TextBox^ out_textBox)
	{
		int n = Convert::ToInt32(in_textBox->Text);
		int result = plus_2(n);
		out_textBox->AppendText(String::Format("plus_2({0})={1}\r\n", n, result));
	}

}