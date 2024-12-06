#pragma once
#include "MyForm.h"
using namespace std;
namespace LabNumeric2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonOpenMyForm;
	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonOpenMyForm = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonOpenMyForm
			// 
			this->buttonOpenMyForm->BackColor = System::Drawing::Color::PeachPuff;
			this->buttonOpenMyForm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonOpenMyForm->Font = (gcnew System::Drawing::Font(L"Segoe Print", 16.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonOpenMyForm->Location = System::Drawing::Point(1140, 88);
			this->buttonOpenMyForm->Name = L"buttonOpenMyForm";
			this->buttonOpenMyForm->Size = System::Drawing::Size(483, 166);
			this->buttonOpenMyForm->TabIndex = 0;
			this->buttonOpenMyForm->Text = L"Начать";
			this->buttonOpenMyForm->UseVisualStyleBackColor = false;
			this->buttonOpenMyForm->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1678, 1010);
			this->Controls->Add(this->buttonOpenMyForm);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
