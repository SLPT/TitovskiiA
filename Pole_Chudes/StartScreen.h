#pragma once
#include "PlayingField.h"
#include "Options.h"

namespace Pole_Chudes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для StartScreen
	/// </summary>
	public ref class StartScreen : public System::Windows::Forms::Form
	{
	public:
		StartScreen(void)
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
		~StartScreen()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  StartGameBtn;

	private: System::Windows::Forms::Button^  OptionsBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StartScreen::typeid));
			this->StartGameBtn = (gcnew System::Windows::Forms::Button());
			this->OptionsBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// StartGameBtn
			// 
			this->StartGameBtn->AutoSize = true;
			this->StartGameBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->StartGameBtn->FlatAppearance->BorderSize = 0;
			this->StartGameBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->StartGameBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StartGameBtn->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->StartGameBtn->Location = System::Drawing::Point(70, 140);
			this->StartGameBtn->Name = L"StartGameBtn";
			this->StartGameBtn->Size = System::Drawing::Size(158, 35);
			this->StartGameBtn->TabIndex = 1;
			this->StartGameBtn->Text = L"Начать игру";
			this->StartGameBtn->UseVisualStyleBackColor = false;
			this->StartGameBtn->Click += gcnew System::EventHandler(this, &StartScreen::StartGameBtn_Click);
			// 
			// OptionsBtn
			// 
			this->OptionsBtn->AutoSize = true;
			this->OptionsBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->OptionsBtn->FlatAppearance->BorderSize = 0;
			this->OptionsBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->OptionsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OptionsBtn->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OptionsBtn->Location = System::Drawing::Point(70, 180);
			this->OptionsBtn->Name = L"OptionsBtn";
			this->OptionsBtn->Size = System::Drawing::Size(158, 35);
			this->OptionsBtn->TabIndex = 2;
			this->OptionsBtn->Text = L"Настройки";
			this->OptionsBtn->UseVisualStyleBackColor = false;
			this->OptionsBtn->Click += gcnew System::EventHandler(this, &StartScreen::OptionsBtn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, -9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(299, 143);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// StartScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(297, 296);
			this->Controls->Add(this->OptionsBtn);
			this->Controls->Add(this->StartGameBtn);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"StartScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поле Чудес v1.0";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void StartGameBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		PlayingField^ newPlayingField = gcnew Pole_Chudes::PlayingField();
		newPlayingField->Show();
	}
	private: System::Void OptionsBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		Options^ newOptions = gcnew Pole_Chudes::Options();
		newOptions->Show();
	}
};
}
