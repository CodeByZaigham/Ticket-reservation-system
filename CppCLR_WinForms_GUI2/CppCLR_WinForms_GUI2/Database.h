#pragma once

using namespace System;
using namespace System::IO;

ref class Database{
public:
	void insert(String^ filename, String^ row) {
		if (File::Exists(filename) == true) {
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
					temp += lines[i] + "#";
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

	void update(String^ filename, String^ search, String^ newvalue,int column) {
		array<String^>^ lines = this->read(filename);
		String^ temp = "";
		for (int i = 0; i < lines->Length; i++) {
			array<String^>^ var = lines[i]->Split(',');
			String^ sep = "\n";
			if (i==lines->Length - 1) {
				sep = "";
			}
			if (var[column]==search) {
				temp = newvalue + sep;
			}
			else {
				temp = lines[i] + sep;
			}
		}
		File::WriteAllText(filename, temp);
	}

	void discard(String^ filename, String^ search, int column) {
		array<String^>^ lines = this->read(filename);
		String^ temp = "";
		for (int i = 0; i < lines->Length; i++) {
			array<String^>^ var = lines[i]->Split(',');
			if (var->Length > 1) {
				if (var[column] != search) {
					temp += "\n" + lines[i];
				}
			}
		}
		temp = temp->Substring(1);
		File::WriteAllText(filename, temp);
	}
	


};

