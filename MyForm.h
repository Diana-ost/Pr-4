#pragma once
#include <cstdlib>
#include <ctime>
int a[100]; int n, i, d,s;

namespace Pr4 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіть кількість елементів масиву n=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(220, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(159, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(184, 20);
			this->textBox2->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(48, 86);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Заповнити масив";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(48, 167);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 47);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Середнє арифметичне масиву";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(48, 237);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 77);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Середнє арифметичне чисел з парними індексами";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(159, 181);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(159, 258);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(433, 351);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
		n = Convert::ToInt32(textBox1->Text); 
		textBox2->Clear();
		for (int i = 0; i < n; i++) {
			a[i] = rand() % 101 - 50;
			textBox2->AppendText(Convert::ToString(a[i]) + " ");
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int s = 0;
		textBox3->Clear();
		for (int i = 0; i < n; i++) {
			s += a[i];
		}
		double average = static_cast<double>(s) / n;
		textBox3->AppendText(Convert::ToString(average)); 
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int s = 0, count = 0;
	textBox4->Clear();
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) { 
			s += a[i];
			++count;
		}
	}
	if (count > 0) {
		double average_even = static_cast<double>(s) / count; 
		textBox4->AppendText(Convert::ToString(average_even)); 
	}
	else {
		textBox4->AppendText("Даний масив немає парних елементів"); 
	}
}
};
}
