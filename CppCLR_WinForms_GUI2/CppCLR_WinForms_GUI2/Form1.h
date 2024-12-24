#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
#include "Header2.h"
#include "Customer.h"
#include "Admin.h"
#include "Vehicle.h"
#include "mapper.h"
#include "Database.h"

namespace CppCLRWinFormsProject {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;

  /// <summary>
  /// Summary for Form1
  /// </summary>
  public ref class Form1 : public System::Windows::Forms::Form
  {
  public:
    Form1(void)
    {
      InitializeComponent();
      sharedTable = gcnew DataTable();
      sharedTable->Columns->Add("S.No");
      sharedTable->Columns->Add("Vehicle Type");
      sharedTable->Columns->Add("No. of Business Seats");
      sharedTable->Columns->Add("No. of Economy Seats");
      sharedTable->Columns->Add("From");
      sharedTable->Columns->Add("To");
      sharedTable->Columns->Add("Date");
      sharedTable->Columns->Add("Time");
      sharedTable->Columns->Add("Price");

      //
      //TODO: Add the constructor code here
      //

      // uncomment to execute the rk1-utils:
      //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

    }

  protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    ~Form1()
    {
      if (components)
      {
        delete components;
      }
    }

  protected:
      DataTable^ sharedTable=gcnew DataTable();
      String^ index;

  private: System::Windows::Forms::Label^ label6;
  private: System::Windows::Forms::TabPage^ tabPage11;
  private: System::Windows::Forms::Panel^ panel4;
  private: System::Windows::Forms::Button^ button49;
  private: System::Windows::Forms::Panel^ panel1;
  private: System::Windows::Forms::Label^ label30;
  private: System::Windows::Forms::Label^ label34;
  private: System::Windows::Forms::Label^ label35;
  private: System::Windows::Forms::Label^ label47;
  private: System::Windows::Forms::Label^ label46;
  private: System::Windows::Forms::Label^ label23;
  private: System::Windows::Forms::TabPage^ tabPage13;
  private: System::Windows::Forms::Label^ label61;
  private: System::Windows::Forms::Label^ label60;
  private: System::Windows::Forms::Label^ label59;
  private: System::Windows::Forms::TextBox^ textBox19;
  private: System::Windows::Forms::TextBox^ textBox18;
  private: System::Windows::Forms::TextBox^ textBox17;
  private: System::Windows::Forms::TextBox^ textBox10;
  private: System::Windows::Forms::TextBox^ textBox5;
  private: System::Windows::Forms::TextBox^ textBox11;
  private: System::Windows::Forms::TextBox^ textBox2;
  private: System::Windows::Forms::TextBox^ textBox1;
  private: System::Windows::Forms::Label^ label15;
  private: System::Windows::Forms::Label^ label10;
  private: System::Windows::Forms::Button^ button29;
  private: System::Windows::Forms::DataGridView^ dataGridView7;









  private: System::Windows::Forms::Label^ label54;
  private: System::Windows::Forms::Label^ label51;
  private: System::Windows::Forms::Label^ label50;
  private: System::Windows::Forms::Label^ label49;
  private: System::Windows::Forms::Button^ button26;
  private: System::Windows::Forms::Button^ button25;
  private: System::Windows::Forms::TabPage^ tabPage8;
  private: System::Windows::Forms::Button^ button33;
  private: System::Windows::Forms::Label^ label58;
  private: System::Windows::Forms::Label^ label57;
  private: System::Windows::Forms::Label^ label56;
  private: System::Windows::Forms::TextBox^ textBox16;
  private: System::Windows::Forms::TextBox^ textBox15;
  private: System::Windows::Forms::TextBox^ textBox14;
  private: System::Windows::Forms::Button^ button28;
  private: System::Windows::Forms::DataGridView^ dataGridView8;










  private: System::Windows::Forms::Label^ label55;
  private: System::Windows::Forms::Button^ button22;
  private: System::Windows::Forms::Button^ button27;
  private: System::Windows::Forms::TabPage^ tabPage12;
  private: System::Windows::Forms::Button^ button19;
  private: System::Windows::Forms::Label^ label33;
  private: System::Windows::Forms::DataGridView^ dataGridView6;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column30;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column28;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column29;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column32;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column31;
  private: System::Windows::Forms::TabPage^ tabPage10;
  private: System::Windows::Forms::TextBox^ textBox13;
  private: System::Windows::Forms::TextBox^ textBox12;
  private: System::Windows::Forms::Label^ label53;
  private: System::Windows::Forms::Label^ label52;
  private: System::Windows::Forms::Button^ button21;
  private: System::Windows::Forms::Button^ button20;
  private: System::Windows::Forms::Button^ button18;
  private: System::Windows::Forms::Label^ label32;
  private: System::Windows::Forms::DataGridView^ dataGridView5;









  private: System::Windows::Forms::TabPage^ tabPage9;
  private: System::Windows::Forms::Panel^ panel8;
  private: System::Windows::Forms::Button^ button32;
  private: System::Windows::Forms::Button^ button24;
  private: System::Windows::Forms::Button^ button23;
  private: System::Windows::Forms::Button^ button16;
  private: System::Windows::Forms::Button^ button13;
  private: System::Windows::Forms::Button^ button14;
  private: System::Windows::Forms::Label^ label45;
  private: System::Windows::Forms::Label^ label21;
  private: System::Windows::Forms::Label^ label40;
  private: System::Windows::Forms::Label^ label38;
  private: System::Windows::Forms::Label^ label31;
  private: System::Windows::Forms::TabPage^ tabPage5;
  private: System::Windows::Forms::Button^ button17;
  private: System::Windows::Forms::Label^ label29;
  private: System::Windows::Forms::Button^ button12;
  private: System::Windows::Forms::DataGridView^ dataGridView4;









  private: System::Windows::Forms::TabPage^ tabPage3;
  private: System::Windows::Forms::Button^ button31;
  private: System::Windows::Forms::Button^ button10;
  private: System::Windows::Forms::Label^ label27;
  private: System::Windows::Forms::DataGridView^ dataGridView3;








  private: System::Windows::Forms::ComboBox^ comboBox2;
  private: System::Windows::Forms::ComboBox^ comboBox1;
  private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
  private: System::Windows::Forms::CheckBox^ checkBox4;
  private: System::Windows::Forms::CheckBox^ checkBox3;
  private: System::Windows::Forms::CheckBox^ checkBox2;
  private: System::Windows::Forms::CheckBox^ checkBox1;
  private: System::Windows::Forms::Button^ button1;
  private: System::Windows::Forms::Label^ label5;
  private: System::Windows::Forms::Label^ label4;
  private: System::Windows::Forms::Label^ label3;
  private: System::Windows::Forms::Label^ label2;
  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::TabPage^ tabPage2;
  private: System::Windows::Forms::Button^ button30;
  private: System::Windows::Forms::Label^ label48;
  private: System::Windows::Forms::ComboBox^ comboBox3;
  private: System::Windows::Forms::ComboBox^ comboBox4;
  private: System::Windows::Forms::Label^ label22;
  private: System::Windows::Forms::Label^ label41;
  private: System::Windows::Forms::Button^ button6;
  private: System::Windows::Forms::Label^ label26;
  private: System::Windows::Forms::DataGridView^ dataGridView1;







  private: System::Windows::Forms::TabPage^ tabPage1;
  private: System::Windows::Forms::Panel^ panel7;
  private: System::Windows::Forms::Button^ button15;
  private: System::Windows::Forms::Button^ button5;
  private: System::Windows::Forms::Button^ button7;
  private: System::Windows::Forms::Button^ button8;
  private: System::Windows::Forms::Button^ button9;
  private: System::Windows::Forms::Label^ label44;
  private: System::Windows::Forms::Label^ label43;
  private: System::Windows::Forms::Label^ label42;
  private: System::Windows::Forms::Label^ label36;
  private: System::Windows::Forms::Label^ label20;
  private: System::Windows::Forms::Label^ label25;
  private: System::Windows::Forms::Label^ label24;
  private: System::Windows::Forms::TabPage^ tabPage7;
  private: System::Windows::Forms::Panel^ panel6;
  private: System::Windows::Forms::Label^ label9;
  private: System::Windows::Forms::TextBox^ textBox8;
  private: System::Windows::Forms::Label^ label11;
  private: System::Windows::Forms::Label^ label13;
  private: System::Windows::Forms::TextBox^ textBox9;
  private: System::Windows::Forms::Label^ label14;
  private: System::Windows::Forms::TextBox^ textBox7;
  private: System::Windows::Forms::TextBox^ textBox6;
  private: System::Windows::Forms::Label^ label16;
  private: System::Windows::Forms::CheckBox^ checkBox6;
  private: System::Windows::Forms::Label^ label17;
  private: System::Windows::Forms::CheckBox^ checkBox7;
  private: System::Windows::Forms::Button^ button3;
  private: System::Windows::Forms::Panel^ panel5;
  private: System::Windows::Forms::Label^ label39;
  private: System::Windows::Forms::TabPage^ tabPage6;
  private: System::Windows::Forms::Panel^ panel3;
  private: System::Windows::Forms::Label^ label37;
  private: System::Windows::Forms::Panel^ panel2;
  private: System::Windows::Forms::TextBox^ textBox4;
  private: System::Windows::Forms::Button^ button4;
  private: System::Windows::Forms::Button^ button2;
  private: System::Windows::Forms::CheckBox^ checkBox8;
  private: System::Windows::Forms::TextBox^ textBox3;
  private: System::Windows::Forms::Label^ label19;
  private: System::Windows::Forms::Label^ label8;
  private: System::Windows::Forms::CheckBox^ checkBox9;
  private: System::Windows::Forms::Label^ label12;
  private: System::Windows::Forms::Label^ label7;
  private: System::Windows::Forms::Label^ label18;
  private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column33;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column34;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Label^ label76;
private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::Label^ label74;









private: System::ComponentModel::IContainer^ components;


  protected:

  private:
    /// <summary>
    /// Required designer variable.
    /// </summary>


#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        this->label6 = (gcnew System::Windows::Forms::Label());
        this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
        this->panel4 = (gcnew System::Windows::Forms::Panel());
        this->button49 = (gcnew System::Windows::Forms::Button());
        this->panel1 = (gcnew System::Windows::Forms::Panel());
        this->label30 = (gcnew System::Windows::Forms::Label());
        this->label34 = (gcnew System::Windows::Forms::Label());
        this->label35 = (gcnew System::Windows::Forms::Label());
        this->label47 = (gcnew System::Windows::Forms::Label());
        this->label46 = (gcnew System::Windows::Forms::Label());
        this->label23 = (gcnew System::Windows::Forms::Label());
        this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
        this->label61 = (gcnew System::Windows::Forms::Label());
        this->label60 = (gcnew System::Windows::Forms::Label());
        this->label59 = (gcnew System::Windows::Forms::Label());
        this->textBox19 = (gcnew System::Windows::Forms::TextBox());
        this->textBox18 = (gcnew System::Windows::Forms::TextBox());
        this->textBox17 = (gcnew System::Windows::Forms::TextBox());
        this->textBox10 = (gcnew System::Windows::Forms::TextBox());
        this->textBox5 = (gcnew System::Windows::Forms::TextBox());
        this->textBox11 = (gcnew System::Windows::Forms::TextBox());
        this->textBox2 = (gcnew System::Windows::Forms::TextBox());
        this->textBox1 = (gcnew System::Windows::Forms::TextBox());
        this->label15 = (gcnew System::Windows::Forms::Label());
        this->label10 = (gcnew System::Windows::Forms::Label());
        this->button29 = (gcnew System::Windows::Forms::Button());
        this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
        this->label54 = (gcnew System::Windows::Forms::Label());
        this->label51 = (gcnew System::Windows::Forms::Label());
        this->label50 = (gcnew System::Windows::Forms::Label());
        this->label49 = (gcnew System::Windows::Forms::Label());
        this->button26 = (gcnew System::Windows::Forms::Button());
        this->button25 = (gcnew System::Windows::Forms::Button());
        this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
        this->label76 = (gcnew System::Windows::Forms::Label());
        this->label75 = (gcnew System::Windows::Forms::Label());
        this->textBox27 = (gcnew System::Windows::Forms::TextBox());
        this->label73 = (gcnew System::Windows::Forms::Label());
        this->textBox28 = (gcnew System::Windows::Forms::TextBox());
        this->label74 = (gcnew System::Windows::Forms::Label());
        this->textBox26 = (gcnew System::Windows::Forms::TextBox());
        this->label72 = (gcnew System::Windows::Forms::Label());
        this->textBox25 = (gcnew System::Windows::Forms::TextBox());
        this->label71 = (gcnew System::Windows::Forms::Label());
        this->label68 = (gcnew System::Windows::Forms::Label());
        this->label67 = (gcnew System::Windows::Forms::Label());
        this->textBox24 = (gcnew System::Windows::Forms::TextBox());
        this->textBox23 = (gcnew System::Windows::Forms::TextBox());
        this->label66 = (gcnew System::Windows::Forms::Label());
        this->label65 = (gcnew System::Windows::Forms::Label());
        this->textBox22 = (gcnew System::Windows::Forms::TextBox());
        this->label70 = (gcnew System::Windows::Forms::Label());
        this->label69 = (gcnew System::Windows::Forms::Label());
        this->button33 = (gcnew System::Windows::Forms::Button());
        this->label58 = (gcnew System::Windows::Forms::Label());
        this->label57 = (gcnew System::Windows::Forms::Label());
        this->label56 = (gcnew System::Windows::Forms::Label());
        this->textBox16 = (gcnew System::Windows::Forms::TextBox());
        this->textBox15 = (gcnew System::Windows::Forms::TextBox());
        this->textBox14 = (gcnew System::Windows::Forms::TextBox());
        this->button28 = (gcnew System::Windows::Forms::Button());
        this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
        this->label55 = (gcnew System::Windows::Forms::Label());
        this->button22 = (gcnew System::Windows::Forms::Button());
        this->button27 = (gcnew System::Windows::Forms::Button());
        this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
        this->button19 = (gcnew System::Windows::Forms::Button());
        this->label33 = (gcnew System::Windows::Forms::Label());
        this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
        this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
        this->label64 = (gcnew System::Windows::Forms::Label());
        this->label63 = (gcnew System::Windows::Forms::Label());
        this->textBox21 = (gcnew System::Windows::Forms::TextBox());
        this->textBox20 = (gcnew System::Windows::Forms::TextBox());
        this->label62 = (gcnew System::Windows::Forms::Label());
        this->label28 = (gcnew System::Windows::Forms::Label());
        this->textBox13 = (gcnew System::Windows::Forms::TextBox());
        this->textBox12 = (gcnew System::Windows::Forms::TextBox());
        this->label53 = (gcnew System::Windows::Forms::Label());
        this->label52 = (gcnew System::Windows::Forms::Label());
        this->button21 = (gcnew System::Windows::Forms::Button());
        this->button20 = (gcnew System::Windows::Forms::Button());
        this->button18 = (gcnew System::Windows::Forms::Button());
        this->label32 = (gcnew System::Windows::Forms::Label());
        this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
        this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
        this->panel8 = (gcnew System::Windows::Forms::Panel());
        this->button32 = (gcnew System::Windows::Forms::Button());
        this->button24 = (gcnew System::Windows::Forms::Button());
        this->button23 = (gcnew System::Windows::Forms::Button());
        this->button16 = (gcnew System::Windows::Forms::Button());
        this->button13 = (gcnew System::Windows::Forms::Button());
        this->button14 = (gcnew System::Windows::Forms::Button());
        this->label45 = (gcnew System::Windows::Forms::Label());
        this->label21 = (gcnew System::Windows::Forms::Label());
        this->label40 = (gcnew System::Windows::Forms::Label());
        this->label38 = (gcnew System::Windows::Forms::Label());
        this->label31 = (gcnew System::Windows::Forms::Label());
        this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
        this->button17 = (gcnew System::Windows::Forms::Button());
        this->label29 = (gcnew System::Windows::Forms::Label());
        this->button12 = (gcnew System::Windows::Forms::Button());
        this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
        this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column33 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
        this->button31 = (gcnew System::Windows::Forms::Button());
        this->button10 = (gcnew System::Windows::Forms::Button());
        this->label27 = (gcnew System::Windows::Forms::Label());
        this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
        this->Column8 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
        this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
        this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
        this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
        this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
        this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
        this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
        this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
        this->button1 = (gcnew System::Windows::Forms::Button());
        this->label5 = (gcnew System::Windows::Forms::Label());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
        this->button30 = (gcnew System::Windows::Forms::Button());
        this->label48 = (gcnew System::Windows::Forms::Label());
        this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
        this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
        this->label22 = (gcnew System::Windows::Forms::Label());
        this->label41 = (gcnew System::Windows::Forms::Label());
        this->button6 = (gcnew System::Windows::Forms::Button());
        this->label26 = (gcnew System::Windows::Forms::Label());
        this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
        this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
        this->panel7 = (gcnew System::Windows::Forms::Panel());
        this->button15 = (gcnew System::Windows::Forms::Button());
        this->button5 = (gcnew System::Windows::Forms::Button());
        this->button7 = (gcnew System::Windows::Forms::Button());
        this->button8 = (gcnew System::Windows::Forms::Button());
        this->button9 = (gcnew System::Windows::Forms::Button());
        this->label44 = (gcnew System::Windows::Forms::Label());
        this->label43 = (gcnew System::Windows::Forms::Label());
        this->label42 = (gcnew System::Windows::Forms::Label());
        this->label36 = (gcnew System::Windows::Forms::Label());
        this->label20 = (gcnew System::Windows::Forms::Label());
        this->label25 = (gcnew System::Windows::Forms::Label());
        this->label24 = (gcnew System::Windows::Forms::Label());
        this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
        this->panel6 = (gcnew System::Windows::Forms::Panel());
        this->label9 = (gcnew System::Windows::Forms::Label());
        this->textBox8 = (gcnew System::Windows::Forms::TextBox());
        this->label11 = (gcnew System::Windows::Forms::Label());
        this->label13 = (gcnew System::Windows::Forms::Label());
        this->textBox9 = (gcnew System::Windows::Forms::TextBox());
        this->label14 = (gcnew System::Windows::Forms::Label());
        this->textBox7 = (gcnew System::Windows::Forms::TextBox());
        this->textBox6 = (gcnew System::Windows::Forms::TextBox());
        this->label16 = (gcnew System::Windows::Forms::Label());
        this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
        this->label17 = (gcnew System::Windows::Forms::Label());
        this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
        this->button3 = (gcnew System::Windows::Forms::Button());
        this->panel5 = (gcnew System::Windows::Forms::Panel());
        this->label39 = (gcnew System::Windows::Forms::Label());
        this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
        this->panel3 = (gcnew System::Windows::Forms::Panel());
        this->label37 = (gcnew System::Windows::Forms::Label());
        this->panel2 = (gcnew System::Windows::Forms::Panel());
        this->textBox4 = (gcnew System::Windows::Forms::TextBox());
        this->button4 = (gcnew System::Windows::Forms::Button());
        this->button2 = (gcnew System::Windows::Forms::Button());
        this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
        this->textBox3 = (gcnew System::Windows::Forms::TextBox());
        this->label19 = (gcnew System::Windows::Forms::Label());
        this->label8 = (gcnew System::Windows::Forms::Label());
        this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
        this->label12 = (gcnew System::Windows::Forms::Label());
        this->label7 = (gcnew System::Windows::Forms::Label());
        this->label18 = (gcnew System::Windows::Forms::Label());
        this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
        this->tabPage11->SuspendLayout();
        this->panel4->SuspendLayout();
        this->panel1->SuspendLayout();
        this->tabPage13->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
        this->tabPage8->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->BeginInit();
        this->tabPage12->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
        this->tabPage10->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
        this->tabPage9->SuspendLayout();
        this->panel8->SuspendLayout();
        this->tabPage5->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
        this->tabPage3->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
        this->tabPage2->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
        this->tabPage1->SuspendLayout();
        this->panel7->SuspendLayout();
        this->tabPage7->SuspendLayout();
        this->panel6->SuspendLayout();
        this->panel5->SuspendLayout();
        this->tabPage6->SuspendLayout();
        this->panel3->SuspendLayout();
        this->panel2->SuspendLayout();
        this->tabControl1->SuspendLayout();
        this->SuspendLayout();
        // 
        // label6
        // 
        this->label6->AutoSize = true;
        this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->label6->ForeColor = System::Drawing::Color::Navy;
        this->label6->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
        this->label6->Location = System::Drawing::Point(240, 13);
        this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(322, 26);
        this->label6->TabIndex = 5;
        this->label6->Text = L"🎫Ticket Reservation System";
        this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
        // 
        // tabPage11
        // 
        this->tabPage11->BackColor = System::Drawing::Color::WhiteSmoke;
        this->tabPage11->Controls->Add(this->panel4);
        this->tabPage11->Controls->Add(this->panel1);
        this->tabPage11->Controls->Add(this->label47);
        this->tabPage11->Controls->Add(this->label46);
        this->tabPage11->Controls->Add(this->label23);
        this->tabPage11->ForeColor = System::Drawing::Color::Navy;
        this->tabPage11->Location = System::Drawing::Point(4, 22);
        this->tabPage11->Margin = System::Windows::Forms::Padding(2);
        this->tabPage11->Name = L"tabPage11";
        this->tabPage11->Padding = System::Windows::Forms::Padding(2);
        this->tabPage11->Size = System::Drawing::Size(826, 385);
        this->tabPage11->TabIndex = 10;
        this->tabPage11->Text = L"About us";
        this->tabPage11->Click += gcnew System::EventHandler(this, &Form1::tabPage11_Click);
        // 
        // panel4
        // 
        this->panel4->BackColor = System::Drawing::Color::Navy;
        this->panel4->Controls->Add(this->button49);
        this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
        this->panel4->Location = System::Drawing::Point(2, 2);
        this->panel4->Margin = System::Windows::Forms::Padding(2);
        this->panel4->Name = L"panel4";
        this->panel4->Size = System::Drawing::Size(133, 311);
        this->panel4->TabIndex = 42;
        this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel4_Paint);
        // 
        // button49
        // 
        this->button49->BackColor = System::Drawing::Color::White;
        this->button49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button49->Location = System::Drawing::Point(20, 70);
        this->button49->Margin = System::Windows::Forms::Padding(2);
        this->button49->Name = L"button49";
        this->button49->Size = System::Drawing::Size(98, 24);
        this->button49->TabIndex = 34;
        this->button49->Text = L"Back To Home";
        this->button49->UseVisualStyleBackColor = false;
        this->button49->Click += gcnew System::EventHandler(this, &Form1::button49_Click);
        // 
        // panel1
        // 
        this->panel1->BackColor = System::Drawing::Color::Navy;
        this->panel1->Controls->Add(this->label30);
        this->panel1->Controls->Add(this->label34);
        this->panel1->Controls->Add(this->label35);
        this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
        this->panel1->Location = System::Drawing::Point(2, 313);
        this->panel1->Margin = System::Windows::Forms::Padding(2);
        this->panel1->Name = L"panel1";
        this->panel1->Size = System::Drawing::Size(822, 70);
        this->panel1->TabIndex = 41;
        this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
        // 
        // label30
        // 
        this->label30->ForeColor = System::Drawing::Color::White;
        this->label30->Location = System::Drawing::Point(635, 25);
        this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label30->Name = L"label30";
        this->label30->Size = System::Drawing::Size(105, 62);
        this->label30->TabIndex = 36;
        this->label30->Text = L"Customer Care:\r\n📞+92 3514287532\r\n📞+92 3335448522";
        this->label30->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        this->label30->Click += gcnew System::EventHandler(this, &Form1::label30_Click);
        // 
        // label34
        // 
        this->label34->ForeColor = System::Drawing::Color::White;
        this->label34->Location = System::Drawing::Point(253, 12);
        this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label34->Name = L"label34";
        this->label34->Size = System::Drawing::Size(335, 88);
        this->label34->TabIndex = 37;
        this->label34->Text = L"Location:\r\n📍 HCA Healthcare UK, 2 Cavendish Square,London W1G , UK\r\n📍 Plot No. "
            L"SB–28, Block–1, Mahnoor Apartment, Gulistan–e–Jauhar. 36, Block 1 Gulistan-e-Joh"
            L"arKarachi City, Sindh\r\n";
        this->label34->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        this->label34->Click += gcnew System::EventHandler(this, &Form1::label34_Click);
        // 
        // label35
        // 
        this->label35->ForeColor = System::Drawing::Color::White;
        this->label35->Location = System::Drawing::Point(89, 12);
        this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label35->Name = L"label35";
        this->label35->Size = System::Drawing::Size(115, 62);
        this->label35->TabIndex = 38;
        this->label35->Text = L"📷 Instagram:\r\n@ticket.reservation\r\n📘 Facebook:\r\nTicket reservation\r\n";
        this->label35->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        this->label35->Click += gcnew System::EventHandler(this, &Form1::label35_Click);
        // 
        // label47
        // 
        this->label47->Location = System::Drawing::Point(223, 112);
        this->label47->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label47->Name = L"label47";
        this->label47->Size = System::Drawing::Size(391, 27);
        this->label47->TabIndex = 40;
        this->label47->Text = L"*We also ensure that if our user get any problem in their tickets, payments or an"
            L"y other thing our customer care try their best to solve it";
        this->label47->Click += gcnew System::EventHandler(this, &Form1::label47_Click);
        // 
        // label46
        // 
        this->label46->Location = System::Drawing::Point(221, 72);
        this->label46->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label46->Name = L"label46";
        this->label46->Size = System::Drawing::Size(392, 40);
        this->label46->TabIndex = 39;
        this->label46->Text = L"*We are offer our user one of the fastest and easiest way to book their tickets i"
            L"n lowest price in the market\r\n*We ensure that our user get best price ";
        this->label46->Click += gcnew System::EventHandler(this, &Form1::label46_Click);
        // 
        // label23
        // 
        this->label23->AutoSize = true;
        this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->label23->Location = System::Drawing::Point(329, 26);
        this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label23->Name = L"label23";
        this->label23->Size = System::Drawing::Size(95, 24);
        this->label23->TabIndex = 33;
        this->label23->Text = L"About Us";
        this->label23->Click += gcnew System::EventHandler(this, &Form1::label23_Click);
        // 
        // tabPage13
        // 
        this->tabPage13->Controls->Add(this->label61);
        this->tabPage13->Controls->Add(this->label60);
        this->tabPage13->Controls->Add(this->label59);
        this->tabPage13->Controls->Add(this->textBox19);
        this->tabPage13->Controls->Add(this->textBox18);
        this->tabPage13->Controls->Add(this->textBox17);
        this->tabPage13->Controls->Add(this->textBox10);
        this->tabPage13->Controls->Add(this->textBox5);
        this->tabPage13->Controls->Add(this->textBox11);
        this->tabPage13->Controls->Add(this->textBox2);
        this->tabPage13->Controls->Add(this->textBox1);
        this->tabPage13->Controls->Add(this->label15);
        this->tabPage13->Controls->Add(this->label10);
        this->tabPage13->Controls->Add(this->button29);
        this->tabPage13->Controls->Add(this->dataGridView7);
        this->tabPage13->Controls->Add(this->label54);
        this->tabPage13->Controls->Add(this->label51);
        this->tabPage13->Controls->Add(this->label50);
        this->tabPage13->Controls->Add(this->label49);
        this->tabPage13->Controls->Add(this->button26);
        this->tabPage13->Controls->Add(this->button25);
        this->tabPage13->Location = System::Drawing::Point(4, 22);
        this->tabPage13->Margin = System::Windows::Forms::Padding(2);
        this->tabPage13->Name = L"tabPage13";
        this->tabPage13->Padding = System::Windows::Forms::Padding(2);
        this->tabPage13->Size = System::Drawing::Size(826, 385);
        this->tabPage13->TabIndex = 13;
        this->tabPage13->Text = L"Add New Ticket";
        this->tabPage13->UseVisualStyleBackColor = true;
        this->tabPage13->Click += gcnew System::EventHandler(this, &Form1::tabPage13_Click);
        // 
        // label61
        // 
        this->label61->AutoSize = true;
        this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label61->ForeColor = System::Drawing::Color::Navy;
        this->label61->Location = System::Drawing::Point(34, 99);
        this->label61->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label61->Name = L"label61";
        this->label61->Size = System::Drawing::Size(94, 17);
        this->label61->TabIndex = 50;
        this->label61->Text = L"Vehicle Type:";
        this->label61->Click += gcnew System::EventHandler(this, &Form1::label61_Click);
        // 
        // label60
        // 
        this->label60->AutoSize = true;
        this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label60->ForeColor = System::Drawing::Color::Navy;
        this->label60->Location = System::Drawing::Point(249, 99);
        this->label60->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label60->Name = L"label60";
        this->label60->Size = System::Drawing::Size(164, 17);
        this->label60->TabIndex = 49;
        this->label60->Text = L"No. of Business Tickets :";
        // 
        // label59
        // 
        this->label59->AutoSize = true;
        this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label59->ForeColor = System::Drawing::Color::Navy;
        this->label59->Location = System::Drawing::Point(472, 99);
        this->label59->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label59->Name = L"label59";
        this->label59->Size = System::Drawing::Size(165, 17);
        this->label59->TabIndex = 48;
        this->label59->Text = L"No. of Economy Tickets :";
        // 
        // textBox19
        // 
        this->textBox19->Location = System::Drawing::Point(252, 118);
        this->textBox19->Margin = System::Windows::Forms::Padding(2);
        this->textBox19->Name = L"textBox19";
        this->textBox19->Size = System::Drawing::Size(161, 20);
        this->textBox19->TabIndex = 47;
        // 
        // textBox18
        // 
        this->textBox18->Location = System::Drawing::Point(475, 118);
        this->textBox18->Margin = System::Windows::Forms::Padding(2);
        this->textBox18->Name = L"textBox18";
        this->textBox18->Size = System::Drawing::Size(162, 20);
        this->textBox18->TabIndex = 46;
        // 
        // textBox17
        // 
        this->textBox17->Location = System::Drawing::Point(37, 118);
        this->textBox17->Margin = System::Windows::Forms::Padding(2);
        this->textBox17->Name = L"textBox17";
        this->textBox17->Size = System::Drawing::Size(100, 20);
        this->textBox17->TabIndex = 45;
        // 
        // textBox10
        // 
        this->textBox10->Location = System::Drawing::Point(542, 77);
        this->textBox10->Margin = System::Windows::Forms::Padding(2);
        this->textBox10->Name = L"textBox10";
        this->textBox10->Size = System::Drawing::Size(100, 20);
        this->textBox10->TabIndex = 42;
        // 
        // textBox5
        // 
        this->textBox5->Location = System::Drawing::Point(414, 77);
        this->textBox5->Margin = System::Windows::Forms::Padding(2);
        this->textBox5->Name = L"textBox5";
        this->textBox5->Size = System::Drawing::Size(100, 20);
        this->textBox5->TabIndex = 41;
        // 
        // textBox11
        // 
        this->textBox11->Location = System::Drawing::Point(288, 77);
        this->textBox11->Margin = System::Windows::Forms::Padding(2);
        this->textBox11->Name = L"textBox11";
        this->textBox11->Size = System::Drawing::Size(100, 20);
        this->textBox11->TabIndex = 40;
        // 
        // textBox2
        // 
        this->textBox2->Location = System::Drawing::Point(160, 77);
        this->textBox2->Margin = System::Windows::Forms::Padding(2);
        this->textBox2->Name = L"textBox2";
        this->textBox2->Size = System::Drawing::Size(100, 20);
        this->textBox2->TabIndex = 39;
        // 
        // textBox1
        // 
        this->textBox1->Location = System::Drawing::Point(37, 77);
        this->textBox1->Margin = System::Windows::Forms::Padding(2);
        this->textBox1->Name = L"textBox1";
        this->textBox1->Size = System::Drawing::Size(100, 20);
        this->textBox1->TabIndex = 0;
        this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged_2);
        // 
        // label15
        // 
        this->label15->AutoSize = true;
        this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label15->ForeColor = System::Drawing::Color::Navy;
        this->label15->Location = System::Drawing::Point(539, 58);
        this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label15->Name = L"label15";
        this->label15->Size = System::Drawing::Size(47, 17);
        this->label15->TabIndex = 44;
        this->label15->Text = L"Time :";
        this->label15->Click += gcnew System::EventHandler(this, &Form1::label15_Click_1);
        // 
        // label10
        // 
        this->label10->AutoSize = true;
        this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label10->ForeColor = System::Drawing::Color::Navy;
        this->label10->Location = System::Drawing::Point(411, 58);
        this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label10->Name = L"label10";
        this->label10->Size = System::Drawing::Size(46, 17);
        this->label10->TabIndex = 43;
        this->label10->Text = L"Date :";
        this->label10->Click += gcnew System::EventHandler(this, &Form1::label10_Click_2);
        // 
        // button29
        // 
        this->button29->BackColor = System::Drawing::Color::Navy;
        this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button29->ForeColor = System::Drawing::Color::White;
        this->button29->Location = System::Drawing::Point(37, 328);
        this->button29->Margin = System::Windows::Forms::Padding(2);
        this->button29->Name = L"button29";
        this->button29->Size = System::Drawing::Size(103, 24);
        this->button29->TabIndex = 38;
        this->button29->Text = L"Refresh";
        this->button29->UseVisualStyleBackColor = false;
        this->button29->Click += gcnew System::EventHandler(this, &Form1::button29_Click);
        // 
        // dataGridView7
        // 
        this->dataGridView7->AllowUserToDeleteRows = false;
        this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView7->Location = System::Drawing::Point(37, 142);
        this->dataGridView7->Margin = System::Windows::Forms::Padding(2);
        this->dataGridView7->Name = L"dataGridView7";
        this->dataGridView7->ReadOnly = true;
        this->dataGridView7->RowHeadersWidth = 62;
        this->dataGridView7->RowTemplate->Height = 28;
        this->dataGridView7->Size = System::Drawing::Size(743, 173);
        this->dataGridView7->TabIndex = 9;
        this->dataGridView7->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView7_CellContentClick);
        // 
        // label54
        // 
        this->label54->AutoSize = true;
        this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
        this->label54->ForeColor = System::Drawing::Color::Navy;
        this->label54->Location = System::Drawing::Point(309, 16);
        this->label54->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label54->Name = L"label54";
        this->label54->Size = System::Drawing::Size(158, 24);
        this->label54->TabIndex = 8;
        this->label54->Text = L"Add New Ticket";
        this->label54->Click += gcnew System::EventHandler(this, &Form1::label54_Click);
        // 
        // label51
        // 
        this->label51->AutoSize = true;
        this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label51->ForeColor = System::Drawing::Color::Navy;
        this->label51->Location = System::Drawing::Point(285, 58);
        this->label51->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label51->Name = L"label51";
        this->label51->Size = System::Drawing::Size(48, 17);
        this->label51->TabIndex = 7;
        this->label51->Text = L"Price :";
        this->label51->Click += gcnew System::EventHandler(this, &Form1::label51_Click);
        // 
        // label50
        // 
        this->label50->AutoSize = true;
        this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label50->ForeColor = System::Drawing::Color::Navy;
        this->label50->Location = System::Drawing::Point(157, 58);
        this->label50->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label50->Name = L"label50";
        this->label50->Size = System::Drawing::Size(48, 17);
        this->label50->TabIndex = 6;
        this->label50->Text = L"From :";
        this->label50->Click += gcnew System::EventHandler(this, &Form1::label50_Click);
        // 
        // label49
        // 
        this->label49->AutoSize = true;
        this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label49->ForeColor = System::Drawing::Color::Navy;
        this->label49->Location = System::Drawing::Point(34, 58);
        this->label49->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label49->Name = L"label49";
        this->label49->Size = System::Drawing::Size(33, 17);
        this->label49->TabIndex = 5;
        this->label49->Text = L"To :";
        this->label49->Click += gcnew System::EventHandler(this, &Form1::label49_Click_1);
        // 
        // button26
        // 
        this->button26->BackColor = System::Drawing::Color::Navy;
        this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button26->ForeColor = System::Drawing::Color::White;
        this->button26->Location = System::Drawing::Point(669, 332);
        this->button26->Margin = System::Windows::Forms::Padding(2);
        this->button26->Name = L"button26";
        this->button26->Size = System::Drawing::Size(111, 24);
        this->button26->TabIndex = 4;
        this->button26->Text = L"Back To Home";
        this->button26->UseVisualStyleBackColor = false;
        this->button26->Click += gcnew System::EventHandler(this, &Form1::button26_Click);
        // 
        // button25
        // 
        this->button25->BackColor = System::Drawing::Color::Navy;
        this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button25->ForeColor = System::Drawing::Color::White;
        this->button25->Location = System::Drawing::Point(683, 73);
        this->button25->Margin = System::Windows::Forms::Padding(2);
        this->button25->Name = L"button25";
        this->button25->Size = System::Drawing::Size(109, 24);
        this->button25->TabIndex = 3;
        this->button25->Text = L"Add new Ticket";
        this->button25->UseVisualStyleBackColor = false;
        this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
        // 
        // tabPage8
        // 
        this->tabPage8->Controls->Add(this->label76);
        this->tabPage8->Controls->Add(this->label75);
        this->tabPage8->Controls->Add(this->textBox27);
        this->tabPage8->Controls->Add(this->label73);
        this->tabPage8->Controls->Add(this->textBox28);
        this->tabPage8->Controls->Add(this->label74);
        this->tabPage8->Controls->Add(this->textBox26);
        this->tabPage8->Controls->Add(this->label72);
        this->tabPage8->Controls->Add(this->textBox25);
        this->tabPage8->Controls->Add(this->label71);
        this->tabPage8->Controls->Add(this->label68);
        this->tabPage8->Controls->Add(this->label67);
        this->tabPage8->Controls->Add(this->textBox24);
        this->tabPage8->Controls->Add(this->textBox23);
        this->tabPage8->Controls->Add(this->label66);
        this->tabPage8->Controls->Add(this->label65);
        this->tabPage8->Controls->Add(this->textBox22);
        this->tabPage8->Controls->Add(this->label70);
        this->tabPage8->Controls->Add(this->label69);
        this->tabPage8->Controls->Add(this->button33);
        this->tabPage8->Controls->Add(this->label58);
        this->tabPage8->Controls->Add(this->label57);
        this->tabPage8->Controls->Add(this->label56);
        this->tabPage8->Controls->Add(this->textBox16);
        this->tabPage8->Controls->Add(this->textBox15);
        this->tabPage8->Controls->Add(this->textBox14);
        this->tabPage8->Controls->Add(this->button28);
        this->tabPage8->Controls->Add(this->dataGridView8);
        this->tabPage8->Controls->Add(this->label55);
        this->tabPage8->Controls->Add(this->button22);
        this->tabPage8->Controls->Add(this->button27);
        this->tabPage8->Location = System::Drawing::Point(4, 22);
        this->tabPage8->Margin = System::Windows::Forms::Padding(2);
        this->tabPage8->Name = L"tabPage8";
        this->tabPage8->Padding = System::Windows::Forms::Padding(2);
        this->tabPage8->Size = System::Drawing::Size(826, 385);
        this->tabPage8->TabIndex = 12;
        this->tabPage8->Text = L"Update Existing Ticket";
        this->tabPage8->UseVisualStyleBackColor = true;
        this->tabPage8->Click += gcnew System::EventHandler(this, &Form1::tabPage8_Click);
        // 
        // label76
        // 
        this->label76->AutoSize = true;
        this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label76->ForeColor = System::Drawing::Color::Navy;
        this->label76->Location = System::Drawing::Point(553, 56);
        this->label76->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label76->Name = L"label76";
        this->label76->Size = System::Drawing::Size(111, 17);
        this->label76->TabIndex = 70;
        this->label76->Text = L"economy seats :";
        // 
        // label75
        // 
        this->label75->AutoSize = true;
        this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label75->ForeColor = System::Drawing::Color::Navy;
        this->label75->Location = System::Drawing::Point(428, 56);
        this->label75->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label75->Name = L"label75";
        this->label75->Size = System::Drawing::Size(110, 17);
        this->label75->TabIndex = 69;
        this->label75->Text = L"business seats :";
        // 
        // textBox27
        // 
        this->textBox27->Location = System::Drawing::Point(567, 90);
        this->textBox27->Margin = System::Windows::Forms::Padding(2);
        this->textBox27->Name = L"textBox27";
        this->textBox27->Size = System::Drawing::Size(78, 20);
        this->textBox27->TabIndex = 68;
        // 
        // label73
        // 
        this->label73->AutoSize = true;
        this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label73->ForeColor = System::Drawing::Color::Navy;
        this->label73->Location = System::Drawing::Point(529, 91);
        this->label73->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label73->Name = L"label73";
        this->label73->Size = System::Drawing::Size(38, 17);
        this->label73->TabIndex = 67;
        this->label73->Text = L"Old :";
        // 
        // textBox28
        // 
        this->textBox28->Location = System::Drawing::Point(567, 114);
        this->textBox28->Margin = System::Windows::Forms::Padding(2);
        this->textBox28->Name = L"textBox28";
        this->textBox28->Size = System::Drawing::Size(78, 20);
        this->textBox28->TabIndex = 66;
        // 
        // label74
        // 
        this->label74->AutoSize = true;
        this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label74->ForeColor = System::Drawing::Color::Navy;
        this->label74->Location = System::Drawing::Point(529, 117);
        this->label74->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label74->Name = L"label74";
        this->label74->Size = System::Drawing::Size(43, 17);
        this->label74->TabIndex = 65;
        this->label74->Text = L"New :";
        // 
        // textBox26
        // 
        this->textBox26->Location = System::Drawing::Point(442, 90);
        this->textBox26->Margin = System::Windows::Forms::Padding(2);
        this->textBox26->Name = L"textBox26";
        this->textBox26->Size = System::Drawing::Size(78, 20);
        this->textBox26->TabIndex = 64;
        // 
        // label72
        // 
        this->label72->AutoSize = true;
        this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label72->ForeColor = System::Drawing::Color::Navy;
        this->label72->Location = System::Drawing::Point(404, 91);
        this->label72->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label72->Name = L"label72";
        this->label72->Size = System::Drawing::Size(38, 17);
        this->label72->TabIndex = 63;
        this->label72->Text = L"Old :";
        // 
        // textBox25
        // 
        this->textBox25->Location = System::Drawing::Point(442, 114);
        this->textBox25->Margin = System::Windows::Forms::Padding(2);
        this->textBox25->Name = L"textBox25";
        this->textBox25->Size = System::Drawing::Size(78, 20);
        this->textBox25->TabIndex = 62;
        // 
        // label71
        // 
        this->label71->AutoSize = true;
        this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label71->ForeColor = System::Drawing::Color::Navy;
        this->label71->Location = System::Drawing::Point(404, 117);
        this->label71->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label71->Name = L"label71";
        this->label71->Size = System::Drawing::Size(43, 17);
        this->label71->TabIndex = 61;
        this->label71->Text = L"New :";
        // 
        // label68
        // 
        this->label68->AutoSize = true;
        this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label68->ForeColor = System::Drawing::Color::Navy;
        this->label68->Location = System::Drawing::Point(160, 114);
        this->label68->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label68->Name = L"label68";
        this->label68->Size = System::Drawing::Size(43, 17);
        this->label68->TabIndex = 60;
        this->label68->Text = L"New :";
        // 
        // label67
        // 
        this->label67->AutoSize = true;
        this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label67->ForeColor = System::Drawing::Color::Navy;
        this->label67->Location = System::Drawing::Point(36, 114);
        this->label67->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label67->Name = L"label67";
        this->label67->Size = System::Drawing::Size(43, 17);
        this->label67->TabIndex = 59;
        this->label67->Text = L"New :";
        // 
        // textBox24
        // 
        this->textBox24->Location = System::Drawing::Point(83, 114);
        this->textBox24->Margin = System::Windows::Forms::Padding(2);
        this->textBox24->Name = L"textBox24";
        this->textBox24->Size = System::Drawing::Size(73, 20);
        this->textBox24->TabIndex = 58;
        // 
        // textBox23
        // 
        this->textBox23->Location = System::Drawing::Point(207, 114);
        this->textBox23->Margin = System::Windows::Forms::Padding(2);
        this->textBox23->Name = L"textBox23";
        this->textBox23->Size = System::Drawing::Size(69, 20);
        this->textBox23->TabIndex = 57;
        // 
        // label66
        // 
        this->label66->AutoSize = true;
        this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label66->ForeColor = System::Drawing::Color::Navy;
        this->label66->Location = System::Drawing::Point(160, 88);
        this->label66->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label66->Name = L"label66";
        this->label66->Size = System::Drawing::Size(38, 17);
        this->label66->TabIndex = 56;
        this->label66->Text = L"Old :";
        // 
        // label65
        // 
        this->label65->AutoSize = true;
        this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label65->ForeColor = System::Drawing::Color::Navy;
        this->label65->Location = System::Drawing::Point(36, 88);
        this->label65->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label65->Name = L"label65";
        this->label65->Size = System::Drawing::Size(38, 17);
        this->label65->TabIndex = 55;
        this->label65->Text = L"Old :";
        // 
        // textBox22
        // 
        this->textBox22->Location = System::Drawing::Point(322, 114);
        this->textBox22->Margin = System::Windows::Forms::Padding(2);
        this->textBox22->Name = L"textBox22";
        this->textBox22->Size = System::Drawing::Size(78, 20);
        this->textBox22->TabIndex = 54;
        // 
        // label70
        // 
        this->label70->AutoSize = true;
        this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label70->ForeColor = System::Drawing::Color::Navy;
        this->label70->Location = System::Drawing::Point(280, 91);
        this->label70->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label70->Name = L"label70";
        this->label70->Size = System::Drawing::Size(38, 17);
        this->label70->TabIndex = 53;
        this->label70->Text = L"Old :";
        // 
        // label69
        // 
        this->label69->AutoSize = true;
        this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label69->ForeColor = System::Drawing::Color::Navy;
        this->label69->Location = System::Drawing::Point(282, 114);
        this->label69->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label69->Name = L"label69";
        this->label69->Size = System::Drawing::Size(43, 17);
        this->label69->TabIndex = 52;
        this->label69->Text = L"New :";
        // 
        // button33
        // 
        this->button33->BackColor = System::Drawing::Color::Navy;
        this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button33->ForeColor = System::Drawing::Color::White;
        this->button33->Location = System::Drawing::Point(685, 112);
        this->button33->Margin = System::Windows::Forms::Padding(2);
        this->button33->Name = L"button33";
        this->button33->Size = System::Drawing::Size(103, 24);
        this->button33->TabIndex = 47;
        this->button33->Text = L"Delete Ticket";
        this->button33->UseVisualStyleBackColor = false;
        this->button33->Click += gcnew System::EventHandler(this, &Form1::button33_Click);
        // 
        // label58
        // 
        this->label58->AutoSize = true;
        this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label58->ForeColor = System::Drawing::Color::Navy;
        this->label58->Location = System::Drawing::Point(319, 56);
        this->label58->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label58->Name = L"label58";
        this->label58->Size = System::Drawing::Size(48, 17);
        this->label58->TabIndex = 46;
        this->label58->Text = L"Price :";
        this->label58->Click += gcnew System::EventHandler(this, &Form1::label58_Click_1);
        // 
        // label57
        // 
        this->label57->AutoSize = true;
        this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label57->ForeColor = System::Drawing::Color::Navy;
        this->label57->Location = System::Drawing::Point(204, 56);
        this->label57->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label57->Name = L"label57";
        this->label57->Size = System::Drawing::Size(48, 17);
        this->label57->TabIndex = 45;
        this->label57->Text = L"From :";
        // 
        // label56
        // 
        this->label56->AutoSize = true;
        this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label56->ForeColor = System::Drawing::Color::Navy;
        this->label56->Location = System::Drawing::Point(84, 56);
        this->label56->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label56->Name = L"label56";
        this->label56->Size = System::Drawing::Size(33, 17);
        this->label56->TabIndex = 44;
        this->label56->Text = L"To :";
        // 
        // textBox16
        // 
        this->textBox16->Location = System::Drawing::Point(322, 90);
        this->textBox16->Margin = System::Windows::Forms::Padding(2);
        this->textBox16->Name = L"textBox16";
        this->textBox16->Size = System::Drawing::Size(78, 20);
        this->textBox16->TabIndex = 41;
        // 
        // textBox15
        // 
        this->textBox15->Location = System::Drawing::Point(207, 88);
        this->textBox15->Margin = System::Windows::Forms::Padding(2);
        this->textBox15->Name = L"textBox15";
        this->textBox15->Size = System::Drawing::Size(69, 20);
        this->textBox15->TabIndex = 40;
        this->textBox15->TextChanged += gcnew System::EventHandler(this, &Form1::textBox15_TextChanged_1);
        // 
        // textBox14
        // 
        this->textBox14->Location = System::Drawing::Point(83, 88);
        this->textBox14->Margin = System::Windows::Forms::Padding(2);
        this->textBox14->Name = L"textBox14";
        this->textBox14->Size = System::Drawing::Size(73, 20);
        this->textBox14->TabIndex = 39;
        // 
        // button28
        // 
        this->button28->BackColor = System::Drawing::Color::Navy;
        this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button28->ForeColor = System::Drawing::Color::White;
        this->button28->Location = System::Drawing::Point(37, 346);
        this->button28->Margin = System::Windows::Forms::Padding(2);
        this->button28->Name = L"button28";
        this->button28->Size = System::Drawing::Size(103, 24);
        this->button28->TabIndex = 38;
        this->button28->Text = L"Refresh";
        this->button28->UseVisualStyleBackColor = false;
        this->button28->Click += gcnew System::EventHandler(this, &Form1::button28_Click);
        // 
        // dataGridView8
        // 
        this->dataGridView8->AllowUserToDeleteRows = false;
        this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView8->Location = System::Drawing::Point(37, 147);
        this->dataGridView8->Margin = System::Windows::Forms::Padding(2);
        this->dataGridView8->Name = L"dataGridView8";
        this->dataGridView8->ReadOnly = true;
        this->dataGridView8->RowHeadersWidth = 62;
        this->dataGridView8->RowTemplate->Height = 28;
        this->dataGridView8->Size = System::Drawing::Size(751, 195);
        this->dataGridView8->TabIndex = 18;
        this->dataGridView8->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView8_CellClick);
        this->dataGridView8->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView8_CellContentClick);
        // 
        // label55
        // 
        this->label55->AutoSize = true;
        this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
        this->label55->ForeColor = System::Drawing::Color::Navy;
        this->label55->Location = System::Drawing::Point(271, 14);
        this->label55->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label55->Name = L"label55";
        this->label55->Size = System::Drawing::Size(218, 24);
        this->label55->TabIndex = 17;
        this->label55->Text = L"Update Existing Ticket";
        this->label55->Click += gcnew System::EventHandler(this, &Form1::label55_Click);
        // 
        // button22
        // 
        this->button22->BackColor = System::Drawing::Color::Navy;
        this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button22->ForeColor = System::Drawing::Color::White;
        this->button22->Location = System::Drawing::Point(681, 346);
        this->button22->Margin = System::Windows::Forms::Padding(2);
        this->button22->Name = L"button22";
        this->button22->Size = System::Drawing::Size(107, 24);
        this->button22->TabIndex = 13;
        this->button22->Text = L"Back to Home";
        this->button22->UseVisualStyleBackColor = false;
        this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
        // 
        // button27
        // 
        this->button27->BackColor = System::Drawing::Color::Navy;
        this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button27->ForeColor = System::Drawing::Color::White;
        this->button27->Location = System::Drawing::Point(685, 81);
        this->button27->Margin = System::Windows::Forms::Padding(2);
        this->button27->Name = L"button27";
        this->button27->Size = System::Drawing::Size(103, 24);
        this->button27->TabIndex = 12;
        this->button27->Text = L"Update Ticket";
        this->button27->UseVisualStyleBackColor = false;
        this->button27->Click += gcnew System::EventHandler(this, &Form1::button27_Click);
        // 
        // tabPage12
        // 
        this->tabPage12->Controls->Add(this->button19);
        this->tabPage12->Controls->Add(this->label33);
        this->tabPage12->Controls->Add(this->dataGridView6);
        this->tabPage12->ForeColor = System::Drawing::Color::Navy;
        this->tabPage12->Location = System::Drawing::Point(4, 22);
        this->tabPage12->Margin = System::Windows::Forms::Padding(2);
        this->tabPage12->Name = L"tabPage12";
        this->tabPage12->Padding = System::Windows::Forms::Padding(2);
        this->tabPage12->Size = System::Drawing::Size(826, 385);
        this->tabPage12->TabIndex = 11;
        this->tabPage12->Text = L"User activity";
        this->tabPage12->UseVisualStyleBackColor = true;
        this->tabPage12->Click += gcnew System::EventHandler(this, &Form1::tabPage12_Click);
        // 
        // button19
        // 
        this->button19->BackColor = System::Drawing::Color::Navy;
        this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button19->ForeColor = System::Drawing::Color::White;
        this->button19->Location = System::Drawing::Point(671, 309);
        this->button19->Margin = System::Windows::Forms::Padding(2);
        this->button19->Name = L"button19";
        this->button19->Size = System::Drawing::Size(103, 24);
        this->button19->TabIndex = 39;
        this->button19->Text = L"Back To Home";
        this->button19->UseVisualStyleBackColor = false;
        this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
        // 
        // label33
        // 
        this->label33->AutoSize = true;
        this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
        this->label33->Location = System::Drawing::Point(317, 2);
        this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label33->Name = L"label33";
        this->label33->Size = System::Drawing::Size(124, 24);
        this->label33->TabIndex = 38;
        this->label33->Text = L"User Activity";
        this->label33->Click += gcnew System::EventHandler(this, &Form1::label33_Click);
        // 
        // dataGridView6
        // 
        this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
            this->Column10,
                this->Column30, this->Column11, this->Column28, this->Column29, this->Column14, this->Date, this->Column15, this->Column16, this->Column32,
                this->Column31
        });
        this->dataGridView6->Location = System::Drawing::Point(29, 58);
        this->dataGridView6->Margin = System::Windows::Forms::Padding(2);
        this->dataGridView6->Name = L"dataGridView6";
        this->dataGridView6->RowHeadersWidth = 62;
        this->dataGridView6->RowTemplate->Height = 28;
        this->dataGridView6->Size = System::Drawing::Size(760, 247);
        this->dataGridView6->TabIndex = 0;
        this->dataGridView6->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView6_CellContentClick);
        // 
        // Column10
        // 
        this->Column10->HeaderText = L"S.no";
        this->Column10->MinimumWidth = 8;
        this->Column10->Name = L"Column10";
        this->Column10->Width = 50;
        // 
        // Column30
        // 
        this->Column30->HeaderText = L"Vehicle Type";
        this->Column30->Name = L"Column30";
        // 
        // Column11
        // 
        this->Column11->HeaderText = L"Username";
        this->Column11->MinimumWidth = 8;
        this->Column11->Name = L"Column11";
        this->Column11->Width = 150;
        // 
        // Column28
        // 
        this->Column28->HeaderText = L"Phone Number";
        this->Column28->Name = L"Column28";
        // 
        // Column29
        // 
        this->Column29->HeaderText = L"Email";
        this->Column29->Name = L"Column29";
        // 
        // Column14
        // 
        this->Column14->HeaderText = L"Time";
        this->Column14->MinimumWidth = 8;
        this->Column14->Name = L"Column14";
        this->Column14->Width = 150;
        // 
        // Date
        // 
        this->Date->HeaderText = L"Date";
        this->Date->Name = L"Date";
        // 
        // Column15
        // 
        this->Column15->HeaderText = L"From";
        this->Column15->MinimumWidth = 8;
        this->Column15->Name = L"Column15";
        this->Column15->Width = 150;
        // 
        // Column16
        // 
        this->Column16->HeaderText = L" To";
        this->Column16->MinimumWidth = 8;
        this->Column16->Name = L"Column16";
        this->Column16->Width = 150;
        // 
        // Column32
        // 
        this->Column32->HeaderText = L"Economy Tickets Purchased";
        this->Column32->Name = L"Column32";
        // 
        // Column31
        // 
        this->Column31->HeaderText = L"Business Tickets Purchased";
        this->Column31->Name = L"Column31";
        // 
        // tabPage10
        // 
        this->tabPage10->Controls->Add(this->label64);
        this->tabPage10->Controls->Add(this->label63);
        this->tabPage10->Controls->Add(this->textBox21);
        this->tabPage10->Controls->Add(this->textBox20);
        this->tabPage10->Controls->Add(this->label62);
        this->tabPage10->Controls->Add(this->label28);
        this->tabPage10->Controls->Add(this->textBox13);
        this->tabPage10->Controls->Add(this->textBox12);
        this->tabPage10->Controls->Add(this->label53);
        this->tabPage10->Controls->Add(this->label52);
        this->tabPage10->Controls->Add(this->button21);
        this->tabPage10->Controls->Add(this->button20);
        this->tabPage10->Controls->Add(this->button18);
        this->tabPage10->Controls->Add(this->label32);
        this->tabPage10->Controls->Add(this->dataGridView5);
        this->tabPage10->ForeColor = System::Drawing::Color::Navy;
        this->tabPage10->Location = System::Drawing::Point(4, 22);
        this->tabPage10->Margin = System::Windows::Forms::Padding(2);
        this->tabPage10->Name = L"tabPage10";
        this->tabPage10->Padding = System::Windows::Forms::Padding(2);
        this->tabPage10->Size = System::Drawing::Size(826, 385);
        this->tabPage10->TabIndex = 9;
        this->tabPage10->Text = L"Edit Schedule";
        this->tabPage10->UseVisualStyleBackColor = true;
        this->tabPage10->Click += gcnew System::EventHandler(this, &Form1::tabPage10_Click);
        // 
        // label64
        // 
        this->label64->AutoSize = true;
        this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label64->Location = System::Drawing::Point(164, 89);
        this->label64->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label64->Name = L"label64";
        this->label64->Size = System::Drawing::Size(43, 17);
        this->label64->TabIndex = 47;
        this->label64->Text = L"New :";
        // 
        // label63
        // 
        this->label63->AutoSize = true;
        this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label63->Location = System::Drawing::Point(169, 55);
        this->label63->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label63->Name = L"label63";
        this->label63->Size = System::Drawing::Size(38, 17);
        this->label63->TabIndex = 46;
        this->label63->Text = L"Old :";
        // 
        // textBox21
        // 
        this->textBox21->Location = System::Drawing::Point(211, 88);
        this->textBox21->Margin = System::Windows::Forms::Padding(2);
        this->textBox21->Name = L"textBox21";
        this->textBox21->Size = System::Drawing::Size(88, 20);
        this->textBox21->TabIndex = 45;
        // 
        // textBox20
        // 
        this->textBox20->Location = System::Drawing::Point(66, 89);
        this->textBox20->Margin = System::Windows::Forms::Padding(2);
        this->textBox20->Name = L"textBox20";
        this->textBox20->Size = System::Drawing::Size(88, 20);
        this->textBox20->TabIndex = 44;
        // 
        // label62
        // 
        this->label62->AutoSize = true;
        this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label62->Location = System::Drawing::Point(19, 89);
        this->label62->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label62->Name = L"label62";
        this->label62->Size = System::Drawing::Size(43, 17);
        this->label62->TabIndex = 43;
        this->label62->Text = L"New :";
        // 
        // label28
        // 
        this->label28->AutoSize = true;
        this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label28->Location = System::Drawing::Point(19, 59);
        this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label28->Name = L"label28";
        this->label28->Size = System::Drawing::Size(38, 17);
        this->label28->TabIndex = 42;
        this->label28->Text = L"Old :";
        // 
        // textBox13
        // 
        this->textBox13->Location = System::Drawing::Point(211, 55);
        this->textBox13->Margin = System::Windows::Forms::Padding(2);
        this->textBox13->Name = L"textBox13";
        this->textBox13->Size = System::Drawing::Size(84, 20);
        this->textBox13->TabIndex = 41;
        this->textBox13->TextChanged += gcnew System::EventHandler(this, &Form1::textBox13_TextChanged);
        // 
        // textBox12
        // 
        this->textBox12->Location = System::Drawing::Point(66, 56);
        this->textBox12->Margin = System::Windows::Forms::Padding(2);
        this->textBox12->Name = L"textBox12";
        this->textBox12->Size = System::Drawing::Size(88, 20);
        this->textBox12->TabIndex = 40;
        this->textBox12->TextChanged += gcnew System::EventHandler(this, &Form1::textBox12_TextChanged);
        // 
        // label53
        // 
        this->label53->AutoSize = true;
        this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label53->Location = System::Drawing::Point(221, 17);
        this->label53->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label53->Name = L"label53";
        this->label53->Size = System::Drawing::Size(49, 17);
        this->label53->TabIndex = 39;
        this->label53->Text = L"DATE:";
        this->label53->Click += gcnew System::EventHandler(this, &Form1::label53_Click);
        // 
        // label52
        // 
        this->label52->AutoSize = true;
        this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label52->Location = System::Drawing::Point(78, 17);
        this->label52->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label52->Name = L"label52";
        this->label52->Size = System::Drawing::Size(44, 17);
        this->label52->TabIndex = 38;
        this->label52->Text = L"TIME:";
        this->label52->Click += gcnew System::EventHandler(this, &Form1::label52_Click);
        // 
        // button21
        // 
        this->button21->BackColor = System::Drawing::Color::Navy;
        this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button21->ForeColor = System::Drawing::Color::White;
        this->button21->Location = System::Drawing::Point(673, 55);
        this->button21->Margin = System::Windows::Forms::Padding(2);
        this->button21->Name = L"button21";
        this->button21->Size = System::Drawing::Size(103, 24);
        this->button21->TabIndex = 37;
        this->button21->Text = L"Refresh";
        this->button21->UseVisualStyleBackColor = false;
        this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
        // 
        // button20
        // 
        this->button20->BackColor = System::Drawing::Color::Navy;
        this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button20->ForeColor = System::Drawing::Color::White;
        this->button20->Location = System::Drawing::Point(542, 56);
        this->button20->Margin = System::Windows::Forms::Padding(2);
        this->button20->Name = L"button20";
        this->button20->Size = System::Drawing::Size(103, 24);
        this->button20->TabIndex = 36;
        this->button20->Text = L"Update Ticket";
        this->button20->UseVisualStyleBackColor = false;
        this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
        // 
        // button18
        // 
        this->button18->BackColor = System::Drawing::Color::Navy;
        this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button18->ForeColor = System::Drawing::Color::White;
        this->button18->Location = System::Drawing::Point(673, 328);
        this->button18->Margin = System::Windows::Forms::Padding(2);
        this->button18->Name = L"button18";
        this->button18->Size = System::Drawing::Size(103, 24);
        this->button18->TabIndex = 35;
        this->button18->Text = L"Back To Home";
        this->button18->UseVisualStyleBackColor = false;
        this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
        // 
        // label32
        // 
        this->label32->AutoSize = true;
        this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
        this->label32->Location = System::Drawing::Point(315, 10);
        this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label32->Name = L"label32";
        this->label32->Size = System::Drawing::Size(141, 24);
        this->label32->TabIndex = 33;
        this->label32->Text = L"Edit Schedule";
        this->label32->Click += gcnew System::EventHandler(this, &Form1::label32_Click);
        // 
        // dataGridView5
        // 
        this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView5->Location = System::Drawing::Point(66, 120);
        this->dataGridView5->Margin = System::Windows::Forms::Padding(2);
        this->dataGridView5->Name = L"dataGridView5";
        this->dataGridView5->RowHeadersWidth = 62;
        this->dataGridView5->RowTemplate->Height = 28;
        this->dataGridView5->Size = System::Drawing::Size(710, 204);
        this->dataGridView5->TabIndex = 1;
        this->dataGridView5->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView5_CellClick);
        this->dataGridView5->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView5_CellContentClick);
        // 
        // tabPage9
        // 
        this->tabPage9->Controls->Add(this->panel8);
        this->tabPage9->Controls->Add(this->label45);
        this->tabPage9->Controls->Add(this->label21);
        this->tabPage9->Controls->Add(this->label40);
        this->tabPage9->Controls->Add(this->label38);
        this->tabPage9->Controls->Add(this->label31);
        this->tabPage9->ForeColor = System::Drawing::Color::Navy;
        this->tabPage9->Location = System::Drawing::Point(4, 22);
        this->tabPage9->Margin = System::Windows::Forms::Padding(2);
        this->tabPage9->Name = L"tabPage9";
        this->tabPage9->Padding = System::Windows::Forms::Padding(2);
        this->tabPage9->Size = System::Drawing::Size(826, 385);
        this->tabPage9->TabIndex = 8;
        this->tabPage9->Text = L"Admin Home";
        this->tabPage9->UseVisualStyleBackColor = true;
        this->tabPage9->Click += gcnew System::EventHandler(this, &Form1::tabPage9_Click);
        // 
        // panel8
        // 
        this->panel8->BackColor = System::Drawing::Color::Navy;
        this->panel8->Controls->Add(this->button32);
        this->panel8->Controls->Add(this->button24);
        this->panel8->Controls->Add(this->button23);
        this->panel8->Controls->Add(this->button16);
        this->panel8->Controls->Add(this->button13);
        this->panel8->Controls->Add(this->button14);
        this->panel8->Dock = System::Windows::Forms::DockStyle::Left;
        this->panel8->Location = System::Drawing::Point(2, 2);
        this->panel8->Margin = System::Windows::Forms::Padding(2);
        this->panel8->Name = L"panel8";
        this->panel8->Size = System::Drawing::Size(378, 381);
        this->panel8->TabIndex = 40;
        this->panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel8_Paint);
        // 
        // button32
        // 
        this->button32->BackColor = System::Drawing::Color::White;
        this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button32->Location = System::Drawing::Point(118, 222);
        this->button32->Margin = System::Windows::Forms::Padding(2);
        this->button32->Name = L"button32";
        this->button32->Size = System::Drawing::Size(116, 24);
        this->button32->TabIndex = 5;
        this->button32->Text = L"About us";
        this->button32->UseVisualStyleBackColor = false;
        this->button32->Click += gcnew System::EventHandler(this, &Form1::button32_Click);
        // 
        // button24
        // 
        this->button24->BackColor = System::Drawing::Color::White;
        this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button24->Location = System::Drawing::Point(118, 153);
        this->button24->Margin = System::Windows::Forms::Padding(2);
        this->button24->Name = L"button24";
        this->button24->Size = System::Drawing::Size(116, 24);
        this->button24->TabIndex = 4;
        this->button24->Text = L"Add new tickets";
        this->button24->UseVisualStyleBackColor = false;
        this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
        // 
        // button23
        // 
        this->button23->BackColor = System::Drawing::Color::White;
        this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button23->Location = System::Drawing::Point(118, 188);
        this->button23->Margin = System::Windows::Forms::Padding(2);
        this->button23->Name = L"button23";
        this->button23->Size = System::Drawing::Size(116, 24);
        this->button23->TabIndex = 3;
        this->button23->Text = L"Update tickets";
        this->button23->UseVisualStyleBackColor = false;
        this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
        // 
        // button16
        // 
        this->button16->BackColor = System::Drawing::Color::White;
        this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button16->Location = System::Drawing::Point(118, 260);
        this->button16->Margin = System::Windows::Forms::Padding(2);
        this->button16->Name = L"button16";
        this->button16->Size = System::Drawing::Size(116, 24);
        this->button16->TabIndex = 2;
        this->button16->Text = L"Logout";
        this->button16->UseVisualStyleBackColor = false;
        this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
        // 
        // button13
        // 
        this->button13->BackColor = System::Drawing::Color::White;
        this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button13->Location = System::Drawing::Point(118, 84);
        this->button13->Margin = System::Windows::Forms::Padding(2);
        this->button13->Name = L"button13";
        this->button13->Size = System::Drawing::Size(116, 24);
        this->button13->TabIndex = 0;
        this->button13->Text = L"Edit Schedule";
        this->button13->UseVisualStyleBackColor = false;
        this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
        // 
        // button14
        // 
        this->button14->BackColor = System::Drawing::Color::White;
        this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button14->Location = System::Drawing::Point(118, 121);
        this->button14->Margin = System::Windows::Forms::Padding(2);
        this->button14->Name = L"button14";
        this->button14->Size = System::Drawing::Size(116, 24);
        this->button14->TabIndex = 1;
        this->button14->Text = L"User activity";
        this->button14->UseVisualStyleBackColor = false;
        this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
        // 
        // label45
        // 
        this->label45->Location = System::Drawing::Point(405, 155);
        this->label45->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label45->Name = L"label45";
        this->label45->Size = System::Drawing::Size(335, 40);
        this->label45->TabIndex = 39;
        this->label45->Text = L"*All Admins can see user activity by clicking on \"User Activity \" button.\r\n*Kindl"
            L"y logout to your account to ensure security.";
        this->label45->Click += gcnew System::EventHandler(this, &Form1::label45_Click);
        // 
        // label21
        // 
        this->label21->AutoSize = true;
        this->label21->Location = System::Drawing::Point(405, 116);
        this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label21->Name = L"label21";
        this->label21->Size = System::Drawing::Size(318, 39);
        this->label21->TabIndex = 38;
        this->label21->Text = L"*We are here to ensure that our customer are getting best\r\n service here and they"
            L" are not geting any kind of problem\r\n*Admins can edit schedule by clicking on \"E"
            L"dit Schedule \" button.";
        this->label21->Click += gcnew System::EventHandler(this, &Form1::label21_Click);
        // 
        // label40
        // 
        this->label40->Location = System::Drawing::Point(402, 224);
        this->label40->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label40->Name = L"label40";
        this->label40->Size = System::Drawing::Size(105, 62);
        this->label40->TabIndex = 37;
        this->label40->Text = L"IT/Software department:\r\n📞+92 3514256532\r\n📞+92 3325448981";
        this->label40->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        this->label40->Click += gcnew System::EventHandler(this, &Form1::label40_Click);
        // 
        // label38
        // 
        this->label38->AutoSize = true;
        this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label38->Location = System::Drawing::Point(402, 86);
        this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label38->Name = L"label38";
        this->label38->Size = System::Drawing::Size(77, 13);
        this->label38->TabIndex = 34;
        this->label38->Text = L"QUICK TIPS";
        this->label38->Click += gcnew System::EventHandler(this, &Form1::label38_Click);
        // 
        // label31
        // 
        this->label31->AutoSize = true;
        this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
        this->label31->Location = System::Drawing::Point(401, 48);
        this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label31->Name = L"label31";
        this->label31->Size = System::Drawing::Size(66, 24);
        this->label31->TabIndex = 32;
        this->label31->Text = L"Home";
        this->label31->Click += gcnew System::EventHandler(this, &Form1::label31_Click);
        // 
        // tabPage5
        // 
        this->tabPage5->Controls->Add(this->button17);
        this->tabPage5->Controls->Add(this->label29);
        this->tabPage5->Controls->Add(this->button12);
        this->tabPage5->Controls->Add(this->dataGridView4);
        this->tabPage5->ForeColor = System::Drawing::Color::Navy;
        this->tabPage5->Location = System::Drawing::Point(4, 22);
        this->tabPage5->Margin = System::Windows::Forms::Padding(2);
        this->tabPage5->Name = L"tabPage5";
        this->tabPage5->Padding = System::Windows::Forms::Padding(2);
        this->tabPage5->Size = System::Drawing::Size(826, 385);
        this->tabPage5->TabIndex = 4;
        this->tabPage5->Text = L"Payment";
        this->tabPage5->UseVisualStyleBackColor = true;
        this->tabPage5->Click += gcnew System::EventHandler(this, &Form1::tabPage5_Click);
        // 
        // button17
        // 
        this->button17->BackColor = System::Drawing::Color::Navy;
        this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button17->ForeColor = System::Drawing::Color::White;
        this->button17->Location = System::Drawing::Point(554, 304);
        this->button17->Margin = System::Windows::Forms::Padding(2);
        this->button17->Name = L"button17";
        this->button17->Size = System::Drawing::Size(103, 24);
        this->button17->TabIndex = 39;
        this->button17->Text = L"Back To Home";
        this->button17->UseVisualStyleBackColor = false;
        this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
        // 
        // label29
        // 
        this->label29->AutoSize = true;
        this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
        this->label29->Location = System::Drawing::Point(343, 11);
        this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label29->Name = L"label29";
        this->label29->Size = System::Drawing::Size(90, 24);
        this->label29->TabIndex = 38;
        this->label29->Text = L"Payment";
        this->label29->Click += gcnew System::EventHandler(this, &Form1::label29_Click);
        // 
        // button12
        // 
        this->button12->BackColor = System::Drawing::Color::Navy;
        this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button12->ForeColor = System::Drawing::Color::White;
        this->button12->Location = System::Drawing::Point(668, 304);
        this->button12->Margin = System::Windows::Forms::Padding(2);
        this->button12->Name = L"button12";
        this->button12->Size = System::Drawing::Size(103, 24);
        this->button12->TabIndex = 5;
        this->button12->Text = L"Pay";
        this->button12->UseVisualStyleBackColor = false;
        this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
        // 
        // dataGridView4
        // 
        this->dataGridView4->AllowUserToDeleteRows = false;
        this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
            this->dataGridViewTextBoxColumn13,
                this->dataGridViewTextBoxColumn14, this->Column17, this->Column7, this->Column33, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16,
                this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18
        });
        this->dataGridView4->Location = System::Drawing::Point(4, 50);
        this->dataGridView4->Margin = System::Windows::Forms::Padding(2);
        this->dataGridView4->Name = L"dataGridView4";
        this->dataGridView4->ReadOnly = true;
        this->dataGridView4->RowHeadersWidth = 62;
        this->dataGridView4->RowTemplate->Height = 28;
        this->dataGridView4->Size = System::Drawing::Size(778, 241);
        this->dataGridView4->TabIndex = 2;
        this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView4_CellContentClick);
        // 
        // dataGridViewTextBoxColumn13
        // 
        this->dataGridViewTextBoxColumn13->HeaderText = L"S.no";
        this->dataGridViewTextBoxColumn13->MinimumWidth = 3;
        this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
        this->dataGridViewTextBoxColumn13->ReadOnly = true;
        this->dataGridViewTextBoxColumn13->Width = 50;
        // 
        // dataGridViewTextBoxColumn14
        // 
        this->dataGridViewTextBoxColumn14->HeaderText = L"Name";
        this->dataGridViewTextBoxColumn14->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
        this->dataGridViewTextBoxColumn14->ReadOnly = true;
        this->dataGridViewTextBoxColumn14->Width = 150;
        // 
        // Column17
        // 
        this->Column17->HeaderText = L"Phone Number";
        this->Column17->Name = L"Column17";
        this->Column17->ReadOnly = true;
        // 
        // Column7
        // 
        this->Column7->HeaderText = L"Email";
        this->Column7->Name = L"Column7";
        this->Column7->ReadOnly = true;
        // 
        // Column33
        // 
        this->Column33->HeaderText = L"Payment Status";
        this->Column33->Name = L"Column33";
        this->Column33->ReadOnly = true;
        // 
        // dataGridViewTextBoxColumn15
        // 
        this->dataGridViewTextBoxColumn15->HeaderText = L"From";
        this->dataGridViewTextBoxColumn15->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
        this->dataGridViewTextBoxColumn15->ReadOnly = true;
        this->dataGridViewTextBoxColumn15->Width = 150;
        // 
        // dataGridViewTextBoxColumn16
        // 
        this->dataGridViewTextBoxColumn16->HeaderText = L"To";
        this->dataGridViewTextBoxColumn16->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
        this->dataGridViewTextBoxColumn16->ReadOnly = true;
        this->dataGridViewTextBoxColumn16->Width = 150;
        // 
        // dataGridViewTextBoxColumn17
        // 
        this->dataGridViewTextBoxColumn17->HeaderText = L"Date/Time";
        this->dataGridViewTextBoxColumn17->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
        this->dataGridViewTextBoxColumn17->ReadOnly = true;
        this->dataGridViewTextBoxColumn17->Width = 150;
        // 
        // dataGridViewTextBoxColumn18
        // 
        this->dataGridViewTextBoxColumn18->HeaderText = L"Price";
        this->dataGridViewTextBoxColumn18->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
        this->dataGridViewTextBoxColumn18->ReadOnly = true;
        this->dataGridViewTextBoxColumn18->Width = 150;
        // 
        // tabPage3
        // 
        this->tabPage3->Controls->Add(this->button31);
        this->tabPage3->Controls->Add(this->button10);
        this->tabPage3->Controls->Add(this->label27);
        this->tabPage3->Controls->Add(this->dataGridView3);
        this->tabPage3->Controls->Add(this->comboBox2);
        this->tabPage3->Controls->Add(this->comboBox1);
        this->tabPage3->Controls->Add(this->dateTimePicker1);
        this->tabPage3->Controls->Add(this->checkBox4);
        this->tabPage3->Controls->Add(this->checkBox3);
        this->tabPage3->Controls->Add(this->checkBox2);
        this->tabPage3->Controls->Add(this->checkBox1);
        this->tabPage3->Controls->Add(this->button1);
        this->tabPage3->Controls->Add(this->label5);
        this->tabPage3->Controls->Add(this->label4);
        this->tabPage3->Controls->Add(this->label3);
        this->tabPage3->Controls->Add(this->label2);
        this->tabPage3->Controls->Add(this->label1);
        this->tabPage3->ForeColor = System::Drawing::Color::Navy;
        this->tabPage3->Location = System::Drawing::Point(4, 22);
        this->tabPage3->Margin = System::Windows::Forms::Padding(2);
        this->tabPage3->Name = L"tabPage3";
        this->tabPage3->Padding = System::Windows::Forms::Padding(2);
        this->tabPage3->Size = System::Drawing::Size(826, 385);
        this->tabPage3->TabIndex = 2;
        this->tabPage3->Text = L"Book a Ticket";
        this->tabPage3->UseVisualStyleBackColor = true;
        this->tabPage3->Click += gcnew System::EventHandler(this, &Form1::tabPage3_Click);
        // 
        // button31
        // 
        this->button31->BackColor = System::Drawing::Color::Navy;
        this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button31->ForeColor = System::Drawing::Color::White;
        this->button31->Location = System::Drawing::Point(556, 132);
        this->button31->Margin = System::Windows::Forms::Padding(2);
        this->button31->Name = L"button31";
        this->button31->Size = System::Drawing::Size(103, 24);
        this->button31->TabIndex = 36;
        this->button31->Text = L"show tickets";
        this->button31->UseVisualStyleBackColor = false;
        // 
        // button10
        // 
        this->button10->BackColor = System::Drawing::Color::Navy;
        this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button10->ForeColor = System::Drawing::Color::White;
        this->button10->Location = System::Drawing::Point(556, 346);
        this->button10->Margin = System::Windows::Forms::Padding(2);
        this->button10->Name = L"button10";
        this->button10->Size = System::Drawing::Size(95, 24);
        this->button10->TabIndex = 35;
        this->button10->Text = L"Back To Home";
        this->button10->UseVisualStyleBackColor = false;
        this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
        // 
        // label27
        // 
        this->label27->AutoSize = true;
        this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
        this->label27->Location = System::Drawing::Point(297, 2);
        this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label27->Name = L"label27";
        this->label27->Size = System::Drawing::Size(136, 24);
        this->label27->TabIndex = 24;
        this->label27->Text = L"Book a Ticket\r\n";
        this->label27->Click += gcnew System::EventHandler(this, &Form1::label27_Click);
        // 
        // dataGridView3
        // 
        this->dataGridView3->AllowUserToDeleteRows = false;
        this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
            this->Column8,
                this->dataGridViewTextBoxColumn7, this->Column34, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11,
                this->Column18, this->dataGridViewTextBoxColumn12
        });
        this->dataGridView3->Location = System::Drawing::Point(27, 169);
        this->dataGridView3->Margin = System::Windows::Forms::Padding(2);
        this->dataGridView3->Name = L"dataGridView3";
        this->dataGridView3->RowHeadersWidth = 62;
        this->dataGridView3->RowTemplate->Height = 28;
        this->dataGridView3->Size = System::Drawing::Size(783, 173);
        this->dataGridView3->TabIndex = 17;
        this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView3_CellContentClick);
        // 
        // Column8
        // 
        this->Column8->HeaderText = L"Select";
        this->Column8->MinimumWidth = 8;
        this->Column8->Name = L"Column8";
        this->Column8->Width = 80;
        // 
        // dataGridViewTextBoxColumn7
        // 
        this->dataGridViewTextBoxColumn7->HeaderText = L"S.no";
        this->dataGridViewTextBoxColumn7->MinimumWidth = 3;
        this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
        this->dataGridViewTextBoxColumn7->Width = 50;
        // 
        // Column34
        // 
        this->Column34->HeaderText = L"Vehicle Type";
        this->Column34->Name = L"Column34";
        // 
        // dataGridViewTextBoxColumn9
        // 
        this->dataGridViewTextBoxColumn9->HeaderText = L"From";
        this->dataGridViewTextBoxColumn9->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
        this->dataGridViewTextBoxColumn9->Width = 150;
        // 
        // dataGridViewTextBoxColumn10
        // 
        this->dataGridViewTextBoxColumn10->HeaderText = L"To";
        this->dataGridViewTextBoxColumn10->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
        this->dataGridViewTextBoxColumn10->Width = 150;
        // 
        // dataGridViewTextBoxColumn11
        // 
        this->dataGridViewTextBoxColumn11->HeaderText = L"Date";
        this->dataGridViewTextBoxColumn11->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
        this->dataGridViewTextBoxColumn11->Width = 150;
        // 
        // Column18
        // 
        this->Column18->HeaderText = L"Time";
        this->Column18->MinimumWidth = 8;
        this->Column18->Name = L"Column18";
        this->Column18->Width = 150;
        // 
        // dataGridViewTextBoxColumn12
        // 
        this->dataGridViewTextBoxColumn12->HeaderText = L"Price";
        this->dataGridViewTextBoxColumn12->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
        this->dataGridViewTextBoxColumn12->Width = 120;
        // 
        // comboBox2
        // 
        this->comboBox2->FormattingEnabled = true;
        this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
            L"karachi", L"islamabad", L"lahore", L"multan",
                L"peshawar", L"hyderabad", L"faisalabad"
        });
        this->comboBox2->Location = System::Drawing::Point(34, 135);
        this->comboBox2->Margin = System::Windows::Forms::Padding(2);
        this->comboBox2->Name = L"comboBox2";
        this->comboBox2->Size = System::Drawing::Size(82, 21);
        this->comboBox2->TabIndex = 16;
        this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox2_SelectedIndexChanged);
        // 
        // comboBox1
        // 
        this->comboBox1->FormattingEnabled = true;
        this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
            L"karachi", L"islamabad", L"lahore", L"multan",
                L"peshawar", L"hyderabad", L"faisalabad"
        });
        this->comboBox1->Location = System::Drawing::Point(118, 135);
        this->comboBox1->Margin = System::Windows::Forms::Padding(2);
        this->comboBox1->Name = L"comboBox1";
        this->comboBox1->Size = System::Drawing::Size(82, 21);
        this->comboBox1->TabIndex = 15;
        this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
        // 
        // dateTimePicker1
        // 
        this->dateTimePicker1->Location = System::Drawing::Point(369, 136);
        this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2);
        this->dateTimePicker1->Name = L"dateTimePicker1";
        this->dateTimePicker1->Size = System::Drawing::Size(135, 20);
        this->dateTimePicker1->TabIndex = 13;
        this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Form1::dateTimePicker1_ValueChanged);
        // 
        // checkBox4
        // 
        this->checkBox4->AutoSize = true;
        this->checkBox4->Location = System::Drawing::Point(77, 84);
        this->checkBox4->Margin = System::Windows::Forms::Padding(2);
        this->checkBox4->Name = L"checkBox4";
        this->checkBox4->Size = System::Drawing::Size(72, 17);
        this->checkBox4->TabIndex = 11;
        this->checkBox4->Text = L"First class";
        this->checkBox4->UseVisualStyleBackColor = true;
        this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox4_CheckedChanged);
        // 
        // checkBox3
        // 
        this->checkBox3->AutoSize = true;
        this->checkBox3->Location = System::Drawing::Point(153, 83);
        this->checkBox3->Margin = System::Windows::Forms::Padding(2);
        this->checkBox3->Name = L"checkBox3";
        this->checkBox3->Size = System::Drawing::Size(70, 17);
        this->checkBox3->TabIndex = 10;
        this->checkBox3->Text = L"Economy";
        this->checkBox3->UseVisualStyleBackColor = true;
        this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
        // 
        // checkBox2
        // 
        this->checkBox2->AutoSize = true;
        this->checkBox2->Location = System::Drawing::Point(260, 42);
        this->checkBox2->Margin = System::Windows::Forms::Padding(2);
        this->checkBox2->Name = L"checkBox2";
        this->checkBox2->Size = System::Drawing::Size(58, 17);
        this->checkBox2->TabIndex = 7;
        this->checkBox2->Text = L"Return";
        this->checkBox2->UseVisualStyleBackColor = true;
        this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
        // 
        // checkBox1
        // 
        this->checkBox1->AutoSize = true;
        this->checkBox1->Location = System::Drawing::Point(183, 42);
        this->checkBox1->Margin = System::Windows::Forms::Padding(2);
        this->checkBox1->Name = L"checkBox1";
        this->checkBox1->Size = System::Drawing::Size(71, 17);
        this->checkBox1->TabIndex = 6;
        this->checkBox1->Text = L"One Way";
        this->checkBox1->UseVisualStyleBackColor = true;
        this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
        // 
        // button1
        // 
        this->button1->BackColor = System::Drawing::Color::Navy;
        this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button1->ForeColor = System::Drawing::Color::White;
        this->button1->Location = System::Drawing::Point(673, 346);
        this->button1->Margin = System::Windows::Forms::Padding(2);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(95, 24);
        this->button1->TabIndex = 5;
        this->button1->Text = L"Book TIcket";
        this->button1->UseVisualStyleBackColor = false;
        this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
        // 
        // label5
        // 
        this->label5->AutoSize = true;
        this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label5->Location = System::Drawing::Point(24, 41);
        this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(155, 17);
        this->label5->TabIndex = 4;
        this->label5->Text = L"Choose your trip option";
        this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label4->Location = System::Drawing::Point(28, 82);
        this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(42, 17);
        this->label4->TabIndex = 3;
        this->label4->Text = L"Class";
        this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline));
        this->label3->Location = System::Drawing::Point(366, 118);
        this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(51, 17);
        this->label3->TabIndex = 2;
        this->label3->Text = L"Depart";
        this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label2->Location = System::Drawing::Point(115, 116);
        this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(25, 17);
        this->label2->TabIndex = 1;
        this->label2->Text = L"To";
        this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label1->Location = System::Drawing::Point(30, 116);
        this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(40, 17);
        this->label1->TabIndex = 0;
        this->label1->Text = L"From";
        this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
        // 
        // tabPage2
        // 
        this->tabPage2->Controls->Add(this->button30);
        this->tabPage2->Controls->Add(this->label48);
        this->tabPage2->Controls->Add(this->comboBox3);
        this->tabPage2->Controls->Add(this->comboBox4);
        this->tabPage2->Controls->Add(this->label22);
        this->tabPage2->Controls->Add(this->label41);
        this->tabPage2->Controls->Add(this->button6);
        this->tabPage2->Controls->Add(this->label26);
        this->tabPage2->Controls->Add(this->dataGridView1);
        this->tabPage2->ForeColor = System::Drawing::Color::Navy;
        this->tabPage2->Location = System::Drawing::Point(4, 22);
        this->tabPage2->Margin = System::Windows::Forms::Padding(2);
        this->tabPage2->Name = L"tabPage2";
        this->tabPage2->Padding = System::Windows::Forms::Padding(2);
        this->tabPage2->Size = System::Drawing::Size(826, 385);
        this->tabPage2->TabIndex = 1;
        this->tabPage2->Text = L"Schedule";
        this->tabPage2->UseVisualStyleBackColor = true;
        this->tabPage2->Click += gcnew System::EventHandler(this, &Form1::tabPage2_Click);
        // 
        // button30
        // 
        this->button30->BackColor = System::Drawing::Color::Navy;
        this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button30->ForeColor = System::Drawing::Color::White;
        this->button30->Location = System::Drawing::Point(636, 319);
        this->button30->Margin = System::Windows::Forms::Padding(2);
        this->button30->Name = L"button30";
        this->button30->Size = System::Drawing::Size(103, 24);
        this->button30->TabIndex = 41;
        this->button30->Text = L"show schedule";
        this->button30->UseVisualStyleBackColor = false;
        // 
        // label48
        // 
        this->label48->AutoSize = true;
        this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
        this->label48->Location = System::Drawing::Point(21, 40);
        this->label48->Name = L"label48";
        this->label48->Size = System::Drawing::Size(120, 24);
        this->label48->TabIndex = 40;
        this->label48->Text = L"Select City :";
        this->label48->Click += gcnew System::EventHandler(this, &Form1::label48_Click_1);
        // 
        // comboBox3
        // 
        this->comboBox3->FormattingEnabled = true;
        this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
            L"karachi", L"islamabad", L"lahore", L"multan",
                L"peshawar", L"hyderabad", L"faisalabad"
        });
        this->comboBox3->Location = System::Drawing::Point(103, 93);
        this->comboBox3->Margin = System::Windows::Forms::Padding(2);
        this->comboBox3->Name = L"comboBox3";
        this->comboBox3->Size = System::Drawing::Size(80, 21);
        this->comboBox3->TabIndex = 39;
        this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox3_SelectedIndexChanged);
        // 
        // comboBox4
        // 
        this->comboBox4->FormattingEnabled = true;
        this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
            L"karachi", L"islamabad", L"lahore", L"multan",
                L"peshawar", L"hyderabad", L"faisalabad"
        });
        this->comboBox4->Location = System::Drawing::Point(190, 93);
        this->comboBox4->Margin = System::Windows::Forms::Padding(2);
        this->comboBox4->Name = L"comboBox4";
        this->comboBox4->Size = System::Drawing::Size(82, 21);
        this->comboBox4->TabIndex = 38;
        this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox4_SelectedIndexChanged);
        // 
        // label22
        // 
        this->label22->AutoSize = true;
        this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label22->Location = System::Drawing::Point(193, 74);
        this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label22->Name = L"label22";
        this->label22->Size = System::Drawing::Size(25, 17);
        this->label22->TabIndex = 37;
        this->label22->Text = L"To";
        this->label22->Click += gcnew System::EventHandler(this, &Form1::label22_Click);
        // 
        // label41
        // 
        this->label41->AutoSize = true;
        this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label41->Location = System::Drawing::Point(99, 74);
        this->label41->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label41->Name = L"label41";
        this->label41->Size = System::Drawing::Size(40, 17);
        this->label41->TabIndex = 36;
        this->label41->Text = L"From";
        this->label41->Click += gcnew System::EventHandler(this, &Form1::label41_Click_1);
        // 
        // button6
        // 
        this->button6->BackColor = System::Drawing::Color::Navy;
        this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button6->ForeColor = System::Drawing::Color::White;
        this->button6->Location = System::Drawing::Point(504, 319);
        this->button6->Margin = System::Windows::Forms::Padding(2);
        this->button6->Name = L"button6";
        this->button6->Size = System::Drawing::Size(103, 24);
        this->button6->TabIndex = 35;
        this->button6->Text = L"Back To Home";
        this->button6->UseVisualStyleBackColor = false;
        this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
        // 
        // label26
        // 
        this->label26->AutoSize = true;
        this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
        this->label26->Location = System::Drawing::Point(336, 13);
        this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label26->Name = L"label26";
        this->label26->Size = System::Drawing::Size(99, 24);
        this->label26->TabIndex = 6;
        this->label26->Text = L"Schedule";
        this->label26->Click += gcnew System::EventHandler(this, &Form1::label26_Click);
        // 
        // dataGridView1
        // 
        this->dataGridView1->AllowUserToDeleteRows = false;
        this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
            this->Column1,
                this->Column2, this->Column3, this->Column4, this->Column5, this->Column9, this->Column6
        });
        this->dataGridView1->Location = System::Drawing::Point(25, 133);
        this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
        this->dataGridView1->Name = L"dataGridView1";
        this->dataGridView1->ReadOnly = true;
        this->dataGridView1->RowHeadersWidth = 62;
        this->dataGridView1->RowTemplate->Height = 28;
        this->dataGridView1->Size = System::Drawing::Size(743, 173);
        this->dataGridView1->TabIndex = 0;
        this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
        // 
        // Column1
        // 
        this->Column1->HeaderText = L"S.no";
        this->Column1->MinimumWidth = 3;
        this->Column1->Name = L"Column1";
        this->Column1->ReadOnly = true;
        this->Column1->Width = 80;
        // 
        // Column2
        // 
        this->Column2->HeaderText = L"Vehicle Type";
        this->Column2->Name = L"Column2";
        this->Column2->ReadOnly = true;
        // 
        // Column3
        // 
        this->Column3->HeaderText = L"From";
        this->Column3->MinimumWidth = 8;
        this->Column3->Name = L"Column3";
        this->Column3->ReadOnly = true;
        this->Column3->Width = 150;
        // 
        // Column4
        // 
        this->Column4->HeaderText = L"To";
        this->Column4->MinimumWidth = 8;
        this->Column4->Name = L"Column4";
        this->Column4->ReadOnly = true;
        this->Column4->Width = 150;
        // 
        // Column5
        // 
        this->Column5->HeaderText = L"Date";
        this->Column5->MinimumWidth = 8;
        this->Column5->Name = L"Column5";
        this->Column5->ReadOnly = true;
        this->Column5->Width = 150;
        // 
        // Column9
        // 
        this->Column9->HeaderText = L"Time";
        this->Column9->MinimumWidth = 8;
        this->Column9->Name = L"Column9";
        this->Column9->ReadOnly = true;
        this->Column9->Width = 150;
        // 
        // Column6
        // 
        this->Column6->HeaderText = L"Price";
        this->Column6->MinimumWidth = 8;
        this->Column6->Name = L"Column6";
        this->Column6->ReadOnly = true;
        this->Column6->Width = 150;
        // 
        // tabPage1
        // 
        this->tabPage1->Controls->Add(this->panel7);
        this->tabPage1->Controls->Add(this->label44);
        this->tabPage1->Controls->Add(this->label43);
        this->tabPage1->Controls->Add(this->label42);
        this->tabPage1->Controls->Add(this->label36);
        this->tabPage1->Controls->Add(this->label20);
        this->tabPage1->Controls->Add(this->label25);
        this->tabPage1->Controls->Add(this->label24);
        this->tabPage1->ForeColor = System::Drawing::Color::Navy;
        this->tabPage1->Location = System::Drawing::Point(4, 22);
        this->tabPage1->Margin = System::Windows::Forms::Padding(2);
        this->tabPage1->Name = L"tabPage1";
        this->tabPage1->Padding = System::Windows::Forms::Padding(2);
        this->tabPage1->Size = System::Drawing::Size(826, 385);
        this->tabPage1->TabIndex = 0;
        this->tabPage1->Text = L"Home";
        this->tabPage1->UseVisualStyleBackColor = true;
        this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
        // 
        // panel7
        // 
        this->panel7->BackColor = System::Drawing::Color::Navy;
        this->panel7->Controls->Add(this->button15);
        this->panel7->Controls->Add(this->button5);
        this->panel7->Controls->Add(this->button7);
        this->panel7->Controls->Add(this->button8);
        this->panel7->Controls->Add(this->button9);
        this->panel7->Dock = System::Windows::Forms::DockStyle::Left;
        this->panel7->Location = System::Drawing::Point(2, 2);
        this->panel7->Margin = System::Windows::Forms::Padding(2);
        this->panel7->Name = L"panel7";
        this->panel7->Size = System::Drawing::Size(378, 381);
        this->panel7->TabIndex = 41;
        this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel7_Paint);
        // 
        // button15
        // 
        this->button15->BackColor = System::Drawing::Color::White;
        this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button15->Location = System::Drawing::Point(141, 229);
        this->button15->Margin = System::Windows::Forms::Padding(2);
        this->button15->Name = L"button15";
        this->button15->Size = System::Drawing::Size(113, 24);
        this->button15->TabIndex = 4;
        this->button15->Text = L"Logout";
        this->button15->UseVisualStyleBackColor = false;
        this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
        // 
        // button5
        // 
        this->button5->BackColor = System::Drawing::Color::White;
        this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button5->Location = System::Drawing::Point(141, 92);
        this->button5->Margin = System::Windows::Forms::Padding(2);
        this->button5->Name = L"button5";
        this->button5->Size = System::Drawing::Size(113, 24);
        this->button5->TabIndex = 0;
        this->button5->Text = L"Schedule";
        this->button5->UseVisualStyleBackColor = false;
        this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
        // 
        // button7
        // 
        this->button7->BackColor = System::Drawing::Color::White;
        this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button7->Location = System::Drawing::Point(141, 127);
        this->button7->Margin = System::Windows::Forms::Padding(2);
        this->button7->Name = L"button7";
        this->button7->Size = System::Drawing::Size(113, 24);
        this->button7->TabIndex = 1;
        this->button7->Text = L"Book a Ticket";
        this->button7->UseVisualStyleBackColor = false;
        this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
        // 
        // button8
        // 
        this->button8->BackColor = System::Drawing::Color::White;
        this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button8->Location = System::Drawing::Point(141, 196);
        this->button8->Margin = System::Windows::Forms::Padding(2);
        this->button8->Name = L"button8";
        this->button8->Size = System::Drawing::Size(113, 24);
        this->button8->TabIndex = 2;
        this->button8->Text = L"Payment";
        this->button8->UseVisualStyleBackColor = false;
        this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
        // 
        // button9
        // 
        this->button9->BackColor = System::Drawing::Color::White;
        this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button9->Location = System::Drawing::Point(141, 160);
        this->button9->Margin = System::Windows::Forms::Padding(2);
        this->button9->Name = L"button9";
        this->button9->Size = System::Drawing::Size(113, 24);
        this->button9->TabIndex = 3;
        this->button9->Text = L"View Ticket";
        this->button9->UseVisualStyleBackColor = false;
        this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
        // 
        // label44
        // 
        this->label44->Location = System::Drawing::Point(397, 152);
        this->label44->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label44->Name = L"label44";
        this->label44->Size = System::Drawing::Size(326, 43);
        this->label44->TabIndex = 40;
        this->label44->Text = L"*Kindly log out to your account when you have done your work to ensure security.\r"
            L"\n*If you have any problem Contact to our customer care.";
        this->label44->Click += gcnew System::EventHandler(this, &Form1::label44_Click);
        // 
        // label43
        // 
        this->label43->Location = System::Drawing::Point(397, 126);
        this->label43->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label43->Name = L"label43";
        this->label43->Size = System::Drawing::Size(336, 27);
        this->label43->TabIndex = 39;
        this->label43->Text = L"*You can view your Ticket by clicking on \"View Ticket\" button.\r\n*You can Print an"
            L"d Pay for your Ticket by clicking on \"Payment\" button.";
        this->label43->Click += gcnew System::EventHandler(this, &Form1::label43_Click);
        // 
        // label42
        // 
        this->label42->Location = System::Drawing::Point(397, 100);
        this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label42->Name = L"label42";
        this->label42->Size = System::Drawing::Size(327, 26);
        this->label42->TabIndex = 38;
        this->label42->Text = L"*You can access to Schedule by clicking on \"Schedule\" button.\r\n*You can Book your"
            L" Ticket by clicking on \"Book a Ticket\" button.";
        this->label42->Click += gcnew System::EventHandler(this, &Form1::label42_Click);
        // 
        // label36
        // 
        this->label36->Location = System::Drawing::Point(397, 223);
        this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label36->Name = L"label36";
        this->label36->Size = System::Drawing::Size(105, 62);
        this->label36->TabIndex = 37;
        this->label36->Text = L"Customer Care:\r\n📞+92 3514287532\r\n📞+92 3335448522";
        this->label36->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        this->label36->Click += gcnew System::EventHandler(this, &Form1::label36_Click);
        // 
        // label20
        // 
        this->label20->AutoSize = true;
        this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label20->Location = System::Drawing::Point(397, 78);
        this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label20->Name = L"label20";
        this->label20->Size = System::Drawing::Size(77, 13);
        this->label20->TabIndex = 8;
        this->label20->Text = L"QUICK TIPS";
        this->label20->Click += gcnew System::EventHandler(this, &Form1::label20_Click);
        // 
        // label25
        // 
        this->label25->AutoSize = true;
        this->label25->Location = System::Drawing::Point(366, 128);
        this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label25->Name = L"label25";
        this->label25->Size = System::Drawing::Size(0, 13);
        this->label25->TabIndex = 7;
        this->label25->Click += gcnew System::EventHandler(this, &Form1::label25_Click);
        // 
        // label24
        // 
        this->label24->AutoSize = true;
        this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
        this->label24->Location = System::Drawing::Point(396, 39);
        this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label24->Name = L"label24";
        this->label24->Size = System::Drawing::Size(66, 24);
        this->label24->TabIndex = 5;
        this->label24->Text = L"Home";
        this->label24->Click += gcnew System::EventHandler(this, &Form1::label24_Click);
        // 
        // tabPage7
        // 
        this->tabPage7->BackColor = System::Drawing::Color::WhiteSmoke;
        this->tabPage7->Controls->Add(this->panel6);
        this->tabPage7->Controls->Add(this->panel5);
        this->tabPage7->ForeColor = System::Drawing::Color::Navy;
        this->tabPage7->Location = System::Drawing::Point(4, 22);
        this->tabPage7->Margin = System::Windows::Forms::Padding(2);
        this->tabPage7->Name = L"tabPage7";
        this->tabPage7->Padding = System::Windows::Forms::Padding(2);
        this->tabPage7->Size = System::Drawing::Size(826, 385);
        this->tabPage7->TabIndex = 6;
        this->tabPage7->Text = L"Sign up";
        this->tabPage7->Click += gcnew System::EventHandler(this, &Form1::tabPage7_Click);
        // 
        // panel6
        // 
        this->panel6->BackColor = System::Drawing::Color::White;
        this->panel6->Controls->Add(this->label9);
        this->panel6->Controls->Add(this->textBox8);
        this->panel6->Controls->Add(this->label11);
        this->panel6->Controls->Add(this->label13);
        this->panel6->Controls->Add(this->textBox9);
        this->panel6->Controls->Add(this->label14);
        this->panel6->Controls->Add(this->textBox7);
        this->panel6->Controls->Add(this->textBox6);
        this->panel6->Controls->Add(this->label16);
        this->panel6->Controls->Add(this->checkBox6);
        this->panel6->Controls->Add(this->label17);
        this->panel6->Controls->Add(this->checkBox7);
        this->panel6->Controls->Add(this->button3);
        this->panel6->Location = System::Drawing::Point(183, 15);
        this->panel6->Margin = System::Windows::Forms::Padding(2);
        this->panel6->Name = L"panel6";
        this->panel6->Size = System::Drawing::Size(426, 278);
        this->panel6->TabIndex = 40;
        this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel6_Paint);
        // 
        // label9
        // 
        this->label9->AutoSize = true;
        this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
        this->label9->Location = System::Drawing::Point(160, 10);
        this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label9->Name = L"label9";
        this->label9->Size = System::Drawing::Size(82, 24);
        this->label9->TabIndex = 3;
        this->label9->Text = L"Sign up";
        this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click_1);
        // 
        // textBox8
        // 
        this->textBox8->Location = System::Drawing::Point(27, 207);
        this->textBox8->Margin = System::Windows::Forms::Padding(2);
        this->textBox8->Name = L"textBox8";
        this->textBox8->Size = System::Drawing::Size(109, 20);
        this->textBox8->TabIndex = 19;
        this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_TextChanged);
        // 
        // label11
        // 
        this->label11->AutoSize = true;
        this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->label11->Location = System::Drawing::Point(21, 47);
        this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label11->Name = L"label11";
        this->label11->Size = System::Drawing::Size(73, 17);
        this->label11->TabIndex = 5;
        this->label11->Text = L"Username";
        this->label11->Click += gcnew System::EventHandler(this, &Form1::label11_Click);
        // 
        // label13
        // 
        this->label13->AutoSize = true;
        this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->label13->Location = System::Drawing::Point(21, 112);
        this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label13->Name = L"label13";
        this->label13->Size = System::Drawing::Size(101, 17);
        this->label13->TabIndex = 6;
        this->label13->Text = L"Phone number";
        this->label13->Click += gcnew System::EventHandler(this, &Form1::label13_Click);
        // 
        // textBox9
        // 
        this->textBox9->Location = System::Drawing::Point(203, 136);
        this->textBox9->Margin = System::Windows::Forms::Padding(2);
        this->textBox9->Name = L"textBox9";
        this->textBox9->Size = System::Drawing::Size(174, 20);
        this->textBox9->TabIndex = 12;
        this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_TextChanged);
        // 
        // label14
        // 
        this->label14->AutoSize = true;
        this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->label14->Location = System::Drawing::Point(200, 112);
        this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label14->Name = L"label14";
        this->label14->Size = System::Drawing::Size(42, 17);
        this->label14->TabIndex = 7;
        this->label14->Text = L"Email";
        this->label14->Click += gcnew System::EventHandler(this, &Form1::label14_Click);
        // 
        // textBox7
        // 
        this->textBox7->Location = System::Drawing::Point(25, 136);
        this->textBox7->Margin = System::Windows::Forms::Padding(2);
        this->textBox7->Name = L"textBox7";
        this->textBox7->Size = System::Drawing::Size(120, 20);
        this->textBox7->TabIndex = 11;
        this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
        // 
        // textBox6
        // 
        this->textBox6->Location = System::Drawing::Point(25, 79);
        this->textBox6->Margin = System::Windows::Forms::Padding(2);
        this->textBox6->Name = L"textBox6";
        this->textBox6->Size = System::Drawing::Size(120, 20);
        this->textBox6->TabIndex = 10;
        this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged_1);
        // 
        // label16
        // 
        this->label16->AutoSize = true;
        this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->label16->Location = System::Drawing::Point(256, 56);
        this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label16->Name = L"label16";
        this->label16->Size = System::Drawing::Size(56, 17);
        this->label16->TabIndex = 14;
        this->label16->Text = L"Gender";
        this->label16->Click += gcnew System::EventHandler(this, &Form1::label16_Click);
        // 
        // checkBox6
        // 
        this->checkBox6->AutoSize = true;
        this->checkBox6->Location = System::Drawing::Point(259, 81);
        this->checkBox6->Margin = System::Windows::Forms::Padding(2);
        this->checkBox6->Name = L"checkBox6";
        this->checkBox6->Size = System::Drawing::Size(49, 17);
        this->checkBox6->TabIndex = 15;
        this->checkBox6->Text = L"Male";
        this->checkBox6->UseVisualStyleBackColor = true;
        this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox6_CheckedChanged);
        // 
        // label17
        // 
        this->label17->AutoSize = true;
        this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->label17->Location = System::Drawing::Point(24, 174);
        this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label17->Name = L"label17";
        this->label17->Size = System::Drawing::Size(69, 17);
        this->label17->TabIndex = 18;
        this->label17->Text = L"Password";
        this->label17->Click += gcnew System::EventHandler(this, &Form1::label17_Click);
        // 
        // checkBox7
        // 
        this->checkBox7->AutoSize = true;
        this->checkBox7->Location = System::Drawing::Point(317, 81);
        this->checkBox7->Margin = System::Windows::Forms::Padding(2);
        this->checkBox7->Name = L"checkBox7";
        this->checkBox7->Size = System::Drawing::Size(60, 17);
        this->checkBox7->TabIndex = 16;
        this->checkBox7->Text = L"Female";
        this->checkBox7->UseVisualStyleBackColor = true;
        this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox7_CheckedChanged);
        // 
        // button3
        // 
        this->button3->BackColor = System::Drawing::Color::Navy;
        this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
        this->button3->ForeColor = System::Drawing::Color::White;
        this->button3->Location = System::Drawing::Point(317, 236);
        this->button3->Margin = System::Windows::Forms::Padding(2);
        this->button3->Name = L"button3";
        this->button3->Size = System::Drawing::Size(83, 31);
        this->button3->TabIndex = 17;
        this->button3->Text = L"Sign up";
        this->button3->UseVisualStyleBackColor = false;
        this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
        // 
        // panel5
        // 
        this->panel5->BackColor = System::Drawing::Color::Navy;
        this->panel5->Controls->Add(this->label39);
        this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
        this->panel5->Location = System::Drawing::Point(2, 326);
        this->panel5->Margin = System::Windows::Forms::Padding(2);
        this->panel5->Name = L"panel5";
        this->panel5->Size = System::Drawing::Size(822, 57);
        this->panel5->TabIndex = 39;
        this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel5_Paint);
        // 
        // label39
        // 
        this->label39->ForeColor = System::Drawing::Color::White;
        this->label39->Location = System::Drawing::Point(659, 1);
        this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label39->Name = L"label39";
        this->label39->Size = System::Drawing::Size(105, 62);
        this->label39->TabIndex = 38;
        this->label39->Text = L"Customer Care:\r\n📞+92 3514287532\r\n📞+92 3335448522";
        this->label39->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        this->label39->Click += gcnew System::EventHandler(this, &Form1::label39_Click);
        // 
        // tabPage6
        // 
        this->tabPage6->BackColor = System::Drawing::Color::WhiteSmoke;
        this->tabPage6->Controls->Add(this->panel3);
        this->tabPage6->Controls->Add(this->panel2);
        this->tabPage6->ForeColor = System::Drawing::Color::Navy;
        this->tabPage6->Location = System::Drawing::Point(4, 22);
        this->tabPage6->Margin = System::Windows::Forms::Padding(2);
        this->tabPage6->Name = L"tabPage6";
        this->tabPage6->Padding = System::Windows::Forms::Padding(2);
        this->tabPage6->Size = System::Drawing::Size(826, 385);
        this->tabPage6->TabIndex = 5;
        this->tabPage6->Text = L" Login";
        this->tabPage6->Click += gcnew System::EventHandler(this, &Form1::tabPage6_Click);
        // 
        // panel3
        // 
        this->panel3->BackColor = System::Drawing::Color::Navy;
        this->panel3->Controls->Add(this->label37);
        this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
        this->panel3->Location = System::Drawing::Point(2, 340);
        this->panel3->Margin = System::Windows::Forms::Padding(2);
        this->panel3->Name = L"panel3";
        this->panel3->Size = System::Drawing::Size(822, 43);
        this->panel3->TabIndex = 39;
        this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel3_Paint);
        // 
        // label37
        // 
        this->label37->ForeColor = System::Drawing::Color::White;
        this->label37->Location = System::Drawing::Point(657, 0);
        this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label37->Name = L"label37";
        this->label37->Size = System::Drawing::Size(105, 38);
        this->label37->TabIndex = 37;
        this->label37->Text = L"Customer Care:\r\n📞+92 3514287532\r\n📞+92 3335448522";
        this->label37->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        this->label37->Click += gcnew System::EventHandler(this, &Form1::label37_Click);
        // 
        // panel2
        // 
        this->panel2->BackColor = System::Drawing::Color::White;
        this->panel2->Controls->Add(this->textBox4);
        this->panel2->Controls->Add(this->button4);
        this->panel2->Controls->Add(this->button2);
        this->panel2->Controls->Add(this->checkBox8);
        this->panel2->Controls->Add(this->textBox3);
        this->panel2->Controls->Add(this->label19);
        this->panel2->Controls->Add(this->label8);
        this->panel2->Controls->Add(this->checkBox9);
        this->panel2->Controls->Add(this->label12);
        this->panel2->Controls->Add(this->label7);
        this->panel2->Controls->Add(this->label18);
        this->panel2->Location = System::Drawing::Point(266, 23);
        this->panel2->Margin = System::Windows::Forms::Padding(2);
        this->panel2->Name = L"panel2";
        this->panel2->Size = System::Drawing::Size(256, 284);
        this->panel2->TabIndex = 38;
        this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel2_Paint);
        // 
        // textBox4
        // 
        this->textBox4->Location = System::Drawing::Point(44, 173);
        this->textBox4->Margin = System::Windows::Forms::Padding(2);
        this->textBox4->Name = L"textBox4";
        this->textBox4->Size = System::Drawing::Size(161, 20);
        this->textBox4->TabIndex = 1;
        this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
        // 
        // button4
        // 
        this->button4->BackColor = System::Drawing::Color::Navy;
        this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button4->ForeColor = System::Drawing::Color::White;
        this->button4->Location = System::Drawing::Point(161, 241);
        this->button4->Margin = System::Windows::Forms::Padding(2);
        this->button4->Name = L"button4";
        this->button4->Size = System::Drawing::Size(76, 28);
        this->button4->TabIndex = 7;
        this->button4->Text = L"Sign up";
        this->button4->UseVisualStyleBackColor = false;
        this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
        // 
        // button2
        // 
        this->button2->BackColor = System::Drawing::Color::Navy;
        this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->button2->ForeColor = System::Drawing::Color::White;
        this->button2->Location = System::Drawing::Point(46, 206);
        this->button2->Margin = System::Windows::Forms::Padding(2);
        this->button2->Name = L"button2";
        this->button2->Size = System::Drawing::Size(159, 31);
        this->button2->TabIndex = 4;
        this->button2->Text = L"Login";
        this->button2->UseVisualStyleBackColor = false;
        this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
        // 
        // checkBox8
        // 
        this->checkBox8->AutoSize = true;
        this->checkBox8->ForeColor = System::Drawing::Color::Navy;
        this->checkBox8->Location = System::Drawing::Point(93, 64);
        this->checkBox8->Margin = System::Windows::Forms::Padding(2);
        this->checkBox8->Name = L"checkBox8";
        this->checkBox8->Size = System::Drawing::Size(55, 17);
        this->checkBox8->TabIndex = 9;
        this->checkBox8->Text = L"Admin";
        this->checkBox8->UseVisualStyleBackColor = true;
        this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox8_CheckedChanged);
        // 
        // textBox3
        // 
        this->textBox3->Location = System::Drawing::Point(44, 119);
        this->textBox3->Margin = System::Windows::Forms::Padding(2);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(161, 20);
        this->textBox3->TabIndex = 0;
        this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
        // 
        // label19
        // 
        this->label19->AutoSize = true;
        this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label19->ForeColor = System::Drawing::Color::Navy;
        this->label19->Location = System::Drawing::Point(43, 62);
        this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label19->Name = L"label19";
        this->label19->Size = System::Drawing::Size(37, 17);
        this->label19->TabIndex = 8;
        this->label19->Text = L"Role";
        this->label19->Click += gcnew System::EventHandler(this, &Form1::label19_Click);
        // 
        // label8
        // 
        this->label8->AutoSize = true;
        this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->label8->ForeColor = System::Drawing::Color::Navy;
        this->label8->Location = System::Drawing::Point(41, 154);
        this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label8->Name = L"label8";
        this->label8->Size = System::Drawing::Size(69, 17);
        this->label8->TabIndex = 3;
        this->label8->Text = L"Password";
        this->label8->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
        // 
        // checkBox9
        // 
        this->checkBox9->AutoSize = true;
        this->checkBox9->ForeColor = System::Drawing::Color::Navy;
        this->checkBox9->Location = System::Drawing::Point(159, 64);
        this->checkBox9->Margin = System::Windows::Forms::Padding(2);
        this->checkBox9->Name = L"checkBox9";
        this->checkBox9->Size = System::Drawing::Size(48, 17);
        this->checkBox9->TabIndex = 10;
        this->checkBox9->Text = L"User";
        this->checkBox9->UseVisualStyleBackColor = true;
        this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox9_CheckedChanged);
        // 
        // label12
        // 
        this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
            | System::Windows::Forms::AnchorStyles::Right));
        this->label12->AutoSize = true;
        this->label12->BackColor = System::Drawing::Color::Transparent;
        this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
        this->label12->ForeColor = System::Drawing::Color::Navy;
        this->label12->Location = System::Drawing::Point(92, 23);
        this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label12->Name = L"label12";
        this->label12->Size = System::Drawing::Size(62, 24);
        this->label12->TabIndex = 5;
        this->label12->Text = L"Login";
        this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        this->label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click);
        // 
        // label7
        // 
        this->label7->AutoSize = true;
        this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->label7->ForeColor = System::Drawing::Color::Navy;
        this->label7->Location = System::Drawing::Point(43, 100);
        this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label7->Name = L"label7";
        this->label7->Size = System::Drawing::Size(119, 17);
        this->label7->TabIndex = 2;
        this->label7->Text = L"Email / Phone no.";
        this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
        // 
        // label18
        // 
        this->label18->AutoSize = true;
        this->label18->ForeColor = System::Drawing::Color::Navy;
        this->label18->Location = System::Drawing::Point(37, 250);
        this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label18->Name = L"label18";
        this->label18->Size = System::Drawing::Size(120, 13);
        this->label18->TabIndex = 6;
        this->label18->Text = L"I don\'t have an account";
        this->label18->Click += gcnew System::EventHandler(this, &Form1::label18_Click);
        // 
        // tabControl1
        // 
        this->tabControl1->Controls->Add(this->tabPage6);
        this->tabControl1->Controls->Add(this->tabPage7);
        this->tabControl1->Controls->Add(this->tabPage1);
        this->tabControl1->Controls->Add(this->tabPage2);
        this->tabControl1->Controls->Add(this->tabPage3);
        this->tabControl1->Controls->Add(this->tabPage5);
        this->tabControl1->Controls->Add(this->tabPage9);
        this->tabControl1->Controls->Add(this->tabPage10);
        this->tabControl1->Controls->Add(this->tabPage12);
        this->tabControl1->Controls->Add(this->tabPage8);
        this->tabControl1->Controls->Add(this->tabPage13);
        this->tabControl1->Controls->Add(this->tabPage11);
        this->tabControl1->Location = System::Drawing::Point(8, 45);
        this->tabControl1->Margin = System::Windows::Forms::Padding(2);
        this->tabControl1->Name = L"tabControl1";
        this->tabControl1->SelectedIndex = 0;
        this->tabControl1->Size = System::Drawing::Size(834, 411);
        this->tabControl1->TabIndex = 1;
        this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::tabControl1_SelectedIndexChanged);
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::Color::LightGray;
        this->ClientSize = System::Drawing::Size(877, 457);
        this->Controls->Add(this->label6);
        this->Controls->Add(this->tabControl1);
        this->Name = L"Form1";
        this->Text = L"Form1";
        this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
        this->tabPage11->ResumeLayout(false);
        this->tabPage11->PerformLayout();
        this->panel4->ResumeLayout(false);
        this->panel1->ResumeLayout(false);
        this->tabPage13->ResumeLayout(false);
        this->tabPage13->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
        this->tabPage8->ResumeLayout(false);
        this->tabPage8->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->EndInit();
        this->tabPage12->ResumeLayout(false);
        this->tabPage12->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
        this->tabPage10->ResumeLayout(false);
        this->tabPage10->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
        this->tabPage9->ResumeLayout(false);
        this->tabPage9->PerformLayout();
        this->panel8->ResumeLayout(false);
        this->tabPage5->ResumeLayout(false);
        this->tabPage5->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
        this->tabPage3->ResumeLayout(false);
        this->tabPage3->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
        this->tabPage2->ResumeLayout(false);
        this->tabPage2->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
        this->tabPage1->ResumeLayout(false);
        this->tabPage1->PerformLayout();
        this->panel7->ResumeLayout(false);
        this->tabPage7->ResumeLayout(false);
        this->panel6->ResumeLayout(false);
        this->panel6->PerformLayout();
        this->panel5->ResumeLayout(false);
        this->tabPage6->ResumeLayout(false);
        this->panel3->ResumeLayout(false);
        this->panel2->ResumeLayout(false);
        this->panel2->PerformLayout();
        this->tabControl1->ResumeLayout(false);
        this->ResumeLayout(false);
        this->PerformLayout();

    }
#pragma endregion

   // You can call the functions at a button click. If you prefer, 
    // you can call them by clicking a menu item.

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
    Customer ob;
    String^ value1 = nullptr;

    if (checkBox6->Checked) {
        value1 = checkBox6->Text; 
    }
    else if (checkBox7->Checked) {
        value1 = checkBox7->Text;
    }
    if (checkBox6->Checked || checkBox7->Checked) {
        if (ob.registerInfo(textBox6->Text, textBox8->Text, textBox9->Text, textBox7->Text, value1)) {
            tabControl1->SelectedTab = tabPage6;
            tabControl1->TabPages->Remove(tabPage7);
        }
        else {
            textBox8->Text = "Weak password!";
            textBox9->Text = "invalid email format!";
            textBox6->Text = "invalid username!";
            textBox7->Text = "invalid phone number!";
            textBox8->ForeColor = Color::Red;
            textBox9->ForeColor = Color::Red;
            textBox6->ForeColor = Color::Red;
            textBox7->ForeColor = Color::Red;
        }
    }
    else {
        checkBox6->ForeColor = Color::Red;
        checkBox7->ForeColor = Color::Red;
    }
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listView1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox9 -> Checked) {
        checkBox8->Checked = false;
    }
}
private: System::Void checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox8->Checked) {
        checkBox9->Checked = false;
    }
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Remove(tabPage1);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage2);
    tabControl1->SelectedTab = tabPage2;
    tabControl1->TabPages->Remove(tabPage1);

}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
    if (File::Exists("ticket.txt") && File::Exists("vehicle.txt")) {
        button29_Click(sender, e);
    }
    tabControl1->TabPages->Remove(tabPage1);
    tabControl1->TabPages->Remove(tabPage2);
    tabControl1->TabPages->Remove(tabPage3);
    tabControl1->TabPages->Remove(tabPage5);
    tabControl1->TabPages->Remove(tabPage7);
    tabControl1->TabPages->Remove(tabPage8);
    tabControl1->TabPages->Remove(tabPage9);
    tabControl1->TabPages->Remove(tabPage10);
    tabControl1->TabPages->Remove(tabPage11);
    tabControl1->TabPages->Remove(tabPage12);
    tabControl1->TabPages->Remove(tabPage13);
}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label41_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label48_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label49_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label37_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label40_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label44_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label42_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label36_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label43_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label39_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage13);
    tabControl1->SelectedTab = tabPage13;
    tabControl1->TabPages->Remove(tabPage9);
}
private: System::Void tabPage8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox7->Checked) {
        checkBox6->Checked = false;
    }
}
private: System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox6->Checked) {
        checkBox7->Checked = false;
    }
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    if (!tabControl1->TabPages->Contains(tabPage7)) {
        tabControl1->TabPages->Add(tabPage7);
        tabControl1->SelectedTab = tabPage7;
    }
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    Customer user;
    Admin admin;
    String^ email=textBox3->Text;
    String^ password= textBox4->Text;

    if (checkBox9->Checked) {
        if (user.login(email, password)) {
            tabControl1->TabPages->Add(tabPage1);
            tabControl1->SelectedTab = tabPage1;
            tabControl1->TabPages->Remove(tabPage6);
        }
        else {
            textBox3->ForeColor = Color::Red;
            textBox4->ForeColor = Color::Red;
            textBox3->Text = "invalid email";
            textBox4->Text = "invalid password";
        }
    }
    else if (checkBox8->Checked) {
        if (admin.login(email, password)) {
            tabControl1->TabPages->Add(tabPage9);
            tabControl1->SelectedTab = tabPage9;
            tabControl1->TabPages->Remove(tabPage6);
        }
        else {
            textBox3->ForeColor = Color::Red;
            textBox4->ForeColor = Color::Red;
            textBox3->Text = "invalid email";
            textBox4->Text = "invalid password";
        }
    }
    else {
        checkBox8->ForeColor = Color::Red;
        checkBox9->ForeColor = Color::Red;
    }

}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage1);
    tabControl1->SelectedTab = tabPage1;
    tabControl1->TabPages->Remove(tabPage5);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage1);
    tabControl1->SelectedTab = tabPage1;
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage1);
    tabControl1->SelectedTab = tabPage1;
    tabControl1->TabPages->Remove(tabPage3);
}
private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label48_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label41_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage1);
    tabControl1->SelectedTab = tabPage1;
    tabControl1->TabPages->Remove(tabPage2);
}
private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage6);
    tabControl1->SelectedTab = tabPage6;
    tabControl1->TabPages->Remove(tabPage1);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage5);
    tabControl1->SelectedTab = tabPage5;
    tabControl1->TabPages->Remove(tabPage1);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage3);
    tabControl1->SelectedTab = tabPage3;
    tabControl1->TabPages->Remove(tabPage1);
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label45_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label38_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label31_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage6);
    tabControl1->SelectedTab = tabPage6;
    tabControl1->TabPages->Remove(tabPage9);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage12);
    tabControl1->SelectedTab = tabPage12;
    tabControl1->TabPages->Remove(tabPage9);
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage10);
    tabControl1->SelectedTab = tabPage10;
    tabControl1->TabPages->Remove(tabPage9);
}
private: System::Void tabPage10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage9);
    tabControl1->SelectedTab = tabPage9;
    tabControl1->TabPages->Remove(tabPage10);
}
private: System::Void dataGridView5_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void tabPage12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage9);
    tabControl1->SelectedTab = tabPage9;
    tabControl1->TabPages->Remove(tabPage12);
}
private: System::Void label33_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView6_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void tabPage11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label47_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label46_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label35_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label34_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label30_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button49_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage9);
    tabControl1->SelectedTab = tabPage9;
    tabControl1->TabPages->Remove(tabPage11);
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
       //edit schedule update
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
    Database ob;
    if (textBox12->Text->Length > 0 && textBox13->Text->Length > 0) {
        if ((textBox20->Text->Length > 2 && textBox21->Text->Length > 2)) {
            ob.update("ticket.txt", textBox13->Text, textBox21->Text, 3, Convert::ToInt32(index));
            ob.update("ticket.txt", textBox12->Text, textBox20->Text, 4, Convert::ToInt32(index));
        }
        else {
            MessageBox::Show("invalid inputs.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
}

       //edit schedule refresh
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
    button29_Click(sender, e);
}

private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label55_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage8);
    tabControl1->SelectedTab = tabPage8;
    tabControl1->TabPages->Remove(tabPage9);
}
private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

       //add new ticket add
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
    Ticket ticket;
    Vehicle vehicle;
    int price , busseats , ecoseats;
    if (textBox1->Text->Length > 3 && textBox2->Text->Length > 3 && textBox5->Text->Length > 1 && textBox10->Text->Length > 2 && Int32::TryParse(textBox11->Text, price) && price > 0 && textBox17->Text->Length > 1 && Int32::TryParse(textBox19->Text, ecoseats) && Int32::TryParse(textBox18->Text, busseats) && ecoseats > 0 && busseats > 0) {
        if (ticket.registerTicket(textBox1->Text, textBox2->Text, textBox5->Text, textBox10->Text, textBox11->Text) && vehicle.registervehicle(textBox17->Text, textBox19->Text, textBox18->Text)) {
            MessageBox::Show("Ticket added successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        else {
            MessageBox::Show("Failed to register ticket or vehicle.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    else {
        MessageBox::Show("invalid inputs.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
 
}

private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage9);
    tabControl1->SelectedTab = tabPage9;
    tabControl1->TabPages->Remove(tabPage13);
}
private: System::Void label49_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label50_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label51_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label52_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label53_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label54_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label56_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label57_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label58_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage9);
    tabControl1->SelectedTab = tabPage9;
    tabControl1->TabPages->Remove(tabPage8);
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
    Database ob;
    int ecoseats, busseats, price;
    if (textBox14->Text->Length > 0 && textBox15->Text->Length > 0 && textBox16->Text->Length > 0 && textBox26->Text->Length > 0 && textBox27->Text->Length > 0) {
        if (textBox24->Text->Length > 2 && textBox23->Text->Length > 2 && Int32::TryParse(textBox22->Text, price) && price > 0 && Int32::TryParse(textBox25->Text, busseats) && busseats > 0 && Int32::TryParse(textBox28->Text, ecoseats) && ecoseats > 0) {
            ob.update("ticket.txt", textBox14->Text, textBox24->Text, 0, Convert::ToInt32(index));
            ob.update("ticket.txt", textBox15->Text, textBox23->Text, 1, Convert::ToInt32(index));
            ob.update("ticket.txt", textBox16->Text, textBox22->Text, 2, Convert::ToInt32(index));
            ob.update("vehicle.txt", textBox27->Text, textBox28->Text, 1, Convert::ToInt32(index));
            ob.update("vehicle.txt", textBox26->Text, textBox25->Text, 2, Convert::ToInt32(index));
        }
        else {
            MessageBox::Show("invalid inputs.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
}
private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox15_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox16_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView7_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView8_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
    button29_Click(sender, e);
}
       //add new ticket refresh
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
    Database ob;
    if (!String::IsNullOrWhiteSpace(File::ReadAllText("ticket.txt")) && !String::IsNullOrWhiteSpace(File::ReadAllText("vehicle.txt"))) {
        array<Ticket^>^ line = mapper::mapticket(ob.read("ticket.txt"));
        array<Vehicle^>^ line2 = mapper::mapvehicle(ob.read("vehicle.txt"));
        sharedTable->Rows->Clear();

        for (int i = 0; i < line->Length; i++) {
            DataRow^ row = sharedTable->NewRow();
            row["S.No"] = i + 1; // Serial number
            row["Vehicle Type"] = line2[i]->getVehicleType();
            row["No. of Business Seats"] = line2[i]->getBusinessSeatsAmount();
            row["No. of Economy Seats"] = line2[i]->getEconomySeatsAmount();
            row["From"] = line[i]->getFrom();
            row["To"] = line[i]->getTo();
            row["Date"] = line[i]->getDate();
            row["Time"] = line[i]->getTime();
            row["Price"] = line[i]->getPrice();
            sharedTable->Rows->Add(row);
        }
        dataGridView7->DataSource = sharedTable;
        dataGridView5->DataSource = sharedTable;
        dataGridView8->DataSource = sharedTable;
    }
    else {
        sharedTable->Rows->Clear();
        dataGridView7->DataSource = sharedTable;
        dataGridView5->DataSource = sharedTable;
        dataGridView8->DataSource = sharedTable;
    }
}

private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
    tabControl1->TabPages->Add(tabPage11);
    tabControl1->SelectedTab = tabPage11;
    tabControl1->TabPages->Remove(tabPage9);
}
private: System::Void label10_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox15_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label58_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label59_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label61_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView5_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    DataGridViewRow^ selectedRow = dataGridView5->Rows[e->RowIndex];
    
        index = selectedRow->Cells["S.No"]->Value != nullptr ? selectedRow->Cells["S.No"]->Value->ToString() : "";
        textBox12->Text = selectedRow->Cells["Date"]->Value != nullptr ? selectedRow->Cells["Date"]->Value->ToString() : "";
        textBox13->Text = selectedRow->Cells["Time"]->Value != nullptr ? selectedRow->Cells["Time"]->Value->ToString() : "";
    
}
private: System::Void dataGridView8_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    DataGridViewRow^ selectedRow = dataGridView5->Rows[e->RowIndex];
        index = selectedRow->Cells["S.No"]->Value != nullptr ? selectedRow->Cells["S.No"]->Value->ToString() : "";
        textBox14->Text = selectedRow->Cells["To"]->Value != nullptr ? selectedRow->Cells["To"]->Value->ToString() : "";
        textBox15->Text = selectedRow->Cells["From"]->Value != nullptr ? selectedRow->Cells["From"]->Value->ToString() : "";
        textBox16->Text = selectedRow->Cells["Price"]->Value != nullptr ? selectedRow->Cells["Price"]->Value->ToString() : "";
        textBox26->Text = selectedRow->Cells["No. of Business Seats"]->Value != nullptr ? selectedRow->Cells["No. of Business Seats"]->Value->ToString() : "";
        textBox27->Text = selectedRow->Cells["No. of Economy Seats"]->Value != nullptr ? selectedRow->Cells["No. of Economy Seats"]->Value->ToString() : "";
    
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
    Database ob;
    if (!String::IsNullOrWhiteSpace(index)) {
        ob.discard("ticket.txt", Convert::ToInt32(index));
        ob.discard("vehicle.txt", Convert::ToInt32(index));
    }
}
}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

