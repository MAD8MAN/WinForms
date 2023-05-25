#pragma once

namespace Проект1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Btn_Derived;
	private: System::Windows::Forms::Button^  Btn_Procent;
	protected:

	protected:


	private: System::Windows::Forms::Button^  revers_num;

	private: System::Windows::Forms::Button^  Btn_Clear_label;

	private: System::Windows::Forms::Button^  Btn_N_7;
	private: System::Windows::Forms::Button^  Btn_N_8;
	private: System::Windows::Forms::Button^  Btn_N_9;
	private: System::Windows::Forms::Button^  Btn_Multiply;





	private: System::Windows::Forms::Button^  Btn_N_4;
	private: System::Windows::Forms::Button^  Btn_N_5;
	private: System::Windows::Forms::Button^  Btn_N_6;
	private: System::Windows::Forms::Button^  Btn_Minus;




	private: System::Windows::Forms::Button^  Btn_N_1;
	private: System::Windows::Forms::Button^  Btn_N_2;
	private: System::Windows::Forms::Button^  Btn_N_3;
	private: System::Windows::Forms::Button^  Btn_Plus;





	private: System::Windows::Forms::Button^  Btn_N_0;
	private: System::Windows::Forms::Button^  Btn_dot;


	private: System::Windows::Forms::Button^  Btn_Equal;



	private: System::Windows::Forms::Button^  Exit_Btn;
	protected:
	private:float first_num;
	private:char user_argument=' ';
	private: System::Windows::Forms::Label^  resultat_label;
	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Btn_Derived = (gcnew System::Windows::Forms::Button());
			this->Btn_Procent = (gcnew System::Windows::Forms::Button());
			this->revers_num = (gcnew System::Windows::Forms::Button());
			this->Btn_Clear_label = (gcnew System::Windows::Forms::Button());
			this->Btn_N_7 = (gcnew System::Windows::Forms::Button());
			this->Btn_N_8 = (gcnew System::Windows::Forms::Button());
			this->Btn_N_9 = (gcnew System::Windows::Forms::Button());
			this->Btn_Multiply = (gcnew System::Windows::Forms::Button());
			this->Btn_N_4 = (gcnew System::Windows::Forms::Button());
			this->Btn_N_5 = (gcnew System::Windows::Forms::Button());
			this->Btn_N_6 = (gcnew System::Windows::Forms::Button());
			this->Btn_Minus = (gcnew System::Windows::Forms::Button());
			this->Btn_N_1 = (gcnew System::Windows::Forms::Button());
			this->Btn_N_2 = (gcnew System::Windows::Forms::Button());
			this->Btn_N_3 = (gcnew System::Windows::Forms::Button());
			this->Btn_Plus = (gcnew System::Windows::Forms::Button());
			this->Btn_N_0 = (gcnew System::Windows::Forms::Button());
			this->Btn_dot = (gcnew System::Windows::Forms::Button());
			this->Btn_Equal = (gcnew System::Windows::Forms::Button());
			this->resultat_label = (gcnew System::Windows::Forms::Label());
			this->Exit_Btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Btn_Derived
			// 
			this->Btn_Derived->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_Derived->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_Derived->Location = System::Drawing::Point(235, 92);
			this->Btn_Derived->Name = L"Btn_Derived";
			this->Btn_Derived->Size = System::Drawing::Size(68, 58);
			this->Btn_Derived->TabIndex = 0;
			this->Btn_Derived->Text = L"/";
			this->Btn_Derived->UseVisualStyleBackColor = false;
			this->Btn_Derived->Click += gcnew System::EventHandler(this, &MyForm::Btn_Derived_Click);
			// 
			// Btn_Procent
			// 
			this->Btn_Procent->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Btn_Procent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_Procent->Location = System::Drawing::Point(161, 92);
			this->Btn_Procent->Name = L"Btn_Procent";
			this->Btn_Procent->Size = System::Drawing::Size(68, 58);
			this->Btn_Procent->TabIndex = 1;
			this->Btn_Procent->Text = L"%";
			this->Btn_Procent->UseVisualStyleBackColor = false;
			this->Btn_Procent->Click += gcnew System::EventHandler(this, &MyForm::Btn_Procent_Click);
			// 
			// revers_num
			// 
			this->revers_num->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->revers_num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->revers_num->Location = System::Drawing::Point(87, 92);
			this->revers_num->Name = L"revers_num";
			this->revers_num->Size = System::Drawing::Size(68, 58);
			this->revers_num->TabIndex = 2;
			this->revers_num->Text = L"+/-";
			this->revers_num->UseVisualStyleBackColor = false;
			this->revers_num->Click += gcnew System::EventHandler(this, &MyForm::revers_num_Click);
			// 
			// Btn_Clear_label
			// 
			this->Btn_Clear_label->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Btn_Clear_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_Clear_label->Location = System::Drawing::Point(13, 92);
			this->Btn_Clear_label->Name = L"Btn_Clear_label";
			this->Btn_Clear_label->Size = System::Drawing::Size(68, 58);
			this->Btn_Clear_label->TabIndex = 3;
			this->Btn_Clear_label->Text = L"AC";
			this->Btn_Clear_label->UseVisualStyleBackColor = false;
			this->Btn_Clear_label->Click += gcnew System::EventHandler(this, &MyForm::Btn_Clear_label_Click);
			// 
			// Btn_N_7
			// 
			this->Btn_N_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_N_7->Location = System::Drawing::Point(13, 156);
			this->Btn_N_7->Name = L"Btn_N_7";
			this->Btn_N_7->Size = System::Drawing::Size(68, 58);
			this->Btn_N_7->TabIndex = 7;
			this->Btn_N_7->Text = L"7";
			this->Btn_N_7->UseVisualStyleBackColor = true;
			this->Btn_N_7->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number);
			// 
			// Btn_N_8
			// 
			this->Btn_N_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_N_8->Location = System::Drawing::Point(87, 156);
			this->Btn_N_8->Name = L"Btn_N_8";
			this->Btn_N_8->Size = System::Drawing::Size(68, 58);
			this->Btn_N_8->TabIndex = 6;
			this->Btn_N_8->Text = L"8";
			this->Btn_N_8->UseVisualStyleBackColor = true;
			this->Btn_N_8->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number);
			// 
			// Btn_N_9
			// 
			this->Btn_N_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_N_9->Location = System::Drawing::Point(161, 156);
			this->Btn_N_9->Name = L"Btn_N_9";
			this->Btn_N_9->Size = System::Drawing::Size(68, 58);
			this->Btn_N_9->TabIndex = 5;
			this->Btn_N_9->Text = L"9";
			this->Btn_N_9->UseVisualStyleBackColor = true;
			this->Btn_N_9->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number);
			// 
			// Btn_Multiply
			// 
			this->Btn_Multiply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_Multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_Multiply->Location = System::Drawing::Point(235, 156);
			this->Btn_Multiply->Name = L"Btn_Multiply";
			this->Btn_Multiply->Size = System::Drawing::Size(68, 58);
			this->Btn_Multiply->TabIndex = 4;
			this->Btn_Multiply->Text = L"*";
			this->Btn_Multiply->UseVisualStyleBackColor = false;
			this->Btn_Multiply->Click += gcnew System::EventHandler(this, &MyForm::Btn_Multiply_Click);
			// 
			// Btn_N_4
			// 
			this->Btn_N_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_N_4->Location = System::Drawing::Point(13, 220);
			this->Btn_N_4->Name = L"Btn_N_4";
			this->Btn_N_4->Size = System::Drawing::Size(68, 58);
			this->Btn_N_4->TabIndex = 11;
			this->Btn_N_4->Text = L"4";
			this->Btn_N_4->UseVisualStyleBackColor = true;
			this->Btn_N_4->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number);
			// 
			// Btn_N_5
			// 
			this->Btn_N_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_N_5->Location = System::Drawing::Point(87, 220);
			this->Btn_N_5->Name = L"Btn_N_5";
			this->Btn_N_5->Size = System::Drawing::Size(68, 58);
			this->Btn_N_5->TabIndex = 10;
			this->Btn_N_5->Text = L"5";
			this->Btn_N_5->UseVisualStyleBackColor = true;
			this->Btn_N_5->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number);
			// 
			// Btn_N_6
			// 
			this->Btn_N_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_N_6->Location = System::Drawing::Point(161, 220);
			this->Btn_N_6->Name = L"Btn_N_6";
			this->Btn_N_6->Size = System::Drawing::Size(68, 58);
			this->Btn_N_6->TabIndex = 9;
			this->Btn_N_6->Text = L"6";
			this->Btn_N_6->UseVisualStyleBackColor = true;
			this->Btn_N_6->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number);
			// 
			// Btn_Minus
			// 
			this->Btn_Minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_Minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_Minus->Location = System::Drawing::Point(235, 220);
			this->Btn_Minus->Name = L"Btn_Minus";
			this->Btn_Minus->Size = System::Drawing::Size(68, 58);
			this->Btn_Minus->TabIndex = 8;
			this->Btn_Minus->Text = L"-";
			this->Btn_Minus->UseVisualStyleBackColor = false;
			this->Btn_Minus->Click += gcnew System::EventHandler(this, &MyForm::Btn_Minus_Click);
			// 
			// Btn_N_1
			// 
			this->Btn_N_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_N_1->Location = System::Drawing::Point(13, 284);
			this->Btn_N_1->Name = L"Btn_N_1";
			this->Btn_N_1->Size = System::Drawing::Size(68, 58);
			this->Btn_N_1->TabIndex = 15;
			this->Btn_N_1->Text = L"1";
			this->Btn_N_1->UseVisualStyleBackColor = true;
			this->Btn_N_1->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number);
			// 
			// Btn_N_2
			// 
			this->Btn_N_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_N_2->Location = System::Drawing::Point(87, 284);
			this->Btn_N_2->Name = L"Btn_N_2";
			this->Btn_N_2->Size = System::Drawing::Size(68, 58);
			this->Btn_N_2->TabIndex = 14;
			this->Btn_N_2->Text = L"2";
			this->Btn_N_2->UseVisualStyleBackColor = true;
			this->Btn_N_2->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number);
			// 
			// Btn_N_3
			// 
			this->Btn_N_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_N_3->Location = System::Drawing::Point(161, 284);
			this->Btn_N_3->Name = L"Btn_N_3";
			this->Btn_N_3->Size = System::Drawing::Size(68, 58);
			this->Btn_N_3->TabIndex = 13;
			this->Btn_N_3->Text = L"3";
			this->Btn_N_3->UseVisualStyleBackColor = true;
			this->Btn_N_3->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number);
			// 
			// Btn_Plus
			// 
			this->Btn_Plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_Plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_Plus->Location = System::Drawing::Point(235, 284);
			this->Btn_Plus->Name = L"Btn_Plus";
			this->Btn_Plus->Size = System::Drawing::Size(68, 58);
			this->Btn_Plus->TabIndex = 12;
			this->Btn_Plus->Text = L"+";
			this->Btn_Plus->UseVisualStyleBackColor = false;
			this->Btn_Plus->Click += gcnew System::EventHandler(this, &MyForm::Btn_Plus_Click);
			// 
			// Btn_N_0
			// 
			this->Btn_N_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_N_0->Location = System::Drawing::Point(13, 348);
			this->Btn_N_0->Name = L"Btn_N_0";
			this->Btn_N_0->Size = System::Drawing::Size(142, 58);
			this->Btn_N_0->TabIndex = 19;
			this->Btn_N_0->Text = L"0";
			this->Btn_N_0->UseVisualStyleBackColor = true;
			this->Btn_N_0->Click += gcnew System::EventHandler(this, &MyForm::Btn_Number);
			// 
			// Btn_dot
			// 
			this->Btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_dot->Location = System::Drawing::Point(161, 348);
			this->Btn_dot->Name = L"Btn_dot";
			this->Btn_dot->Size = System::Drawing::Size(68, 58);
			this->Btn_dot->TabIndex = 17;
			this->Btn_dot->Text = L",";
			this->Btn_dot->UseVisualStyleBackColor = true;
			this->Btn_dot->Click += gcnew System::EventHandler(this, &MyForm::Btn_dot_Click);
			// 
			// Btn_Equal
			// 
			this->Btn_Equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_Equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Btn_Equal->Location = System::Drawing::Point(235, 348);
			this->Btn_Equal->Name = L"Btn_Equal";
			this->Btn_Equal->Size = System::Drawing::Size(68, 58);
			this->Btn_Equal->TabIndex = 16;
			this->Btn_Equal->Text = L"=";
			this->Btn_Equal->UseVisualStyleBackColor = false;
			this->Btn_Equal->Click += gcnew System::EventHandler(this, &MyForm::Btn_Equal_Click);
			// 
			// resultat_label
			// 
			this->resultat_label->BackColor = System::Drawing::Color::DimGray;
			this->resultat_label->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->resultat_label->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resultat_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->resultat_label->Location = System::Drawing::Point(14, 9);
			this->resultat_label->Name = L"resultat_label";
			this->resultat_label->Size = System::Drawing::Size(290, 66);
			this->resultat_label->TabIndex = 20;
			this->resultat_label->Text = L"0";
			this->resultat_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Exit_Btn
			// 
			this->Exit_Btn->BackColor = System::Drawing::Color::Red;
			this->Exit_Btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Exit_Btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit_Btn->Location = System::Drawing::Point(14, 9);
			this->Exit_Btn->Name = L"Exit_Btn";
			this->Exit_Btn->Size = System::Drawing::Size(24, 25);
			this->Exit_Btn->TabIndex = 21;
			this->Exit_Btn->Text = L"X";
			this->Exit_Btn->UseVisualStyleBackColor = false;
			this->Exit_Btn->Click += gcnew System::EventHandler(this, &MyForm::Exit_Btn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(316, 420);
			this->Controls->Add(this->Exit_Btn);
			this->Controls->Add(this->resultat_label);
			this->Controls->Add(this->Btn_N_0);
			this->Controls->Add(this->Btn_dot);
			this->Controls->Add(this->Btn_Equal);
			this->Controls->Add(this->Btn_N_1);
			this->Controls->Add(this->Btn_N_2);
			this->Controls->Add(this->Btn_N_3);
			this->Controls->Add(this->Btn_Plus);
			this->Controls->Add(this->Btn_N_4);
			this->Controls->Add(this->Btn_N_5);
			this->Controls->Add(this->Btn_N_6);
			this->Controls->Add(this->Btn_Minus);
			this->Controls->Add(this->Btn_N_7);
			this->Controls->Add(this->Btn_N_8);
			this->Controls->Add(this->Btn_N_9);
			this->Controls->Add(this->Btn_Multiply);
			this->Controls->Add(this->Btn_Clear_label);
			this->Controls->Add(this->revers_num);
			this->Controls->Add(this->Btn_Procent);
			this->Controls->Add(this->Btn_Derived);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Exit_Btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}

	private: System::Void Btn_Number(System::Object^  sender, System::EventArgs^  e) {
				 Button^ button = safe_cast<Button^>(sender);
				 if (this->resultat_label->Text=="0")
				 this->resultat_label->Text = button->Text;
				 else
				 this->resultat_label->Text = this->resultat_label->Text + button->Text;
	}

	private: System::Void Btn_Derived_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->math('/');
	}
	private: System::Void Btn_Multiply_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->math('*');
	}
	private: System::Void Btn_Minus_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->math('-');
	}
	private: System::Void Btn_Plus_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->math('+');
	}
	private: System::Void math(char argument) {
				 this->first_num = System::Convert::ToDouble(this->resultat_label->Text);
				 this->user_argument = argument;
				 this->resultat_label->Text = "0";
	}
private: System::Void Btn_Equal_Click(System::Object^  sender, System::EventArgs^  e) {
			 float res;
			 float second = System::Convert::ToDouble(this->resultat_label->Text);
			 switch (this->user_argument)
			 {
			 case'+':
				 res = this->first_num + second;
				 break;
			 case'-':
				 res = this->first_num - second;
				 break;
			 case'*':
				 res = this->first_num * second;
				 break;
			 case'/':
				 res = this->first_num / second;
				 break;
			 case'%':
				 res = this->first_num * second/100;
				 break;
			 default:
				 break;
			 }
			 this->resultat_label->Text = System::Convert::ToString(res);
}
	private: System::Void Btn_Clear_label_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->first_num = 0;
				 this->user_argument = ' ';
				 this->resultat_label->Text = "0";
	}
private: System::Void revers_num_Click(System::Object^  sender, System::EventArgs^  e) {
			 float num = System::Convert::ToDouble(this->resultat_label->Text);
			 num *= -1;
			 this->resultat_label->Text = System::Convert::ToString(num);
}
private: System::Void Btn_Procent_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->math('%');
}
private: System::Void Btn_dot_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ temp = this->resultat_label->Text;
			 if (!temp->Contains(","))
				 this->resultat_label->Text = temp + ",";
}
};
}
