#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "Header1.h"
#include "Header2.h"

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











  private: System::Windows::Forms::Label^ label6;
  private: System::Windows::Forms::TabPage^ tabPage7;
  private: System::Windows::Forms::TextBox^ textBox8;
  private: System::Windows::Forms::TextBox^ textBox10;
  private: System::Windows::Forms::TextBox^ textBox9;
  private: System::Windows::Forms::TextBox^ textBox7;
  private: System::Windows::Forms::TextBox^ textBox6;
  private: System::Windows::Forms::TextBox^ textBox5;
  private: System::Windows::Forms::Label^ label17;
  private: System::Windows::Forms::Button^ button3;
  private: System::Windows::Forms::CheckBox^ checkBox7;
  private: System::Windows::Forms::CheckBox^ checkBox6;
  private: System::Windows::Forms::Label^ label16;
  private: System::Windows::Forms::Label^ label15;
  private: System::Windows::Forms::Label^ label14;
  private: System::Windows::Forms::Label^ label13;
  private: System::Windows::Forms::Label^ label11;
  private: System::Windows::Forms::Label^ label10;
  private: System::Windows::Forms::Label^ label9;
  private: System::Windows::Forms::TabPage^ tabPage6;
  private: System::Windows::Forms::Button^ button4;
  private: System::Windows::Forms::Label^ label18;
  private: System::Windows::Forms::Label^ label12;
  private: System::Windows::Forms::Button^ button2;
  private: System::Windows::Forms::Label^ label8;
  private: System::Windows::Forms::Label^ label7;
  private: System::Windows::Forms::TextBox^ textBox4;
  private: System::Windows::Forms::TextBox^ textBox3;
  private: System::Windows::Forms::TabPage^ tabPage5;
  private: System::Windows::Forms::TabPage^ tabPage4;
  private: System::Windows::Forms::DataGridView^ dataGridView2;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
  private: System::Windows::Forms::TabPage^ tabPage3;
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
  private: System::Windows::Forms::DataGridView^ dataGridView1;







  private: System::Windows::Forms::TabPage^ tabPage1;
  private: System::Windows::Forms::TabControl^ tabControl1;







private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
private: System::Windows::Forms::TabPage^ tabPage9;
private: System::Windows::Forms::TabPage^ tabPage10;
private: System::Windows::Forms::TabPage^ tabPage11;
private: System::Windows::Forms::TabPage^ tabPage12;







private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::CheckBox^ checkBox9;
private: System::Windows::Forms::CheckBox^ checkBox8;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button12;


private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn19;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::DataGridView^ dataGridView5;







private: System::Windows::Forms::DataGridView^ dataGridView6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;

private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Label^ label24;

private: System::Windows::Forms::Label^ label25;

private: System::Windows::Forms::Label^ label27;












private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label29;






private: System::Windows::Forms::Label^ label28;







private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;




private: System::Windows::Forms::Label^ label33;




private: System::Windows::Forms::Button^ button49;
private: System::Windows::Forms::Label^ label23;

private: System::Windows::Forms::Label^ label20;

private: System::Windows::Forms::Label^ label34;


private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label38;


private: System::Windows::Forms::Label^ label40;

private: System::Windows::Forms::Label^ label21;

private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn21;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn22;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn23;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn24;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn25;









private: System::ComponentModel::IContainer^ components;












































































































































  protected:














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
        this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
        this->label39 = (gcnew System::Windows::Forms::Label());
        this->textBox8 = (gcnew System::Windows::Forms::TextBox());
        this->textBox10 = (gcnew System::Windows::Forms::TextBox());
        this->textBox9 = (gcnew System::Windows::Forms::TextBox());
        this->textBox7 = (gcnew System::Windows::Forms::TextBox());
        this->textBox6 = (gcnew System::Windows::Forms::TextBox());
        this->textBox5 = (gcnew System::Windows::Forms::TextBox());
        this->label17 = (gcnew System::Windows::Forms::Label());
        this->button3 = (gcnew System::Windows::Forms::Button());
        this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
        this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
        this->label16 = (gcnew System::Windows::Forms::Label());
        this->label15 = (gcnew System::Windows::Forms::Label());
        this->label14 = (gcnew System::Windows::Forms::Label());
        this->label13 = (gcnew System::Windows::Forms::Label());
        this->label11 = (gcnew System::Windows::Forms::Label());
        this->label10 = (gcnew System::Windows::Forms::Label());
        this->label9 = (gcnew System::Windows::Forms::Label());
        this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
        this->label37 = (gcnew System::Windows::Forms::Label());
        this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
        this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
        this->label19 = (gcnew System::Windows::Forms::Label());
        this->button4 = (gcnew System::Windows::Forms::Button());
        this->label18 = (gcnew System::Windows::Forms::Label());
        this->label12 = (gcnew System::Windows::Forms::Label());
        this->button2 = (gcnew System::Windows::Forms::Button());
        this->label8 = (gcnew System::Windows::Forms::Label());
        this->label7 = (gcnew System::Windows::Forms::Label());
        this->textBox4 = (gcnew System::Windows::Forms::TextBox());
        this->textBox3 = (gcnew System::Windows::Forms::TextBox());
        this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
        this->button17 = (gcnew System::Windows::Forms::Button());
        this->label29 = (gcnew System::Windows::Forms::Label());
        this->button12 = (gcnew System::Windows::Forms::Button());
        this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
        this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
        this->button11 = (gcnew System::Windows::Forms::Button());
        this->label28 = (gcnew System::Windows::Forms::Label());
        this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
        this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
        this->button10 = (gcnew System::Windows::Forms::Button());
        this->label27 = (gcnew System::Windows::Forms::Label());
        this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
        this->Column8 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
        this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
        this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
        this->label44 = (gcnew System::Windows::Forms::Label());
        this->label43 = (gcnew System::Windows::Forms::Label());
        this->label42 = (gcnew System::Windows::Forms::Label());
        this->label36 = (gcnew System::Windows::Forms::Label());
        this->label20 = (gcnew System::Windows::Forms::Label());
        this->label25 = (gcnew System::Windows::Forms::Label());
        this->label24 = (gcnew System::Windows::Forms::Label());
        this->button15 = (gcnew System::Windows::Forms::Button());
        this->button9 = (gcnew System::Windows::Forms::Button());
        this->button8 = (gcnew System::Windows::Forms::Button());
        this->button7 = (gcnew System::Windows::Forms::Button());
        this->button5 = (gcnew System::Windows::Forms::Button());
        this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
        this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
        this->label45 = (gcnew System::Windows::Forms::Label());
        this->label21 = (gcnew System::Windows::Forms::Label());
        this->label40 = (gcnew System::Windows::Forms::Label());
        this->label38 = (gcnew System::Windows::Forms::Label());
        this->label31 = (gcnew System::Windows::Forms::Label());
        this->button16 = (gcnew System::Windows::Forms::Button());
        this->button14 = (gcnew System::Windows::Forms::Button());
        this->button13 = (gcnew System::Windows::Forms::Button());
        this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
        this->button18 = (gcnew System::Windows::Forms::Button());
        this->label32 = (gcnew System::Windows::Forms::Label());
        this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
        this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->dataGridViewTextBoxColumn25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
        this->button19 = (gcnew System::Windows::Forms::Button());
        this->label33 = (gcnew System::Windows::Forms::Label());
        this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
        this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
        this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
        this->label47 = (gcnew System::Windows::Forms::Label());
        this->label46 = (gcnew System::Windows::Forms::Label());
        this->label35 = (gcnew System::Windows::Forms::Label());
        this->label34 = (gcnew System::Windows::Forms::Label());
        this->label30 = (gcnew System::Windows::Forms::Label());
        this->button49 = (gcnew System::Windows::Forms::Button());
        this->label23 = (gcnew System::Windows::Forms::Label());
        this->tabPage7->SuspendLayout();
        this->tabPage6->SuspendLayout();
        this->tabPage5->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
        this->tabPage4->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
        this->tabPage3->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
        this->tabPage2->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
        this->tabPage1->SuspendLayout();
        this->tabControl1->SuspendLayout();
        this->tabPage9->SuspendLayout();
        this->tabPage10->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
        this->tabPage12->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
        this->tabPage11->SuspendLayout();
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
        // 
        // tabPage7
        // 
        this->tabPage7->Controls->Add(this->label39);
        this->tabPage7->Controls->Add(this->textBox8);
        this->tabPage7->Controls->Add(this->textBox10);
        this->tabPage7->Controls->Add(this->textBox9);
        this->tabPage7->Controls->Add(this->textBox7);
        this->tabPage7->Controls->Add(this->textBox6);
        this->tabPage7->Controls->Add(this->textBox5);
        this->tabPage7->Controls->Add(this->label17);
        this->tabPage7->Controls->Add(this->button3);
        this->tabPage7->Controls->Add(this->checkBox7);
        this->tabPage7->Controls->Add(this->checkBox6);
        this->tabPage7->Controls->Add(this->label16);
        this->tabPage7->Controls->Add(this->label15);
        this->tabPage7->Controls->Add(this->label14);
        this->tabPage7->Controls->Add(this->label13);
        this->tabPage7->Controls->Add(this->label11);
        this->tabPage7->Controls->Add(this->label10);
        this->tabPage7->Controls->Add(this->label9);
        this->tabPage7->ForeColor = System::Drawing::Color::Navy;
        this->tabPage7->Location = System::Drawing::Point(4, 22);
        this->tabPage7->Margin = System::Windows::Forms::Padding(2);
        this->tabPage7->Name = L"tabPage7";
        this->tabPage7->Padding = System::Windows::Forms::Padding(2);
        this->tabPage7->Size = System::Drawing::Size(792, 356);
        this->tabPage7->TabIndex = 6;
        this->tabPage7->Text = L"Sign up";
        this->tabPage7->UseVisualStyleBackColor = true;
        this->tabPage7->Click += gcnew System::EventHandler(this, &Form1::tabPage7_Click);
        // 
        // label39
        // 
        this->label39->Location = System::Drawing::Point(664, 277);
        this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label39->Name = L"label39";
        this->label39->Size = System::Drawing::Size(105, 62);
        this->label39->TabIndex = 38;
        this->label39->Text = L"Customer Care:\r\n📞+92 3514287532\r\n📞+92 3335448522";
        this->label39->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        // 
        // textBox8
        // 
        this->textBox8->Location = System::Drawing::Point(206, 252);
        this->textBox8->Margin = System::Windows::Forms::Padding(2);
        this->textBox8->Name = L"textBox8";
        this->textBox8->Size = System::Drawing::Size(109, 20);
        this->textBox8->TabIndex = 19;
        // 
        // textBox10
        // 
        this->textBox10->Location = System::Drawing::Point(206, 196);
        this->textBox10->Margin = System::Windows::Forms::Padding(2);
        this->textBox10->Name = L"textBox10";
        this->textBox10->Size = System::Drawing::Size(236, 20);
        this->textBox10->TabIndex = 13;
        // 
        // textBox9
        // 
        this->textBox9->Location = System::Drawing::Point(384, 138);
        this->textBox9->Margin = System::Windows::Forms::Padding(2);
        this->textBox9->Name = L"textBox9";
        this->textBox9->Size = System::Drawing::Size(174, 20);
        this->textBox9->TabIndex = 12;
        // 
        // textBox7
        // 
        this->textBox7->Location = System::Drawing::Point(206, 138);
        this->textBox7->Margin = System::Windows::Forms::Padding(2);
        this->textBox7->Name = L"textBox7";
        this->textBox7->Size = System::Drawing::Size(120, 20);
        this->textBox7->TabIndex = 11;
        // 
        // textBox6
        // 
        this->textBox6->Location = System::Drawing::Point(206, 81);
        this->textBox6->Margin = System::Windows::Forms::Padding(2);
        this->textBox6->Name = L"textBox6";
        this->textBox6->Size = System::Drawing::Size(68, 20);
        this->textBox6->TabIndex = 10;
        // 
        // textBox5
        // 
        this->textBox5->Location = System::Drawing::Point(312, 81);
        this->textBox5->Margin = System::Windows::Forms::Padding(2);
        this->textBox5->Name = L"textBox5";
        this->textBox5->Size = System::Drawing::Size(68, 20);
        this->textBox5->TabIndex = 9;
        // 
        // label17
        // 
        this->label17->AutoSize = true;
        this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->label17->Location = System::Drawing::Point(203, 225);
        this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label17->Name = L"label17";
        this->label17->Size = System::Drawing::Size(69, 17);
        this->label17->TabIndex = 18;
        this->label17->Text = L"Password";
        // 
        // button3
        // 
        this->button3->BackColor = System::Drawing::Color::Silver;
        this->button3->Location = System::Drawing::Point(522, 247);
        this->button3->Margin = System::Windows::Forms::Padding(2);
        this->button3->Name = L"button3";
        this->button3->Size = System::Drawing::Size(59, 22);
        this->button3->TabIndex = 17;
        this->button3->Text = L"Sign up";
        this->button3->UseVisualStyleBackColor = false;
        this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
        // 
        // checkBox7
        // 
        this->checkBox7->AutoSize = true;
        this->checkBox7->Location = System::Drawing::Point(498, 83);
        this->checkBox7->Margin = System::Windows::Forms::Padding(2);
        this->checkBox7->Name = L"checkBox7";
        this->checkBox7->Size = System::Drawing::Size(60, 17);
        this->checkBox7->TabIndex = 16;
        this->checkBox7->Text = L"Female";
        this->checkBox7->UseVisualStyleBackColor = true;
        // 
        // checkBox6
        // 
        this->checkBox6->AutoSize = true;
        this->checkBox6->Location = System::Drawing::Point(440, 83);
        this->checkBox6->Margin = System::Windows::Forms::Padding(2);
        this->checkBox6->Name = L"checkBox6";
        this->checkBox6->Size = System::Drawing::Size(49, 17);
        this->checkBox6->TabIndex = 15;
        this->checkBox6->Text = L"Male";
        this->checkBox6->UseVisualStyleBackColor = true;
        // 
        // label16
        // 
        this->label16->AutoSize = true;
        this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->label16->Location = System::Drawing::Point(437, 58);
        this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label16->Name = L"label16";
        this->label16->Size = System::Drawing::Size(56, 17);
        this->label16->TabIndex = 14;
        this->label16->Text = L"Gender";
        // 
        // label15
        // 
        this->label15->AutoSize = true;
        this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->label15->Location = System::Drawing::Point(203, 170);
        this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label15->Name = L"label15";
        this->label15->Size = System::Drawing::Size(60, 17);
        this->label15->TabIndex = 8;
        this->label15->Text = L"Address";
        // 
        // label14
        // 
        this->label14->AutoSize = true;
        this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->label14->Location = System::Drawing::Point(381, 114);
        this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label14->Name = L"label14";
        this->label14->Size = System::Drawing::Size(42, 17);
        this->label14->TabIndex = 7;
        this->label14->Text = L"Email";
        this->label14->Click += gcnew System::EventHandler(this, &Form1::label14_Click);
        // 
        // label13
        // 
        this->label13->AutoSize = true;
        this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->label13->Location = System::Drawing::Point(203, 114);
        this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label13->Name = L"label13";
        this->label13->Size = System::Drawing::Size(101, 17);
        this->label13->TabIndex = 6;
        this->label13->Text = L"Phone number";
        // 
        // label11
        // 
        this->label11->AutoSize = true;
        this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->label11->Location = System::Drawing::Point(203, 58);
        this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label11->Name = L"label11";
        this->label11->Size = System::Drawing::Size(76, 17);
        this->label11->TabIndex = 5;
        this->label11->Text = L"First Name";
        // 
        // label10
        // 
        this->label10->AutoSize = true;
        this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->label10->Location = System::Drawing::Point(309, 58);
        this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label10->Name = L"label10";
        this->label10->Size = System::Drawing::Size(76, 17);
        this->label10->TabIndex = 4;
        this->label10->Text = L"Last Name";
        // 
        // label9
        // 
        this->label9->AutoSize = true;
        this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
        this->label9->Location = System::Drawing::Point(341, 12);
        this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label9->Name = L"label9";
        this->label9->Size = System::Drawing::Size(82, 24);
        this->label9->TabIndex = 3;
        this->label9->Text = L"Sign up";
        // 
        // tabPage6
        // 
        this->tabPage6->Controls->Add(this->label37);
        this->tabPage6->Controls->Add(this->checkBox9);
        this->tabPage6->Controls->Add(this->checkBox8);
        this->tabPage6->Controls->Add(this->label19);
        this->tabPage6->Controls->Add(this->button4);
        this->tabPage6->Controls->Add(this->label18);
        this->tabPage6->Controls->Add(this->label12);
        this->tabPage6->Controls->Add(this->button2);
        this->tabPage6->Controls->Add(this->label8);
        this->tabPage6->Controls->Add(this->label7);
        this->tabPage6->Controls->Add(this->textBox4);
        this->tabPage6->Controls->Add(this->textBox3);
        this->tabPage6->ForeColor = System::Drawing::Color::Navy;
        this->tabPage6->Location = System::Drawing::Point(4, 22);
        this->tabPage6->Margin = System::Windows::Forms::Padding(2);
        this->tabPage6->Name = L"tabPage6";
        this->tabPage6->Padding = System::Windows::Forms::Padding(2);
        this->tabPage6->Size = System::Drawing::Size(792, 356);
        this->tabPage6->TabIndex = 5;
        this->tabPage6->Text = L" Login";
        this->tabPage6->UseVisualStyleBackColor = true;
        this->tabPage6->Click += gcnew System::EventHandler(this, &Form1::tabPage6_Click);
        // 
        // label37
        // 
        this->label37->Location = System::Drawing::Point(665, 275);
        this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label37->Name = L"label37";
        this->label37->Size = System::Drawing::Size(105, 62);
        this->label37->TabIndex = 37;
        this->label37->Text = L"Customer Care:\r\n📞+92 3514287532\r\n📞+92 3335448522";
        this->label37->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        this->label37->Click += gcnew System::EventHandler(this, &Form1::label37_Click);
        // 
        // checkBox9
        // 
        this->checkBox9->AutoSize = true;
        this->checkBox9->Location = System::Drawing::Point(412, 61);
        this->checkBox9->Margin = System::Windows::Forms::Padding(2);
        this->checkBox9->Name = L"checkBox9";
        this->checkBox9->Size = System::Drawing::Size(48, 17);
        this->checkBox9->TabIndex = 10;
        this->checkBox9->Text = L"User";
        this->checkBox9->UseVisualStyleBackColor = true;
        this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox9_CheckedChanged);
        // 
        // checkBox8
        // 
        this->checkBox8->AutoSize = true;
        this->checkBox8->Location = System::Drawing::Point(346, 61);
        this->checkBox8->Margin = System::Windows::Forms::Padding(2);
        this->checkBox8->Name = L"checkBox8";
        this->checkBox8->Size = System::Drawing::Size(55, 17);
        this->checkBox8->TabIndex = 9;
        this->checkBox8->Text = L"Admin";
        this->checkBox8->UseVisualStyleBackColor = true;
        this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox8_CheckedChanged);
        // 
        // label19
        // 
        this->label19->AutoSize = true;
        this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label19->ForeColor = System::Drawing::Color::Navy;
        this->label19->Location = System::Drawing::Point(296, 59);
        this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label19->Name = L"label19";
        this->label19->Size = System::Drawing::Size(37, 17);
        this->label19->TabIndex = 8;
        this->label19->Text = L"Role";
        this->label19->Click += gcnew System::EventHandler(this, &Form1::label19_Click);
        // 
        // button4
        // 
        this->button4->BackColor = System::Drawing::Color::Silver;
        this->button4->Location = System::Drawing::Point(429, 222);
        this->button4->Margin = System::Windows::Forms::Padding(2);
        this->button4->Name = L"button4";
        this->button4->Size = System::Drawing::Size(61, 23);
        this->button4->TabIndex = 7;
        this->button4->Text = L"Sign up";
        this->button4->UseVisualStyleBackColor = false;
        // 
        // label18
        // 
        this->label18->AutoSize = true;
        this->label18->Location = System::Drawing::Point(290, 226);
        this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label18->Name = L"label18";
        this->label18->Size = System::Drawing::Size(120, 13);
        this->label18->TabIndex = 6;
        this->label18->Text = L"I don\'t have an account";
        // 
        // label12
        // 
        this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
            | System::Windows::Forms::AnchorStyles::Right));
        this->label12->AutoSize = true;
        this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
        this->label12->ForeColor = System::Drawing::Color::Navy;
        this->label12->Location = System::Drawing::Point(345, 20);
        this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label12->Name = L"label12";
        this->label12->Size = System::Drawing::Size(62, 24);
        this->label12->TabIndex = 5;
        this->label12->Text = L"Login";
        this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        this->label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click);
        // 
        // button2
        // 
        this->button2->BackColor = System::Drawing::Color::Silver;
        this->button2->Location = System::Drawing::Point(346, 188);
        this->button2->Margin = System::Windows::Forms::Padding(2);
        this->button2->Name = L"button2";
        this->button2->Size = System::Drawing::Size(61, 23);
        this->button2->TabIndex = 4;
        this->button2->Text = L"Login";
        this->button2->UseVisualStyleBackColor = false;
        // 
        // label8
        // 
        this->label8->AutoSize = true;
        this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->label8->Location = System::Drawing::Point(296, 142);
        this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label8->Name = L"label8";
        this->label8->Size = System::Drawing::Size(69, 17);
        this->label8->TabIndex = 3;
        this->label8->Text = L"Password";
        // 
        // label7
        // 
        this->label7->AutoSize = true;
        this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        this->label7->Location = System::Drawing::Point(296, 97);
        this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label7->Name = L"label7";
        this->label7->Size = System::Drawing::Size(119, 17);
        this->label7->TabIndex = 2;
        this->label7->Text = L"Email / Phone no.";
        // 
        // textBox4
        // 
        this->textBox4->Location = System::Drawing::Point(299, 160);
        this->textBox4->Margin = System::Windows::Forms::Padding(2);
        this->textBox4->Name = L"textBox4";
        this->textBox4->Size = System::Drawing::Size(161, 20);
        this->textBox4->TabIndex = 1;
        // 
        // textBox3
        // 
        this->textBox3->Location = System::Drawing::Point(298, 116);
        this->textBox3->Margin = System::Windows::Forms::Padding(2);
        this->textBox3->Name = L"textBox3";
        this->textBox3->Size = System::Drawing::Size(161, 20);
        this->textBox3->TabIndex = 0;
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
        this->tabPage5->Size = System::Drawing::Size(792, 356);
        this->tabPage5->TabIndex = 4;
        this->tabPage5->Text = L"Payment";
        this->tabPage5->UseVisualStyleBackColor = true;
        // 
        // button17
        // 
        this->button17->BackColor = System::Drawing::Color::Silver;
        this->button17->Location = System::Drawing::Point(554, 304);
        this->button17->Margin = System::Windows::Forms::Padding(2);
        this->button17->Name = L"button17";
        this->button17->Size = System::Drawing::Size(95, 24);
        this->button17->TabIndex = 39;
        this->button17->Text = L"Back To Home";
        this->button17->UseVisualStyleBackColor = false;
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
        this->button12->BackColor = System::Drawing::Color::Silver;
        this->button12->Location = System::Drawing::Point(668, 304);
        this->button12->Margin = System::Windows::Forms::Padding(2);
        this->button12->Name = L"button12";
        this->button12->Size = System::Drawing::Size(95, 24);
        this->button12->TabIndex = 5;
        this->button12->Text = L"Pay";
        this->button12->UseVisualStyleBackColor = false;
        // 
        // dataGridView4
        // 
        this->dataGridView4->AllowUserToDeleteRows = false;
        this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
            this->dataGridViewTextBoxColumn13,
                this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16, this->dataGridViewTextBoxColumn17,
                this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19
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
        // dataGridViewTextBoxColumn19
        // 
        this->dataGridViewTextBoxColumn19->HeaderText = L"Payment";
        this->dataGridViewTextBoxColumn19->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
        this->dataGridViewTextBoxColumn19->ReadOnly = true;
        this->dataGridViewTextBoxColumn19->Width = 150;
        // 
        // tabPage4
        // 
        this->tabPage4->Controls->Add(this->button11);
        this->tabPage4->Controls->Add(this->label28);
        this->tabPage4->Controls->Add(this->dataGridView2);
        this->tabPage4->ForeColor = System::Drawing::Color::Navy;
        this->tabPage4->Location = System::Drawing::Point(4, 22);
        this->tabPage4->Margin = System::Windows::Forms::Padding(2);
        this->tabPage4->Name = L"tabPage4";
        this->tabPage4->Padding = System::Windows::Forms::Padding(2);
        this->tabPage4->Size = System::Drawing::Size(792, 356);
        this->tabPage4->TabIndex = 3;
        this->tabPage4->Text = L"View Ticket";
        this->tabPage4->UseVisualStyleBackColor = true;
        // 
        // button11
        // 
        this->button11->BackColor = System::Drawing::Color::Silver;
        this->button11->Location = System::Drawing::Point(664, 309);
        this->button11->Margin = System::Windows::Forms::Padding(2);
        this->button11->Name = L"button11";
        this->button11->Size = System::Drawing::Size(95, 24);
        this->button11->TabIndex = 35;
        this->button11->Text = L"Back To Home";
        this->button11->UseVisualStyleBackColor = false;
        // 
        // label28
        // 
        this->label28->AutoSize = true;
        this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
        this->label28->Location = System::Drawing::Point(334, 11);
        this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label28->Name = L"label28";
        this->label28->Size = System::Drawing::Size(118, 24);
        this->label28->TabIndex = 31;
        this->label28->Text = L"View Ticket";
        this->label28->Click += gcnew System::EventHandler(this, &Form1::label28_Click);
        // 
        // dataGridView2
        // 
        this->dataGridView2->AllowUserToDeleteRows = false;
        this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
            this->dataGridViewTextBoxColumn1,
                this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
                this->dataGridViewTextBoxColumn6, this->Column7
        });
        this->dataGridView2->Location = System::Drawing::Point(12, 45);
        this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
        this->dataGridView2->Name = L"dataGridView2";
        this->dataGridView2->ReadOnly = true;
        this->dataGridView2->RowHeadersWidth = 62;
        this->dataGridView2->RowTemplate->Height = 28;
        this->dataGridView2->Size = System::Drawing::Size(768, 248);
        this->dataGridView2->TabIndex = 1;
        // 
        // dataGridViewTextBoxColumn1
        // 
        this->dataGridViewTextBoxColumn1->HeaderText = L"S.no";
        this->dataGridViewTextBoxColumn1->MinimumWidth = 3;
        this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
        this->dataGridViewTextBoxColumn1->ReadOnly = true;
        this->dataGridViewTextBoxColumn1->Width = 50;
        // 
        // dataGridViewTextBoxColumn2
        // 
        this->dataGridViewTextBoxColumn2->HeaderText = L"Name";
        this->dataGridViewTextBoxColumn2->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
        this->dataGridViewTextBoxColumn2->ReadOnly = true;
        this->dataGridViewTextBoxColumn2->Width = 150;
        // 
        // dataGridViewTextBoxColumn3
        // 
        this->dataGridViewTextBoxColumn3->HeaderText = L"From";
        this->dataGridViewTextBoxColumn3->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
        this->dataGridViewTextBoxColumn3->ReadOnly = true;
        this->dataGridViewTextBoxColumn3->Width = 150;
        // 
        // dataGridViewTextBoxColumn4
        // 
        this->dataGridViewTextBoxColumn4->HeaderText = L"To";
        this->dataGridViewTextBoxColumn4->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
        this->dataGridViewTextBoxColumn4->ReadOnly = true;
        this->dataGridViewTextBoxColumn4->Width = 150;
        // 
        // dataGridViewTextBoxColumn5
        // 
        this->dataGridViewTextBoxColumn5->HeaderText = L"Date/Time";
        this->dataGridViewTextBoxColumn5->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
        this->dataGridViewTextBoxColumn5->ReadOnly = true;
        this->dataGridViewTextBoxColumn5->Width = 150;
        // 
        // dataGridViewTextBoxColumn6
        // 
        this->dataGridViewTextBoxColumn6->HeaderText = L"Price";
        this->dataGridViewTextBoxColumn6->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
        this->dataGridViewTextBoxColumn6->ReadOnly = true;
        this->dataGridViewTextBoxColumn6->Width = 150;
        // 
        // Column7
        // 
        this->Column7->HeaderText = L"Payment";
        this->Column7->MinimumWidth = 8;
        this->Column7->Name = L"Column7";
        this->Column7->ReadOnly = true;
        this->Column7->Width = 150;
        // 
        // tabPage3
        // 
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
        this->tabPage3->Size = System::Drawing::Size(792, 356);
        this->tabPage3->TabIndex = 2;
        this->tabPage3->Text = L"Book a Ticket";
        this->tabPage3->UseVisualStyleBackColor = true;
        this->tabPage3->Click += gcnew System::EventHandler(this, &Form1::tabPage3_Click);
        // 
        // button10
        // 
        this->button10->BackColor = System::Drawing::Color::Silver;
        this->button10->Location = System::Drawing::Point(556, 303);
        this->button10->Margin = System::Windows::Forms::Padding(2);
        this->button10->Name = L"button10";
        this->button10->Size = System::Drawing::Size(95, 24);
        this->button10->TabIndex = 35;
        this->button10->Text = L"Back To Home";
        this->button10->UseVisualStyleBackColor = false;
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
        // 
        // dataGridView3
        // 
        this->dataGridView3->AllowUserToDeleteRows = false;
        this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
            this->Column8,
                this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10,
                this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12
        });
        this->dataGridView3->Location = System::Drawing::Point(27, 172);
        this->dataGridView3->Margin = System::Windows::Forms::Padding(2);
        this->dataGridView3->Name = L"dataGridView3";
        this->dataGridView3->RowHeadersWidth = 62;
        this->dataGridView3->RowTemplate->Height = 28;
        this->dataGridView3->Size = System::Drawing::Size(735, 127);
        this->dataGridView3->TabIndex = 17;
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
        // dataGridViewTextBoxColumn8
        // 
        this->dataGridViewTextBoxColumn8->HeaderText = L"Name";
        this->dataGridViewTextBoxColumn8->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
        this->dataGridViewTextBoxColumn8->Width = 150;
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
        this->dataGridViewTextBoxColumn11->HeaderText = L"Date/Time";
        this->dataGridViewTextBoxColumn11->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
        this->dataGridViewTextBoxColumn11->Width = 150;
        // 
        // dataGridViewTextBoxColumn12
        // 
        this->dataGridViewTextBoxColumn12->HeaderText = L"Price";
        this->dataGridViewTextBoxColumn12->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
        this->dataGridViewTextBoxColumn12->Width = 70;
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
        this->button1->BackColor = System::Drawing::Color::Silver;
        this->button1->Location = System::Drawing::Point(667, 303);
        this->button1->Margin = System::Windows::Forms::Padding(2);
        this->button1->Name = L"button1";
        this->button1->Size = System::Drawing::Size(83, 25);
        this->button1->TabIndex = 5;
        this->button1->Text = L"Book TIcket";
        this->button1->UseVisualStyleBackColor = false;
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
        this->tabPage2->Size = System::Drawing::Size(792, 356);
        this->tabPage2->TabIndex = 1;
        this->tabPage2->Text = L"Schedule";
        this->tabPage2->UseVisualStyleBackColor = true;
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
        // 
        // comboBox4
        // 
        this->comboBox4->FormattingEnabled = true;
        this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
            L"karachi", L"islamabad", L"lahore", L"multan",
                L"peshawar", L"hyderabad", L"faisalabad"
        });
        this->comboBox4->Location = System::Drawing::Point(187, 93);
        this->comboBox4->Margin = System::Windows::Forms::Padding(2);
        this->comboBox4->Name = L"comboBox4";
        this->comboBox4->Size = System::Drawing::Size(82, 21);
        this->comboBox4->TabIndex = 38;
        // 
        // label22
        // 
        this->label22->AutoSize = true;
        this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label22->Location = System::Drawing::Point(189, 74);
        this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label22->Name = L"label22";
        this->label22->Size = System::Drawing::Size(25, 17);
        this->label22->TabIndex = 37;
        this->label22->Text = L"To";
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
        // 
        // button6
        // 
        this->button6->BackColor = System::Drawing::Color::Silver;
        this->button6->Location = System::Drawing::Point(647, 315);
        this->button6->Margin = System::Windows::Forms::Padding(2);
        this->button6->Name = L"button6";
        this->button6->Size = System::Drawing::Size(95, 24);
        this->button6->TabIndex = 35;
        this->button6->Text = L"Back To Home";
        this->button6->UseVisualStyleBackColor = false;
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
        // 
        // dataGridView1
        // 
        this->dataGridView1->AllowUserToDeleteRows = false;
        this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
            this->Column1,
                this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
        });
        this->dataGridView1->Location = System::Drawing::Point(11, 128);
        this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
        this->dataGridView1->Name = L"dataGridView1";
        this->dataGridView1->ReadOnly = true;
        this->dataGridView1->RowHeadersWidth = 62;
        this->dataGridView1->RowTemplate->Height = 28;
        this->dataGridView1->Size = System::Drawing::Size(764, 174);
        this->dataGridView1->TabIndex = 0;
        // 
        // Column1
        // 
        this->Column1->HeaderText = L"S.no";
        this->Column1->MinimumWidth = 3;
        this->Column1->Name = L"Column1";
        this->Column1->ReadOnly = true;
        this->Column1->Width = 50;
        // 
        // Column2
        // 
        this->Column2->HeaderText = L"Name";
        this->Column2->MinimumWidth = 8;
        this->Column2->Name = L"Column2";
        this->Column2->ReadOnly = true;
        this->Column2->Width = 150;
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
        this->Column5->HeaderText = L"Date/Time";
        this->Column5->MinimumWidth = 8;
        this->Column5->Name = L"Column5";
        this->Column5->ReadOnly = true;
        this->Column5->Width = 150;
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
        this->tabPage1->Controls->Add(this->label44);
        this->tabPage1->Controls->Add(this->label43);
        this->tabPage1->Controls->Add(this->label42);
        this->tabPage1->Controls->Add(this->label36);
        this->tabPage1->Controls->Add(this->label20);
        this->tabPage1->Controls->Add(this->label25);
        this->tabPage1->Controls->Add(this->label24);
        this->tabPage1->Controls->Add(this->button15);
        this->tabPage1->Controls->Add(this->button9);
        this->tabPage1->Controls->Add(this->button8);
        this->tabPage1->Controls->Add(this->button7);
        this->tabPage1->Controls->Add(this->button5);
        this->tabPage1->ForeColor = System::Drawing::Color::Navy;
        this->tabPage1->Location = System::Drawing::Point(4, 22);
        this->tabPage1->Margin = System::Windows::Forms::Padding(2);
        this->tabPage1->Name = L"tabPage1";
        this->tabPage1->Padding = System::Windows::Forms::Padding(2);
        this->tabPage1->Size = System::Drawing::Size(792, 356);
        this->tabPage1->TabIndex = 0;
        this->tabPage1->Text = L"Home";
        this->tabPage1->UseVisualStyleBackColor = true;
        this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
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
        this->label25->Location = System::Drawing::Point(201, 90);
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
        // button15
        // 
        this->button15->BackColor = System::Drawing::Color::Silver;
        this->button15->Location = System::Drawing::Point(131, 222);
        this->button15->Margin = System::Windows::Forms::Padding(2);
        this->button15->Name = L"button15";
        this->button15->Size = System::Drawing::Size(82, 24);
        this->button15->TabIndex = 4;
        this->button15->Text = L"Logout";
        this->button15->UseVisualStyleBackColor = false;
        // 
        // button9
        // 
        this->button9->BackColor = System::Drawing::Color::Silver;
        this->button9->Location = System::Drawing::Point(131, 153);
        this->button9->Margin = System::Windows::Forms::Padding(2);
        this->button9->Name = L"button9";
        this->button9->Size = System::Drawing::Size(82, 24);
        this->button9->TabIndex = 3;
        this->button9->Text = L"View Ticket";
        this->button9->UseVisualStyleBackColor = false;
        this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
        // 
        // button8
        // 
        this->button8->BackColor = System::Drawing::Color::Silver;
        this->button8->Location = System::Drawing::Point(131, 189);
        this->button8->Margin = System::Windows::Forms::Padding(2);
        this->button8->Name = L"button8";
        this->button8->Size = System::Drawing::Size(82, 24);
        this->button8->TabIndex = 2;
        this->button8->Text = L"Payment";
        this->button8->UseVisualStyleBackColor = false;
        // 
        // button7
        // 
        this->button7->BackColor = System::Drawing::Color::Silver;
        this->button7->Location = System::Drawing::Point(131, 120);
        this->button7->Margin = System::Windows::Forms::Padding(2);
        this->button7->Name = L"button7";
        this->button7->Size = System::Drawing::Size(82, 24);
        this->button7->TabIndex = 1;
        this->button7->Text = L"Book a Ticket";
        this->button7->UseVisualStyleBackColor = false;
        // 
        // button5
        // 
        this->button5->BackColor = System::Drawing::Color::Silver;
        this->button5->Location = System::Drawing::Point(131, 85);
        this->button5->Margin = System::Windows::Forms::Padding(2);
        this->button5->Name = L"button5";
        this->button5->Size = System::Drawing::Size(82, 24);
        this->button5->TabIndex = 0;
        this->button5->Text = L"Schedule";
        this->button5->UseVisualStyleBackColor = false;
        this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
        // 
        // tabControl1
        // 
        this->tabControl1->Controls->Add(this->tabPage6);
        this->tabControl1->Controls->Add(this->tabPage7);
        this->tabControl1->Controls->Add(this->tabPage1);
        this->tabControl1->Controls->Add(this->tabPage2);
        this->tabControl1->Controls->Add(this->tabPage3);
        this->tabControl1->Controls->Add(this->tabPage4);
        this->tabControl1->Controls->Add(this->tabPage5);
        this->tabControl1->Controls->Add(this->tabPage9);
        this->tabControl1->Controls->Add(this->tabPage10);
        this->tabControl1->Controls->Add(this->tabPage12);
        this->tabControl1->Controls->Add(this->tabPage11);
        this->tabControl1->Location = System::Drawing::Point(15, 49);
        this->tabControl1->Margin = System::Windows::Forms::Padding(2);
        this->tabControl1->Name = L"tabControl1";
        this->tabControl1->SelectedIndex = 0;
        this->tabControl1->Size = System::Drawing::Size(800, 382);
        this->tabControl1->TabIndex = 1;
        // 
        // tabPage9
        // 
        this->tabPage9->Controls->Add(this->label45);
        this->tabPage9->Controls->Add(this->label21);
        this->tabPage9->Controls->Add(this->label40);
        this->tabPage9->Controls->Add(this->label38);
        this->tabPage9->Controls->Add(this->label31);
        this->tabPage9->Controls->Add(this->button16);
        this->tabPage9->Controls->Add(this->button14);
        this->tabPage9->Controls->Add(this->button13);
        this->tabPage9->ForeColor = System::Drawing::Color::Navy;
        this->tabPage9->Location = System::Drawing::Point(4, 22);
        this->tabPage9->Margin = System::Windows::Forms::Padding(2);
        this->tabPage9->Name = L"tabPage9";
        this->tabPage9->Padding = System::Windows::Forms::Padding(2);
        this->tabPage9->Size = System::Drawing::Size(792, 356);
        this->tabPage9->TabIndex = 8;
        this->tabPage9->Text = L"Admin Home";
        this->tabPage9->UseVisualStyleBackColor = true;
        // 
        // label45
        // 
        this->label45->Location = System::Drawing::Point(398, 128);
        this->label45->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label45->Name = L"label45";
        this->label45->Size = System::Drawing::Size(335, 40);
        this->label45->TabIndex = 39;
        this->label45->Text = L"*All Admins can see user activity by clicking on \"User Activity \" button.\r\n*Kindl"
            L"y logout to your account to ensure security.";
        // 
        // label21
        // 
        this->label21->AutoSize = true;
        this->label21->Location = System::Drawing::Point(398, 89);
        this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label21->Name = L"label21";
        this->label21->Size = System::Drawing::Size(318, 39);
        this->label21->TabIndex = 38;
        this->label21->Text = L"*We are here to ensure that our customer are getting best\r\n service here and they"
            L" are not geting any kind of problem\r\n*Admins can edit schedule by clicking on \"E"
            L"dit Schedule \" button.";
        // 
        // label40
        // 
        this->label40->Location = System::Drawing::Point(395, 241);
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
        this->label38->Location = System::Drawing::Point(395, 59);
        this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label38->Name = L"label38";
        this->label38->Size = System::Drawing::Size(77, 13);
        this->label38->TabIndex = 34;
        this->label38->Text = L"QUICK TIPS";
        // 
        // label31
        // 
        this->label31->AutoSize = true;
        this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
        this->label31->Location = System::Drawing::Point(394, 21);
        this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label31->Name = L"label31";
        this->label31->Size = System::Drawing::Size(66, 24);
        this->label31->TabIndex = 32;
        this->label31->Text = L"Home";
        // 
        // button16
        // 
        this->button16->BackColor = System::Drawing::Color::Silver;
        this->button16->Location = System::Drawing::Point(140, 176);
        this->button16->Margin = System::Windows::Forms::Padding(2);
        this->button16->Name = L"button16";
        this->button16->Size = System::Drawing::Size(82, 24);
        this->button16->TabIndex = 2;
        this->button16->Text = L"Logout";
        this->button16->UseVisualStyleBackColor = false;
        // 
        // button14
        // 
        this->button14->BackColor = System::Drawing::Color::Silver;
        this->button14->Location = System::Drawing::Point(140, 139);
        this->button14->Margin = System::Windows::Forms::Padding(2);
        this->button14->Name = L"button14";
        this->button14->Size = System::Drawing::Size(82, 24);
        this->button14->TabIndex = 1;
        this->button14->Text = L"User activity";
        this->button14->UseVisualStyleBackColor = false;
        // 
        // button13
        // 
        this->button13->BackColor = System::Drawing::Color::Silver;
        this->button13->Location = System::Drawing::Point(140, 103);
        this->button13->Margin = System::Windows::Forms::Padding(2);
        this->button13->Name = L"button13";
        this->button13->Size = System::Drawing::Size(82, 24);
        this->button13->TabIndex = 0;
        this->button13->Text = L"Edit Schedule";
        this->button13->UseVisualStyleBackColor = false;
        this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
        // 
        // tabPage10
        // 
        this->tabPage10->Controls->Add(this->button18);
        this->tabPage10->Controls->Add(this->label32);
        this->tabPage10->Controls->Add(this->dataGridView5);
        this->tabPage10->ForeColor = System::Drawing::Color::Navy;
        this->tabPage10->Location = System::Drawing::Point(4, 22);
        this->tabPage10->Margin = System::Windows::Forms::Padding(2);
        this->tabPage10->Name = L"tabPage10";
        this->tabPage10->Padding = System::Windows::Forms::Padding(2);
        this->tabPage10->Size = System::Drawing::Size(792, 356);
        this->tabPage10->TabIndex = 9;
        this->tabPage10->Text = L"Edit Schedule";
        this->tabPage10->UseVisualStyleBackColor = true;
        // 
        // button18
        // 
        this->button18->BackColor = System::Drawing::Color::Silver;
        this->button18->Location = System::Drawing::Point(651, 304);
        this->button18->Margin = System::Windows::Forms::Padding(2);
        this->button18->Name = L"button18";
        this->button18->Size = System::Drawing::Size(95, 24);
        this->button18->TabIndex = 35;
        this->button18->Text = L"Back To Home";
        this->button18->UseVisualStyleBackColor = false;
        // 
        // label32
        // 
        this->label32->AutoSize = true;
        this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
        this->label32->Location = System::Drawing::Point(315, 2);
        this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label32->Name = L"label32";
        this->label32->Size = System::Drawing::Size(141, 24);
        this->label32->TabIndex = 33;
        this->label32->Text = L"Edit Schedule";
        // 
        // dataGridView5
        // 
        this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
            this->dataGridViewTextBoxColumn20,
                this->dataGridViewTextBoxColumn21, this->dataGridViewTextBoxColumn22, this->dataGridViewTextBoxColumn23, this->dataGridViewTextBoxColumn24,
                this->dataGridViewTextBoxColumn25
        });
        this->dataGridView5->Location = System::Drawing::Point(14, 48);
        this->dataGridView5->Margin = System::Windows::Forms::Padding(2);
        this->dataGridView5->Name = L"dataGridView5";
        this->dataGridView5->RowHeadersWidth = 62;
        this->dataGridView5->RowTemplate->Height = 28;
        this->dataGridView5->Size = System::Drawing::Size(764, 238);
        this->dataGridView5->TabIndex = 1;
        // 
        // dataGridViewTextBoxColumn20
        // 
        this->dataGridViewTextBoxColumn20->HeaderText = L"S.no";
        this->dataGridViewTextBoxColumn20->MinimumWidth = 3;
        this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
        this->dataGridViewTextBoxColumn20->Width = 50;
        // 
        // dataGridViewTextBoxColumn21
        // 
        this->dataGridViewTextBoxColumn21->HeaderText = L"Name";
        this->dataGridViewTextBoxColumn21->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
        this->dataGridViewTextBoxColumn21->Width = 150;
        // 
        // dataGridViewTextBoxColumn22
        // 
        this->dataGridViewTextBoxColumn22->HeaderText = L"From";
        this->dataGridViewTextBoxColumn22->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
        this->dataGridViewTextBoxColumn22->Width = 150;
        // 
        // dataGridViewTextBoxColumn23
        // 
        this->dataGridViewTextBoxColumn23->HeaderText = L"To";
        this->dataGridViewTextBoxColumn23->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
        this->dataGridViewTextBoxColumn23->Width = 150;
        // 
        // dataGridViewTextBoxColumn24
        // 
        this->dataGridViewTextBoxColumn24->HeaderText = L"Date/Time";
        this->dataGridViewTextBoxColumn24->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
        this->dataGridViewTextBoxColumn24->Width = 150;
        // 
        // dataGridViewTextBoxColumn25
        // 
        this->dataGridViewTextBoxColumn25->HeaderText = L"Price";
        this->dataGridViewTextBoxColumn25->MinimumWidth = 8;
        this->dataGridViewTextBoxColumn25->Name = L"dataGridViewTextBoxColumn25";
        this->dataGridViewTextBoxColumn25->Width = 150;
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
        this->tabPage12->Size = System::Drawing::Size(792, 356);
        this->tabPage12->TabIndex = 11;
        this->tabPage12->Text = L"User activity";
        this->tabPage12->UseVisualStyleBackColor = true;
        // 
        // button19
        // 
        this->button19->BackColor = System::Drawing::Color::Silver;
        this->button19->Location = System::Drawing::Point(653, 304);
        this->button19->Margin = System::Windows::Forms::Padding(2);
        this->button19->Name = L"button19";
        this->button19->Size = System::Drawing::Size(95, 24);
        this->button19->TabIndex = 39;
        this->button19->Text = L"Back To Home";
        this->button19->UseVisualStyleBackColor = false;
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
        // 
        // dataGridView6
        // 
        this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
        this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
            this->Column10,
                this->Column11, this->Column12, this->Column13, this->Column14, this->Column15, this->Column16, this->Column17
        });
        this->dataGridView6->Location = System::Drawing::Point(14, 42);
        this->dataGridView6->Margin = System::Windows::Forms::Padding(2);
        this->dataGridView6->Name = L"dataGridView6";
        this->dataGridView6->RowHeadersWidth = 62;
        this->dataGridView6->RowTemplate->Height = 28;
        this->dataGridView6->Size = System::Drawing::Size(760, 247);
        this->dataGridView6->TabIndex = 0;
        // 
        // Column10
        // 
        this->Column10->HeaderText = L"S.no";
        this->Column10->MinimumWidth = 8;
        this->Column10->Name = L"Column10";
        this->Column10->Width = 50;
        // 
        // Column11
        // 
        this->Column11->HeaderText = L"FIrst name";
        this->Column11->MinimumWidth = 8;
        this->Column11->Name = L"Column11";
        this->Column11->Width = 150;
        // 
        // Column12
        // 
        this->Column12->HeaderText = L"Last Name";
        this->Column12->MinimumWidth = 8;
        this->Column12->Name = L"Column12";
        this->Column12->Width = 150;
        // 
        // Column13
        // 
        this->Column13->HeaderText = L"payment status";
        this->Column13->MinimumWidth = 8;
        this->Column13->Name = L"Column13";
        this->Column13->Width = 150;
        // 
        // Column14
        // 
        this->Column14->HeaderText = L"Time/Date";
        this->Column14->MinimumWidth = 8;
        this->Column14->Name = L"Column14";
        this->Column14->Width = 150;
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
        // Column17
        // 
        this->Column17->HeaderText = L"Action";
        this->Column17->MinimumWidth = 8;
        this->Column17->Name = L"Column17";
        this->Column17->Width = 150;
        // 
        // tabPage11
        // 
        this->tabPage11->Controls->Add(this->label47);
        this->tabPage11->Controls->Add(this->label46);
        this->tabPage11->Controls->Add(this->label35);
        this->tabPage11->Controls->Add(this->label34);
        this->tabPage11->Controls->Add(this->label30);
        this->tabPage11->Controls->Add(this->button49);
        this->tabPage11->Controls->Add(this->label23);
        this->tabPage11->ForeColor = System::Drawing::Color::Navy;
        this->tabPage11->Location = System::Drawing::Point(4, 22);
        this->tabPage11->Margin = System::Windows::Forms::Padding(2);
        this->tabPage11->Name = L"tabPage11";
        this->tabPage11->Padding = System::Windows::Forms::Padding(2);
        this->tabPage11->Size = System::Drawing::Size(792, 356);
        this->tabPage11->TabIndex = 10;
        this->tabPage11->Text = L"About us";
        this->tabPage11->UseVisualStyleBackColor = true;
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
        // 
        // label35
        // 
        this->label35->Location = System::Drawing::Point(60, 256);
        this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label35->Name = L"label35";
        this->label35->Size = System::Drawing::Size(115, 62);
        this->label35->TabIndex = 38;
        this->label35->Text = L"📷 Instagram:\r\n@ticket.reservation\r\n📘 Facebook:\r\nTicket reservation\r\n";
        this->label35->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        // 
        // label34
        // 
        this->label34->Location = System::Drawing::Point(221, 243);
        this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label34->Name = L"label34";
        this->label34->Size = System::Drawing::Size(335, 88);
        this->label34->TabIndex = 37;
        this->label34->Text = L"Location:\r\n📍 HCA Healthcare UK, 2 Cavendish Square,London W1G 0PU, United Kingdo"
            L"m\r\n📍 Plot No. SB–28, Block–1, Mahnoor Apartment, Gulistan–e–Jauhar. 36, Block 1"
            L" Gulistan-e-JoharKarachi City, Sindh\r\n";
        this->label34->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        // 
        // label30
        // 
        this->label30->Location = System::Drawing::Point(606, 269);
        this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
        this->label30->Name = L"label30";
        this->label30->Size = System::Drawing::Size(105, 62);
        this->label30->TabIndex = 36;
        this->label30->Text = L"Customer Care:\r\n📞+92 3514287532\r\n📞+92 3335448522";
        this->label30->TextAlign = System::Drawing::ContentAlignment::TopCenter;
        // 
        // button49
        // 
        this->button49->BackColor = System::Drawing::Color::Silver;
        this->button49->Location = System::Drawing::Point(63, 72);
        this->button49->Margin = System::Windows::Forms::Padding(2);
        this->button49->Name = L"button49";
        this->button49->Size = System::Drawing::Size(95, 24);
        this->button49->TabIndex = 34;
        this->button49->Text = L"Back To Home";
        this->button49->UseVisualStyleBackColor = false;
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
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::Color::LightGray;
        this->ClientSize = System::Drawing::Size(826, 442);
        this->Controls->Add(this->label6);
        this->Controls->Add(this->tabControl1);
        this->Name = L"Form1";
        this->Text = L"Form1";
        this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
        this->tabPage7->ResumeLayout(false);
        this->tabPage7->PerformLayout();
        this->tabPage6->ResumeLayout(false);
        this->tabPage6->PerformLayout();
        this->tabPage5->ResumeLayout(false);
        this->tabPage5->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
        this->tabPage4->ResumeLayout(false);
        this->tabPage4->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
        this->tabPage3->ResumeLayout(false);
        this->tabPage3->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
        this->tabPage2->ResumeLayout(false);
        this->tabPage2->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
        this->tabPage1->ResumeLayout(false);
        this->tabPage1->PerformLayout();
        this->tabControl1->ResumeLayout(false);
        this->tabPage9->ResumeLayout(false);
        this->tabPage9->PerformLayout();
        this->tabPage10->ResumeLayout(false);
        this->tabPage10->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
        this->tabPage12->ResumeLayout(false);
        this->tabPage12->PerformLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
        this->tabPage11->ResumeLayout(false);
        this->tabPage11->PerformLayout();
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
}
private: System::Void checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

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
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
  
}
}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

