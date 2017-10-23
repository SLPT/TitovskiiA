#pragma once
#include <string>
#include <ctime>
#include "Options.h"

namespace Pole_Chudes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для PlayingField
	/// </summary>
	public ref class PlayingField : public System::Windows::Forms::Form
	{
	public:
		PlayingField(void)
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
		~PlayingField()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  sector600;
	private: System::Windows::Forms::Label^  sector800;
	private: System::Windows::Forms::Label^  sector400;
	private: System::Windows::Forms::Label^  sectorPlus;
	private: System::Windows::Forms::Label^  sectorX2;
	private: System::Windows::Forms::Label^  sector900;
	private: System::Windows::Forms::Label^  sector100;
	private: System::Windows::Forms::Label^  sectorX5;
	private: System::Windows::Forms::Label^  sector0;
	private: System::Windows::Forms::Label^  sectorB;
	private: System::Windows::Forms::Label^  sector700;
	private: System::Windows::Forms::Label^  sectorX15;
	private: System::Windows::Forms::Label^  sectorP;
	private: System::Windows::Forms::Label^  sector500;
	private: System::Windows::Forms::Label^  sector300;
	private: System::Windows::Forms::Label^  sector200;
	private: System::Windows::Forms::Label^  labelPlayer1;
	private: System::Windows::Forms::Label^  labelPlayerScore1;
	private: System::Windows::Forms::Label^  labelPlayer2;
	private: System::Windows::Forms::Label^  labelPlayerScore2;
	private: System::Windows::Forms::Label^  labelPlayer3;
	private: System::Windows::Forms::Label^  labelPlayerScore3;


	private: System::Windows::Forms::Button^  tryLetter1;
	private: System::Windows::Forms::Button^  tryLetter2;
	private: System::Windows::Forms::Button^  tryLetter4;
	private: System::Windows::Forms::Button^  tryLetter3;
	private: System::Windows::Forms::Button^  tryLetter6;
	private: System::Windows::Forms::Button^  tryLetter5;
	private: System::Windows::Forms::Button^  tryLetter7;
	private: System::Windows::Forms::Button^  tryLetter14;
	private: System::Windows::Forms::Button^  tryLetter13;
	private: System::Windows::Forms::Button^  tryLetter12;
	private: System::Windows::Forms::Button^  tryLetter11;
	private: System::Windows::Forms::Button^  tryLetter10;
	private: System::Windows::Forms::Button^  tryLetter9;
	private: System::Windows::Forms::Button^  tryLetter8;
	private: System::Windows::Forms::Button^  tryLetter20;
	private: System::Windows::Forms::Button^  tryLetter19;
	private: System::Windows::Forms::Button^  tryLetter18;
	private: System::Windows::Forms::Button^  tryLetter17;
	private: System::Windows::Forms::Button^  tryLetter16;
	private: System::Windows::Forms::Button^  tryLetter15;
	private: System::Windows::Forms::Button^  tryLetter28;
	private: System::Windows::Forms::Button^  tryLetter27;
	private: System::Windows::Forms::Button^  tryLetter26;
	private: System::Windows::Forms::Button^  tryLetter24;
	private: System::Windows::Forms::Button^  tryLetter23;
	private: System::Windows::Forms::Button^  tryLetter22;
	private: System::Windows::Forms::Button^  spin;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Button^  tryLetter33;
	private: System::Windows::Forms::Button^  tryLetter32;
	private: System::Windows::Forms::Button^  tryLetter31;
	private: System::Windows::Forms::Button^  tryLetter30;
	private: System::Windows::Forms::Button^  tryLetter29;
	private: System::Windows::Forms::Button^  tryLetter21;
	private: System::Windows::Forms::Button^  tryLetter25;
	private: System::Windows::Forms::GroupBox^  alphabet;
	private: System::Windows::Forms::Label^  yakubovich;
	private: System::Windows::Forms::Button^  select;
	private: System::Windows::Forms::Label^  question;
	private: System::Windows::Forms::NumericUpDown^  numOfWord;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  playerBack1;
	private: System::Windows::Forms::PictureBox^  playerBack2;
	private: System::Windows::Forms::PictureBox^  playerBack3;
	private: System::Windows::Forms::PictureBox^  yakubovichImage;
	private: System::Windows::Forms::TextBox^  tbChP1;
	private: System::Windows::Forms::Label^  labelP1;
	private: System::Windows::Forms::Label^  labelP2;


	private: System::Windows::Forms::TextBox^  tbChP2;
	private: System::Windows::Forms::Label^  labelP3;

	private: System::Windows::Forms::TextBox^  tbChP3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  tbChPS3;
	private: System::Windows::Forms::TextBox^  tbChPS2;
	private: System::Windows::Forms::TextBox^  tbChPS1;
private: System::Windows::Forms::Label^  labelS;

	private: System::Windows::Forms::Button^  button2;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PlayingField::typeid));
			this->sector600 = (gcnew System::Windows::Forms::Label());
			this->sector800 = (gcnew System::Windows::Forms::Label());
			this->sector400 = (gcnew System::Windows::Forms::Label());
			this->sectorPlus = (gcnew System::Windows::Forms::Label());
			this->sectorX2 = (gcnew System::Windows::Forms::Label());
			this->sector900 = (gcnew System::Windows::Forms::Label());
			this->sector100 = (gcnew System::Windows::Forms::Label());
			this->sectorX5 = (gcnew System::Windows::Forms::Label());
			this->sector0 = (gcnew System::Windows::Forms::Label());
			this->sectorB = (gcnew System::Windows::Forms::Label());
			this->sector700 = (gcnew System::Windows::Forms::Label());
			this->sectorX15 = (gcnew System::Windows::Forms::Label());
			this->sectorP = (gcnew System::Windows::Forms::Label());
			this->sector500 = (gcnew System::Windows::Forms::Label());
			this->sector300 = (gcnew System::Windows::Forms::Label());
			this->sector200 = (gcnew System::Windows::Forms::Label());
			this->labelPlayer1 = (gcnew System::Windows::Forms::Label());
			this->labelPlayerScore1 = (gcnew System::Windows::Forms::Label());
			this->labelPlayer2 = (gcnew System::Windows::Forms::Label());
			this->labelPlayerScore2 = (gcnew System::Windows::Forms::Label());
			this->labelPlayer3 = (gcnew System::Windows::Forms::Label());
			this->labelPlayerScore3 = (gcnew System::Windows::Forms::Label());
			this->tryLetter1 = (gcnew System::Windows::Forms::Button());
			this->tryLetter2 = (gcnew System::Windows::Forms::Button());
			this->tryLetter4 = (gcnew System::Windows::Forms::Button());
			this->tryLetter3 = (gcnew System::Windows::Forms::Button());
			this->tryLetter6 = (gcnew System::Windows::Forms::Button());
			this->tryLetter5 = (gcnew System::Windows::Forms::Button());
			this->tryLetter7 = (gcnew System::Windows::Forms::Button());
			this->tryLetter14 = (gcnew System::Windows::Forms::Button());
			this->tryLetter13 = (gcnew System::Windows::Forms::Button());
			this->tryLetter12 = (gcnew System::Windows::Forms::Button());
			this->tryLetter11 = (gcnew System::Windows::Forms::Button());
			this->tryLetter10 = (gcnew System::Windows::Forms::Button());
			this->tryLetter9 = (gcnew System::Windows::Forms::Button());
			this->tryLetter8 = (gcnew System::Windows::Forms::Button());
			this->tryLetter20 = (gcnew System::Windows::Forms::Button());
			this->tryLetter19 = (gcnew System::Windows::Forms::Button());
			this->tryLetter18 = (gcnew System::Windows::Forms::Button());
			this->tryLetter17 = (gcnew System::Windows::Forms::Button());
			this->tryLetter16 = (gcnew System::Windows::Forms::Button());
			this->tryLetter15 = (gcnew System::Windows::Forms::Button());
			this->tryLetter28 = (gcnew System::Windows::Forms::Button());
			this->tryLetter27 = (gcnew System::Windows::Forms::Button());
			this->tryLetter26 = (gcnew System::Windows::Forms::Button());
			this->tryLetter24 = (gcnew System::Windows::Forms::Button());
			this->tryLetter23 = (gcnew System::Windows::Forms::Button());
			this->tryLetter22 = (gcnew System::Windows::Forms::Button());
			this->spin = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tryLetter33 = (gcnew System::Windows::Forms::Button());
			this->tryLetter32 = (gcnew System::Windows::Forms::Button());
			this->tryLetter31 = (gcnew System::Windows::Forms::Button());
			this->tryLetter30 = (gcnew System::Windows::Forms::Button());
			this->tryLetter29 = (gcnew System::Windows::Forms::Button());
			this->tryLetter21 = (gcnew System::Windows::Forms::Button());
			this->tryLetter25 = (gcnew System::Windows::Forms::Button());
			this->alphabet = (gcnew System::Windows::Forms::GroupBox());
			this->yakubovich = (gcnew System::Windows::Forms::Label());
			this->select = (gcnew System::Windows::Forms::Button());
			this->question = (gcnew System::Windows::Forms::Label());
			this->numOfWord = (gcnew System::Windows::Forms::NumericUpDown());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->playerBack1 = (gcnew System::Windows::Forms::PictureBox());
			this->playerBack2 = (gcnew System::Windows::Forms::PictureBox());
			this->playerBack3 = (gcnew System::Windows::Forms::PictureBox());
			this->yakubovichImage = (gcnew System::Windows::Forms::PictureBox());
			this->tbChP1 = (gcnew System::Windows::Forms::TextBox());
			this->labelP1 = (gcnew System::Windows::Forms::Label());
			this->labelP2 = (gcnew System::Windows::Forms::Label());
			this->tbChP2 = (gcnew System::Windows::Forms::TextBox());
			this->labelP3 = (gcnew System::Windows::Forms::Label());
			this->tbChP3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbChPS3 = (gcnew System::Windows::Forms::TextBox());
			this->tbChPS2 = (gcnew System::Windows::Forms::TextBox());
			this->tbChPS1 = (gcnew System::Windows::Forms::TextBox());
			this->labelS = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->alphabet->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numOfWord))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerBack1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerBack2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerBack3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yakubovichImage))->BeginInit();
			this->SuspendLayout();
			// 
			// sector600
			// 
			this->sector600->AutoSize = true;
			this->sector600->BackColor = System::Drawing::Color::Black;
			this->sector600->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold));
			this->sector600->ForeColor = System::Drawing::Color::White;
			this->sector600->Location = System::Drawing::Point(276, 398);
			this->sector600->Name = L"sector600";
			this->sector600->Size = System::Drawing::Size(46, 23);
			this->sector600->TabIndex = 0;
			this->sector600->Text = L"600";
			// 
			// sector800
			// 
			this->sector800->AutoSize = true;
			this->sector800->BackColor = System::Drawing::Color::White;
			this->sector800->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold));
			this->sector800->Location = System::Drawing::Point(187, 419);
			this->sector800->Name = L"sector800";
			this->sector800->Size = System::Drawing::Size(46, 23);
			this->sector800->TabIndex = 1;
			this->sector800->Text = L"800";
			// 
			// sector400
			// 
			this->sector400->AutoSize = true;
			this->sector400->BackColor = System::Drawing::Color::White;
			this->sector400->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold));
			this->sector400->Location = System::Drawing::Point(62, 542);
			this->sector400->Name = L"sector400";
			this->sector400->Size = System::Drawing::Size(46, 23);
			this->sector400->TabIndex = 3;
			this->sector400->Text = L"400";
			// 
			// sectorPlus
			// 
			this->sectorPlus->AutoSize = true;
			this->sectorPlus->BackColor = System::Drawing::Color::Black;
			this->sectorPlus->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold));
			this->sectorPlus->ForeColor = System::Drawing::Color::White;
			this->sectorPlus->Location = System::Drawing::Point(116, 464);
			this->sectorPlus->Name = L"sectorPlus";
			this->sectorPlus->Size = System::Drawing::Size(38, 23);
			this->sectorPlus->TabIndex = 2;
			this->sectorPlus->Text = L"+1";
			// 
			// sectorX2
			// 
			this->sectorX2->AutoSize = true;
			this->sectorX2->BackColor = System::Drawing::Color::White;
			this->sectorX2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold));
			this->sectorX2->Location = System::Drawing::Point(373, 423);
			this->sectorX2->Name = L"sectorX2";
			this->sectorX2->Size = System::Drawing::Size(35, 23);
			this->sectorX2->TabIndex = 8;
			this->sectorX2->Text = L"X2";
			// 
			// sector900
			// 
			this->sector900->AutoSize = true;
			this->sector900->BackColor = System::Drawing::Color::Black;
			this->sector900->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold));
			this->sector900->ForeColor = System::Drawing::Color::White;
			this->sector900->Location = System::Drawing::Point(439, 474);
			this->sector900->Name = L"sector900";
			this->sector900->Size = System::Drawing::Size(46, 23);
			this->sector900->TabIndex = 9;
			this->sector900->Text = L"900";
			// 
			// sector100
			// 
			this->sector100->AutoSize = true;
			this->sector100->BackColor = System::Drawing::Color::White;
			this->sector100->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold));
			this->sector100->Location = System::Drawing::Point(492, 550);
			this->sector100->Name = L"sector100";
			this->sector100->Size = System::Drawing::Size(46, 23);
			this->sector100->TabIndex = 10;
			this->sector100->Text = L"100";
			// 
			// sectorX5
			// 
			this->sectorX5->AutoSize = true;
			this->sectorX5->BackColor = System::Drawing::Color::Black;
			this->sectorX5->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sectorX5->ForeColor = System::Drawing::Color::White;
			this->sectorX5->Location = System::Drawing::Point(43, 630);
			this->sectorX5->Name = L"sectorX5";
			this->sectorX5->Size = System::Drawing::Size(35, 23);
			this->sectorX5->TabIndex = 11;
			this->sectorX5->Text = L"X5";
			// 
			// sector0
			// 
			this->sector0->AutoSize = true;
			this->sector0->BackColor = System::Drawing::Color::White;
			this->sector0->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold));
			this->sector0->Location = System::Drawing::Point(62, 718);
			this->sector0->Name = L"sector0";
			this->sector0->Size = System::Drawing::Size(22, 23);
			this->sector0->TabIndex = 19;
			this->sector0->Text = L"0";
			// 
			// sectorB
			// 
			this->sectorB->AutoSize = true;
			this->sectorB->BackColor = System::Drawing::Color::Black;
			this->sectorB->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold));
			this->sectorB->ForeColor = System::Drawing::Color::White;
			this->sectorB->Location = System::Drawing::Point(526, 638);
			this->sectorB->Name = L"sectorB";
			this->sectorB->Size = System::Drawing::Size(23, 23);
			this->sectorB->TabIndex = 18;
			this->sectorB->Text = L"Б";
			// 
			// sector700
			// 
			this->sector700->AutoSize = true;
			this->sector700->BackColor = System::Drawing::Color::White;
			this->sector700->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold));
			this->sector700->Location = System::Drawing::Point(486, 722);
			this->sector700->Name = L"sector700";
			this->sector700->Size = System::Drawing::Size(46, 23);
			this->sector700->TabIndex = 17;
			this->sector700->Text = L"700";
			// 
			// sectorX15
			// 
			this->sectorX15->AutoSize = true;
			this->sectorX15->BackColor = System::Drawing::Color::Black;
			this->sectorX15->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold));
			this->sectorX15->ForeColor = System::Drawing::Color::White;
			this->sectorX15->Location = System::Drawing::Point(433, 799);
			this->sectorX15->Name = L"sectorX15";
			this->sectorX15->Size = System::Drawing::Size(53, 23);
			this->sectorX15->TabIndex = 16;
			this->sectorX15->Text = L"X1.5";
			// 
			// sectorP
			// 
			this->sectorP->AutoSize = true;
			this->sectorP->BackColor = System::Drawing::Color::Black;
			this->sectorP->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold));
			this->sectorP->ForeColor = System::Drawing::Color::White;
			this->sectorP->Location = System::Drawing::Point(99, 796);
			this->sectorP->Name = L"sectorP";
			this->sectorP->Size = System::Drawing::Size(64, 23);
			this->sectorP->TabIndex = 15;
			this->sectorP->Text = L"ПРИЗ";
			// 
			// sector500
			// 
			this->sector500->AutoSize = true;
			this->sector500->BackColor = System::Drawing::Color::White;
			this->sector500->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold));
			this->sector500->Location = System::Drawing::Point(177, 853);
			this->sector500->Name = L"sector500";
			this->sector500->Size = System::Drawing::Size(46, 23);
			this->sector500->TabIndex = 14;
			this->sector500->Text = L"500";
			// 
			// sector300
			// 
			this->sector300->AutoSize = true;
			this->sector300->BackColor = System::Drawing::Color::Black;
			this->sector300->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold));
			this->sector300->ForeColor = System::Drawing::Color::White;
			this->sector300->Location = System::Drawing::Point(272, 871);
			this->sector300->Name = L"sector300";
			this->sector300->Size = System::Drawing::Size(46, 23);
			this->sector300->TabIndex = 13;
			this->sector300->Text = L"300";
			// 
			// sector200
			// 
			this->sector200->AutoSize = true;
			this->sector200->BackColor = System::Drawing::Color::White;
			this->sector200->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold));
			this->sector200->Location = System::Drawing::Point(362, 855);
			this->sector200->Name = L"sector200";
			this->sector200->Size = System::Drawing::Size(46, 23);
			this->sector200->TabIndex = 12;
			this->sector200->Text = L"200";
			// 
			// labelPlayer1
			// 
			this->labelPlayer1->AutoSize = true;
			this->labelPlayer1->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPlayer1->Location = System::Drawing::Point(275, 31);
			this->labelPlayer1->Name = L"labelPlayer1";
			this->labelPlayer1->Size = System::Drawing::Size(124, 33);
			this->labelPlayer1->TabIndex = 21;
			this->labelPlayer1->Text = L"Игрок 1";
			// 
			// labelPlayerScore1
			// 
			this->labelPlayerScore1->AutoSize = true;
			this->labelPlayerScore1->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPlayerScore1->Location = System::Drawing::Point(275, 76);
			this->labelPlayerScore1->Name = L"labelPlayerScore1";
			this->labelPlayerScore1->Size = System::Drawing::Size(32, 33);
			this->labelPlayerScore1->TabIndex = 20;
			this->labelPlayerScore1->Text = L"0";
			// 
			// labelPlayer2
			// 
			this->labelPlayer2->AutoSize = true;
			this->labelPlayer2->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPlayer2->Location = System::Drawing::Point(565, 31);
			this->labelPlayer2->Name = L"labelPlayer2";
			this->labelPlayer2->Size = System::Drawing::Size(124, 33);
			this->labelPlayer2->TabIndex = 23;
			this->labelPlayer2->Text = L"Игрок 2";
			// 
			// labelPlayerScore2
			// 
			this->labelPlayerScore2->AutoSize = true;
			this->labelPlayerScore2->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPlayerScore2->Location = System::Drawing::Point(565, 76);
			this->labelPlayerScore2->Name = L"labelPlayerScore2";
			this->labelPlayerScore2->Size = System::Drawing::Size(32, 33);
			this->labelPlayerScore2->TabIndex = 22;
			this->labelPlayerScore2->Text = L"0";
			// 
			// labelPlayer3
			// 
			this->labelPlayer3->AutoSize = true;
			this->labelPlayer3->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPlayer3->Location = System::Drawing::Point(857, 31);
			this->labelPlayer3->Name = L"labelPlayer3";
			this->labelPlayer3->Size = System::Drawing::Size(124, 33);
			this->labelPlayer3->TabIndex = 25;
			this->labelPlayer3->Text = L"Игрок 3";
			// 
			// labelPlayerScore3
			// 
			this->labelPlayerScore3->AutoSize = true;
			this->labelPlayerScore3->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPlayerScore3->Location = System::Drawing::Point(857, 76);
			this->labelPlayerScore3->Name = L"labelPlayerScore3";
			this->labelPlayerScore3->Size = System::Drawing::Size(32, 33);
			this->labelPlayerScore3->TabIndex = 24;
			this->labelPlayerScore3->Text = L"0";
			// 
			// tryLetter1
			// 
			this->tryLetter1->AutoSize = true;
			this->tryLetter1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter1->FlatAppearance->BorderSize = 0;
			this->tryLetter1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter1->Location = System::Drawing::Point(7, 12);
			this->tryLetter1->Name = L"tryLetter1";
			this->tryLetter1->Size = System::Drawing::Size(28, 28);
			this->tryLetter1->TabIndex = 26;
			this->tryLetter1->Text = L"А";
			this->tryLetter1->UseVisualStyleBackColor = false;
			this->tryLetter1->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter1_Click);
			// 
			// tryLetter2
			// 
			this->tryLetter2->AutoSize = true;
			this->tryLetter2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter2->FlatAppearance->BorderSize = 0;
			this->tryLetter2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter2->Location = System::Drawing::Point(41, 12);
			this->tryLetter2->Name = L"tryLetter2";
			this->tryLetter2->Size = System::Drawing::Size(28, 28);
			this->tryLetter2->TabIndex = 27;
			this->tryLetter2->Text = L"Б";
			this->tryLetter2->UseVisualStyleBackColor = false;
			this->tryLetter2->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter2_Click);
			// 
			// tryLetter4
			// 
			this->tryLetter4->AutoSize = true;
			this->tryLetter4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter4->FlatAppearance->BorderSize = 0;
			this->tryLetter4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter4->Location = System::Drawing::Point(109, 12);
			this->tryLetter4->Name = L"tryLetter4";
			this->tryLetter4->Size = System::Drawing::Size(28, 28);
			this->tryLetter4->TabIndex = 29;
			this->tryLetter4->Text = L"Г";
			this->tryLetter4->UseVisualStyleBackColor = false;
			this->tryLetter4->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter4_Click);
			// 
			// tryLetter3
			// 
			this->tryLetter3->AutoSize = true;
			this->tryLetter3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter3->FlatAppearance->BorderSize = 0;
			this->tryLetter3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter3->Location = System::Drawing::Point(75, 12);
			this->tryLetter3->Name = L"tryLetter3";
			this->tryLetter3->Size = System::Drawing::Size(28, 28);
			this->tryLetter3->TabIndex = 28;
			this->tryLetter3->Text = L"В";
			this->tryLetter3->UseVisualStyleBackColor = false;
			this->tryLetter3->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter3_Click);
			// 
			// tryLetter6
			// 
			this->tryLetter6->AutoSize = true;
			this->tryLetter6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter6->FlatAppearance->BorderSize = 0;
			this->tryLetter6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter6->Location = System::Drawing::Point(177, 12);
			this->tryLetter6->Name = L"tryLetter6";
			this->tryLetter6->Size = System::Drawing::Size(28, 28);
			this->tryLetter6->TabIndex = 31;
			this->tryLetter6->Text = L"Е";
			this->tryLetter6->UseVisualStyleBackColor = false;
			this->tryLetter6->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter6_Click);
			// 
			// tryLetter5
			// 
			this->tryLetter5->AutoSize = true;
			this->tryLetter5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter5->FlatAppearance->BorderSize = 0;
			this->tryLetter5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter5->Location = System::Drawing::Point(143, 12);
			this->tryLetter5->Name = L"tryLetter5";
			this->tryLetter5->Size = System::Drawing::Size(28, 28);
			this->tryLetter5->TabIndex = 30;
			this->tryLetter5->Text = L"Д";
			this->tryLetter5->UseVisualStyleBackColor = false;
			this->tryLetter5->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter5_Click);
			// 
			// tryLetter7
			// 
			this->tryLetter7->AutoSize = true;
			this->tryLetter7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter7->FlatAppearance->BorderSize = 0;
			this->tryLetter7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter7->Location = System::Drawing::Point(211, 12);
			this->tryLetter7->Name = L"tryLetter7";
			this->tryLetter7->Size = System::Drawing::Size(28, 28);
			this->tryLetter7->TabIndex = 32;
			this->tryLetter7->Text = L"Ё";
			this->tryLetter7->UseVisualStyleBackColor = false;
			this->tryLetter7->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter7_Click);
			// 
			// tryLetter14
			// 
			this->tryLetter14->AutoSize = true;
			this->tryLetter14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter14->FlatAppearance->BorderSize = 0;
			this->tryLetter14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter14->Location = System::Drawing::Point(211, 46);
			this->tryLetter14->Name = L"tryLetter14";
			this->tryLetter14->Size = System::Drawing::Size(28, 28);
			this->tryLetter14->TabIndex = 39;
			this->tryLetter14->Text = L"М";
			this->tryLetter14->UseVisualStyleBackColor = false;
			this->tryLetter14->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter14_Click);
			// 
			// tryLetter13
			// 
			this->tryLetter13->AutoSize = true;
			this->tryLetter13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter13->FlatAppearance->BorderSize = 0;
			this->tryLetter13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter13->Location = System::Drawing::Point(177, 46);
			this->tryLetter13->Name = L"tryLetter13";
			this->tryLetter13->Size = System::Drawing::Size(28, 28);
			this->tryLetter13->TabIndex = 38;
			this->tryLetter13->Text = L"Л";
			this->tryLetter13->UseVisualStyleBackColor = false;
			this->tryLetter13->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter13_Click);
			// 
			// tryLetter12
			// 
			this->tryLetter12->AutoSize = true;
			this->tryLetter12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter12->FlatAppearance->BorderSize = 0;
			this->tryLetter12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter12->Location = System::Drawing::Point(143, 46);
			this->tryLetter12->Name = L"tryLetter12";
			this->tryLetter12->Size = System::Drawing::Size(28, 28);
			this->tryLetter12->TabIndex = 37;
			this->tryLetter12->Text = L"К";
			this->tryLetter12->UseVisualStyleBackColor = false;
			this->tryLetter12->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter12_Click);
			// 
			// tryLetter11
			// 
			this->tryLetter11->AutoSize = true;
			this->tryLetter11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter11->FlatAppearance->BorderSize = 0;
			this->tryLetter11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter11->Location = System::Drawing::Point(109, 46);
			this->tryLetter11->Name = L"tryLetter11";
			this->tryLetter11->Size = System::Drawing::Size(28, 28);
			this->tryLetter11->TabIndex = 36;
			this->tryLetter11->Text = L"Й";
			this->tryLetter11->UseVisualStyleBackColor = false;
			this->tryLetter11->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter11_Click);
			// 
			// tryLetter10
			// 
			this->tryLetter10->AutoSize = true;
			this->tryLetter10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter10->FlatAppearance->BorderSize = 0;
			this->tryLetter10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter10->Location = System::Drawing::Point(75, 46);
			this->tryLetter10->Name = L"tryLetter10";
			this->tryLetter10->Size = System::Drawing::Size(28, 28);
			this->tryLetter10->TabIndex = 35;
			this->tryLetter10->Text = L"И";
			this->tryLetter10->UseVisualStyleBackColor = false;
			this->tryLetter10->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter10_Click);
			// 
			// tryLetter9
			// 
			this->tryLetter9->AutoSize = true;
			this->tryLetter9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter9->FlatAppearance->BorderSize = 0;
			this->tryLetter9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter9->Location = System::Drawing::Point(41, 46);
			this->tryLetter9->Name = L"tryLetter9";
			this->tryLetter9->Size = System::Drawing::Size(28, 28);
			this->tryLetter9->TabIndex = 34;
			this->tryLetter9->Text = L"З";
			this->tryLetter9->UseVisualStyleBackColor = false;
			this->tryLetter9->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter9_Click);
			// 
			// tryLetter8
			// 
			this->tryLetter8->AutoSize = true;
			this->tryLetter8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter8->FlatAppearance->BorderSize = 0;
			this->tryLetter8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter8->Location = System::Drawing::Point(7, 46);
			this->tryLetter8->Name = L"tryLetter8";
			this->tryLetter8->Size = System::Drawing::Size(30, 28);
			this->tryLetter8->TabIndex = 33;
			this->tryLetter8->Text = L"Ж";
			this->tryLetter8->UseVisualStyleBackColor = false;
			this->tryLetter8->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter8_Click);
			// 
			// tryLetter20
			// 
			this->tryLetter20->AutoSize = true;
			this->tryLetter20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter20->FlatAppearance->BorderSize = 0;
			this->tryLetter20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter20->Location = System::Drawing::Point(195, 80);
			this->tryLetter20->Name = L"tryLetter20";
			this->tryLetter20->Size = System::Drawing::Size(28, 28);
			this->tryLetter20->TabIndex = 45;
			this->tryLetter20->Text = L"Т";
			this->tryLetter20->UseVisualStyleBackColor = false;
			this->tryLetter20->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter20_Click);
			// 
			// tryLetter19
			// 
			this->tryLetter19->AutoSize = true;
			this->tryLetter19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter19->FlatAppearance->BorderSize = 0;
			this->tryLetter19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter19->Location = System::Drawing::Point(161, 80);
			this->tryLetter19->Name = L"tryLetter19";
			this->tryLetter19->Size = System::Drawing::Size(28, 28);
			this->tryLetter19->TabIndex = 44;
			this->tryLetter19->Text = L"С";
			this->tryLetter19->UseVisualStyleBackColor = false;
			this->tryLetter19->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter19_Click);
			// 
			// tryLetter18
			// 
			this->tryLetter18->AutoSize = true;
			this->tryLetter18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter18->FlatAppearance->BorderSize = 0;
			this->tryLetter18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter18->Location = System::Drawing::Point(127, 80);
			this->tryLetter18->Name = L"tryLetter18";
			this->tryLetter18->Size = System::Drawing::Size(28, 28);
			this->tryLetter18->TabIndex = 43;
			this->tryLetter18->Text = L"Р";
			this->tryLetter18->UseVisualStyleBackColor = false;
			this->tryLetter18->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter18_Click);
			// 
			// tryLetter17
			// 
			this->tryLetter17->AutoSize = true;
			this->tryLetter17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter17->FlatAppearance->BorderSize = 0;
			this->tryLetter17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter17->Location = System::Drawing::Point(93, 80);
			this->tryLetter17->Name = L"tryLetter17";
			this->tryLetter17->Size = System::Drawing::Size(28, 28);
			this->tryLetter17->TabIndex = 42;
			this->tryLetter17->Text = L"П";
			this->tryLetter17->UseVisualStyleBackColor = false;
			this->tryLetter17->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter17_Click);
			// 
			// tryLetter16
			// 
			this->tryLetter16->AutoSize = true;
			this->tryLetter16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter16->FlatAppearance->BorderSize = 0;
			this->tryLetter16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter16->Location = System::Drawing::Point(59, 80);
			this->tryLetter16->Name = L"tryLetter16";
			this->tryLetter16->Size = System::Drawing::Size(28, 28);
			this->tryLetter16->TabIndex = 41;
			this->tryLetter16->Text = L"О";
			this->tryLetter16->UseVisualStyleBackColor = false;
			this->tryLetter16->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter16_Click);
			// 
			// tryLetter15
			// 
			this->tryLetter15->AutoSize = true;
			this->tryLetter15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter15->FlatAppearance->BorderSize = 0;
			this->tryLetter15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter15->Location = System::Drawing::Point(25, 80);
			this->tryLetter15->Name = L"tryLetter15";
			this->tryLetter15->Size = System::Drawing::Size(28, 28);
			this->tryLetter15->TabIndex = 40;
			this->tryLetter15->Text = L"Н";
			this->tryLetter15->UseVisualStyleBackColor = false;
			this->tryLetter15->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter15_Click);
			// 
			// tryLetter28
			// 
			this->tryLetter28->AutoSize = true;
			this->tryLetter28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter28->FlatAppearance->BorderSize = 0;
			this->tryLetter28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter28->Location = System::Drawing::Point(24, 148);
			this->tryLetter28->Name = L"tryLetter28";
			this->tryLetter28->Size = System::Drawing::Size(28, 28);
			this->tryLetter28->TabIndex = 53;
			this->tryLetter28->Text = L"Ь";
			this->tryLetter28->UseVisualStyleBackColor = false;
			this->tryLetter28->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter28_Click);
			// 
			// tryLetter27
			// 
			this->tryLetter27->AutoSize = true;
			this->tryLetter27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter27->FlatAppearance->BorderSize = 0;
			this->tryLetter27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter27->Location = System::Drawing::Point(211, 114);
			this->tryLetter27->Name = L"tryLetter27";
			this->tryLetter27->Size = System::Drawing::Size(29, 28);
			this->tryLetter27->TabIndex = 52;
			this->tryLetter27->Text = L"Щ";
			this->tryLetter27->UseVisualStyleBackColor = false;
			this->tryLetter27->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter27_Click);
			// 
			// tryLetter26
			// 
			this->tryLetter26->AutoSize = true;
			this->tryLetter26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter26->FlatAppearance->BorderSize = 0;
			this->tryLetter26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter26->Location = System::Drawing::Point(177, 114);
			this->tryLetter26->Name = L"tryLetter26";
			this->tryLetter26->Size = System::Drawing::Size(28, 28);
			this->tryLetter26->TabIndex = 51;
			this->tryLetter26->Text = L"Ш";
			this->tryLetter26->UseVisualStyleBackColor = false;
			this->tryLetter26->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter26_Click);
			// 
			// tryLetter24
			// 
			this->tryLetter24->AutoSize = true;
			this->tryLetter24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter24->FlatAppearance->BorderSize = 0;
			this->tryLetter24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter24->Location = System::Drawing::Point(109, 114);
			this->tryLetter24->Name = L"tryLetter24";
			this->tryLetter24->Size = System::Drawing::Size(28, 28);
			this->tryLetter24->TabIndex = 49;
			this->tryLetter24->Text = L"Ц";
			this->tryLetter24->UseVisualStyleBackColor = false;
			this->tryLetter24->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter24_Click);
			// 
			// tryLetter23
			// 
			this->tryLetter23->AutoSize = true;
			this->tryLetter23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter23->FlatAppearance->BorderSize = 0;
			this->tryLetter23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter23->Location = System::Drawing::Point(75, 114);
			this->tryLetter23->Name = L"tryLetter23";
			this->tryLetter23->Size = System::Drawing::Size(28, 28);
			this->tryLetter23->TabIndex = 48;
			this->tryLetter23->Text = L"Х";
			this->tryLetter23->UseVisualStyleBackColor = false;
			this->tryLetter23->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter23_Click);
			// 
			// tryLetter22
			// 
			this->tryLetter22->AutoSize = true;
			this->tryLetter22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter22->FlatAppearance->BorderSize = 0;
			this->tryLetter22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter22->Location = System::Drawing::Point(41, 114);
			this->tryLetter22->Name = L"tryLetter22";
			this->tryLetter22->Size = System::Drawing::Size(30, 28);
			this->tryLetter22->TabIndex = 47;
			this->tryLetter22->Text = L"Ф";
			this->tryLetter22->UseVisualStyleBackColor = false;
			this->tryLetter22->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter22_Click);
			// 
			// spin
			// 
			this->spin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->spin->FlatAppearance->BorderSize = 0;
			this->spin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->spin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->spin->Location = System::Drawing::Point(647, 519);
			this->spin->Name = L"spin";
			this->spin->Size = System::Drawing::Size(204, 48);
			this->spin->TabIndex = 53;
			this->spin->Text = L"Крутить барабан";
			this->spin->UseVisualStyleBackColor = false;
			this->spin->Click += gcnew System::EventHandler(this, &PlayingField::spin_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(612, 809);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(77, 13);
			this->label23->TabIndex = 55;
			this->label23->Text = L"Номер слова:\r\n";
			// 
			// tryLetter33
			// 
			this->tryLetter33->AutoSize = true;
			this->tryLetter33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter33->FlatAppearance->BorderSize = 0;
			this->tryLetter33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter33->Location = System::Drawing::Point(194, 148);
			this->tryLetter33->Name = L"tryLetter33";
			this->tryLetter33->Size = System::Drawing::Size(28, 28);
			this->tryLetter33->TabIndex = 58;
			this->tryLetter33->Text = L"Я";
			this->tryLetter33->UseVisualStyleBackColor = false;
			this->tryLetter33->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter33_Click);
			// 
			// tryLetter32
			// 
			this->tryLetter32->AutoSize = true;
			this->tryLetter32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter32->FlatAppearance->BorderSize = 0;
			this->tryLetter32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter32->Location = System::Drawing::Point(160, 148);
			this->tryLetter32->Name = L"tryLetter32";
			this->tryLetter32->Size = System::Drawing::Size(28, 28);
			this->tryLetter32->TabIndex = 57;
			this->tryLetter32->Text = L"Ю";
			this->tryLetter32->UseVisualStyleBackColor = false;
			this->tryLetter32->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter32_Click);
			// 
			// tryLetter31
			// 
			this->tryLetter31->AutoSize = true;
			this->tryLetter31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter31->FlatAppearance->BorderSize = 0;
			this->tryLetter31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter31->Location = System::Drawing::Point(126, 148);
			this->tryLetter31->Name = L"tryLetter31";
			this->tryLetter31->Size = System::Drawing::Size(28, 28);
			this->tryLetter31->TabIndex = 56;
			this->tryLetter31->Text = L"Э";
			this->tryLetter31->UseVisualStyleBackColor = false;
			this->tryLetter31->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter31_Click);
			// 
			// tryLetter30
			// 
			this->tryLetter30->AutoSize = true;
			this->tryLetter30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter30->FlatAppearance->BorderSize = 0;
			this->tryLetter30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter30->Location = System::Drawing::Point(92, 148);
			this->tryLetter30->Name = L"tryLetter30";
			this->tryLetter30->Size = System::Drawing::Size(28, 28);
			this->tryLetter30->TabIndex = 55;
			this->tryLetter30->Text = L"Ъ";
			this->tryLetter30->UseVisualStyleBackColor = false;
			this->tryLetter30->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter30_Click);
			// 
			// tryLetter29
			// 
			this->tryLetter29->AutoSize = true;
			this->tryLetter29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter29->FlatAppearance->BorderSize = 0;
			this->tryLetter29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter29->Location = System::Drawing::Point(58, 148);
			this->tryLetter29->Name = L"tryLetter29";
			this->tryLetter29->Size = System::Drawing::Size(29, 28);
			this->tryLetter29->TabIndex = 54;
			this->tryLetter29->Text = L"Ы";
			this->tryLetter29->UseVisualStyleBackColor = false;
			this->tryLetter29->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter29_Click);
			// 
			// tryLetter21
			// 
			this->tryLetter21->AutoSize = true;
			this->tryLetter21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter21->FlatAppearance->BorderSize = 0;
			this->tryLetter21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter21->Location = System::Drawing::Point(7, 114);
			this->tryLetter21->Name = L"tryLetter21";
			this->tryLetter21->Size = System::Drawing::Size(28, 28);
			this->tryLetter21->TabIndex = 46;
			this->tryLetter21->Text = L"У";
			this->tryLetter21->UseVisualStyleBackColor = false;
			this->tryLetter21->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter21_Click);
			// 
			// tryLetter25
			// 
			this->tryLetter25->AutoSize = true;
			this->tryLetter25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->tryLetter25->FlatAppearance->BorderSize = 0;
			this->tryLetter25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tryLetter25->Location = System::Drawing::Point(143, 114);
			this->tryLetter25->Name = L"tryLetter25";
			this->tryLetter25->Size = System::Drawing::Size(28, 28);
			this->tryLetter25->TabIndex = 50;
			this->tryLetter25->Text = L"Ч";
			this->tryLetter25->UseVisualStyleBackColor = false;
			this->tryLetter25->Click += gcnew System::EventHandler(this, &PlayingField::tryLetter25_Click);
			// 
			// alphabet
			// 
			this->alphabet->Controls->Add(this->tryLetter3);
			this->alphabet->Controls->Add(this->tryLetter25);
			this->alphabet->Controls->Add(this->tryLetter1);
			this->alphabet->Controls->Add(this->tryLetter21);
			this->alphabet->Controls->Add(this->tryLetter2);
			this->alphabet->Controls->Add(this->tryLetter33);
			this->alphabet->Controls->Add(this->tryLetter4);
			this->alphabet->Controls->Add(this->tryLetter32);
			this->alphabet->Controls->Add(this->tryLetter5);
			this->alphabet->Controls->Add(this->tryLetter31);
			this->alphabet->Controls->Add(this->tryLetter6);
			this->alphabet->Controls->Add(this->tryLetter30);
			this->alphabet->Controls->Add(this->tryLetter7);
			this->alphabet->Controls->Add(this->tryLetter29);
			this->alphabet->Controls->Add(this->tryLetter8);
			this->alphabet->Controls->Add(this->tryLetter9);
			this->alphabet->Controls->Add(this->tryLetter10);
			this->alphabet->Controls->Add(this->tryLetter11);
			this->alphabet->Controls->Add(this->tryLetter28);
			this->alphabet->Controls->Add(this->tryLetter12);
			this->alphabet->Controls->Add(this->tryLetter27);
			this->alphabet->Controls->Add(this->tryLetter13);
			this->alphabet->Controls->Add(this->tryLetter26);
			this->alphabet->Controls->Add(this->tryLetter14);
			this->alphabet->Controls->Add(this->tryLetter24);
			this->alphabet->Controls->Add(this->tryLetter15);
			this->alphabet->Controls->Add(this->tryLetter23);
			this->alphabet->Controls->Add(this->tryLetter16);
			this->alphabet->Controls->Add(this->tryLetter22);
			this->alphabet->Controls->Add(this->tryLetter17);
			this->alphabet->Controls->Add(this->tryLetter20);
			this->alphabet->Controls->Add(this->tryLetter18);
			this->alphabet->Controls->Add(this->tryLetter19);
			this->alphabet->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->alphabet->Location = System::Drawing::Point(623, 573);
			this->alphabet->Name = L"alphabet";
			this->alphabet->Size = System::Drawing::Size(245, 188);
			this->alphabet->TabIndex = 59;
			this->alphabet->TabStop = false;
			// 
			// yakubovich
			// 
			this->yakubovich->AutoSize = true;
			this->yakubovich->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->yakubovich->Location = System::Drawing::Point(584, 423);
			this->yakubovich->Name = L"yakubovich";
			this->yakubovich->Size = System::Drawing::Size(326, 28);
			this->yakubovich->TabIndex = 60;
			this->yakubovich->Text = L"Добро пожаловать на Поле Чудес!";
			// 
			// select
			// 
			this->select->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->select->FlatAppearance->BorderSize = 0;
			this->select->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->select->Location = System::Drawing::Point(610, 851);
			this->select->Name = L"select";
			this->select->Size = System::Drawing::Size(75, 23);
			this->select->TabIndex = 63;
			this->select->Text = L"Выбрать";
			this->select->UseVisualStyleBackColor = false;
			this->select->Click += gcnew System::EventHandler(this, &PlayingField::select_Click);
			// 
			// question
			// 
			this->question->AutoSize = true;
			this->question->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->question->Location = System::Drawing::Point(108, 302);
			this->question->Name = L"question";
			this->question->Size = System::Drawing::Size(0, 25);
			this->question->TabIndex = 64;
			// 
			// numOfWord
			// 
			this->numOfWord->Location = System::Drawing::Point(630, 825);
			this->numOfWord->Name = L"numOfWord";
			this->numOfWord->Size = System::Drawing::Size(38, 20);
			this->numOfWord->TabIndex = 65;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 361);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(566, 566);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 66;
			this->pictureBox1->TabStop = false;
			// 
			// playerBack1
			// 
			this->playerBack1->BackColor = System::Drawing::Color::Transparent;
			this->playerBack1->Location = System::Drawing::Point(268, 23);
			this->playerBack1->Name = L"playerBack1";
			this->playerBack1->Size = System::Drawing::Size(217, 88);
			this->playerBack1->TabIndex = 75;
			this->playerBack1->TabStop = false;
			// 
			// playerBack2
			// 
			this->playerBack2->BackColor = System::Drawing::Color::Transparent;
			this->playerBack2->Location = System::Drawing::Point(559, 23);
			this->playerBack2->Name = L"playerBack2";
			this->playerBack2->Size = System::Drawing::Size(218, 88);
			this->playerBack2->TabIndex = 76;
			this->playerBack2->TabStop = false;
			// 
			// playerBack3
			// 
			this->playerBack3->BackColor = System::Drawing::Color::Transparent;
			this->playerBack3->Location = System::Drawing::Point(847, 23);
			this->playerBack3->Name = L"playerBack3";
			this->playerBack3->Size = System::Drawing::Size(213, 88);
			this->playerBack3->TabIndex = 77;
			this->playerBack3->TabStop = false;
			// 
			// yakubovichImage
			// 
			this->yakubovichImage->Location = System::Drawing::Point(898, 519);
			this->yakubovichImage->Name = L"yakubovichImage";
			this->yakubovichImage->Size = System::Drawing::Size(347, 408);
			this->yakubovichImage->TabIndex = 78;
			this->yakubovichImage->TabStop = false;
			// 
			// tbChP1
			// 
			this->tbChP1->Location = System::Drawing::Point(772, 816);
			this->tbChP1->Name = L"tbChP1";
			this->tbChP1->Size = System::Drawing::Size(66, 20);
			this->tbChP1->TabIndex = 79;
			this->tbChP1->Visible = false;
			// 
			// labelP1
			// 
			this->labelP1->AutoSize = true;
			this->labelP1->Location = System::Drawing::Point(716, 819);
			this->labelP1->Name = L"labelP1";
			this->labelP1->Size = System::Drawing::Size(50, 13);
			this->labelP1->TabIndex = 80;
			this->labelP1->Text = L"Игрок 1:";
			this->labelP1->Visible = false;
			// 
			// labelP2
			// 
			this->labelP2->AutoSize = true;
			this->labelP2->Location = System::Drawing::Point(716, 845);
			this->labelP2->Name = L"labelP2";
			this->labelP2->Size = System::Drawing::Size(50, 13);
			this->labelP2->TabIndex = 82;
			this->labelP2->Text = L"Игрок 2:";
			this->labelP2->Visible = false;
			// 
			// tbChP2
			// 
			this->tbChP2->Location = System::Drawing::Point(772, 842);
			this->tbChP2->Name = L"tbChP2";
			this->tbChP2->Size = System::Drawing::Size(66, 20);
			this->tbChP2->TabIndex = 81;
			this->tbChP2->Visible = false;
			// 
			// labelP3
			// 
			this->labelP3->AutoSize = true;
			this->labelP3->Location = System::Drawing::Point(716, 871);
			this->labelP3->Name = L"labelP3";
			this->labelP3->Size = System::Drawing::Size(50, 13);
			this->labelP3->TabIndex = 84;
			this->labelP3->Text = L"Игрок 3:";
			this->labelP3->Visible = false;
			// 
			// tbChP3
			// 
			this->tbChP3->Location = System::Drawing::Point(772, 868);
			this->tbChP3->Name = L"tbChP3";
			this->tbChP3->Size = System::Drawing::Size(66, 20);
			this->tbChP3->TabIndex = 83;
			this->tbChP3->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(582, 894);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 23);
			this->button1->TabIndex = 85;
			this->button1->Text = L"Изменить игроков";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PlayingField::button1_Click);
			// 
			// tbChPS3
			// 
			this->tbChPS3->Location = System::Drawing::Point(844, 868);
			this->tbChPS3->Name = L"tbChPS3";
			this->tbChPS3->Size = System::Drawing::Size(34, 20);
			this->tbChPS3->TabIndex = 88;
			this->tbChPS3->Visible = false;
			// 
			// tbChPS2
			// 
			this->tbChPS2->Location = System::Drawing::Point(844, 842);
			this->tbChPS2->Name = L"tbChPS2";
			this->tbChPS2->Size = System::Drawing::Size(34, 20);
			this->tbChPS2->TabIndex = 87;
			this->tbChPS2->Visible = false;
			// 
			// tbChPS1
			// 
			this->tbChPS1->Location = System::Drawing::Point(844, 816);
			this->tbChPS1->Name = L"tbChPS1";
			this->tbChPS1->Size = System::Drawing::Size(34, 20);
			this->tbChPS1->TabIndex = 86;
			this->tbChPS1->Visible = false;
			// 
			// labelS
			// 
			this->labelS->AutoSize = true;
			this->labelS->Location = System::Drawing::Point(845, 800);
			this->labelS->Name = L"labelS";
			this->labelS->Size = System::Drawing::Size(33, 13);
			this->labelS->TabIndex = 89;
			this->labelS->Text = L"Счет:";
			this->labelS->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(749, 894);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 23);
			this->button2->TabIndex = 90;
			this->button2->Text = L"Обновить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &PlayingField::button2_Click);
			// 
			// PlayingField
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->ClientSize = System::Drawing::Size(1257, 939);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->labelS);
			this->Controls->Add(this->tbChPS3);
			this->Controls->Add(this->tbChPS2);
			this->Controls->Add(this->tbChPS1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelP3);
			this->Controls->Add(this->tbChP3);
			this->Controls->Add(this->labelP2);
			this->Controls->Add(this->tbChP2);
			this->Controls->Add(this->labelP1);
			this->Controls->Add(this->tbChP1);
			this->Controls->Add(this->yakubovichImage);
			this->Controls->Add(this->numOfWord);
			this->Controls->Add(this->question);
			this->Controls->Add(this->select);
			this->Controls->Add(this->yakubovich);
			this->Controls->Add(this->alphabet);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->spin);
			this->Controls->Add(this->labelPlayer3);
			this->Controls->Add(this->labelPlayerScore3);
			this->Controls->Add(this->labelPlayer2);
			this->Controls->Add(this->labelPlayerScore2);
			this->Controls->Add(this->labelPlayer1);
			this->Controls->Add(this->labelPlayerScore1);
			this->Controls->Add(this->sector0);
			this->Controls->Add(this->sectorB);
			this->Controls->Add(this->sector700);
			this->Controls->Add(this->sectorX15);
			this->Controls->Add(this->sectorP);
			this->Controls->Add(this->sector500);
			this->Controls->Add(this->sector300);
			this->Controls->Add(this->sector200);
			this->Controls->Add(this->sectorX5);
			this->Controls->Add(this->sector100);
			this->Controls->Add(this->sector900);
			this->Controls->Add(this->sectorX2);
			this->Controls->Add(this->sector400);
			this->Controls->Add(this->sectorPlus);
			this->Controls->Add(this->sector800);
			this->Controls->Add(this->sector600);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->playerBack1);
			this->Controls->Add(this->playerBack2);
			this->Controls->Add(this->playerBack3);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"PlayingField";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поле Чудес v1.0";
			this->Load += gcnew System::EventHandler(this, &PlayingField::PlayingField_Load);
			this->alphabet->ResumeLayout(false);
			this->alphabet->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numOfWord))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerBack1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerBack2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerBack3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yakubovichImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: String^ currentWord; //текущее слово
	private: array<Label^>^ word; //массив букв label 
	private: array<PictureBox^>^ bgWord; //массив фонов для букв PictureBox 
	private: Label^ currentPlayer; //текущий игрок
	private: Label^ currentSector;
	private: array<String^>^ arrayOfWords;
	private: array<String^>^ arrayOfQuestions;
	private: Color currentPlayerColor = Color::LimeGreen; //Color::FromArgb(255, 213, 231, 251);
	private: Color currentSectorColor = Color::LimeGreen;
	private: bool extraTurn = false;

	private: bool check(Button^ btn)
	{
		try
		{
			int counter = 0;
			String^ text;
			for each (Label^ checkLetter in word)
			{
				if (btn->Text == checkLetter->Text)
				{
					checkLetter->Visible = true;
					counter++;
				}
			}
			if (counter != 0)
			{
				yakubovich->Text = ("Откройте букву " + btn->Text + "!");
				yakubovichImage->Image = Image::FromFile("resources/yam5.png");
				return true;
			}
			else
			{
				yakubovich->Text = "Нет такой буквы!";
				counter = 0;
				yakubovichImage->Image = Image::FromFile("resources/yam4.png");
				return false;
			}
		}
		catch (Exception^ e)
		{

		}
	 }
	private: void nextPlayer(Button^ btn) {  //находит следующего игрока и меняет фон под ними
		if (!extraTurn)
		{
			if (!check(btn))
			{
				if (currentPlayer == labelPlayerScore1)
				{
					currentPlayer = labelPlayerScore2;
					labelPlayer1->BackColor = Color::Transparent;
					playerBack1->BackColor = Color::Transparent;
					labelPlayerScore1->BackColor = Color::Transparent;
					labelPlayer2->BackColor = currentPlayerColor;
					playerBack2->BackColor = currentPlayerColor;
					labelPlayerScore2->BackColor = currentPlayerColor;
					labelPlayer3->BackColor = Color::Transparent;
					playerBack3->BackColor = Color::Transparent;
					labelPlayerScore3->BackColor = Color::Transparent;


				}
				else
				{
					if (currentPlayer == labelPlayerScore2)
					{
						currentPlayer = labelPlayerScore3;
						labelPlayer1->BackColor = Color::Transparent;
						playerBack1->BackColor = Color::Transparent;
						labelPlayerScore1->BackColor = Color::Transparent;
						labelPlayer2->BackColor = Color::Transparent;
						playerBack2->BackColor = Color::Transparent;
						labelPlayerScore2->BackColor = Color::Transparent;
						labelPlayer3->BackColor = currentPlayerColor;
						playerBack3->BackColor = currentPlayerColor;
						labelPlayerScore3->BackColor = currentPlayerColor;


					}
					else
					{
						if (currentPlayer == labelPlayerScore3)
						{
							currentPlayer = labelPlayerScore1;
							labelPlayer1->BackColor = currentPlayerColor;
							playerBack1->BackColor = currentPlayerColor;
							labelPlayerScore1->BackColor = currentPlayerColor;
							labelPlayer2->BackColor = Color::Transparent;
							playerBack2->BackColor = Color::Transparent;
							labelPlayerScore2->BackColor = Color::Transparent;
							labelPlayer3->BackColor = Color::Transparent;
							playerBack3->BackColor = Color::Transparent;
							labelPlayerScore3->BackColor = Color::Transparent;
						}
					}
				}
			}
		}
		else
		{
			extraTurn = false;
		}
		
	}   
	private: void refresh() {
		
		try
		{
			delete bgWord;
			delete word;
			word = gcnew array<Label^>(currentWord->Length); //память для массива букв label 
			bgWord = gcnew array<PictureBox^>(currentWord->Length); //память для массива букв label 
			for (int i = 0; i < currentWord->Length; i++)
			{
				word[i] = gcnew System::Windows::Forms::Label(); // создал надпись для каждой буквы
				word[i]->Visible = false;
				bgWord[i] = gcnew System::Windows::Forms::PictureBox(); // создал фон для каждой буквы

				this->Controls->Add(word[i]); //добавил в коллекцию элементов управления все надписи
				this->Controls->Add(bgWord[i]); //добавил в коллекцию элементов управления все фоны
				word[i]->Text = System::Convert::ToString(currentWord[i]); //текст label = букве
			}


			int x;
			x = 50;
			for each (Label^ letter in word)
			{
				letter->Font = gcnew System::Drawing::Font("Courier New", 52);
				//letter->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				letter->ForeColor = Color::White;
				letter->BackColor = Color::MidnightBlue;
				letter->Location = System::Drawing::Point(x, 190);
				letter->Size = System::Drawing::Size(62, 69);
				x += 70;
			}
			x = 50;
			for each (PictureBox^ bg in bgWord)
			{
				bg->BackColor = Color::MidnightBlue;
				bg->Location = System::Drawing::Point(x, 184);
				bg->Size = System::Drawing::Size(65, 80);
				x += 70;
			}
		}
		catch (Exception^ e)
		{

		}
	}
	private: void changeSectorColor(Label^ sec) {
		currentSector = sec;
		currentSector->BackColor = currentSectorColor;
	}
	private: void refreshBar() {
		sector0->BackColor = Color::White;
		sector400->BackColor = Color::White;
		sector800->BackColor = Color::White;
		sectorX2->BackColor = Color::White;
		sector100->BackColor = Color::White;
		sector700->BackColor = Color::White;
		sector200->BackColor = Color::White;
		sector500->BackColor = Color::White;
		sector300->BackColor = Color::Black;
		sectorP->BackColor = Color::Black;
		sectorX5->BackColor = Color::Black;
		sectorPlus->BackColor = Color::Black;
		sector600->BackColor = Color::Black;
		sectorX15->BackColor = Color::Black;
		sector900->BackColor = Color::Black;
		sectorB->BackColor = Color::Black;


	}



	private: System::Void PlayingField_Load(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			alphabet->Enabled = false;
			yakubovichImage->Image = Image::FromFile("resources/yam6.png");
			currentSector = sector0;
			arrayOfWords = CData::getArrayOfWords();
			arrayOfQuestions = CData::getArrayOfQuestions();
			currentWord = arrayOfWords[0];
			question->Text = arrayOfQuestions[0];
			numOfWord->Maximum = arrayOfWords->Length-1;

			refresh();

			labelPlayer1->BackColor = currentPlayerColor;
			playerBack1->BackColor = currentPlayerColor;
			labelPlayerScore1->BackColor = currentPlayerColor;

			currentPlayer = labelPlayerScore1;
			alphabet->Enabled = false;
		}
		catch (Exception^ e)
		{

		}
		

		

	}
			 //--Кнопки для проверки буквы на существование в слове --//
#pragma region alphabet buttons
	
	private: System::Void tryLetter1_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter1); //проверка буквы на существование в слове 
		tryLetter1->Enabled = false; //кнопка становится недоступной
		alphabet->Enabled = false; //весь алфавит недоступен
		spin->Enabled = true; //можно крутить барабан
		nextPlayer(tryLetter1);

	}
	private: System::Void tryLetter2_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter2); 
		tryLetter2->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter2);
	}
	private: System::Void tryLetter3_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter3);
		tryLetter3->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter3);

	}
	private: System::Void tryLetter4_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter4);
		tryLetter4->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter4);
		
	}
	private: System::Void tryLetter5_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter5);
		tryLetter5->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter5);
	}
	private: System::Void tryLetter6_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter6);
		tryLetter6->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter6);
	}
	private: System::Void tryLetter7_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter7);
		tryLetter7->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter7);
	}
	private: System::Void tryLetter8_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter8);
		tryLetter8->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter8);
	}
	private: System::Void tryLetter9_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter9);
		tryLetter9->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter9);
	}
	private: System::Void tryLetter10_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter10);
		tryLetter10->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter10);
	}
	private: System::Void tryLetter11_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter11);
		tryLetter11->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter11);
	}
	private: System::Void tryLetter12_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter12);
		tryLetter12->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter12);
	}
	private: System::Void tryLetter13_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter13);
		tryLetter13->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter13);
	}
	private: System::Void tryLetter14_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter14);
		tryLetter14->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter14);
	}
	private: System::Void tryLetter15_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter15);
		tryLetter15->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter15);
	}
	private: System::Void tryLetter16_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter16);
		tryLetter16->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter16);
	}
	private: System::Void tryLetter17_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter17);
		tryLetter17->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter17);
	}
	private: System::Void tryLetter18_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter18);
		tryLetter18->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter18);
	}
	private: System::Void tryLetter19_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter19);
		tryLetter19->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter19);
	}
	private: System::Void tryLetter20_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter20);
		tryLetter20->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter20);
	}
	private: System::Void tryLetter21_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter21);
		tryLetter21->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter21);
	}
	private: System::Void tryLetter22_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter22);
		tryLetter22->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter22);
	}
	private: System::Void tryLetter23_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter23);
		tryLetter23->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter23);
	}
	private: System::Void tryLetter24_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter24);
		tryLetter24->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter24);
	}
	private: System::Void tryLetter25_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter25);
		tryLetter25->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter25);
	}
	private: System::Void tryLetter26_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter26);
		tryLetter26->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter26);
	}
	private: System::Void tryLetter27_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter27);
		tryLetter27->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter27);
	}
	private: System::Void tryLetter28_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter28);
		tryLetter28->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter28);
	}
	private: System::Void tryLetter29_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter29);
		tryLetter29->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter29);
	}
	private: System::Void tryLetter30_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter30);
		tryLetter30->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter30);
	}
	private: System::Void tryLetter31_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter31);
		tryLetter31->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter31);
	}
	private: System::Void tryLetter32_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter32);
		tryLetter32->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter32);
	}
	private: System::Void tryLetter33_Click(System::Object^  sender, System::EventArgs^  e) {
		refreshBar();
		check(tryLetter33);
		tryLetter33->Enabled = false;
		alphabet->Enabled = false;
		spin->Enabled = true;
		nextPlayer(tryLetter33);
	}
#pragma endregion
			 //----//

	private: System::Void spin_Click(System::Object^  sender, System::EventArgs^  e) {
		
		try
		{
			alphabet->Enabled = true; //алфавит доступен
			srand(time(0));
			int playerScore = System::Convert::ToInt32(currentPlayer->Text);
			int sector = (rand() % 15);
			switch (sector)
			{
			case 0: {
				changeSectorColor(sector0);
				playerScore += System::Convert::ToInt32(sector0->Text);
				yakubovich->Text = sector0->Text + " очков на барабане! Буква?";
				yakubovichImage->Image = Image::FromFile("resources/yam3.png");
				break;
			}
			case 1: {
				changeSectorColor(sector100);
				playerScore += System::Convert::ToInt32(sector100->Text);
				yakubovich->Text = sector100->Text + " очков на барабане! Буква?";

				break;
			}
			case 2: {
				changeSectorColor(sector200);
				playerScore += System::Convert::ToInt32(sector200->Text);
				yakubovich->Text = sector200->Text + " очков на барабане! Буква?";
				break;
			}
			case 3: {
				changeSectorColor(sector300);
				playerScore += System::Convert::ToInt32(sector300->Text);
				yakubovich->Text = sector300->Text + " очков на барабане! Буква?";
				break;
			}
			case 4: {
				changeSectorColor(sector400);
				playerScore += System::Convert::ToInt32(sector400->Text);
				yakubovich->Text = sector400->Text + " очков на барабане! Буква?";
				break;
			}
			case 5: {
				changeSectorColor(sector500);
				playerScore += System::Convert::ToInt32(sector500->Text);
				yakubovich->Text = sector500->Text + " очков на барабане! Буква?";
				break;
			}
			case 6: {
				changeSectorColor(sector600);
				playerScore += System::Convert::ToInt32(sector600->Text);
				yakubovich->Text = sector600->Text + " очков на барабане! Буква?";
				break;
			}
			case 7: {
				changeSectorColor(sector700);
				playerScore += System::Convert::ToInt32(sector700->Text);
				yakubovich->Text = sector700->Text + " очков на барабане! Буква?";
				break;
			}
			case 8: {
				changeSectorColor(sector800);
				playerScore += System::Convert::ToInt32(sector800->Text);
				yakubovich->Text = sector800->Text + " очков на барабане! Буква?";
				break;
			}
			case 9: {
				changeSectorColor(sector900);
				playerScore += System::Convert::ToInt32(sector900->Text);
				yakubovich->Text = sector900->Text + " очков на барабане! Буква?";
				break;
			}
			case 10: {
				changeSectorColor(sectorX2);
				yakubovich->Text = "Ваши очки увеличиваются в два раза! \nНазывайте букву";
				yakubovichImage->Image = Image::FromFile("resources/yam7.png");
				playerScore *= 2;
				break;
			}
			case 11: {
				changeSectorColor(sectorX15);
				yakubovich->Text = "Ваши очки увеличиваются в полтора раза! \nНазывайте букву";
				yakubovichImage->Image = Image::FromFile("resources/yam7.png");
				playerScore *= 1.5;
				break;
			}
			case 12: {
				changeSectorColor(sectorX5);
				yakubovich->Text = "Ваши очки увеличиваются в пять раз!!! \nНазывайте букву";
				yakubovichImage->Image = Image::FromFile("resources/yam7.png");
				playerScore *= 5;
				break;
			}
			case 13: {
				changeSectorColor(sectorB);
				yakubovich->Text = "Увы. Сектор банкрот на барабане.";
				yakubovichImage->Image = Image::FromFile("resources/yam8.png");
				playerScore = 0;
				break;
			}
			case 14: {
				changeSectorColor(sectorPlus);
				yakubovich->Text = "Сектор Плюс на барабане. Вы крутите барабан еще раз!";
				yakubovichImage->Image = Image::FromFile("resources/yam2.png");
				extraTurn = true;
				break;
			}
			case 999: {
				changeSectorColor(sectorP);
				break;
			}

			default:
				break;
			}
			currentPlayer->Text = System::Convert::ToString(playerScore);
			spin->Enabled = false;
			
		}
		catch (Exception^ e)
		{

		}
		}
		
		
		

	private: System::Void select_Click(System::Object^  sender, System::EventArgs^  e) {
		tryLetter1->Enabled = true;
		tryLetter2->Enabled = true;
		tryLetter3->Enabled = true;
		tryLetter4->Enabled = true;
		tryLetter5->Enabled = true;
		tryLetter6->Enabled = true;
		tryLetter7->Enabled = true;
		tryLetter8->Enabled = true;
		tryLetter9->Enabled = true;
		tryLetter10->Enabled = true;
		tryLetter11->Enabled = true;
		tryLetter12->Enabled = true;
		tryLetter13->Enabled = true;
		tryLetter14->Enabled = true;
		tryLetter15->Enabled = true;
		tryLetter16->Enabled = true;
		tryLetter17->Enabled = true;
		tryLetter18->Enabled = true;
		tryLetter19->Enabled = true;
		tryLetter20->Enabled = true;
		tryLetter21->Enabled = true;
		tryLetter22->Enabled = true;
		tryLetter23->Enabled = true;
		tryLetter24->Enabled = true;
		tryLetter25->Enabled = true;
		tryLetter26->Enabled = true;
		tryLetter27->Enabled = true;
		tryLetter28->Enabled = true;
		tryLetter29->Enabled = true;
		tryLetter30->Enabled = true;
		tryLetter31->Enabled = true;
		tryLetter32->Enabled = true;
		tryLetter33->Enabled = true;
		
		try
		{
			for each (Label^ a in word)
			{
				a->Visible = false;
			}
			currentWord = arrayOfWords[System::Convert::ToInt32(numOfWord->Text)];
			question->Text = arrayOfQuestions[System::Convert::ToInt32(numOfWord->Text)];

			for (int i = 0; i < currentWord->Length+10; i++)
			{
				this->Controls->Remove(word[i]); //удалил из коллекции элементов управления все предыдущие надписи
				this->Controls->Remove(bgWord[i]);
			}
		}
		catch (Exception^ e)
		{

		}
		
		refresh();
	}
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			tbChP1->Visible = true;
			tbChP2->Visible = true;
			tbChP3->Visible = true;
			tbChPS1->Visible = true;
			tbChPS2->Visible = true;
			tbChPS3->Visible = true;
			labelP1->Visible = true;
			labelP2->Visible = true;
			labelP3->Visible = true;
			labelS->Visible = true;
			button2->Visible = true;

			tbChP1->Text = labelPlayer1->Text;
			tbChP2->Text = labelPlayer2->Text;
			tbChP3->Text = labelPlayer3->Text;
			tbChPS1->Text = labelPlayerScore1->Text;
			tbChPS2->Text = labelPlayerScore2->Text;
			tbChPS3->Text = labelPlayerScore3->Text;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		labelPlayer1->Text = tbChP1->Text;
		labelPlayer2->Text = tbChP2->Text;
		labelPlayer3->Text = tbChP3->Text;
		labelPlayerScore1->Text = tbChPS1->Text;
		labelPlayerScore2->Text = tbChPS2->Text;
		labelPlayerScore3->Text = tbChPS3->Text;

		tbChP1->Visible = false;
		tbChP2->Visible = false;
		tbChP3->Visible = false;
		tbChPS1->Visible = false;
		tbChPS2->Visible = false;
		tbChPS3->Visible = false;
		labelP1->Visible = false;
		labelP2->Visible = false;
		labelP3->Visible = false;
		labelS->Visible = false;
		button2->Visible = false;
	}
};
}
