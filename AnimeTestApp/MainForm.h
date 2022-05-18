#pragma once
#include "Question.h"
#include "RandomQuestionsSequenseGenerator.h"

#include "CommonTest.h"
#include "NarutoTest.h"
#include "OnePieceTest.h"

namespace AnimeTestApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::Label^ labelTest;
	protected:


	private: System::Windows::Forms::Button^ settingsButton;

	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::Button^ selectModeButton;
	private: System::Windows::Forms::Label^ labelQuestionCondition;
	private: System::Windows::Forms::PictureBox^ pictureBoxTestImage;

	private: System::Windows::Forms::Label^ labelAnswer1;
	private: System::Windows::Forms::Label^ labelAnswer2;
	private: System::Windows::Forms::Label^ labelAnswer3;
	private: System::Windows::Forms::Label^ labelAnswer4;
	private: System::Windows::Forms::Button^ answerButton;
	private: System::Windows::Forms::PictureBox^ pictureBoxTimer;
	private: System::Windows::Forms::Timer^ answerTimer;
	private: System::Windows::Forms::Button^ toStartButton;
	private: System::Windows::Forms::PictureBox^ pictureBoxSettings;

	private: System::Windows::Forms::PictureBox^ pictureBoxToPrevious;
	private: System::Windows::Forms::PictureBox^ pictureBoxToNext;
	private: System::Windows::Forms::Button^ applyButton;
	private: System::Windows::Forms::Button^ selectPhoneButton;
	private: System::Windows::Forms::Button^ toMenuButton;




	private: System::ComponentModel::IContainer^ components;







	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->labelTest = (gcnew System::Windows::Forms::Label());
			this->settingsButton = (gcnew System::Windows::Forms::Button());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->selectModeButton = (gcnew System::Windows::Forms::Button());
			this->labelQuestionCondition = (gcnew System::Windows::Forms::Label());
			this->pictureBoxTestImage = (gcnew System::Windows::Forms::PictureBox());
			this->labelAnswer1 = (gcnew System::Windows::Forms::Label());
			this->labelAnswer2 = (gcnew System::Windows::Forms::Label());
			this->labelAnswer3 = (gcnew System::Windows::Forms::Label());
			this->labelAnswer4 = (gcnew System::Windows::Forms::Label());
			this->answerButton = (gcnew System::Windows::Forms::Button());
			this->pictureBoxTimer = (gcnew System::Windows::Forms::PictureBox());
			this->answerTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->toStartButton = (gcnew System::Windows::Forms::Button());
			this->pictureBoxSettings = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxToPrevious = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxToNext = (gcnew System::Windows::Forms::PictureBox());
			this->applyButton = (gcnew System::Windows::Forms::Button());
			this->selectPhoneButton = (gcnew System::Windows::Forms::Button());
			this->toMenuButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTestImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTimer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSettings))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxToPrevious))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxToNext))->BeginInit();
			this->SuspendLayout();
			// 
			// exitButton
			// 
			this->exitButton->BackColor = System::Drawing::Color::Transparent;
			this->exitButton->FlatAppearance->BorderSize = 0;
			this->exitButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->exitButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Firebrick;
			this->exitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitButton->Font = (gcnew System::Drawing::Font(L"News706 BT", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitButton->ForeColor = System::Drawing::Color::White;
			this->exitButton->Location = System::Drawing::Point(171, 690);
			this->exitButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(300, 100);
			this->exitButton->TabIndex = 0;
			this->exitButton->Text = L"EXIT";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &MainForm::exitButton_Click);
			this->exitButton->MouseLeave += gcnew System::EventHandler(this, &MainForm::exitButton_MouseLeave);
			this->exitButton->MouseHover += gcnew System::EventHandler(this, &MainForm::exitButton_MouseHover);
			// 
			// labelTest
			// 
			this->labelTest->BackColor = System::Drawing::Color::Black;
			this->labelTest->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelTest->Location = System::Drawing::Point(277, 108);
			this->labelTest->Name = L"labelTest";
			this->labelTest->Size = System::Drawing::Size(1485, 864);
			this->labelTest->TabIndex = 1;
			this->labelTest->Visible = false;
			// 
			// settingsButton
			// 
			this->settingsButton->BackColor = System::Drawing::Color::Transparent;
			this->settingsButton->FlatAppearance->BorderSize = 0;
			this->settingsButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->settingsButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Firebrick;
			this->settingsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->settingsButton->Font = (gcnew System::Drawing::Font(L"News706 BT", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->settingsButton->ForeColor = System::Drawing::Color::White;
			this->settingsButton->Location = System::Drawing::Point(95, 490);
			this->settingsButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->settingsButton->Name = L"settingsButton";
			this->settingsButton->Size = System::Drawing::Size(451, 100);
			this->settingsButton->TabIndex = 2;
			this->settingsButton->Text = L"SETTINGS";
			this->settingsButton->UseVisualStyleBackColor = false;
			this->settingsButton->Click += gcnew System::EventHandler(this, &MainForm::settingsButton_Click);
			this->settingsButton->MouseLeave += gcnew System::EventHandler(this, &MainForm::settingsButton_MouseLeave);
			this->settingsButton->MouseHover += gcnew System::EventHandler(this, &MainForm::settingsButton_MouseHover);
			// 
			// startButton
			// 
			this->startButton->BackColor = System::Drawing::Color::Transparent;
			this->startButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->startButton->FlatAppearance->BorderSize = 0;
			this->startButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->startButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Firebrick;
			this->startButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->startButton->Font = (gcnew System::Drawing::Font(L"News706 BT", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startButton->ForeColor = System::Drawing::Color::White;
			this->startButton->Location = System::Drawing::Point(160, 390);
			this->startButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(320, 100);
			this->startButton->TabIndex = 3;
			this->startButton->Text = L"START";
			this->startButton->UseVisualStyleBackColor = false;
			this->startButton->Click += gcnew System::EventHandler(this, &MainForm::startButton_Click);
			this->startButton->MouseLeave += gcnew System::EventHandler(this, &MainForm::startButton_MouseLeave);
			this->startButton->MouseHover += gcnew System::EventHandler(this, &MainForm::startButton_MouseHover);
			// 
			// selectModeButton
			// 
			this->selectModeButton->BackColor = System::Drawing::Color::Transparent;
			this->selectModeButton->FlatAppearance->BorderSize = 0;
			this->selectModeButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->selectModeButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Firebrick;
			this->selectModeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->selectModeButton->Font = (gcnew System::Drawing::Font(L"News706 BT", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->selectModeButton->ForeColor = System::Drawing::Color::White;
			this->selectModeButton->Location = System::Drawing::Point(20, 590);
			this->selectModeButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->selectModeButton->Name = L"selectModeButton";
			this->selectModeButton->Size = System::Drawing::Size(600, 100);
			this->selectModeButton->TabIndex = 4;
			this->selectModeButton->Text = L"SELECT MODE";
			this->selectModeButton->UseVisualStyleBackColor = false;
			this->selectModeButton->Click += gcnew System::EventHandler(this, &MainForm::selectModeButton_Click);
			this->selectModeButton->MouseLeave += gcnew System::EventHandler(this, &MainForm::selectModeButton_MouseLeave);
			this->selectModeButton->MouseHover += gcnew System::EventHandler(this, &MainForm::selectModeButton_MouseHover);
			// 
			// labelQuestionCondition
			// 
			this->labelQuestionCondition->BackColor = System::Drawing::Color::Black;
			this->labelQuestionCondition->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelQuestionCondition->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelQuestionCondition->ForeColor = System::Drawing::Color::White;
			this->labelQuestionCondition->Location = System::Drawing::Point(380, 180);
			this->labelQuestionCondition->Name = L"labelQuestionCondition";
			this->labelQuestionCondition->Size = System::Drawing::Size(1280, 108);
			this->labelQuestionCondition->TabIndex = 5;
			this->labelQuestionCondition->Text = L"1. Кто является отцом Портгаса Д. Эйса";
			this->labelQuestionCondition->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelQuestionCondition->Visible = false;
			// 
			// pictureBoxTestImage
			// 
			this->pictureBoxTestImage->BackColor = System::Drawing::Color::Black;
			this->pictureBoxTestImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxTestImage->Location = System::Drawing::Point(380, 342);
			this->pictureBoxTestImage->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxTestImage->Name = L"pictureBoxTestImage";
			this->pictureBoxTestImage->Size = System::Drawing::Size(780, 414);
			this->pictureBoxTestImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxTestImage->TabIndex = 6;
			this->pictureBoxTestImage->TabStop = false;
			this->pictureBoxTestImage->Visible = false;
			// 
			// labelAnswer1
			// 
			this->labelAnswer1->BackColor = System::Drawing::Color::Black;
			this->labelAnswer1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelAnswer1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelAnswer1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAnswer1->ForeColor = System::Drawing::Color::White;
			this->labelAnswer1->Location = System::Drawing::Point(1220, 342);
			this->labelAnswer1->Name = L"labelAnswer1";
			this->labelAnswer1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->labelAnswer1->Size = System::Drawing::Size(440, 93);
			this->labelAnswer1->TabIndex = 7;
			this->labelAnswer1->Text = L"label1";
			this->labelAnswer1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelAnswer1->Visible = false;
			this->labelAnswer1->Click += gcnew System::EventHandler(this, &MainForm::labelAnswer1_Click);
			// 
			// labelAnswer2
			// 
			this->labelAnswer2->BackColor = System::Drawing::Color::Black;
			this->labelAnswer2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelAnswer2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelAnswer2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAnswer2->ForeColor = System::Drawing::Color::White;
			this->labelAnswer2->Location = System::Drawing::Point(1220, 449);
			this->labelAnswer2->Name = L"labelAnswer2";
			this->labelAnswer2->Size = System::Drawing::Size(440, 93);
			this->labelAnswer2->TabIndex = 8;
			this->labelAnswer2->Text = L"label1";
			this->labelAnswer2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelAnswer2->Visible = false;
			this->labelAnswer2->Click += gcnew System::EventHandler(this, &MainForm::labelAnswer2_Click);
			// 
			// labelAnswer3
			// 
			this->labelAnswer3->BackColor = System::Drawing::Color::Black;
			this->labelAnswer3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelAnswer3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelAnswer3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAnswer3->ForeColor = System::Drawing::Color::White;
			this->labelAnswer3->Location = System::Drawing::Point(1220, 556);
			this->labelAnswer3->Name = L"labelAnswer3";
			this->labelAnswer3->Size = System::Drawing::Size(440, 93);
			this->labelAnswer3->TabIndex = 9;
			this->labelAnswer3->Text = L"label1";
			this->labelAnswer3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelAnswer3->Visible = false;
			this->labelAnswer3->Click += gcnew System::EventHandler(this, &MainForm::labelAnswer3_Click);
			// 
			// labelAnswer4
			// 
			this->labelAnswer4->BackColor = System::Drawing::Color::Black;
			this->labelAnswer4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelAnswer4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelAnswer4->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAnswer4->ForeColor = System::Drawing::Color::White;
			this->labelAnswer4->Location = System::Drawing::Point(1220, 663);
			this->labelAnswer4->Name = L"labelAnswer4";
			this->labelAnswer4->Size = System::Drawing::Size(440, 93);
			this->labelAnswer4->TabIndex = 10;
			this->labelAnswer4->Text = L"label1";
			this->labelAnswer4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelAnswer4->Visible = false;
			this->labelAnswer4->Click += gcnew System::EventHandler(this, &MainForm::labelAnswer4_Click);
			// 
			// answerButton
			// 
			this->answerButton->BackColor = System::Drawing::Color::Black;
			this->answerButton->FlatAppearance->BorderSize = 2;
			this->answerButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->answerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->answerButton->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 28.2F, System::Drawing::FontStyle::Bold));
			this->answerButton->ForeColor = System::Drawing::Color::White;
			this->answerButton->Location = System::Drawing::Point(875, 820);
			this->answerButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->answerButton->Name = L"answerButton";
			this->answerButton->Size = System::Drawing::Size(288, 108);
			this->answerButton->TabIndex = 11;
			this->answerButton->Text = L"Ответить";
			this->answerButton->UseVisualStyleBackColor = false;
			this->answerButton->Visible = false;
			this->answerButton->Click += gcnew System::EventHandler(this, &MainForm::answerButton_Click);
			// 
			// pictureBoxTimer
			// 
			this->pictureBoxTimer->BackColor = System::Drawing::Color::Black;
			this->pictureBoxTimer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBoxTimer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTimer.Image")));
			this->pictureBoxTimer->Location = System::Drawing::Point(1500, 794);
			this->pictureBoxTimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxTimer->Name = L"pictureBoxTimer";
			this->pictureBoxTimer->Size = System::Drawing::Size(160, 160);
			this->pictureBoxTimer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxTimer->TabIndex = 12;
			this->pictureBoxTimer->TabStop = false;
			this->pictureBoxTimer->Visible = false;
			// 
			// answerTimer
			// 
			this->answerTimer->Interval = 1000;
			this->answerTimer->Tick += gcnew System::EventHandler(this, &MainForm::answerTimer_Tick);
			// 
			// toStartButton
			// 
			this->toStartButton->BackColor = System::Drawing::Color::Black;
			this->toStartButton->FlatAppearance->BorderSize = 2;
			this->toStartButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->toStartButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->toStartButton->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toStartButton->ForeColor = System::Drawing::Color::White;
			this->toStartButton->Location = System::Drawing::Point(875, 820);
			this->toStartButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->toStartButton->Name = L"toStartButton";
			this->toStartButton->Size = System::Drawing::Size(288, 108);
			this->toStartButton->TabIndex = 13;
			this->toStartButton->Text = L"На главную";
			this->toStartButton->UseVisualStyleBackColor = false;
			this->toStartButton->Visible = false;
			this->toStartButton->Click += gcnew System::EventHandler(this, &MainForm::toStartButton_Click);
			// 
			// pictureBoxSettings
			// 
			this->pictureBoxSettings->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxSettings->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxSettings->Location = System::Drawing::Point(350, 108);
			this->pictureBoxSettings->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxSettings->Name = L"pictureBoxSettings";
			this->pictureBoxSettings->Size = System::Drawing::Size(1360, 710);
			this->pictureBoxSettings->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxSettings->TabIndex = 14;
			this->pictureBoxSettings->TabStop = false;
			this->pictureBoxSettings->Visible = false;
			// 
			// pictureBoxToPrevious
			// 
			this->pictureBoxToPrevious->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxToPrevious->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBoxToPrevious->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxToPrevious.Image")));
			this->pictureBoxToPrevious->Location = System::Drawing::Point(100, 368);
			this->pictureBoxToPrevious->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxToPrevious->Name = L"pictureBoxToPrevious";
			this->pictureBoxToPrevious->Size = System::Drawing::Size(210, 210);
			this->pictureBoxToPrevious->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxToPrevious->TabIndex = 15;
			this->pictureBoxToPrevious->TabStop = false;
			this->pictureBoxToPrevious->Visible = false;
			this->pictureBoxToPrevious->Click += gcnew System::EventHandler(this, &MainForm::pictureBoxToPrevious_Click);
			this->pictureBoxToPrevious->MouseLeave += gcnew System::EventHandler(this, &MainForm::pictureBoxToPrevious_MouseLeave);
			this->pictureBoxToPrevious->MouseHover += gcnew System::EventHandler(this, &MainForm::pictureBoxToPrevious_MouseHover);
			// 
			// pictureBoxToNext
			// 
			this->pictureBoxToNext->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxToNext->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBoxToNext->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxToNext.Image")));
			this->pictureBoxToNext->Location = System::Drawing::Point(1750, 368);
			this->pictureBoxToNext->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxToNext->Name = L"pictureBoxToNext";
			this->pictureBoxToNext->Size = System::Drawing::Size(210, 210);
			this->pictureBoxToNext->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxToNext->TabIndex = 16;
			this->pictureBoxToNext->TabStop = false;
			this->pictureBoxToNext->Visible = false;
			this->pictureBoxToNext->Click += gcnew System::EventHandler(this, &MainForm::pictureBoxToNext_Click);
			this->pictureBoxToNext->MouseLeave += gcnew System::EventHandler(this, &MainForm::pictureBoxToNext_MouseLeave);
			this->pictureBoxToNext->MouseHover += gcnew System::EventHandler(this, &MainForm::pictureBoxToNext_MouseHover);
			// 
			// applyButton
			// 
			this->applyButton->BackColor = System::Drawing::Color::Black;
			this->applyButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->applyButton->FlatAppearance->BorderSize = 2;
			this->applyButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->applyButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->applyButton->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->applyButton->ForeColor = System::Drawing::Color::White;
			this->applyButton->Location = System::Drawing::Point(875, 864);
			this->applyButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->applyButton->Name = L"applyButton";
			this->applyButton->Size = System::Drawing::Size(288, 108);
			this->applyButton->TabIndex = 17;
			this->applyButton->Text = L"Применить";
			this->applyButton->UseVisualStyleBackColor = false;
			this->applyButton->Visible = false;
			this->applyButton->Click += gcnew System::EventHandler(this, &MainForm::applyButton_Click);
			// 
			// selectPhoneButton
			// 
			this->selectPhoneButton->BackColor = System::Drawing::Color::Transparent;
			this->selectPhoneButton->FlatAppearance->BorderSize = 0;
			this->selectPhoneButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->selectPhoneButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Firebrick;
			this->selectPhoneButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->selectPhoneButton->Font = (gcnew System::Drawing::Font(L"News706 BT", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->selectPhoneButton->ForeColor = System::Drawing::Color::White;
			this->selectPhoneButton->Location = System::Drawing::Point(20, 486);
			this->selectPhoneButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->selectPhoneButton->Name = L"selectPhoneButton";
			this->selectPhoneButton->Size = System::Drawing::Size(600, 100);
			this->selectPhoneButton->TabIndex = 18;
			this->selectPhoneButton->Text = L"SELECT PHONE";
			this->selectPhoneButton->UseVisualStyleBackColor = false;
			this->selectPhoneButton->Visible = false;
			this->selectPhoneButton->Click += gcnew System::EventHandler(this, &MainForm::selectPhoneButton_Click);
			// 
			// toMenuButton
			// 
			this->toMenuButton->BackColor = System::Drawing::Color::Transparent;
			this->toMenuButton->FlatAppearance->BorderSize = 0;
			this->toMenuButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->toMenuButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Firebrick;
			this->toMenuButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->toMenuButton->Font = (gcnew System::Drawing::Font(L"News706 BT", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toMenuButton->ForeColor = System::Drawing::Color::White;
			this->toMenuButton->Location = System::Drawing::Point(171, 690);
			this->toMenuButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->toMenuButton->Name = L"toMenuButton";
			this->toMenuButton->Size = System::Drawing::Size(300, 100);
			this->toMenuButton->TabIndex = 19;
			this->toMenuButton->Text = L"MENU";
			this->toMenuButton->UseVisualStyleBackColor = false;
			this->toMenuButton->Visible = false;
			this->toMenuButton->Click += gcnew System::EventHandler(this, &MainForm::toMenuButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1940, 1100);
			this->Controls->Add(this->toMenuButton);
			this->Controls->Add(this->selectPhoneButton);
			this->Controls->Add(this->applyButton);
			this->Controls->Add(this->pictureBoxToNext);
			this->Controls->Add(this->pictureBoxToPrevious);
			this->Controls->Add(this->toStartButton);
			this->Controls->Add(this->pictureBoxTimer);
			this->Controls->Add(this->answerButton);
			this->Controls->Add(this->labelAnswer4);
			this->Controls->Add(this->labelAnswer3);
			this->Controls->Add(this->labelAnswer2);
			this->Controls->Add(this->labelAnswer1);
			this->Controls->Add(this->pictureBoxTestImage);
			this->Controls->Add(this->labelQuestionCondition);
			this->Controls->Add(this->selectModeButton);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->settingsButton);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->labelTest);
			this->Controls->Add(this->pictureBoxSettings);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"MainForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTestImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTimer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSettings))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxToPrevious))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxToNext))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int  numberOfQuestion = 0;
		int rightAnswer;
		int timeToAnswer = 10;
		int actionTimeToAnswer = timeToAnswer;
		int countOfRightAnswers = 0;

		int mode = 1;
		const int COUNT_OF_MODES = 3;

		int actionBackGround = 6;
		const int COUNT_OF_BACKROUND_IMAGES = 10;

		int actionSetting = 1;
		const int COUNT_OF_SETTINGS = 2;

		String^ questionCondition;
		String^ answer1;
		String^ answer2;
		String^ answer3;
		String^ answer4;
		String^ wayToImage;



		String^ wayToTimerImages = "data/images/timerImages/";

		RandomQuestionsSequenseGenerator^ generator = gcnew RandomQuestionsSequenseGenerator();

		//exitButton

	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void exitButton_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->exitButton->Font = (gcnew System::Drawing::Font(L"News706 BT", 38, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
	private: System::Void exitButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->exitButton->Font = (gcnew System::Drawing::Font(L"News706 BT", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}

	//settingsButton

	private: System::Void settingsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideStartMenu();
		showSettingsMenu();
	}
	private: System::Void settingsButton_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->settingsButton->Font = (gcnew System::Drawing::Font(L"News706 BT", 38, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
	private: System::Void settingsButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->settingsButton->Font = (gcnew System::Drawing::Font(L"News706 BT", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}

	//startButton

	private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideStartMenu();
		showTestMenu();

		changeForeColor();

		generator->changeSequence();
		showNextTask();
	}
	private: System::Void startButton_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->startButton->Font = (gcnew System::Drawing::Font(L"News706 BT", 38, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
	private: System::Void startButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->startButton->Font = (gcnew System::Drawing::Font(L"News706 BT", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}

	//selectModeButton

	private: System::Void selectModeButton_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->selectModeButton->Font = (gcnew System::Drawing::Font(L"News706 BT", 38, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
	private: System::Void selectModeButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->selectModeButton->Font = (gcnew System::Drawing::Font(L"News706 BT", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}

	//answerButton

	private: System::Void answerButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (answerTimer->Enabled) {
			actionTimeToAnswer = timeToAnswer;
			checkRightAnswer(rightAnswer);
			answerTimer->Enabled = false;
			answerButton->Text = "Далее";
			pictureBoxTimer->Image = Image::FromFile(wayToTimerImages + "0.png");

		}
		else {
			showNextTask();
		}
	}

	//timer1

	private: System::Void answerTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
		actionTimeToAnswer--;
		pictureBoxTimer->Image = Image::FromFile(wayToTimerImages + Convert::ToString(actionTimeToAnswer) + ".png");
		if (actionTimeToAnswer == 0) {
			actionTimeToAnswer = timeToAnswer;
			checkRightAnswer(rightAnswer);
			answerTimer->Enabled = false;
			answerButton->Text = "Далее";
		}
	}

	//labelAnswers

	private: System::Void labelAnswer1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (answerTimer->Enabled) {
			labelAnswer1->BackColor = System::Drawing::Color::DarkGoldenrod;
			labelAnswer2->BackColor = this->BackColor;
			labelAnswer3->BackColor = this->BackColor;
			labelAnswer4->BackColor = this->BackColor;
		}
	}
	private: System::Void labelAnswer2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (answerTimer->Enabled) {
			labelAnswer2->BackColor = System::Drawing::Color::DarkGoldenrod;
			labelAnswer1->BackColor = this->BackColor;
			labelAnswer3->BackColor = this->BackColor;
			labelAnswer4->BackColor = this->BackColor;
		}
	}
	private: System::Void labelAnswer3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (answerTimer->Enabled) {
			labelAnswer3->BackColor = System::Drawing::Color::DarkGoldenrod;
			labelAnswer1->BackColor = this->BackColor;
			labelAnswer2->BackColor = this->BackColor;
			labelAnswer4->BackColor = this->BackColor;
		}
	}
	private: System::Void labelAnswer4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (answerTimer->Enabled) {
			labelAnswer4->BackColor = System::Drawing::Color::DarkGoldenrod;
			labelAnswer1->BackColor = this->BackColor;
			labelAnswer2->BackColor = this->BackColor;
			labelAnswer3->BackColor = this->BackColor;
		}
	}

	//toStartButton

	private: System::Void toStartButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideTestMenu();
		showStartMenu();
		resetToStartValues();
	}

	//selectModeButton

	private: System::Void selectModeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideStartMenu();
		showSelectImageWindow();
		actionSetting = 1;
		pictureBoxSettings->Image = Image::FromFile("data/images/modes/" + Convert::ToString(mode) + ".jpg");
	}

	//applyButton

	private: System::Void applyButton_Click(System::Object^ sender, System::EventArgs^ e) {
		hideSelectImageWindow();
		showStartMenu();
		if (actionSetting == 2) {
			this->BackgroundImage = Image::FromFile("data/images/menu/" + Convert::ToString(actionBackGround) + ".jpg");
		}
	}

	//pictureBoxToNext

	private: System::Void pictureBoxToNext_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (actionSetting) {
		case 1: {//change mode
			if (mode == COUNT_OF_MODES) {
				mode = 1;
			}
			else {
				mode++;
			}
			pictureBoxSettings->Image = Image::FromFile("data/images/modes/" + Convert::ToString(mode) + ".jpg");
			break;
		}
		case 2: {
			if (actionBackGround == COUNT_OF_BACKROUND_IMAGES) {
				actionBackGround = 1;
			}
			else {
				actionBackGround++;
			}
			pictureBoxSettings->Image = Image::FromFile("data/images/menu/" + Convert::ToString(actionBackGround) + ".jpg");
			break;
		}
		}
		
	}
	private: System::Void pictureBoxToNext_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		pictureBoxToNext->Image = Image::FromFile("data/images/buttons/right_bw.png");
	}
	private: System::Void pictureBoxToNext_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		pictureBoxToNext->Image = Image::FromFile("data/images/buttons/right_black.png");
	}

    //pictureBoxToNext


	private: System::Void pictureBoxToPrevious_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (actionSetting) {
		case 1: {//change mode
			if (mode == 1) {
				mode = COUNT_OF_MODES;
			}
			else {
				mode--;
			}
			pictureBoxSettings->Image = Image::FromFile("data/images/modes/" + Convert::ToString(mode) + ".jpg");
			break;
		}
		case 2: {
			if (actionBackGround == 1) {
				actionBackGround = COUNT_OF_BACKROUND_IMAGES;
			}
			else {
				actionBackGround--;
			}
			pictureBoxSettings->Image = Image::FromFile("data/images/menu/" + Convert::ToString(actionBackGround) + ".jpg");
			break;
		}
		}
		}
	private: System::Void pictureBoxToPrevious_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		pictureBoxToPrevious->Image = Image::FromFile("data/images/buttons/left_bw.png");
	}
	private: System::Void pictureBoxToPrevious_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		pictureBoxToPrevious->Image = Image::FromFile("data/images/buttons/left_black.png");
	}

	//functionsLibrary

	public:
		void createQuestion(Question^ question) {
			if (numberOfQuestion == 11) {
				labelQuestionCondition->Text = (question)->getQuestionCondition();
				resetBackColors();

				pictureBoxTimer->Visible = false;
				answerButton->Visible = false;
				toStartButton->Visible = true;

				labelAnswer1->ForeColor = System::Drawing::Color::LimeGreen;
				labelAnswer2->ForeColor = System::Drawing::Color::Gold;
				labelAnswer3->ForeColor = System::Drawing::Color::Orange;
				labelAnswer4->ForeColor = System::Drawing::Color::Red;

				if (countOfRightAnswers > 8) {
					labelQuestionCondition->ForeColor = System::Drawing::Color::LimeGreen;
				}
				else if (countOfRightAnswers > 5) {
					labelQuestionCondition->ForeColor = System::Drawing::Color::Gold;
				}
				else if (countOfRightAnswers > 2) {
					labelQuestionCondition->ForeColor = System::Drawing::Color::Orange;
				}
				else {
					labelQuestionCondition->ForeColor = System::Drawing::Color::Red;
				}
			}
			else {

				pictureBoxTimer->Image = Image::FromFile(wayToTimerImages + "10.png");
				answerButton->Text = "Ответить";

				resetBackColors();

				answerTimer->Enabled = true;
				labelQuestionCondition->Text = Convert::ToString(numberOfQuestion) + (question)->getQuestionCondition();
			}
			labelAnswer1->Text = (question)->getAnswer1();
			labelAnswer2->Text = (question)->getAnswer2();
			labelAnswer3->Text = (question)->getAnswer3();
			labelAnswer4->Text = (question)->getAnswer4();
			rightAnswer = (question)->getRightAnswer();

			pictureBoxTestImage->Image = Image::FromFile((question)->getImage());
			this->BackgroundImage = Image::FromFile((question)->getImage());
		}
		void checkRightAnswer(int rightAnswer) {
			switch (rightAnswer)
			{
			case 1:
			{
				if (labelAnswer1->BackColor == System::Drawing::Color::DarkGoldenrod) {
					countOfRightAnswers++;
				}
				labelAnswer1->BackColor = System::Drawing::Color::LimeGreen;
				break;
			}
			case 2: {
				if (labelAnswer2->BackColor == System::Drawing::Color::DarkGoldenrod) {
					countOfRightAnswers++;
				}
				labelAnswer2->BackColor = System::Drawing::Color::LimeGreen;
				break;
			}
			case 3: {
				if (labelAnswer3->BackColor == System::Drawing::Color::DarkGoldenrod) {
					countOfRightAnswers++;
				}
				labelAnswer3->BackColor = System::Drawing::Color::LimeGreen;
				break;
			}
			case 4: {
				if (labelAnswer4->BackColor == System::Drawing::Color::DarkGoldenrod) {
					countOfRightAnswers++;
				}
				labelAnswer4->BackColor = System::Drawing::Color::LimeGreen;
				break;
			}
			default: {
				break;
			}
			}
		}

		void resetBackColors() {
			labelAnswer4->BackColor = this->BackColor;
			labelAnswer1->BackColor = this->BackColor;
			labelAnswer2->BackColor = this->BackColor;
			labelAnswer3->BackColor = this->BackColor;
		}

		void hideStartMenu() {
			startButton->Visible = false;
			settingsButton->Visible = false;
			selectModeButton->Visible = false;
			exitButton->Visible = false;
		}
		void showStartMenu() {
			startButton->Visible = true;
			settingsButton->Visible = true;
			selectModeButton->Visible = true;
			exitButton->Visible = true;
		}

		void hideTestMenu() {
			labelTest->Visible = false;
			labelQuestionCondition->Visible = false;
			labelAnswer1->Visible = false;
			labelAnswer2->Visible = false;
			labelAnswer3->Visible = false;
			labelAnswer4->Visible = false;
			pictureBoxTestImage->Visible = false;
			toStartButton->Visible = false;
		}
		void showTestMenu() {
			labelTest->Visible = true;
			labelQuestionCondition->Visible = true;
			labelAnswer1->Visible = true;
			labelAnswer2->Visible = true;
			labelAnswer3->Visible = true;
			labelAnswer4->Visible = true;
			pictureBoxTestImage->Visible = true;
			answerButton->Visible = true;
			pictureBoxTimer->Visible = true;
		}

		void hideSelectImageWindow() {
			applyButton->Visible = false;
			pictureBoxSettings->Visible = false;
			pictureBoxToNext->Visible = false;
			pictureBoxToPrevious->Visible = false;
		}

		void showSelectImageWindow() {
			applyButton->Visible = true;
			pictureBoxSettings->Visible = true;
			pictureBoxToNext->Visible = true;
			pictureBoxToPrevious->Visible = true;
		}

		void hideSettingsMenu() {
			toMenuButton->Visible = false;
			selectPhoneButton->Visible = false;
		}
	
		void showSettingsMenu() {
			toMenuButton->Visible = true;
			selectPhoneButton->Visible = true;
		}

		void resetToStartValues() {
			numberOfQuestion = 0;
			countOfRightAnswers = 0;

			this->BackgroundImage = Image::FromFile("data/images/menu/"+Convert::ToString(actionBackGround)+".jpg");
		}



		void showNextTask() {
			Question^ question;
			int actionNumberOfQuestion = numberOfQuestion++;
			int actionIndex = generator->getSequenceMember(&actionNumberOfQuestion);
			int actionRightAnswersCounter = countOfRightAnswers;
			switch (mode) {
			case 1: {
				question = updateCommonQuestion(&actionIndex, &actionRightAnswersCounter);

				break;
			}
			case 2: {
				question = updateNarutoQuestion(&actionIndex, &actionRightAnswersCounter);
				break;
			}
			case 3: {
				question = updateOnePieceQuestion(&actionIndex, &actionRightAnswersCounter);
				break;
			}
			}
			createQuestion(question);
			delete question;
		}

		void changeForeColor() {
			startButton->ForeColor = this->ForeColor;
			settingsButton->ForeColor = this->ForeColor;
			selectModeButton->ForeColor = this->ForeColor;
			exitButton->ForeColor = this->ForeColor;
			answerButton->ForeColor = this->ForeColor;
			toStartButton->ForeColor = this->ForeColor;
			
			labelQuestionCondition->ForeColor = this->ForeColor;
			labelAnswer1->ForeColor = this->ForeColor;
			labelAnswer2->ForeColor = this->ForeColor;
			labelAnswer3->ForeColor = this->ForeColor;
			labelAnswer4->ForeColor = this->ForeColor;
		}

		void changeBackColor() {
			answerButton->BackColor = this->BackColor;
			toStartButton->BackColor = this->BackColor;

			labelQuestionCondition->BackColor = this->BackColor;
			labelAnswer1->BackColor = this->BackColor;
			labelAnswer2->BackColor = this->BackColor;
			labelAnswer3->BackColor = this->BackColor;
			labelAnswer4->BackColor = this->BackColor;
		}

		void dispose() {

		}

private: System::Void selectPhoneButton_Click(System::Object^ sender, System::EventArgs^ e) {
	actionSetting = 2;
	hideSettingsMenu();
	showSelectImageWindow();
	pictureBoxSettings->Image = Image::FromFile("data/images/menu/" + Convert::ToString(actionBackGround) + ".jpg");
}
private: System::Void toMenuButton_Click(System::Object^ sender, System::EventArgs^ e) {
	hideSettingsMenu();
	showStartMenu();
}
};
}