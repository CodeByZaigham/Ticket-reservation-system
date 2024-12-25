#pragma once

using namespace System;
using namespace System::IO;

ref class Database{
public:

	void insert(String^ filename, String^ row) {
		if (File::Exists(filename) == true && !String::IsNullOrWhiteSpace(File::ReadAllText(filename))) {
			File::AppendAllText(filename, "\n" + row);
		}
		else {
			File::AppendAllText(filename, row);
		}
	}

	array<String^>^ read(String^ filename) {
		String^ data = File::ReadAllText(filename);
		array<String^>^ lines = data->Split('\n');
		return lines;
	}

	array<String^>^ search(String^ filename, String^ search, int column) {
		array<String^>^ lines = this->read(filename);
		String^ temp="";
		for (int i = 0; i < lines->Length; i++) {
			array<String^>^ var = lines[i] -> Split(',');
			if (lines->Length > 0) {
				if (var[column] == search) {
					temp +=lines[i] + "#";
				}
			}
		}
		array<String^>^ temp2 = temp->Split('#');
		array<String^>^ result = gcnew array<String^>(temp2->Length - 1);
		for (int i = 0; i < result->Length; i++) {
			result[i] = temp2[i];
		}
		return result;
	}

	void update(String^ filename, String^ search, String^ newvalue, int column, int row) {
		array<String^>^ lines = this->read(filename);
		System::Collections::Generic::List<String^>^ updatedLines = gcnew System::Collections::Generic::List<String^>();

		for (int i = 0; i < lines->Length; i++) {
			array<String^>^ var = lines[i]->Split(',');
			if (column < var->Length) {
				if (var[column] == search && (row - 1) == i) {
					var[column] = newvalue;
				}
			}
			updatedLines->Add(String::Join(",", var));
		}

		System::IO::File::WriteAllText(filename, String::Join("\n", updatedLines->ToArray()));
	}

	void discard(String^ filename, int row) {
		array<String^>^ lines = this->read(filename);
		System::Collections::Generic::List<String^>^ updatedLines = gcnew System::Collections::Generic::List<String^>();

		for (int i = 0; i < lines->Length; i++) {
			if ((row - 1) != i) {
				updatedLines->Add(lines[i]);
			}
		}

		System::IO::File::WriteAllText(filename, String::Join("\n", updatedLines->ToArray()));
	}


	

	


};

