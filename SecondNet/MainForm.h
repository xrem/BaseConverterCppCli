#pragma once

#include <iostream>
#include <sstream>
#include <msclr/marshal_cppstd.h>

#include "NewAboutForm.h"

namespace SecondNet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ inputBox;
	protected:
	private: System::Windows::Forms::RadioButton^ radioBin;
	private: System::Windows::Forms::RadioButton^ radioOct;
	private: System::Windows::Forms::RadioButton^ radioDec;
	private: System::Windows::Forms::RadioButton^ radioHex;
	private: System::Windows::Forms::Button^ calculateButton;
	private: System::Windows::Forms::Label^ labelBin;
	private: System::Windows::Forms::Label^ labelOct;
	private: System::Windows::Forms::Label^ labelDec;
	private: System::Windows::Forms::Label^ labelHex;
	private: System::Windows::Forms::Button^  AboutButton;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->inputBox = (gcnew System::Windows::Forms::TextBox());
			this->radioBin = (gcnew System::Windows::Forms::RadioButton());
			this->radioOct = (gcnew System::Windows::Forms::RadioButton());
			this->radioDec = (gcnew System::Windows::Forms::RadioButton());
			this->radioHex = (gcnew System::Windows::Forms::RadioButton());
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->labelBin = (gcnew System::Windows::Forms::Label());
			this->labelOct = (gcnew System::Windows::Forms::Label());
			this->labelDec = (gcnew System::Windows::Forms::Label());
			this->labelHex = (gcnew System::Windows::Forms::Label());
			this->AboutButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// inputBox
			// 
			this->inputBox->Location = System::Drawing::Point(12, 27);
			this->inputBox->Name = L"inputBox";
			this->inputBox->Size = System::Drawing::Size(261, 20);
			this->inputBox->TabIndex = 0;
			// 
			// radioBin
			// 
			this->radioBin->AutoSize = true;
			this->radioBin->Location = System::Drawing::Point(225, 53);
			this->radioBin->Name = L"radioBin";
			this->radioBin->Size = System::Drawing::Size(43, 17);
			this->radioBin->TabIndex = 1;
			this->radioBin->Text = L"BIN";
			this->radioBin->UseVisualStyleBackColor = true;
			// 
			// radioOct
			// 
			this->radioOct->AutoSize = true;
			this->radioOct->Location = System::Drawing::Point(225, 76);
			this->radioOct->Name = L"radioOct";
			this->radioOct->Size = System::Drawing::Size(47, 17);
			this->radioOct->TabIndex = 2;
			this->radioOct->Text = L"OCT";
			this->radioOct->UseVisualStyleBackColor = true;
			// 
			// radioDec
			// 
			this->radioDec->AutoSize = true;
			this->radioDec->Checked = true;
			this->radioDec->Location = System::Drawing::Point(225, 99);
			this->radioDec->Name = L"radioDec";
			this->radioDec->Size = System::Drawing::Size(47, 17);
			this->radioDec->TabIndex = 3;
			this->radioDec->TabStop = true;
			this->radioDec->Text = L"DEC";
			this->radioDec->UseVisualStyleBackColor = true;
			// 
			// radioHex
			// 
			this->radioHex->AutoSize = true;
			this->radioHex->Location = System::Drawing::Point(225, 123);
			this->radioHex->Name = L"radioHex";
			this->radioHex->Size = System::Drawing::Size(47, 17);
			this->radioHex->TabIndex = 4;
			this->radioHex->Text = L"HEX";
			this->radioHex->UseVisualStyleBackColor = true;
			// 
			// calculateButton
			// 
			this->calculateButton->Location = System::Drawing::Point(15, 143);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(93, 31);
			this->calculateButton->TabIndex = 5;
			this->calculateButton->Text = L"Calculate";
			this->calculateButton->UseVisualStyleBackColor = true;
			this->calculateButton->Click += gcnew System::EventHandler(this, &MainForm::calculateButton_Click);
			// 
			// labelBin
			// 
			this->labelBin->AutoSize = true;
			this->labelBin->Location = System::Drawing::Point(12, 55);
			this->labelBin->Name = L"labelBin";
			this->labelBin->Size = System::Drawing::Size(31, 13);
			this->labelBin->TabIndex = 6;
			this->labelBin->Text = L"BIN: ";
			// 
			// labelOct
			// 
			this->labelOct->AutoSize = true;
			this->labelOct->Location = System::Drawing::Point(12, 78);
			this->labelOct->Name = L"labelOct";
			this->labelOct->Size = System::Drawing::Size(32, 13);
			this->labelOct->TabIndex = 7;
			this->labelOct->Text = L"OCT:";
			// 
			// labelDec
			// 
			this->labelDec->AutoSize = true;
			this->labelDec->Location = System::Drawing::Point(12, 102);
			this->labelDec->Name = L"labelDec";
			this->labelDec->Size = System::Drawing::Size(35, 13);
			this->labelDec->TabIndex = 8;
			this->labelDec->Text = L"DEC: ";
			// 
			// labelHex
			// 
			this->labelHex->AutoSize = true;
			this->labelHex->Location = System::Drawing::Point(12, 125);
			this->labelHex->Name = L"labelHex";
			this->labelHex->Size = System::Drawing::Size(35, 13);
			this->labelHex->TabIndex = 9;
			this->labelHex->Text = L"HEX: ";
			// 
			// AboutButton
			// 
			this->AboutButton->Location = System::Drawing::Point(185, 143);
			this->AboutButton->Name = L"AboutButton";
			this->AboutButton->Size = System::Drawing::Size(88, 31);
			this->AboutButton->TabIndex = 10;
			this->AboutButton->Text = L"About";
			this->AboutButton->UseVisualStyleBackColor = true;
			this->AboutButton->Click += gcnew System::EventHandler(this, &MainForm::AboutButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 186);
			this->Controls->Add(this->AboutButton);
			this->Controls->Add(this->labelHex);
			this->Controls->Add(this->labelDec);
			this->Controls->Add(this->labelOct);
			this->Controls->Add(this->labelBin);
			this->Controls->Add(this->calculateButton);
			this->Controls->Add(this->radioHex);
			this->Controls->Add(this->radioDec);
			this->Controls->Add(this->radioOct);
			this->Controls->Add(this->radioBin);
			this->Controls->Add(this->inputBox);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
	System::Void setInvalidInput() {
		this->labelBin->Text = "BIN: Invalid input";
		this->labelOct->Text = "OCT: Invalid input";
		this->labelDec->Text = "DEC: Invalid input";
		this->labelHex->Text = "HEX: Invalid input";
	}
	System::Boolean validateInput(const std::string& inputString, int base) {
		bool valid = true;
		char end = '0' + base - 1;
		for (int i = 0; i < inputString.length(); i++) {
			valid = valid && inputString[i] >= '0' && inputString[i] <= end;
		}
		return valid;
	}
	System::String^ decToOctString(const long inputValue) {
		std::stringstream octStream;
		std::string octString;
		octStream << std::oct << inputValue;
		octStream >> octString;
		return gcnew System::String(octString.c_str());
	}
	System::String^ decToHexString(const long inputValue) {
		std::stringstream hexStream;
		std::string hexString;
		hexStream << std::hex << inputValue;
		hexStream >> hexString;
		return gcnew System::String(hexString.c_str());
	}
	System::Void calculateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string inputString;
		inputString = msclr::interop::marshal_as<std::string>(this->inputBox->Text);
		if (this->radioBin->Checked) {
			if (this->validateInput(inputString, 2)) {
				this->labelBin->Text = "BIN: " + this->inputBox->Text;
				long inputValue = std::stol(inputString, nullptr, 2);
				this->labelDec->Text = "DEC: " + inputValue.ToString();				
				this->labelOct->Text = "OCT: " + this->decToOctString(inputValue);
				this->labelHex->Text = "HEX: " + this->decToHexString(inputValue);
			} else {
				this->setInvalidInput();
			}
		}
		if (this->radioOct->Checked) {
			this->labelOct->Text = "OCT: " + this->inputBox->Text;
		}
		if (this->radioDec->Checked) {
			this->labelDec->Text = "DEC: " + this->inputBox->Text;
		}
		if (this->radioHex->Checked) {
			this->labelHex->Text = "HEX: " + this->inputBox->Text;
		}
	}

	public:
		System::String^ GetHelloString()
		{
			return gcnew System::String("Hello from greeter");
		}
		
private: System::Void AboutButton_Click(System::Object^  sender, System::EventArgs^  e) {
	NewAboutForm^ about_form = gcnew NewAboutForm();
	about_form->ShowDialog(this);
}
};
}
