#pragma once
#include "NamesOfFunctions.h"

using namespace std;
namespace LabNumeric2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	double left_boarder = 0, right_boarder = 1;
	double h;
	int n;
	double breaking_point = 0.25, mu1 = 0, mu2 = 1;
	vector<vector<double>> result;
	int is_test_task;
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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Тестовая задача", L"Основная задача" });
			this->comboBox1->Location = System::Drawing::Point(12, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(353, 65);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L" Выберите задачу:";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(443, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(480, 57);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите количество узлов:";
			this->label1->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->textBox1->Location = System::Drawing::Point(952, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 64);
			this->textBox1->TabIndex = 2;
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Beige;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->GridColor = System::Drawing::Color::Beige;
			this->dataGridView1->Location = System::Drawing::Point(12, 182);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(2049, 845);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(1219, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(434, 76);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Заполнить таблицу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(12, 1045);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 57);
			this->label2->TabIndex = 5;
			this->label2->Text = L"   ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(1162, 95);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(550, 76);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Проверка порядка сходимости";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Beige;
			this->ClientSize = System::Drawing::Size(2138, 1710);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		is_test_task = comboBox1->SelectedIndex;
		// Показываем TextBox только для определённого значения
		if (is_test_task == 0) { // Первый элемент
			label1->Visible = true;
			textBox1->Visible = true;
			dataGridView1->Visible = false;
			textBox1->Text = ""; // Очистка текстового поля
		}
		else {
			label1->Visible = true;
			textBox1->Visible = true;
			dataGridView1->Visible = false;
			textBox1->Text = ""; // Очистка текстового поля
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		int rows = Int32::Parse(textBox1->Text); // Получаем количество строк
		int columns = 5; // Получаем количество столбцов

		// Если число корректное, показываем таблицу
		dataGridView1->Visible = true;
		button1->Visible = true;
		label2->Visible = true;

		// Очищаем текущую таблицу
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();

		// Добавляем новые столбцы
		if(is_test_task==0){
			dataGridView1->Columns->Add("Column0", "i");
			dataGridView1->Columns->Add("Column1", "xi");
			dataGridView1->Columns->Add("Column2", "vi");
			dataGridView1->Columns->Add("Column3", "ui");
			dataGridView1->Columns->Add("Column4", "vi-ui");
		}
		else
		{
			dataGridView1->Columns->Add("Column0", "i");
			dataGridView1->Columns->Add("Column1", "xi");
			dataGridView1->Columns->Add("Column2", "vi");
			dataGridView1->Columns->Add("Column3", "v2i");
			dataGridView1->Columns->Add("Column4", "vi-v2i");
		}

		// Добавляем новые строки
		dataGridView1->Rows->Add(rows);
	}
	catch (FormatException^) {
		if (String::IsNullOrWhiteSpace(textBox1->Text)) {
			dataGridView1->Visible = false;
			button1->Visible = false;
			this->label2->Text = " ";
			return;
		}
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	button2->Visible = true;
	// Убедитесь, что строки добавляются в DataGridView перед заполнением ячеек
	n = Int32::Parse(textBox1->Text);
	h = 1. / n;
	result = differenceScheme(h, n, mu1, mu2, breaking_point, (1 - is_test_task));
	for (int i = 0; i < n + 1; i++) {
		dataGridView1->Rows[i]->Cells[0]->Value = i;
		dataGridView1->Rows[i]->Cells[1]->Value = result[i][0];
		dataGridView1->Rows[i]->Cells[2]->Value = result[i][1];
		dataGridView1->Rows[i]->Cells[3]->Value = result[i][2];
		dataGridView1->Rows[i]->Cells[4]->Value = result[i][3];// Или любое другое значение
	}
	pair<double, double> epsilon = max(result);
	if (is_test_task == 0)
	{
		this->label2->Text = L"для решения задачи использована равномерная сетка с числом разбиений n = «"+ n +"»;\nзадача должна быть решена с погрешностью не более epsilon = 0.5*10 –6;\nзадача решена с погрешностью epsilon1 = «" + epsilon.first +"»;\nмаксимальное отклонение аналитического и численного решений наблюдается в точке x = «"+ epsilon.second +"»";
	}
	else
	{
		this->label2->Text = L"для решения задачи использована равномерная сетка с числом разбиений n = «" + n + "»;\nзадача должна быть решена с заданной точностью epsilon = 0.5*10 –6;\nзадача решена с точностью epsilon2 = «" + epsilon.first + "»;\nмаксимальная разность численных решений в общих узлах сетки наблюдается в точке x = «" + epsilon.second + "»";

	}
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
