#pragma once
#include "About.h"
#include <msclr\marshal_cppstd.h>
#include "CalculateInfix_Solution.h"

using namespace msclr::interop;

namespace ProjectOOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ textMath;
	private: System::Windows::Forms::Button^ btn_solve;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ ans;
	private: System::Windows::Forms::Button^ btn_clear;
	private: System::Windows::Forms::Button^ btn_Infix_Postfix;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::RichTextBox^ string_postfix;
	private: System::Windows::Forms::RichTextBox^ handling;
	private: System::Windows::Forms::PictureBox^ pictureBox35;
	private: System::Windows::Forms::PictureBox^ pictureBox36;
	private: System::Windows::Forms::PictureBox^ pictureBox37;
	private: System::Windows::Forms::PictureBox^ pictureBox38;
	private: System::Windows::Forms::PictureBox^ pictureBox39;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ btn_e;
	private: System::Windows::Forms::Button^ btn_sqrt;
	private: System::Windows::Forms::Button^ btn_log;
	private: System::Windows::Forms::Button^ btn_exp;
	private: System::Windows::Forms::Button^ btn_gt;
	private: System::Windows::Forms::Button^ btn_cbrt;
	private: System::Windows::Forms::Button^ btn_log10;
	private: System::Windows::Forms::Button^ btn_abs;
	private: System::Windows::Forms::Button^ btn_func;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::Timer^ timer4;
	private: System::Windows::Forms::Button^ btn_cos;
	private: System::Windows::Forms::Button^ btn_sin;
	private: System::Windows::Forms::Button^ btn_acos;
	private: System::Windows::Forms::Button^ btn_asin;
	private: System::Windows::Forms::Button^ btn_cosh;
	private: System::Windows::Forms::Button^ btn_sinh;
	private: System::Windows::Forms::Button^ btn_acosh;
	private: System::Windows::Forms::Button^ btn_asinh;
	private: System::Windows::Forms::Button^ btn_tan;
	private: System::Windows::Forms::Button^ btn_atan;
	private: System::Windows::Forms::Button^ btn_tanh;
	private: System::Windows::Forms::Button^ btn_atanh;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ btn_pi;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ about;


	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator::typeid));
			this->textMath = (gcnew System::Windows::Forms::TextBox());
			this->btn_solve = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ans = (gcnew System::Windows::Forms::TextBox());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_Infix_Postfix = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->string_postfix = (gcnew System::Windows::Forms::RichTextBox());
			this->handling = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_e = (gcnew System::Windows::Forms::Button());
			this->btn_sqrt = (gcnew System::Windows::Forms::Button());
			this->btn_log = (gcnew System::Windows::Forms::Button());
			this->btn_exp = (gcnew System::Windows::Forms::Button());
			this->btn_gt = (gcnew System::Windows::Forms::Button());
			this->btn_cbrt = (gcnew System::Windows::Forms::Button());
			this->btn_log10 = (gcnew System::Windows::Forms::Button());
			this->btn_abs = (gcnew System::Windows::Forms::Button());
			this->btn_func = (gcnew System::Windows::Forms::Button());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btn_cos = (gcnew System::Windows::Forms::Button());
			this->btn_sin = (gcnew System::Windows::Forms::Button());
			this->btn_acos = (gcnew System::Windows::Forms::Button());
			this->btn_asin = (gcnew System::Windows::Forms::Button());
			this->btn_cosh = (gcnew System::Windows::Forms::Button());
			this->btn_sinh = (gcnew System::Windows::Forms::Button());
			this->btn_acosh = (gcnew System::Windows::Forms::Button());
			this->btn_asinh = (gcnew System::Windows::Forms::Button());
			this->btn_tan = (gcnew System::Windows::Forms::Button());
			this->btn_atan = (gcnew System::Windows::Forms::Button());
			this->btn_tanh = (gcnew System::Windows::Forms::Button());
			this->btn_atanh = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btn_pi = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->about = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// textMath
			// 
			this->textMath->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textMath->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textMath->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textMath->Location = System::Drawing::Point(224, 168);
			this->textMath->Name = L"textMath";
			this->textMath->Size = System::Drawing::Size(746, 42);
			this->textMath->TabIndex = 2;
			this->textMath->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Calculator::textMath_KeyDown);
			// 
			// btn_solve
			// 
			this->btn_solve->BackColor = System::Drawing::Color::CornflowerBlue;
			this->btn_solve->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_solve.BackgroundImage")));
			this->btn_solve->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_solve->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_solve->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_solve->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_solve->Location = System::Drawing::Point(282, 344);
			this->btn_solve->Name = L"btn_solve";
			this->btn_solve->Size = System::Drawing::Size(206, 71);
			this->btn_solve->TabIndex = 3;
			this->btn_solve->UseVisualStyleBackColor = false;
			this->btn_solve->Click += gcnew System::EventHandler(this, &Calculator::btn_solve_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->ForeColor = System::Drawing::Color::Transparent;
			this->panel1->Location = System::Drawing::Point(35, 9);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(90, 83);
			this->panel1->TabIndex = 5;
			// 
			// ans
			// 
			this->ans->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ans->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ans->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans->Location = System::Drawing::Point(224, 253);
			this->ans->Name = L"ans";
			this->ans->ReadOnly = true;
			this->ans->Size = System::Drawing::Size(746, 40);
			this->ans->TabIndex = 7;
			this->ans->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btn_clear
			// 
			this->btn_clear->BackColor = System::Drawing::Color::Transparent;
			this->btn_clear->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_clear.BackgroundImage")));
			this->btn_clear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_clear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clear->Location = System::Drawing::Point(537, 344);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(206, 71);
			this->btn_clear->TabIndex = 8;
			this->btn_clear->UseVisualStyleBackColor = false;
			this->btn_clear->Click += gcnew System::EventHandler(this, &Calculator::btn_clear_Click);
			// 
			// btn_Infix_Postfix
			// 
			this->btn_Infix_Postfix->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_Infix_Postfix->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn_Infix_Postfix->FlatAppearance->BorderSize = 0;
			this->btn_Infix_Postfix->ForeColor = System::Drawing::Color::Transparent;
			this->btn_Infix_Postfix->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_Infix_Postfix->Location = System::Drawing::Point(35, 419);
			this->btn_Infix_Postfix->Name = L"btn_Infix_Postfix";
			this->btn_Infix_Postfix->Size = System::Drawing::Size(43, 40);
			this->btn_Infix_Postfix->TabIndex = 9;
			this->btn_Infix_Postfix->Text = L"\\/";
			this->btn_Infix_Postfix->UseVisualStyleBackColor = false;
			this->btn_Infix_Postfix->Click += gcnew System::EventHandler(this, &Calculator::btn_Infix_Postfix_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Calculator::timer1_Tick);
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(35, 9);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(933, 83);
			this->panel2->TabIndex = 12;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox5->Location = System::Drawing::Point(452, 77);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(369, 265);
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(107, -33);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(369, 265);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(142, -24);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(369, 265);
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			// 
			// string_postfix
			// 
			this->string_postfix->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->string_postfix->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->string_postfix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->string_postfix->Location = System::Drawing::Point(39, 653);
			this->string_postfix->Name = L"string_postfix";
			this->string_postfix->ReadOnly = true;
			this->string_postfix->Size = System::Drawing::Size(944, 70);
			this->string_postfix->TabIndex = 1;
			this->string_postfix->Text = L"";
			// 
			// handling
			// 
			this->handling->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->handling->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->handling->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->handling->Location = System::Drawing::Point(43, 520);
			this->handling->Name = L"handling";
			this->handling->ReadOnly = true;
			this->handling->Size = System::Drawing::Size(940, 71);
			this->handling->TabIndex = 0;
			this->handling->Text = L"";
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(96, 421);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(229, 38);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox35->TabIndex = 50;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(12, 165);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(191, 40);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox36->TabIndex = 51;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(12, 250);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(123, 40);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox37->TabIndex = 52;
			this->pictureBox37->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(333, 470);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(356, 43);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox38->TabIndex = 53;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(410, 603);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(196, 44);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox39->TabIndex = 54;
			this->pictureBox39->TabStop = false;
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &Calculator::timer2_Tick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(51, 180);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(369, 265);
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(0, 0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(1029, 469);
			this->pictureBox6->TabIndex = 55;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(464, 89);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(369, 265);
			this->pictureBox4->TabIndex = 16;
			this->pictureBox4->TabStop = false;
			// 
			// btn_e
			// 
			this->btn_e->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->btn_e->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_e->Location = System::Drawing::Point(120, 387);
			this->btn_e->Name = L"btn_e";
			this->btn_e->Size = System::Drawing::Size(111, 52);
			this->btn_e->TabIndex = 71;
			this->btn_e->Text = L"e";
			this->btn_e->UseVisualStyleBackColor = false;
			this->btn_e->Click += gcnew System::EventHandler(this, &Calculator::btn_e_Click);
			// 
			// btn_sqrt
			// 
			this->btn_sqrt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->btn_sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sqrt->Location = System::Drawing::Point(237, 254);
			this->btn_sqrt->Name = L"btn_sqrt";
			this->btn_sqrt->Size = System::Drawing::Size(111, 61);
			this->btn_sqrt->TabIndex = 70;
			this->btn_sqrt->Text = L"sqrt(x)";
			this->btn_sqrt->UseVisualStyleBackColor = false;
			this->btn_sqrt->Click += gcnew System::EventHandler(this, &Calculator::btn_sqrt_Click);
			// 
			// btn_log
			// 
			this->btn_log->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->btn_log->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_log->Location = System::Drawing::Point(120, 254);
			this->btn_log->Name = L"btn_log";
			this->btn_log->Size = System::Drawing::Size(111, 61);
			this->btn_log->TabIndex = 69;
			this->btn_log->Text = L"ln(x)";
			this->btn_log->UseVisualStyleBackColor = false;
			this->btn_log->Click += gcnew System::EventHandler(this, &Calculator::btn_log_Click);
			// 
			// btn_exp
			// 
			this->btn_exp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->btn_exp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_exp->Location = System::Drawing::Point(3, 254);
			this->btn_exp->Name = L"btn_exp";
			this->btn_exp->Size = System::Drawing::Size(111, 61);
			this->btn_exp->TabIndex = 68;
			this->btn_exp->Text = L"exp(x)";
			this->btn_exp->UseVisualStyleBackColor = false;
			this->btn_exp->Click += gcnew System::EventHandler(this, &Calculator::btn_exp_Click);
			// 
			// btn_gt
			// 
			this->btn_gt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->btn_gt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_gt->Location = System::Drawing::Point(3, 387);
			this->btn_gt->Name = L"btn_gt";
			this->btn_gt->Size = System::Drawing::Size(111, 52);
			this->btn_gt->TabIndex = 75;
			this->btn_gt->Text = L"!";
			this->btn_gt->UseVisualStyleBackColor = false;
			this->btn_gt->Click += gcnew System::EventHandler(this, &Calculator::btn_gt_Click);
			// 
			// btn_cbrt
			// 
			this->btn_cbrt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->btn_cbrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cbrt->Location = System::Drawing::Point(237, 321);
			this->btn_cbrt->Name = L"btn_cbrt";
			this->btn_cbrt->Size = System::Drawing::Size(111, 60);
			this->btn_cbrt->TabIndex = 74;
			this->btn_cbrt->Text = L"cbrt(x)";
			this->btn_cbrt->UseVisualStyleBackColor = false;
			this->btn_cbrt->Click += gcnew System::EventHandler(this, &Calculator::btn_cbrt_Click);
			// 
			// btn_log10
			// 
			this->btn_log10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->btn_log10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_log10->Location = System::Drawing::Point(120, 321);
			this->btn_log10->Name = L"btn_log10";
			this->btn_log10->Size = System::Drawing::Size(111, 60);
			this->btn_log10->TabIndex = 73;
			this->btn_log10->Text = L"log(x)";
			this->btn_log10->UseVisualStyleBackColor = false;
			this->btn_log10->Click += gcnew System::EventHandler(this, &Calculator::btn_log10_Click);
			// 
			// btn_abs
			// 
			this->btn_abs->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->btn_abs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_abs->Location = System::Drawing::Point(3, 321);
			this->btn_abs->Name = L"btn_abs";
			this->btn_abs->Size = System::Drawing::Size(111, 60);
			this->btn_abs->TabIndex = 72;
			this->btn_abs->Text = L"abs(x)";
			this->btn_abs->UseVisualStyleBackColor = false;
			this->btn_abs->Click += gcnew System::EventHandler(this, &Calculator::btn_abs_Click);
			// 
			// btn_func
			// 
			this->btn_func->BackColor = System::Drawing::Color::MediumTurquoise;
			this->btn_func->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn_func->FlatAppearance->BorderSize = 0;
			this->btn_func->ForeColor = System::Drawing::Color::Transparent;
			this->btn_func->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_func->Location = System::Drawing::Point(955, 419);
			this->btn_func->Name = L"btn_func";
			this->btn_func->Size = System::Drawing::Size(43, 40);
			this->btn_func->TabIndex = 78;
			this->btn_func->Text = L">";
			this->btn_func->UseVisualStyleBackColor = false;
			this->btn_func->Click += gcnew System::EventHandler(this, &Calculator::btn_func_Click);
			// 
			// timer3
			// 
			this->timer3->Interval = 1;
			this->timer3->Tick += gcnew System::EventHandler(this, &Calculator::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 1;
			this->timer4->Tick += gcnew System::EventHandler(this, &Calculator::timer4_Tick);
			// 
			// btn_cos
			// 
			this->btn_cos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->btn_cos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cos->Location = System::Drawing::Point(3, 3);
			this->btn_cos->Name = L"btn_cos";
			this->btn_cos->Size = System::Drawing::Size(111, 56);
			this->btn_cos->TabIndex = 56;
			this->btn_cos->Text = L"cos(x)";
			this->btn_cos->UseVisualStyleBackColor = false;
			this->btn_cos->Click += gcnew System::EventHandler(this, &Calculator::btn_cos_Click);
			// 
			// btn_sin
			// 
			this->btn_sin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->btn_sin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sin->Location = System::Drawing::Point(120, 3);
			this->btn_sin->Name = L"btn_sin";
			this->btn_sin->Size = System::Drawing::Size(111, 56);
			this->btn_sin->TabIndex = 57;
			this->btn_sin->Text = L"sin(x)";
			this->btn_sin->UseVisualStyleBackColor = false;
			this->btn_sin->Click += gcnew System::EventHandler(this, &Calculator::btn_sin_Click);
			// 
			// btn_acos
			// 
			this->btn_acos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btn_acos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_acos->Location = System::Drawing::Point(3, 65);
			this->btn_acos->Name = L"btn_acos";
			this->btn_acos->Size = System::Drawing::Size(111, 56);
			this->btn_acos->TabIndex = 58;
			this->btn_acos->Text = L"acos(x)";
			this->btn_acos->UseVisualStyleBackColor = false;
			this->btn_acos->Click += gcnew System::EventHandler(this, &Calculator::btn_acos_Click);
			// 
			// btn_asin
			// 
			this->btn_asin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btn_asin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_asin->Location = System::Drawing::Point(120, 65);
			this->btn_asin->Name = L"btn_asin";
			this->btn_asin->Size = System::Drawing::Size(111, 56);
			this->btn_asin->TabIndex = 59;
			this->btn_asin->Text = L"asin(x)";
			this->btn_asin->UseVisualStyleBackColor = false;
			this->btn_asin->Click += gcnew System::EventHandler(this, &Calculator::btn_asin_Click);
			// 
			// btn_cosh
			// 
			this->btn_cosh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->btn_cosh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cosh->Location = System::Drawing::Point(3, 127);
			this->btn_cosh->Name = L"btn_cosh";
			this->btn_cosh->Size = System::Drawing::Size(111, 57);
			this->btn_cosh->TabIndex = 60;
			this->btn_cosh->Text = L"cosh(x)";
			this->btn_cosh->UseVisualStyleBackColor = false;
			this->btn_cosh->Click += gcnew System::EventHandler(this, &Calculator::btn_cosh_Click);
			// 
			// btn_sinh
			// 
			this->btn_sinh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->btn_sinh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sinh->Location = System::Drawing::Point(120, 127);
			this->btn_sinh->Name = L"btn_sinh";
			this->btn_sinh->Size = System::Drawing::Size(111, 57);
			this->btn_sinh->TabIndex = 61;
			this->btn_sinh->Text = L"sinh(x)";
			this->btn_sinh->UseVisualStyleBackColor = false;
			this->btn_sinh->Click += gcnew System::EventHandler(this, &Calculator::btn_sinh_Click);
			// 
			// btn_acosh
			// 
			this->btn_acosh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->btn_acosh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_acosh->Location = System::Drawing::Point(3, 190);
			this->btn_acosh->Name = L"btn_acosh";
			this->btn_acosh->Size = System::Drawing::Size(111, 58);
			this->btn_acosh->TabIndex = 62;
			this->btn_acosh->Text = L"acosh(x)";
			this->btn_acosh->UseVisualStyleBackColor = false;
			this->btn_acosh->Click += gcnew System::EventHandler(this, &Calculator::btn_acosh_Click);
			// 
			// btn_asinh
			// 
			this->btn_asinh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->btn_asinh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_asinh->Location = System::Drawing::Point(120, 190);
			this->btn_asinh->Name = L"btn_asinh";
			this->btn_asinh->Size = System::Drawing::Size(111, 58);
			this->btn_asinh->TabIndex = 63;
			this->btn_asinh->Text = L"asinh(x)";
			this->btn_asinh->UseVisualStyleBackColor = false;
			this->btn_asinh->Click += gcnew System::EventHandler(this, &Calculator::btn_asinh_Click);
			// 
			// btn_tan
			// 
			this->btn_tan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->btn_tan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_tan->Location = System::Drawing::Point(237, 3);
			this->btn_tan->Name = L"btn_tan";
			this->btn_tan->Size = System::Drawing::Size(111, 56);
			this->btn_tan->TabIndex = 64;
			this->btn_tan->Text = L"tan(x)";
			this->btn_tan->UseVisualStyleBackColor = false;
			this->btn_tan->Click += gcnew System::EventHandler(this, &Calculator::btn_tan_Click);
			// 
			// btn_atan
			// 
			this->btn_atan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(107)),
				static_cast<System::Int32>(static_cast<System::Byte>(131)));
			this->btn_atan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_atan->Location = System::Drawing::Point(237, 65);
			this->btn_atan->Name = L"btn_atan";
			this->btn_atan->Size = System::Drawing::Size(111, 56);
			this->btn_atan->TabIndex = 65;
			this->btn_atan->Text = L"atan(x)";
			this->btn_atan->UseVisualStyleBackColor = false;
			this->btn_atan->Click += gcnew System::EventHandler(this, &Calculator::btn_atan_Click);
			// 
			// btn_tanh
			// 
			this->btn_tanh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(118)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->btn_tanh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_tanh->Location = System::Drawing::Point(237, 127);
			this->btn_tanh->Name = L"btn_tanh";
			this->btn_tanh->Size = System::Drawing::Size(111, 57);
			this->btn_tanh->TabIndex = 66;
			this->btn_tanh->Text = L"tanh(x)";
			this->btn_tanh->UseVisualStyleBackColor = false;
			this->btn_tanh->Click += gcnew System::EventHandler(this, &Calculator::btn_tanh_Click);
			// 
			// btn_atanh
			// 
			this->btn_atanh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->btn_atanh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_atanh->Location = System::Drawing::Point(237, 190);
			this->btn_atanh->Name = L"btn_atanh";
			this->btn_atanh->Size = System::Drawing::Size(111, 58);
			this->btn_atanh->TabIndex = 67;
			this->btn_atanh->Text = L"atanh(x)";
			this->btn_atanh->UseVisualStyleBackColor = false;
			this->btn_atanh->Click += gcnew System::EventHandler(this, &Calculator::btn_atanh_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->btn_cos);
			this->flowLayoutPanel1->Controls->Add(this->btn_sin);
			this->flowLayoutPanel1->Controls->Add(this->btn_tan);
			this->flowLayoutPanel1->Controls->Add(this->btn_acos);
			this->flowLayoutPanel1->Controls->Add(this->btn_asin);
			this->flowLayoutPanel1->Controls->Add(this->btn_atan);
			this->flowLayoutPanel1->Controls->Add(this->btn_cosh);
			this->flowLayoutPanel1->Controls->Add(this->btn_sinh);
			this->flowLayoutPanel1->Controls->Add(this->btn_tanh);
			this->flowLayoutPanel1->Controls->Add(this->btn_acosh);
			this->flowLayoutPanel1->Controls->Add(this->btn_asinh);
			this->flowLayoutPanel1->Controls->Add(this->btn_atanh);
			this->flowLayoutPanel1->Controls->Add(this->btn_exp);
			this->flowLayoutPanel1->Controls->Add(this->btn_log);
			this->flowLayoutPanel1->Controls->Add(this->btn_sqrt);
			this->flowLayoutPanel1->Controls->Add(this->btn_abs);
			this->flowLayoutPanel1->Controls->Add(this->btn_log10);
			this->flowLayoutPanel1->Controls->Add(this->btn_cbrt);
			this->flowLayoutPanel1->Controls->Add(this->btn_gt);
			this->flowLayoutPanel1->Controls->Add(this->btn_e);
			this->flowLayoutPanel1->Controls->Add(this->btn_pi);
			this->flowLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flowLayoutPanel1->Location = System::Drawing::Point(1046, 154);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(382, 290);
			this->flowLayoutPanel1->TabIndex = 79;
			// 
			// btn_pi
			// 
			this->btn_pi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)));
			this->btn_pi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pi->Location = System::Drawing::Point(237, 387);
			this->btn_pi->Name = L"btn_pi";
			this->btn_pi->Size = System::Drawing::Size(111, 52);
			this->btn_pi->TabIndex = 80;
			this->btn_pi->Text = L"π";
			this->btn_pi->UseVisualStyleBackColor = false;
			this->btn_pi->Click += gcnew System::EventHandler(this, &Calculator::btn_pi_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(705, 416);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(244, 45);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 80;
			this->pictureBox7->TabStop = false;
			// 
			// about
			// 
			this->about->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->about->BackColor = System::Drawing::Color::Transparent;
			this->about->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"about.BackgroundImage")));
			this->about->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->about->Location = System::Drawing::Point(874, 12);
			this->about->Name = L"about";
			this->about->Size = System::Drawing::Size(143, 50);
			this->about->TabIndex = 18;
			this->about->UseVisualStyleBackColor = false;
			this->about->Click += gcnew System::EventHandler(this, &Calculator::about_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1029, 469);
			this->Controls->Add(this->about);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->btn_func);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->handling);
			this->Controls->Add(this->string_postfix);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->btn_Infix_Postfix);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->ans);
			this->Controls->Add(this->btn_solve);
			this->Controls->Add(this->textMath);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox6);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"Calculator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btn_solve_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		this->handling->Text = "";
		this->string_postfix->Text = "";
		try {
			Solution sol;
			vector<string> s = sol.StringHandling(str);
			for (unsigned int i = 0; i < s.size(); i++)
			{
				this->handling->Text += gcnew String(s[i].c_str()) + " ";
			}
			vector<string> a = sol.InfixToPostfix(s);
			for (unsigned int i = 0; i < a.size(); i++)
			{
				this->string_postfix->Text += gcnew String(a[i].c_str()) + " ";
			}
			float t = sol.calculatePostfix(a);
			this->ans->Text = gcnew String(to_str(t).c_str());
		}
		catch (const char* message) {
			this->handling->Text = "";
			this->string_postfix->Text = "";
			this->ans->Text = gcnew String(string(message).c_str());
		}
	}

	private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textMath->Text = "";
		this->handling->Text = "";
		this->string_postfix->Text = "";
		this->ans->Text = "";
	}

	private: System::Void btn_Infix_Postfix_Click(System::Object^ sender, System::EventArgs^ e) {
		if (btn_Infix_Postfix->Text == "\\/")
		{
			timer1->Start();
			btn_Infix_Postfix->Text = "/\\";
		}
		else
		{
			timer2->Start();
			btn_Infix_Postfix->Text = "\\/";
		}
	}

	
		   int count;
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count < 10)
		{
			Form::Top -= 15;
			Form::Height += 30;
			count++;
		}
		else
		{
			timer1->Stop();
		}
	}


	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count > 0)
		{
			Form::Top += 15;
			Form::Height -= 30;
			count--;
		}
		else
		{
			timer2->Stop();
		}
	}

		   int count2;
	private: System::Void btn_func_Click(System::Object^ sender, System::EventArgs^ e) {
		if (btn_func->Text == ">")
		{
			timer3->Start();
			btn_func->Text = "<";
		}
		else
		{
			timer4->Start();
			btn_func->Text = ">";
		}
	}

	private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count2 < 10)
		{
			Form::Left -= 20;
			Form::Width += 45;
			count2++;
		}
		else
		{
			timer3->Stop();
		}
	}

	private: System::Void timer4_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count2 > 0)
		{
			Form::Left += 20;
			Form::Width -= 45;
			count2--;
		}
		else
		{
			timer4->Stop();
		}
	}
		   int count3;
	private: System::Void btn_cos_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "cos(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 4 + count3;
	}
	private: System::Void btn_sin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "sin(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 4 + count3;
	}
	private: System::Void btn_tan_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "tan(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 4 + count3;
	}
	private: System::Void btn_acos_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "acos(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 5 + count3;
	}
	private: System::Void btn_asin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "asin(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 5 + count3;
	}
	private: System::Void btn_atan_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "atan(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 5 + count3;
	}
	private: System::Void btn_cosh_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "cosh(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 5 + count3;
	}
	private: System::Void btn_sinh_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "sinh(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 5 + count3;	
	}
	private: System::Void btn_tanh_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "tanh(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 5 + count3;
	}
	private: System::Void btn_acosh_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "acosh(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 6 + count3;
	}
	private: System::Void btn_asinh_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "asinh(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 6 + count3;
	}
	private: System::Void btn_atanh_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "atanh(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 6 + count3;
	}
	private: System::Void btn_exp_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "exp(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 4 + count3;
	}
	private: System::Void btn_log_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "ln(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 3 + count3;
	}
	private: System::Void btn_sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "sqrt(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 5 + count3;
	}
	private: System::Void btn_abs_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "abs(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 4 + count3;
	}
	private: System::Void btn_log10_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "log(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 4 + count3;
	}
	private: System::Void btn_cbrt_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "cbrt(");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 5 + count3;
	}
	private: System::Void btn_gt_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "!");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 1 + count3;
	}
	private: System::Void btn_e_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "e");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 1 + count3;
	}
	private: System::Void btn_pi_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stringMath = this->textMath->Text;
		string str = marshal_as<string>(stringMath);
		count3 = textMath->SelectionStart;
		str = str.insert(count3, "pi");
		this->textMath->Text = gcnew String(string(str).c_str());
		textMath->SelectionStart += 2 + count3;
	}
	
	private: System::Void textMath_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
		{
			btn_solve_Click(sender, e);
		}
	}

	private: System::Void about_Click(System::Object^ sender, System::EventArgs^ e) {
		About^ ab = gcnew About;
		ab->ShowDialog();
	}
};
}
