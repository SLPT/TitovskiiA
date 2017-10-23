#pragma once
#include "CData.h"
namespace Pole_Chudes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Options
	/// </summary>
	public ref class Options : public System::Windows::Forms::Form
	{
	public:
		Options(void)
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
		~Options()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  currentFile;
	private: System::Windows::Forms::Button^  refresh;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Options::typeid));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->currentFile = (gcnew System::Windows::Forms::Label());
			this->refresh = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(56, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выбрать файл с вопросами";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Options::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Текущий файл:";
			// 
			// currentFile
			// 
			this->currentFile->AutoSize = true;
			this->currentFile->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->currentFile->Location = System::Drawing::Point(114, 64);
			this->currentFile->Name = L"currentFile";
			this->currentFile->Size = System::Drawing::Size(0, 13);
			this->currentFile->TabIndex = 2;
			// 
			// refresh
			// 
			this->refresh->FlatAppearance->BorderSize = 0;
			this->refresh->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->refresh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->refresh->Location = System::Drawing::Point(56, 80);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(164, 23);
			this->refresh->TabIndex = 3;
			this->refresh->Text = L"Обновить вопросы";
			this->refresh->UseVisualStyleBackColor = true;
			this->refresh->Click += gcnew System::EventHandler(this, &Options::refresh_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(203, 117);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Файл должен иметь вид:\r\nСлово:Вопрос\r\nСлово:Вопрос\r\nСлово:Вопрос\r\n...\r\n(т.е. кадж"
				L"ая новая пара слово-вопрос \r\nдолжна начинаться с новой строки \r\nи между словом и"
				L" вопросом \r\nдолжно стоять двоеточие)";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(24, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(233, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Файл должен иметь кодировку UTF-8\r\n";
			// 
			// Options
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(284, 276);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->refresh);
			this->Controls->Add(this->currentFile);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Options";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Настройки";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Filter = "txt files(*.txt)|*.txt| All files (*.*)|*.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			CData::fileName = openFileDialog1->FileName;
			currentFile->Text = openFileDialog1->SafeFileName;
			try
			{
				System::IO::StreamReader^ readFile = System::IO::File::OpenText(CData::fileName);
				String^ str;
				int count = 0;
				while ((str = readFile->ReadLine()) != nullptr) //определить сколько строк
				{
					count++;
					Console::WriteLine("line {0}: {1}", count, str);
				}
				CData::arrayOfLines = gcnew array<String^>(count); //массив для строк
				CData::arrayOfWnQ = gcnew array<String^>(count); //массив для слов и вопросов
				CData::arrayOfWords = gcnew array<String^>(count); //массив для слов
				CData::arrayOfQuestions = gcnew array<String^>(count);  //массив для вопросов

				System::IO::StreamReader^ readFile2 = System::IO::File::OpenText(CData::fileName);

				for (int i = 0; i < count; i++)
				{
					CData::arrayOfLines[i] = readFile2->ReadLine(); //строки записываются в arrayOfLines
				}

				for (int i = 0; i < count; i++)
				{
					CData::arrayOfWnQ = CData::arrayOfLines[i]->Split(':');  //строки разделяются в arrayOfWnQ (индекс 0 - слово, индекс 1 - вопрос)
					CData::arrayOfWords[i] = CData::arrayOfWnQ[0]; //слово в записывается в arrayOfWords
					CData::arrayOfWords[i] = CData::arrayOfWords[i]->ToUpper(); //переводит слово в верхний регистр
					CData::arrayOfQuestions[i] = CData::arrayOfWnQ[1]; //вопрос в записывается в arrayOfQuestions

				}
			}
			catch (Exception ^ e)
			{

			}

		}
		
	}

	private: System::Void refresh_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			System::IO::StreamReader^ readFile = System::IO::File::OpenText(CData::fileName);
			String^ str;
			int count = 0;
			while ((str = readFile->ReadLine()) != nullptr) //определить сколько строк
			{
				count++;
				Console::WriteLine("line {0}: {1}", count, str);
			}
			CData::arrayOfLines = gcnew array<String^>(count); //массив для строк
			CData::arrayOfWnQ = gcnew array<String^>(count); //массив для слов и вопросов
			CData::arrayOfWords = gcnew array<String^>(count); //массив для слов
			CData::arrayOfQuestions = gcnew array<String^>(count);  //массив для вопросов

			System::IO::StreamReader^ readFile2 = System::IO::File::OpenText(CData::fileName);

			for (int i = 0; i < count; i++)
			{
				CData::arrayOfLines[i] = readFile2->ReadLine(); //строки записываются в arrayOfLines
			}

			for (int i = 0; i < count; i++)
			{
				CData::arrayOfWnQ = CData::arrayOfLines[i]->Split(':');  //строки разделяются в arrayOfWnQ (индекс 0 - слово, индекс 1 - вопрос)
				CData::arrayOfWords[i] = CData::arrayOfWnQ[0]; //слово в записывается в arrayOfWords
				CData::arrayOfWords[i] = CData::arrayOfWords[i]->ToUpper(); //переводит слово в верхний регистр
				CData::arrayOfQuestions[i] = CData::arrayOfWnQ[1]; //вопрос в записывается в arrayOfQuestions

			}
		}
		catch (Exception ^ e)
		{

		}
			

		
	}
};
}
