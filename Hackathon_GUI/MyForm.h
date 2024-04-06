#pragma once
#include "stdio.h"
#include <cstring>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <filesystem>

// initlizing variables for GUI
std::string global_fileName;
std::string global_text;
std::string global_text1;
int global_button = 0;
std::string words;
std::string phrase;

// Mostly auto-generated using .NET network and GUI interface creation
// Most components get created when creating the GUI interface, things such
// as buttons, and labels
namespace HackathonGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	public : System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	public : System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(12, 185);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Create Notes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button2->Location = System::Drawing::Point(246, 185);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(231, 38);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Edit/Save Notes";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button3->Location = System::Drawing::Point(518, 185);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(170, 38);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Erase Notes";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(223, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(278, 39);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Hackathon Notes";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox1->Location = System::Drawing::Point(311, 274);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(177, 36);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(154, 274);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 29);
			this->label2->TabIndex = 5;
			this->label2->Text = L"File Name:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox2->Location = System::Drawing::Point(51, 379);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(600, 224);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(306, 347);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 29);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Notes";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(708, 645);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Hackathon Notes";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	// GUI interface buttons, labels and functions

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	// GUI interface button 2, Edit/Save button, able to Edit and read a Note file and 
	// Save and update it to make it show on the GUI properly

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		global_fileName = msclr::interop::marshal_as<std::string>(textBox1->Text);
		global_text1 = msclr::interop::marshal_as<std::string>(textBox2->Text);
		
		std::ifstream mfile;
		mfile.open(global_fileName + ".txt");
		
		std::stringstream buffer;
		buffer << mfile.rdbuf();
		std::string words = buffer.str();

		mfile.close();

		textBox2->Text = gcnew String(words.c_str());

		words = global_text1;

		std::ofstream nfile(global_fileName + ".txt");

		nfile << words;

		nfile.close();

	}

	// Button 1 enabled the creation of a note file with user input

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		global_fileName = msclr::interop::marshal_as<std::string>(textBox1->Text);
		global_text = msclr::interop::marshal_as<std::string>(textBox2->Text);

		std::ofstream myfile;
		std::stringstream nn;

		nn << global_fileName << ".txt";
		myfile.open(nn.str());

		// Write content to the file
		myfile << global_text << std::endl;

		// Close the file stream
		myfile.close();
	}

	// Button 3 housed the removal code for notes

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		global_fileName = msclr::interop::marshal_as<std::string>(textBox1->Text);
		phrase = global_fileName + ".txt";
		std::remove(phrase.c_str());
		phrase = "removed file";
		textBox2->Text = gcnew String(phrase.c_str());
	}

	// Various other labes and boxes that were used in GUI implementation

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

};
}


