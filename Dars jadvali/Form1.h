#pragma once
#include <string.h>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <fstream>

namespace Darsjadvali {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;

	/// <summary>
	/// —водка дл€ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 




















































	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::TextBox^  textBox36;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;































































	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  tahrirlashToolStripMenuItem;

private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::TextBox^  textBox7;
private: System::Windows::Forms::TextBox^  textBox8;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::TextBox^  textBox9;
private: System::Windows::Forms::TextBox^  textBox10;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::TextBox^  textBox17;
private: System::Windows::Forms::TextBox^  textBox18;
private: System::Windows::Forms::TextBox^  textBox19;
private: System::Windows::Forms::TextBox^  textBox20;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TextBox^  textBox21;
private: System::Windows::Forms::TextBox^  textBox22;
private: System::Windows::Forms::TextBox^  textBox23;
private: System::Windows::Forms::TextBox^  textBox24;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::TextBox^  textBox41;
private: System::Windows::Forms::TextBox^  textBox42;
private: System::Windows::Forms::TextBox^  textBox43;
private: System::Windows::Forms::TextBox^  textBox44;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::TextBox^  textBox45;
private: System::Windows::Forms::TextBox^  textBox46;
private: System::Windows::Forms::TextBox^  textBox47;
private: System::Windows::Forms::TextBox^  textBox48;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::TextBox^  textBox49;
private: System::Windows::Forms::TextBox^  textBox50;
private: System::Windows::Forms::TextBox^  textBox51;
private: System::Windows::Forms::TextBox^  textBox52;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::TextBox^  textBox53;
private: System::Windows::Forms::TextBox^  textBox54;
private: System::Windows::Forms::TextBox^  textBox55;
private: System::Windows::Forms::TextBox^  textBox56;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::TextBox^  textBox57;
private: System::Windows::Forms::TextBox^  textBox58;
private: System::Windows::Forms::TextBox^  textBox59;
private: System::Windows::Forms::TextBox^  textBox60;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::TextBox^  textBox61;
private: System::Windows::Forms::TextBox^  textBox62;
private: System::Windows::Forms::TextBox^  textBox63;
private: System::Windows::Forms::TextBox^  textBox64;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::TextBox^  textBox65;
private: System::Windows::Forms::TextBox^  textBox66;
private: System::Windows::Forms::TextBox^  textBox67;
private: System::Windows::Forms::TextBox^  textBox68;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::TextBox^  textBox69;
private: System::Windows::Forms::TextBox^  textBox70;
private: System::Windows::Forms::TextBox^  textBox71;
private: System::Windows::Forms::TextBox^  textBox72;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  textBox73;
private: System::Windows::Forms::TextBox^  textBox74;
private: System::Windows::Forms::TextBox^  textBox75;
private: System::Windows::Forms::TextBox^  textBox76;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::TextBox^  textBox77;
private: System::Windows::Forms::TextBox^  textBox78;
private: System::Windows::Forms::TextBox^  textBox79;
private: System::Windows::Forms::TextBox^  textBox80;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Panel^  panel6;
private: System::Windows::Forms::TextBox^  textBox81;
private: System::Windows::Forms::TextBox^  textBox82;
private: System::Windows::Forms::TextBox^  textBox83;
private: System::Windows::Forms::TextBox^  textBox84;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::TextBox^  textBox85;
private: System::Windows::Forms::TextBox^  textBox86;
private: System::Windows::Forms::TextBox^  textBox87;
private: System::Windows::Forms::TextBox^  textBox88;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  textBox89;
private: System::Windows::Forms::TextBox^  textBox90;
private: System::Windows::Forms::TextBox^  textBox91;
private: System::Windows::Forms::TextBox^  textBox92;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::TextBox^  textBox93;
private: System::Windows::Forms::TextBox^  textBox94;
private: System::Windows::Forms::TextBox^  textBox95;
private: System::Windows::Forms::TextBox^  textBox96;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::ToolStripMenuItem^  tahrirlashToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  tozalashToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
private: System::Windows::Forms::ToolStripMenuItem^  chiqishToolStripMenuItem1;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::PictureBox^  pictureBox6;



	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->tahrirlashToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tahrirlashToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tozalashToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->chiqishToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->textBox70 = (gcnew System::Windows::Forms::TextBox());
			this->textBox71 = (gcnew System::Windows::Forms::TextBox());
			this->textBox72 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox73 = (gcnew System::Windows::Forms::TextBox());
			this->textBox74 = (gcnew System::Windows::Forms::TextBox());
			this->textBox75 = (gcnew System::Windows::Forms::TextBox());
			this->textBox76 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox77 = (gcnew System::Windows::Forms::TextBox());
			this->textBox78 = (gcnew System::Windows::Forms::TextBox());
			this->textBox79 = (gcnew System::Windows::Forms::TextBox());
			this->textBox80 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox81 = (gcnew System::Windows::Forms::TextBox());
			this->textBox82 = (gcnew System::Windows::Forms::TextBox());
			this->textBox83 = (gcnew System::Windows::Forms::TextBox());
			this->textBox84 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox85 = (gcnew System::Windows::Forms::TextBox());
			this->textBox86 = (gcnew System::Windows::Forms::TextBox());
			this->textBox87 = (gcnew System::Windows::Forms::TextBox());
			this->textBox88 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox89 = (gcnew System::Windows::Forms::TextBox());
			this->textBox90 = (gcnew System::Windows::Forms::TextBox());
			this->textBox91 = (gcnew System::Windows::Forms::TextBox());
			this->textBox92 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox93 = (gcnew System::Windows::Forms::TextBox());
			this->textBox94 = (gcnew System::Windows::Forms::TextBox());
			this->textBox95 = (gcnew System::Windows::Forms::TextBox());
			this->textBox96 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->textBox25);
			this->panel2->Controls->Add(this->textBox26);
			this->panel2->Controls->Add(this->textBox27);
			this->panel2->Controls->Add(this->textBox28);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->textBox29);
			this->panel2->Controls->Add(this->textBox30);
			this->panel2->Controls->Add(this->textBox31);
			this->panel2->Controls->Add(this->textBox32);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->textBox33);
			this->panel2->Controls->Add(this->textBox34);
			this->panel2->Controls->Add(this->textBox35);
			this->panel2->Controls->Add(this->textBox36);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->textBox37);
			this->panel2->Controls->Add(this->textBox38);
			this->panel2->Controls->Add(this->textBox39);
			this->panel2->Controls->Add(this->textBox40);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Enabled = false;
			this->panel2->Location = System::Drawing::Point(43, 70);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(302, 173);
			this->panel2->TabIndex = 23;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(257, 147);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(38, 20);
			this->textBox25->TabIndex = 22;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(257, 128);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(38, 20);
			this->textBox26->TabIndex = 21;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(29, 147);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(224, 20);
			this->textBox27->TabIndex = 20;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(29, 128);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(224, 20);
			this->textBox28->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label9->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label9->Location = System::Drawing::Point(6, 136);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 24);
			this->label9->TabIndex = 18;
			this->label9->Text = L"4";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(257, 105);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(38, 20);
			this->textBox29->TabIndex = 17;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(257, 86);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(38, 20);
			this->textBox30->TabIndex = 16;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(29, 105);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(224, 20);
			this->textBox31->TabIndex = 15;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(29, 86);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(224, 20);
			this->textBox32->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label10->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label10->Location = System::Drawing::Point(6, 94);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(20, 24);
			this->label10->TabIndex = 13;
			this->label10->Text = L"3";
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(257, 63);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(38, 20);
			this->textBox33->TabIndex = 12;
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(257, 44);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(38, 20);
			this->textBox34->TabIndex = 11;
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(29, 63);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(224, 20);
			this->textBox35->TabIndex = 10;
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(29, 44);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(224, 20);
			this->textBox36->TabIndex = 9;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label11->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label11->Location = System::Drawing::Point(6, 52);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(20, 24);
			this->label11->TabIndex = 8;
			this->label11->Text = L"2";
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(257, 21);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(38, 20);
			this->textBox37->TabIndex = 7;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(257, 2);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(38, 20);
			this->textBox38->TabIndex = 6;
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(29, 21);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(224, 20);
			this->textBox39->TabIndex = 5;
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(29, 2);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(224, 20);
			this->textBox40->TabIndex = 4;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label12->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label12->Location = System::Drawing::Point(6, 10);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 24);
			this->label12->TabIndex = 0;
			this->label12->Text = L"1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Nokia Standard Multiscript", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Blue;
			this->label13->Location = System::Drawing::Point(295, 24);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(146, 39);
			this->label13->TabIndex = 24;
			this->label13->Text = L"DARS JADVALI";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->tahrirlashToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(715, 24);
			this->menuStrip1->TabIndex = 27;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// tahrirlashToolStripMenuItem
			// 
			this->tahrirlashToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->tahrirlashToolStripMenuItem1, 
				this->tozalashToolStripMenuItem, this->toolStripSeparator1, this->chiqishToolStripMenuItem1});
			this->tahrirlashToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Cooper Black", 9));
			this->tahrirlashToolStripMenuItem->Name = L"tahrirlashToolStripMenuItem";
			this->tahrirlashToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->tahrirlashToolStripMenuItem->Text = L"Menyu";
			// 
			// tahrirlashToolStripMenuItem1
			// 
			this->tahrirlashToolStripMenuItem1->Name = L"tahrirlashToolStripMenuItem1";
			this->tahrirlashToolStripMenuItem1->Size = System::Drawing::Size(138, 22);
			this->tahrirlashToolStripMenuItem1->Text = L"Tahrirlash";
			this->tahrirlashToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::tahrirlashToolStripMenuItem1_Click);
			// 
			// tozalashToolStripMenuItem
			// 
			this->tozalashToolStripMenuItem->Name = L"tozalashToolStripMenuItem";
			this->tozalashToolStripMenuItem->Size = System::Drawing::Size(138, 22);
			this->tozalashToolStripMenuItem->Text = L"Tozalash";
			this->tozalashToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::tozalashToolStripMenuItem_Click_1);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(135, 6);
			// 
			// chiqishToolStripMenuItem1
			// 
			this->chiqishToolStripMenuItem1->Name = L"chiqishToolStripMenuItem1";
			this->chiqishToolStripMenuItem1->Size = System::Drawing::Size(138, 22);
			this->chiqishToolStripMenuItem1->Text = L"Chiqish";
			this->chiqishToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::chiqishToolStripMenuItem1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button1->ForeColor = System::Drawing::Color::BlueViolet;
			this->button1->Location = System::Drawing::Point(631, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Saqlash";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->textBox11);
			this->panel1->Controls->Add(this->textBox12);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox13);
			this->panel1->Controls->Add(this->textBox14);
			this->panel1->Controls->Add(this->textBox15);
			this->panel1->Controls->Add(this->textBox16);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Enabled = false;
			this->panel1->Location = System::Drawing::Point(404, 70);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(302, 173);
			this->panel1->TabIndex = 24;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(257, 148);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(38, 20);
			this->textBox1->TabIndex = 22;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(257, 128);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(38, 20);
			this->textBox2->TabIndex = 21;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(29, 147);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(224, 20);
			this->textBox3->TabIndex = 20;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(29, 128);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(224, 20);
			this->textBox4->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label1->Location = System::Drawing::Point(6, 136);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 24);
			this->label1->TabIndex = 18;
			this->label1->Text = L"4";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(257, 105);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(38, 20);
			this->textBox5->TabIndex = 17;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(257, 86);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(38, 20);
			this->textBox6->TabIndex = 16;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(29, 105);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(224, 20);
			this->textBox7->TabIndex = 15;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(29, 86);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(224, 20);
			this->textBox8->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label2->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label2->Location = System::Drawing::Point(6, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 24);
			this->label2->TabIndex = 13;
			this->label2->Text = L"3";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(257, 63);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(38, 20);
			this->textBox9->TabIndex = 12;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(257, 44);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(38, 20);
			this->textBox10->TabIndex = 11;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(29, 63);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(224, 20);
			this->textBox11->TabIndex = 10;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(29, 44);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(224, 20);
			this->textBox12->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label3->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label3->Location = System::Drawing::Point(6, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 24);
			this->label3->TabIndex = 8;
			this->label3->Text = L"2";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(257, 21);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(38, 20);
			this->textBox13->TabIndex = 7;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(257, 2);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(38, 20);
			this->textBox14->TabIndex = 6;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(29, 21);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(224, 20);
			this->textBox15->TabIndex = 5;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(29, 2);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(224, 20);
			this->textBox16->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label4->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label4->Location = System::Drawing::Point(6, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 24);
			this->label4->TabIndex = 0;
			this->label4->Text = L"1";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->textBox17);
			this->panel3->Controls->Add(this->textBox18);
			this->panel3->Controls->Add(this->textBox19);
			this->panel3->Controls->Add(this->textBox20);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->textBox21);
			this->panel3->Controls->Add(this->textBox22);
			this->panel3->Controls->Add(this->textBox23);
			this->panel3->Controls->Add(this->textBox24);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->textBox41);
			this->panel3->Controls->Add(this->textBox42);
			this->panel3->Controls->Add(this->textBox43);
			this->panel3->Controls->Add(this->textBox44);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->textBox45);
			this->panel3->Controls->Add(this->textBox46);
			this->panel3->Controls->Add(this->textBox47);
			this->panel3->Controls->Add(this->textBox48);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Enabled = false;
			this->panel3->Location = System::Drawing::Point(404, 249);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(302, 173);
			this->panel3->TabIndex = 26;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(257, 147);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(38, 20);
			this->textBox17->TabIndex = 22;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(257, 128);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(38, 20);
			this->textBox18->TabIndex = 21;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(29, 147);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(224, 20);
			this->textBox19->TabIndex = 20;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(29, 128);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(224, 20);
			this->textBox20->TabIndex = 19;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label5->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label5->Location = System::Drawing::Point(6, 136);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 24);
			this->label5->TabIndex = 18;
			this->label5->Text = L"4";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(257, 105);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(38, 20);
			this->textBox21->TabIndex = 17;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(257, 86);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(38, 20);
			this->textBox22->TabIndex = 16;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(29, 105);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(224, 20);
			this->textBox23->TabIndex = 15;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(29, 86);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(224, 20);
			this->textBox24->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label6->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label6->Location = System::Drawing::Point(6, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 24);
			this->label6->TabIndex = 13;
			this->label6->Text = L"3";
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(257, 63);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(38, 20);
			this->textBox41->TabIndex = 12;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(257, 44);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(38, 20);
			this->textBox42->TabIndex = 11;
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(29, 63);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(224, 20);
			this->textBox43->TabIndex = 10;
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(29, 44);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(224, 20);
			this->textBox44->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label7->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label7->Location = System::Drawing::Point(6, 52);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 24);
			this->label7->TabIndex = 8;
			this->label7->Text = L"2";
			// 
			// textBox45
			// 
			this->textBox45->Location = System::Drawing::Point(257, 21);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(38, 20);
			this->textBox45->TabIndex = 7;
			// 
			// textBox46
			// 
			this->textBox46->Location = System::Drawing::Point(257, 2);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(38, 20);
			this->textBox46->TabIndex = 6;
			// 
			// textBox47
			// 
			this->textBox47->Location = System::Drawing::Point(29, 21);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(224, 20);
			this->textBox47->TabIndex = 5;
			// 
			// textBox48
			// 
			this->textBox48->Location = System::Drawing::Point(29, 2);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(224, 20);
			this->textBox48->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label8->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label8->Location = System::Drawing::Point(6, 10);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 24);
			this->label8->TabIndex = 0;
			this->label8->Text = L"1";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->textBox49);
			this->panel4->Controls->Add(this->textBox50);
			this->panel4->Controls->Add(this->textBox51);
			this->panel4->Controls->Add(this->textBox52);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->textBox53);
			this->panel4->Controls->Add(this->textBox54);
			this->panel4->Controls->Add(this->textBox55);
			this->panel4->Controls->Add(this->textBox56);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->textBox57);
			this->panel4->Controls->Add(this->textBox58);
			this->panel4->Controls->Add(this->textBox59);
			this->panel4->Controls->Add(this->textBox60);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->textBox61);
			this->panel4->Controls->Add(this->textBox62);
			this->panel4->Controls->Add(this->textBox63);
			this->panel4->Controls->Add(this->textBox64);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Enabled = false;
			this->panel4->Location = System::Drawing::Point(43, 249);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(302, 173);
			this->panel4->TabIndex = 25;
			// 
			// textBox49
			// 
			this->textBox49->Location = System::Drawing::Point(257, 147);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(38, 20);
			this->textBox49->TabIndex = 22;
			// 
			// textBox50
			// 
			this->textBox50->Location = System::Drawing::Point(257, 128);
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(38, 20);
			this->textBox50->TabIndex = 21;
			// 
			// textBox51
			// 
			this->textBox51->Location = System::Drawing::Point(29, 147);
			this->textBox51->Name = L"textBox51";
			this->textBox51->Size = System::Drawing::Size(224, 20);
			this->textBox51->TabIndex = 20;
			// 
			// textBox52
			// 
			this->textBox52->Location = System::Drawing::Point(29, 128);
			this->textBox52->Name = L"textBox52";
			this->textBox52->Size = System::Drawing::Size(224, 20);
			this->textBox52->TabIndex = 19;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label14->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label14->Location = System::Drawing::Point(6, 136);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(20, 24);
			this->label14->TabIndex = 18;
			this->label14->Text = L"4";
			// 
			// textBox53
			// 
			this->textBox53->Location = System::Drawing::Point(257, 105);
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(38, 20);
			this->textBox53->TabIndex = 17;
			// 
			// textBox54
			// 
			this->textBox54->Location = System::Drawing::Point(257, 86);
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(38, 20);
			this->textBox54->TabIndex = 16;
			// 
			// textBox55
			// 
			this->textBox55->Location = System::Drawing::Point(29, 105);
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(224, 20);
			this->textBox55->TabIndex = 15;
			// 
			// textBox56
			// 
			this->textBox56->Location = System::Drawing::Point(29, 86);
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(224, 20);
			this->textBox56->TabIndex = 14;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label15->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label15->Location = System::Drawing::Point(6, 94);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(20, 24);
			this->label15->TabIndex = 13;
			this->label15->Text = L"3";
			// 
			// textBox57
			// 
			this->textBox57->Location = System::Drawing::Point(257, 63);
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(38, 20);
			this->textBox57->TabIndex = 12;
			// 
			// textBox58
			// 
			this->textBox58->Location = System::Drawing::Point(257, 44);
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(38, 20);
			this->textBox58->TabIndex = 11;
			// 
			// textBox59
			// 
			this->textBox59->Location = System::Drawing::Point(29, 63);
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(224, 20);
			this->textBox59->TabIndex = 10;
			// 
			// textBox60
			// 
			this->textBox60->Location = System::Drawing::Point(29, 44);
			this->textBox60->Name = L"textBox60";
			this->textBox60->Size = System::Drawing::Size(224, 20);
			this->textBox60->TabIndex = 9;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label16->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label16->Location = System::Drawing::Point(6, 52);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(20, 24);
			this->label16->TabIndex = 8;
			this->label16->Text = L"2";
			// 
			// textBox61
			// 
			this->textBox61->Location = System::Drawing::Point(257, 21);
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(38, 20);
			this->textBox61->TabIndex = 7;
			// 
			// textBox62
			// 
			this->textBox62->Location = System::Drawing::Point(257, 2);
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(38, 20);
			this->textBox62->TabIndex = 6;
			// 
			// textBox63
			// 
			this->textBox63->Location = System::Drawing::Point(29, 21);
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(224, 20);
			this->textBox63->TabIndex = 5;
			// 
			// textBox64
			// 
			this->textBox64->Location = System::Drawing::Point(29, 2);
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(224, 20);
			this->textBox64->TabIndex = 4;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label17->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label17->Location = System::Drawing::Point(6, 10);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 24);
			this->label17->TabIndex = 0;
			this->label17->Text = L"1";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->textBox65);
			this->panel5->Controls->Add(this->textBox66);
			this->panel5->Controls->Add(this->textBox67);
			this->panel5->Controls->Add(this->textBox68);
			this->panel5->Controls->Add(this->label18);
			this->panel5->Controls->Add(this->textBox69);
			this->panel5->Controls->Add(this->textBox70);
			this->panel5->Controls->Add(this->textBox71);
			this->panel5->Controls->Add(this->textBox72);
			this->panel5->Controls->Add(this->label19);
			this->panel5->Controls->Add(this->textBox73);
			this->panel5->Controls->Add(this->textBox74);
			this->panel5->Controls->Add(this->textBox75);
			this->panel5->Controls->Add(this->textBox76);
			this->panel5->Controls->Add(this->label20);
			this->panel5->Controls->Add(this->textBox77);
			this->panel5->Controls->Add(this->textBox78);
			this->panel5->Controls->Add(this->textBox79);
			this->panel5->Controls->Add(this->textBox80);
			this->panel5->Controls->Add(this->label21);
			this->panel5->Enabled = false;
			this->panel5->Location = System::Drawing::Point(404, 428);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(302, 173);
			this->panel5->TabIndex = 28;
			// 
			// textBox65
			// 
			this->textBox65->Location = System::Drawing::Point(257, 147);
			this->textBox65->Name = L"textBox65";
			this->textBox65->Size = System::Drawing::Size(38, 20);
			this->textBox65->TabIndex = 22;
			// 
			// textBox66
			// 
			this->textBox66->Location = System::Drawing::Point(257, 128);
			this->textBox66->Name = L"textBox66";
			this->textBox66->Size = System::Drawing::Size(38, 20);
			this->textBox66->TabIndex = 21;
			// 
			// textBox67
			// 
			this->textBox67->Location = System::Drawing::Point(29, 147);
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(224, 20);
			this->textBox67->TabIndex = 20;
			// 
			// textBox68
			// 
			this->textBox68->Location = System::Drawing::Point(29, 128);
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(224, 20);
			this->textBox68->TabIndex = 19;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label18->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label18->Location = System::Drawing::Point(6, 136);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(20, 24);
			this->label18->TabIndex = 18;
			this->label18->Text = L"4";
			// 
			// textBox69
			// 
			this->textBox69->Location = System::Drawing::Point(257, 105);
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(38, 20);
			this->textBox69->TabIndex = 17;
			// 
			// textBox70
			// 
			this->textBox70->Location = System::Drawing::Point(257, 86);
			this->textBox70->Name = L"textBox70";
			this->textBox70->Size = System::Drawing::Size(38, 20);
			this->textBox70->TabIndex = 16;
			// 
			// textBox71
			// 
			this->textBox71->Location = System::Drawing::Point(29, 105);
			this->textBox71->Name = L"textBox71";
			this->textBox71->Size = System::Drawing::Size(224, 20);
			this->textBox71->TabIndex = 15;
			// 
			// textBox72
			// 
			this->textBox72->Location = System::Drawing::Point(29, 86);
			this->textBox72->Name = L"textBox72";
			this->textBox72->Size = System::Drawing::Size(224, 20);
			this->textBox72->TabIndex = 14;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label19->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label19->Location = System::Drawing::Point(6, 94);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(20, 24);
			this->label19->TabIndex = 13;
			this->label19->Text = L"3";
			// 
			// textBox73
			// 
			this->textBox73->Location = System::Drawing::Point(257, 63);
			this->textBox73->Name = L"textBox73";
			this->textBox73->Size = System::Drawing::Size(38, 20);
			this->textBox73->TabIndex = 12;
			// 
			// textBox74
			// 
			this->textBox74->Location = System::Drawing::Point(257, 44);
			this->textBox74->Name = L"textBox74";
			this->textBox74->Size = System::Drawing::Size(38, 20);
			this->textBox74->TabIndex = 11;
			// 
			// textBox75
			// 
			this->textBox75->Location = System::Drawing::Point(29, 63);
			this->textBox75->Name = L"textBox75";
			this->textBox75->Size = System::Drawing::Size(224, 20);
			this->textBox75->TabIndex = 10;
			// 
			// textBox76
			// 
			this->textBox76->Location = System::Drawing::Point(29, 44);
			this->textBox76->Name = L"textBox76";
			this->textBox76->Size = System::Drawing::Size(224, 20);
			this->textBox76->TabIndex = 9;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label20->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label20->Location = System::Drawing::Point(6, 52);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(20, 24);
			this->label20->TabIndex = 8;
			this->label20->Text = L"2";
			// 
			// textBox77
			// 
			this->textBox77->Location = System::Drawing::Point(257, 21);
			this->textBox77->Name = L"textBox77";
			this->textBox77->Size = System::Drawing::Size(38, 20);
			this->textBox77->TabIndex = 7;
			// 
			// textBox78
			// 
			this->textBox78->Location = System::Drawing::Point(257, 2);
			this->textBox78->Name = L"textBox78";
			this->textBox78->Size = System::Drawing::Size(38, 20);
			this->textBox78->TabIndex = 6;
			// 
			// textBox79
			// 
			this->textBox79->Location = System::Drawing::Point(29, 21);
			this->textBox79->Name = L"textBox79";
			this->textBox79->Size = System::Drawing::Size(224, 20);
			this->textBox79->TabIndex = 5;
			// 
			// textBox80
			// 
			this->textBox80->Location = System::Drawing::Point(29, 2);
			this->textBox80->Name = L"textBox80";
			this->textBox80->Size = System::Drawing::Size(224, 20);
			this->textBox80->TabIndex = 4;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label21->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label21->Location = System::Drawing::Point(6, 10);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(20, 24);
			this->label21->TabIndex = 0;
			this->label21->Text = L"1";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->textBox81);
			this->panel6->Controls->Add(this->textBox82);
			this->panel6->Controls->Add(this->textBox83);
			this->panel6->Controls->Add(this->textBox84);
			this->panel6->Controls->Add(this->label22);
			this->panel6->Controls->Add(this->textBox85);
			this->panel6->Controls->Add(this->textBox86);
			this->panel6->Controls->Add(this->textBox87);
			this->panel6->Controls->Add(this->textBox88);
			this->panel6->Controls->Add(this->label23);
			this->panel6->Controls->Add(this->textBox89);
			this->panel6->Controls->Add(this->textBox90);
			this->panel6->Controls->Add(this->textBox91);
			this->panel6->Controls->Add(this->textBox92);
			this->panel6->Controls->Add(this->label24);
			this->panel6->Controls->Add(this->textBox93);
			this->panel6->Controls->Add(this->textBox94);
			this->panel6->Controls->Add(this->textBox95);
			this->panel6->Controls->Add(this->textBox96);
			this->panel6->Controls->Add(this->label25);
			this->panel6->Enabled = false;
			this->panel6->Location = System::Drawing::Point(43, 428);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(302, 173);
			this->panel6->TabIndex = 27;
			// 
			// textBox81
			// 
			this->textBox81->Location = System::Drawing::Point(257, 147);
			this->textBox81->Name = L"textBox81";
			this->textBox81->Size = System::Drawing::Size(38, 20);
			this->textBox81->TabIndex = 22;
			// 
			// textBox82
			// 
			this->textBox82->Location = System::Drawing::Point(257, 128);
			this->textBox82->Name = L"textBox82";
			this->textBox82->Size = System::Drawing::Size(38, 20);
			this->textBox82->TabIndex = 21;
			// 
			// textBox83
			// 
			this->textBox83->Location = System::Drawing::Point(29, 147);
			this->textBox83->Name = L"textBox83";
			this->textBox83->Size = System::Drawing::Size(224, 20);
			this->textBox83->TabIndex = 20;
			// 
			// textBox84
			// 
			this->textBox84->Location = System::Drawing::Point(29, 128);
			this->textBox84->Name = L"textBox84";
			this->textBox84->Size = System::Drawing::Size(224, 20);
			this->textBox84->TabIndex = 19;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label22->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label22->Location = System::Drawing::Point(6, 136);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(20, 24);
			this->label22->TabIndex = 18;
			this->label22->Text = L"4";
			// 
			// textBox85
			// 
			this->textBox85->Location = System::Drawing::Point(257, 105);
			this->textBox85->Name = L"textBox85";
			this->textBox85->Size = System::Drawing::Size(38, 20);
			this->textBox85->TabIndex = 17;
			// 
			// textBox86
			// 
			this->textBox86->Location = System::Drawing::Point(257, 86);
			this->textBox86->Name = L"textBox86";
			this->textBox86->Size = System::Drawing::Size(38, 20);
			this->textBox86->TabIndex = 16;
			// 
			// textBox87
			// 
			this->textBox87->Location = System::Drawing::Point(29, 105);
			this->textBox87->Name = L"textBox87";
			this->textBox87->Size = System::Drawing::Size(224, 20);
			this->textBox87->TabIndex = 15;
			// 
			// textBox88
			// 
			this->textBox88->Location = System::Drawing::Point(29, 86);
			this->textBox88->Name = L"textBox88";
			this->textBox88->Size = System::Drawing::Size(224, 20);
			this->textBox88->TabIndex = 14;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label23->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label23->Location = System::Drawing::Point(6, 94);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(20, 24);
			this->label23->TabIndex = 13;
			this->label23->Text = L"3";
			// 
			// textBox89
			// 
			this->textBox89->Location = System::Drawing::Point(257, 63);
			this->textBox89->Name = L"textBox89";
			this->textBox89->Size = System::Drawing::Size(38, 20);
			this->textBox89->TabIndex = 12;
			// 
			// textBox90
			// 
			this->textBox90->Location = System::Drawing::Point(257, 44);
			this->textBox90->Name = L"textBox90";
			this->textBox90->Size = System::Drawing::Size(38, 20);
			this->textBox90->TabIndex = 11;
			// 
			// textBox91
			// 
			this->textBox91->Location = System::Drawing::Point(29, 63);
			this->textBox91->Name = L"textBox91";
			this->textBox91->Size = System::Drawing::Size(224, 20);
			this->textBox91->TabIndex = 10;
			// 
			// textBox92
			// 
			this->textBox92->Location = System::Drawing::Point(29, 44);
			this->textBox92->Name = L"textBox92";
			this->textBox92->Size = System::Drawing::Size(224, 20);
			this->textBox92->TabIndex = 9;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label24->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label24->Location = System::Drawing::Point(6, 52);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(20, 24);
			this->label24->TabIndex = 8;
			this->label24->Text = L"2";
			// 
			// textBox93
			// 
			this->textBox93->Location = System::Drawing::Point(257, 21);
			this->textBox93->Name = L"textBox93";
			this->textBox93->Size = System::Drawing::Size(38, 20);
			this->textBox93->TabIndex = 7;
			// 
			// textBox94
			// 
			this->textBox94->Location = System::Drawing::Point(257, 2);
			this->textBox94->Name = L"textBox94";
			this->textBox94->Size = System::Drawing::Size(38, 20);
			this->textBox94->TabIndex = 6;
			// 
			// textBox95
			// 
			this->textBox95->Location = System::Drawing::Point(29, 21);
			this->textBox95->Name = L"textBox95";
			this->textBox95->Size = System::Drawing::Size(224, 20);
			this->textBox95->TabIndex = 5;
			// 
			// textBox96
			// 
			this->textBox96->Location = System::Drawing::Point(29, 2);
			this->textBox96->Name = L"textBox96";
			this->textBox96->Size = System::Drawing::Size(224, 20);
			this->textBox96->TabIndex = 4;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label25->ForeColor = System::Drawing::SystemColors::InfoText;
			this->label25->Location = System::Drawing::Point(6, 10);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(20, 24);
			this->label25->TabIndex = 0;
			this->label25->Text = L"1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 96);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(22, 124);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 29;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 275);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(21, 117);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 30;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(13, 439);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(21, 151);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 31;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(377, 468);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(21, 92);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 34;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(377, 305);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(21, 64);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 33;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(377, 88);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(21, 132);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 32;
			this->pictureBox6->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(715, 610);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::Window;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dars jadvali                 V 1.0";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 ///////////////
			 if(textBox40->Text=="") 
			 {textBox40->Visible=false; textBox38->Visible=false;} 
				else
			 {textBox40->Visible=true; textBox38->Visible=true;}
			 
			 if(textBox39->Text=="") 
			 {textBox39->Visible=false; textBox37->Visible=false;} 
				else
			 {textBox39->Visible=true; textBox37->Visible=true;}
			 ////////////////////////////
			 if(textBox36->Text=="") 
			 {textBox36->Visible=false; textBox34->Visible=false;} 
				else
			 {textBox36->Visible=true; textBox34->Visible=true;}
			
			 if(textBox35->Text=="") 
			 {textBox35->Visible=false; textBox33->Visible=false;} 
				else
			 {textBox35->Visible=true; textBox33->Visible=true;}
			 ////////////////////////////
			 if(textBox32->Text=="") 
			 {textBox32->Visible=false; textBox30->Visible=false;} 
				else
			 {textBox32->Visible=true; textBox30->Visible=true;}
			
			 if(textBox31->Text=="") 
			 {textBox31->Visible=false; textBox29->Visible=false;} 
				else
			 {textBox31->Visible=true; textBox29->Visible=true;}
			 /////////////////////////////
			 if(textBox28->Text=="") 
			 {textBox28->Visible=false; textBox26->Visible=false;} 
				else
			 {textBox28->Visible=true; textBox26->Visible=true;}
			
			 if(textBox27->Text=="") 
			 {textBox27->Visible=false; textBox25->Visible=false;} 
				else
			 {textBox27->Visible=true; textBox25->Visible=true;}
			 //////////////////////11111111111
			 if(textBox64->Text=="") 
			 {textBox64->Visible=false; textBox62->Visible=false;} 
				else
			 {textBox64->Visible=true; textBox62->Visible=true;}
			
			 if(textBox63->Text=="") 
			 {textBox63->Visible=false; textBox61->Visible=false;} 
				else
			 {textBox63->Visible=true; textBox61->Visible=true;}
			 ////////////////////////
			 if(textBox60->Text=="") 
			 {textBox60->Visible=false; textBox58->Visible=false;} 
				else
			 {textBox60->Visible=true; textBox58->Visible=true;}
			
			 if(textBox59->Text=="") 
			 {textBox59->Visible=false; textBox57->Visible=false;} 
				else
			 {textBox59->Visible=true; textBox57->Visible=true;}
			 ////////////////////////
			 if(textBox56->Text=="") 
			 {textBox56->Visible=false; textBox54->Visible=false;} 
				else
			 {textBox56->Visible=true; textBox54->Visible=true;}
			
			 if(textBox55->Text=="") 
			 {textBox55->Visible=false; textBox53->Visible=false;} 
				else
			 {textBox55->Visible=true; textBox53->Visible=true;}
			 //////////////////////////////
			 if(textBox52->Text=="") 
			 {textBox52->Visible=false; textBox50->Visible=false;} 
				else
			 {textBox52->Visible=true; textBox50->Visible=true;}
			
			 if(textBox51->Text=="") 
			 {textBox51->Visible=false; textBox49->Visible=false;} 
				else
			 {textBox51->Visible=true; textBox49->Visible=true;}
			 ///////////////////////
			 if(textBox96->Text=="") 
			 {textBox96->Visible=false; textBox94->Visible=false;} 
				else
			 {textBox96->Visible=true; textBox94->Visible=true;}
			
			 if(textBox95->Text=="") 
			 {textBox95->Visible=false; textBox93->Visible=false;} 
				else
			 {textBox95->Visible=true; textBox93->Visible=true;}
			 /////////////////////
			 if(textBox92->Text=="") 
			 {textBox92->Visible=false; textBox90->Visible=false;} 
				else
			 {textBox92->Visible=true; textBox90->Visible=true;}
			
			 if(textBox91->Text=="") 
			 {textBox91->Visible=false; textBox89->Visible=false;} 
				else
			 {textBox91->Visible=true; textBox89->Visible=true;}
			 //////////////////////
			 if(textBox88->Text=="") 
			 {textBox88->Visible=false; textBox86->Visible=false;} 
				else
			 {textBox88->Visible=true; textBox86->Visible=true;}
			
			 if(textBox87->Text=="") 
			 {textBox87->Visible=false; textBox85->Visible=false;} 
				else
			 {textBox87->Visible=true; textBox85->Visible=true;}
			 //////////////////////////////
			 if(textBox84->Text=="") 
			 {textBox84->Visible=false; textBox82->Visible=false;} 
				else
			 {textBox84->Visible=true; textBox82->Visible=true;}
			
			 if(textBox83->Text=="") 
			 {textBox83->Visible=false; textBox81->Visible=false;} 
				else
			 {textBox83->Visible=true; textBox81->Visible=true;}
			 ///////////////////////////
			 if(textBox16->Text=="") 
			 {textBox16->Visible=false; textBox14->Visible=false;} 
				else
			 {textBox16->Visible=true; textBox14->Visible=true;}
			
			 if(textBox15->Text=="") 
			 {textBox15->Visible=false; textBox13->Visible=false;} 
				else
			 {textBox15->Visible=true; textBox13->Visible=true;}
			 /////////////////////////
			 if(textBox12->Text=="") 
			 {textBox12->Visible=false; textBox10->Visible=false;} 
				else
			 {textBox12->Visible=true; textBox10->Visible=true;}
			
			 if(textBox11->Text=="") 
			 {textBox11->Visible=false; textBox9->Visible=false;} 
				else
			 {textBox11->Visible=true; textBox9->Visible=true;}
			 ////////////////////////
			 if(textBox8->Text=="") 
			 {textBox8->Visible=false; textBox6->Visible=false;} 
				else
			 {textBox8->Visible=true; textBox6->Visible=true;}
			
			 if(textBox7->Text=="") 
			 {textBox7->Visible=false; textBox5->Visible=false;} 
				else
			 {textBox7->Visible=true; textBox5->Visible=true;}
			 /////////////////////////////
			 if(textBox4->Text=="") 
			 {textBox4->Visible=false; textBox2->Visible=false;} 
				else
			 {textBox4->Visible=true; textBox2->Visible=true;}
			
			 if(textBox3->Text=="") 
			 {textBox3->Visible=false; textBox1->Visible=false;} 
				else
			 {textBox3->Visible=true; textBox1->Visible=true;}
			 /////////////////////////
			 if(textBox48->Text=="") 
			 {textBox48->Visible=false; textBox46->Visible=false;} 
				else
			 {textBox48->Visible=true; textBox46->Visible=true;}
			
			 if(textBox47->Text=="") 
			 {textBox47->Visible=false; textBox45->Visible=false;} 
				else
			 {textBox47->Visible=true; textBox45->Visible=true;}
			 /////////////////////////
			 if(textBox44->Text=="") 
			 {textBox44->Visible=false; textBox42->Visible=false;} 
				else
			 {textBox44->Visible=true; textBox42->Visible=true;}
			
			 if(textBox43->Text=="") 
			 {textBox43->Visible=false; textBox41->Visible=false;} 
				else
			 {textBox43->Visible=true; textBox41->Visible=true;}
			 //////////////////////////
			 if(textBox24->Text=="") 
			 {textBox24->Visible=false; textBox22->Visible=false;} 
				else
			 {textBox24->Visible=true; textBox22->Visible=true;}
			
			 if(textBox23->Text=="") 
			 {textBox23->Visible=false; textBox21->Visible=false;} 
				else
			 {textBox23->Visible=true; textBox21->Visible=true;}
			 //////////////////////////
			 if(textBox20->Text=="") 
			 {textBox20->Visible=false; textBox18->Visible=false;} 
				else
			 {textBox20->Visible=true; textBox18->Visible=true;}
			
			 if(textBox19->Text=="") 
			 {textBox19->Visible=false; textBox17->Visible=false;} 
				else
			 {textBox19->Visible=true; textBox17->Visible=true;}
			 /////////////////////////
			 if(textBox80->Text=="") 
			 {textBox80->Visible=false; textBox78->Visible=false;} 
				else
			 {textBox80->Visible=true; textBox78->Visible=true;}
			
			 if(textBox79->Text=="") 
			 {textBox79->Visible=false; textBox77->Visible=false;} 
				else
			 {textBox79->Visible=true; textBox77->Visible=true;}
			 /////////////////////////////////
			 if(textBox76->Text=="") 
			 {textBox76->Visible=false; textBox74->Visible=false;} 
				else
			 {textBox76->Visible=true; textBox74->Visible=true;}
			
			 if(textBox75->Text=="") 
			 {textBox75->Visible=false; textBox73->Visible=false;} 
				else
			 {textBox75->Visible=true; textBox73->Visible=true;}
			 ////////////////////////
			 if(textBox72->Text=="") 
			 {textBox72->Visible=false; textBox70->Visible=false;} 
				else
			 {textBox72->Visible=true; textBox70->Visible=true;}
			
			 if(textBox71->Text=="") 
			 {textBox71->Visible=false; textBox69->Visible=false;} 
				else
			 {textBox71->Visible=true; textBox69->Visible=true;}
			 ////////////////////////
			 if(textBox68->Text=="") 
			 {textBox68->Visible=false; textBox66->Visible=false;} 
				else
			 {textBox68->Visible=true; textBox66->Visible=true;}
			
			 if(textBox67->Text=="") 
			 {textBox67->Visible=false; textBox65->Visible=false;} 
				else
			 {textBox67->Visible=true; textBox65->Visible=true;}
			 //////////////////////

			 string s1,s2,s3,s4,m1,m2,m3,m4,s11,s22,s33,s44,m11,m22,m33,m44;
			 //Dushanba_START
			 ofstream out1("1.txt");
			 s1 = msclr::interop::marshal_as<string>(textBox40->Text);
			 m1 = msclr::interop::marshal_as<string>(textBox38->Text);
			 s11 = msclr::interop::marshal_as<string>(textBox39->Text);
			 m11 = msclr::interop::marshal_as<string>(textBox37->Text);

			 s2 = msclr::interop::marshal_as<string>(textBox36->Text);
			 m2 = msclr::interop::marshal_as<string>(textBox34->Text);
			 s22 = msclr::interop::marshal_as<string>(textBox35->Text);
			 m22 = msclr::interop::marshal_as<string>(textBox33->Text);

			 s3 = msclr::interop::marshal_as<string>(textBox32->Text);
			 m3 = msclr::interop::marshal_as<string>(textBox30->Text);
			 s33 = msclr::interop::marshal_as<string>(textBox31->Text);
			 m33 = msclr::interop::marshal_as<string>(textBox29->Text);

			 s4 = msclr::interop::marshal_as<string>(textBox28->Text);
			 m4 = msclr::interop::marshal_as<string>(textBox26->Text);
			 s44 = msclr::interop::marshal_as<string>(textBox27->Text);
			 m44 = msclr::interop::marshal_as<string>(textBox25->Text);

			 out1<<s1<<"#"<<m1<<endl<<s11<<"#"<<m11<<endl;
			 out1<<s2<<"#"<<m2<<endl<<s22<<"#"<<m22<<endl;
			 out1<<s3<<"#"<<m3<<endl<<s33<<"#"<<m33<<endl;
			 out1<<s4<<"#"<<m4<<endl<<s44<<"#"<<m44<<endl;

			 out1.close();
			 //Dushanba_END

			 //Seshanba_START
			 ofstream out2("2.txt");
			 s1 = msclr::interop::marshal_as<string>(textBox64->Text);
			 m1 = msclr::interop::marshal_as<string>(textBox62->Text);
			 s11 = msclr::interop::marshal_as<string>(textBox63->Text);
			 m11 = msclr::interop::marshal_as<string>(textBox61->Text);

			 s2 = msclr::interop::marshal_as<string>(textBox60->Text);
			 m2 = msclr::interop::marshal_as<string>(textBox58->Text);
			 s22 = msclr::interop::marshal_as<string>(textBox59->Text);
			 m22 = msclr::interop::marshal_as<string>(textBox57->Text);

			 s3 = msclr::interop::marshal_as<string>(textBox56->Text);
			 m3 = msclr::interop::marshal_as<string>(textBox54->Text);
			 s33 = msclr::interop::marshal_as<string>(textBox55->Text);
			 m33 = msclr::interop::marshal_as<string>(textBox53->Text);

			 s4 = msclr::interop::marshal_as<string>(textBox52->Text);
			 m4 = msclr::interop::marshal_as<string>(textBox50->Text);
			 s44 = msclr::interop::marshal_as<string>(textBox51->Text);
			 m44 = msclr::interop::marshal_as<string>(textBox49->Text);

			 out2<<s1<<"#"<<m1<<endl<<s11<<"#"<<m11<<endl;
			 out2<<s2<<"#"<<m2<<endl<<s22<<"#"<<m22<<endl;
			 out2<<s3<<"#"<<m3<<endl<<s33<<"#"<<m33<<endl;
			 out2<<s4<<"#"<<m4<<endl<<s44<<"#"<<m44<<endl;

			 out2.close();
			 //Seshanba_END

			 //Chorshanba_START
			 ofstream out3("3.txt");
			 s1 = msclr::interop::marshal_as<string>(textBox96->Text);
			 m1 = msclr::interop::marshal_as<string>(textBox94->Text);
			 s11 = msclr::interop::marshal_as<string>(textBox95->Text);
			 m11 = msclr::interop::marshal_as<string>(textBox93->Text);

			 s2 = msclr::interop::marshal_as<string>(textBox92->Text);
			 m2 = msclr::interop::marshal_as<string>(textBox90->Text);
			 s22 = msclr::interop::marshal_as<string>(textBox91->Text);
			 m22 = msclr::interop::marshal_as<string>(textBox89->Text);

			 s3 = msclr::interop::marshal_as<string>(textBox88->Text);
			 m3 = msclr::interop::marshal_as<string>(textBox86->Text);
			 s33 = msclr::interop::marshal_as<string>(textBox87->Text);
			 m33 = msclr::interop::marshal_as<string>(textBox85->Text);

			 s4 = msclr::interop::marshal_as<string>(textBox84->Text);
			 m4 = msclr::interop::marshal_as<string>(textBox82->Text);
			 s44 = msclr::interop::marshal_as<string>(textBox83->Text);
			 m44 = msclr::interop::marshal_as<string>(textBox81->Text);

			 out3<<s1<<"#"<<m1<<endl<<s11<<"#"<<m11<<endl;
			 out3<<s2<<"#"<<m2<<endl<<s22<<"#"<<m22<<endl;
			 out3<<s3<<"#"<<m3<<endl<<s33<<"#"<<m33<<endl;
			 out3<<s4<<"#"<<m4<<endl<<s44<<"#"<<m44<<endl;

			 out3.close();
			 //Chorshanba_END

			 //Payshanba_START
			 ofstream out4("4.txt");
			 s1 = msclr::interop::marshal_as<string>(textBox16->Text);
			 m1 = msclr::interop::marshal_as<string>(textBox14->Text);
			 s11 = msclr::interop::marshal_as<string>(textBox15->Text);
			 m11 = msclr::interop::marshal_as<string>(textBox13->Text);

			 s2 = msclr::interop::marshal_as<string>(textBox12->Text);
			 m2 = msclr::interop::marshal_as<string>(textBox10->Text);
			 s22 = msclr::interop::marshal_as<string>(textBox11->Text);
			 m22 = msclr::interop::marshal_as<string>(textBox9->Text);

			 s3 = msclr::interop::marshal_as<string>(textBox8->Text);
			 m3 = msclr::interop::marshal_as<string>(textBox6->Text);
			 s33 = msclr::interop::marshal_as<string>(textBox7->Text);
			 m33 = msclr::interop::marshal_as<string>(textBox5->Text);

			 s4 = msclr::interop::marshal_as<string>(textBox4->Text);
			 m4 = msclr::interop::marshal_as<string>(textBox2->Text);
			 s44 = msclr::interop::marshal_as<string>(textBox3->Text);
			 m44 = msclr::interop::marshal_as<string>(textBox1->Text);

			 out4<<s1<<"#"<<m1<<endl<<s11<<"#"<<m11<<endl;
			 out4<<s2<<"#"<<m2<<endl<<s22<<"#"<<m22<<endl;
			 out4<<s3<<"#"<<m3<<endl<<s33<<"#"<<m33<<endl;
			 out4<<s4<<"#"<<m4<<endl<<s44<<"#"<<m44<<endl;

			 out4.close();
			 //Payshanba_END

			 //Juma_START
			 ofstream out5("5.txt");
			 s1 = msclr::interop::marshal_as<string>(textBox48->Text);
			 m1 = msclr::interop::marshal_as<string>(textBox46->Text);
			 s11 = msclr::interop::marshal_as<string>(textBox47->Text);
			 m11 = msclr::interop::marshal_as<string>(textBox45->Text);

			 s2 = msclr::interop::marshal_as<string>(textBox44->Text);
			 m2 = msclr::interop::marshal_as<string>(textBox42->Text);
			 s22 = msclr::interop::marshal_as<string>(textBox43->Text);
			 m22 = msclr::interop::marshal_as<string>(textBox41->Text);

			 s3 = msclr::interop::marshal_as<string>(textBox24->Text);
			 m3 = msclr::interop::marshal_as<string>(textBox22->Text);
			 s33 = msclr::interop::marshal_as<string>(textBox23->Text);
			 m33 = msclr::interop::marshal_as<string>(textBox21->Text);

			 s4 = msclr::interop::marshal_as<string>(textBox20->Text);
			 m4 = msclr::interop::marshal_as<string>(textBox18->Text);
			 s44 = msclr::interop::marshal_as<string>(textBox19->Text);
			 m44 = msclr::interop::marshal_as<string>(textBox17->Text);

			 out5<<s1<<"#"<<m1<<endl<<s11<<"#"<<m11<<endl;
			 out5<<s2<<"#"<<m2<<endl<<s22<<"#"<<m22<<endl;
			 out5<<s3<<"#"<<m3<<endl<<s33<<"#"<<m33<<endl;
			 out5<<s4<<"#"<<m4<<endl<<s44<<"#"<<m44<<endl;

			 out5.close();
			 //Juma_END

			 //Shanba_START
			 ofstream out6("6.txt");
			 s1 = msclr::interop::marshal_as<string>(textBox80->Text);
			 m1 = msclr::interop::marshal_as<string>(textBox78->Text);
			 s11 = msclr::interop::marshal_as<string>(textBox79->Text);
			 m11 = msclr::interop::marshal_as<string>(textBox77->Text);

			 s2 = msclr::interop::marshal_as<string>(textBox76->Text);
			 m2 = msclr::interop::marshal_as<string>(textBox74->Text);
			 s22 = msclr::interop::marshal_as<string>(textBox75->Text);
			 m22 = msclr::interop::marshal_as<string>(textBox73->Text);

			 s3 = msclr::interop::marshal_as<string>(textBox72->Text);
			 m3 = msclr::interop::marshal_as<string>(textBox70->Text);
			 s33 = msclr::interop::marshal_as<string>(textBox71->Text);
			 m33 = msclr::interop::marshal_as<string>(textBox69->Text);

			 s4 = msclr::interop::marshal_as<string>(textBox68->Text);
			 m4 = msclr::interop::marshal_as<string>(textBox66->Text);
			 s44 = msclr::interop::marshal_as<string>(textBox67->Text);
			 m44 = msclr::interop::marshal_as<string>(textBox65->Text);

			 out6<<s1<<"#"<<m1<<endl<<s11<<"#"<<m11<<endl;
			 out6<<s2<<"#"<<m2<<endl<<s22<<"#"<<m22<<endl;
			 out6<<s3<<"#"<<m3<<endl<<s33<<"#"<<m33<<endl;
			 out6<<s4<<"#"<<m4<<endl<<s44<<"#"<<m44<<endl;

			 out6.close();
			 //Shanba_END

			 panel1->Enabled=false;
			 panel2->Enabled=false;
			 panel3->Enabled=false;
			 panel4->Enabled=false;
			 panel5->Enabled=false;
			 panel6->Enabled=false;
			 
			 button1->Visible=false;
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 String ^ S;
			 string s1,s2;
			 int x;
			 //Dushanba_START
			 ifstream in("1.txt");
			 //1-para_START
			 getline(in,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox40->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox38->Text = S;
			 
			 //maxraj
			 getline(in,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox39->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox37->Text = S;
			 //1-para_END
			 //2-para_START
			 getline(in,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox36->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox34->Text = S;
			 
			 //maxraj
			 getline(in,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox35->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox33->Text = S;
			 //2-para_END
			 //3-para_START
			 getline(in,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox32->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox30->Text = S;
			 
			 //maxraj
			 getline(in,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox31->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox29->Text = S;
			 //3-para_END
			 //4-para_START
			 getline(in,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox28->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox26->Text = S;
			 
			 //maxraj
			 getline(in,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox27->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox25->Text = S;
			 //4-para_END
			 in.close();
			 //Dushanba_END
			 
			 //Seshanba_START
			 ifstream inp("2.txt");
			 //1-para_START
			 getline(inp,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox64->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox62->Text = S;
			 
			 //maxraj
			 getline(inp,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox63->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox61->Text = S;
			 //1-para_END
			 //2-para_START
			 getline(inp,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox60->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox58->Text = S;
			 
			 //maxraj
			 getline(inp,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox59->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox57->Text = S;
			 //2-para_END
			 //3-para_START
			 getline(inp,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox56->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox54->Text = S;
			 
			 //maxraj
			 getline(inp,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox55->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox53->Text = S;
			 //3-para_END
			 //4-para_START
			 getline(inp,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox52->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox50->Text = S;
			 
			 //maxraj
			 getline(inp,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox51->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox49->Text = S;
			 //4-para_END
			 inp.close();
			 //Seshanba_END
			 
			 //Chorshanba_START
			 ifstream inn("3.txt");
			 //1-para_START
			 getline(inn,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox96->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox94->Text = S;
			 
			 //maxraj
			 getline(inn,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox95->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox93->Text = S;
			 //1-para_END
			 //2-para_START
			 getline(inn,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox92->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox90->Text = S;
			 
			 //maxraj
			 getline(inn,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox91->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox89->Text = S;
			 //2-para_END
			 //3-para_START
			 getline(inn,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox88->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox86->Text = S;
			 
			 //maxraj
			 getline(inn,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox87->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox85->Text = S;
			 //3-para_END
			 //4-para_START
			 getline(inn,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox84->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox82->Text = S;
			 
			 //maxraj
			 getline(inn,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox83->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox81->Text = S;
			 //4-para_END
			 inn.close();
			 //Chorshanba_END

			 //Payshanba_START
			 ifstream inz("4.txt");
			 //1-para_START
			 getline(inz,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox16->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox14->Text = S;
			 
			 //maxraj
			 getline(inz,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox15->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox13->Text = S;
			 //1-para_END
			 //2-para_START
			 getline(inz,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox12->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox10->Text = S;
			 
			 //maxraj
			 getline(inz,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox11->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox9->Text = S;
			 //2-para_END
			 //3-para_START
			 getline(inz,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox8->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox6->Text = S;
			 
			 //maxraj
			 getline(inz,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox7->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox5->Text = S;
			 //3-para_END
			 //4-para_START
			 getline(inz,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox4->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox2->Text = S;
			 
			 //maxraj
			 getline(inz,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox3->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox1->Text = S;
			 //4-para_END
			 inz.close();
			 //Payshanba_END

			 //Juma_START
			 ifstream ina("5.txt");
			 //1-para_START
			 getline(ina,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox48->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox46->Text = S;
			 
			 //maxraj
			 getline(ina,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox47->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox45->Text = S;
			 //1-para_END
			 //2-para_START
			 getline(ina,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox44->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox42->Text = S;
			 
			 //maxraj
			 getline(ina,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox43->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox41->Text = S;
			 //2-para_END
			 //3-para_START
			 getline(ina,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox24->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox22->Text = S;
			 
			 //maxraj
			 getline(ina,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox23->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox21->Text = S;
			 //3-para_END
			 //4-para_START
			 getline(ina,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox20->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox18->Text = S;
			 
			 //maxraj
			 getline(ina,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox19->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox17->Text = S;
			 //4-para_END
			 ina.close();
			 //Juma_END

			 //Shanba_START
			 ifstream inl("6.txt");
			 //1-para_START
			 getline(inl,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox80->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox78->Text = S;
			 
			 //maxraj
			 getline(inl,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox79->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox77->Text = S;
			 //1-para_END
			 //2-para_START
			 getline(inl,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox76->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox74->Text = S;
			 
			 //maxraj
			 getline(inl,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox75->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox73->Text = S;
			 //2-para_END
			 //3-para_START
			 getline(inl,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox72->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox70->Text = S;
			 
			 //maxraj
			 getline(inl,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox71->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox69->Text = S;
			 //3-para_END
			 //4-para_START
			 getline(inl,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 //surat
			 S = gcnew String(s1.c_str());
			 textBox68->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox66->Text = S;
			 
			 //maxraj
			 getline(inl,s1);
			 x = s1.find('#');
			 s2 = s1.substr(x+1,s1.size()-x);
			 s1.erase(x,s1.size()-x);
			 
			 S = gcnew String(s1.c_str());
			 textBox67->Text = S;
			 
			 S = gcnew String(s2.c_str());
			 textBox65->Text = S;
			 //4-para_END
			 inl.close();
			 //Shanba_END
			 ///////////////
			 if(textBox40->Text=="") 
			 {textBox40->Visible=false; textBox38->Visible=false;} 
				else
			 {textBox40->Visible=true; textBox38->Visible=true;}
			 
			 if(textBox39->Text=="") 
			 {textBox39->Visible=false; textBox37->Visible=false;} 
				else
			 {textBox39->Visible=true; textBox37->Visible=true;}
			 ////////////////////////////
			 if(textBox36->Text=="") 
			 {textBox36->Visible=false; textBox34->Visible=false;} 
				else
			 {textBox36->Visible=true; textBox34->Visible=true;}
			
			 if(textBox35->Text=="") 
			 {textBox35->Visible=false; textBox33->Visible=false;} 
				else
			 {textBox35->Visible=true; textBox33->Visible=true;}
			 ////////////////////////////
			 if(textBox32->Text=="") 
			 {textBox32->Visible=false; textBox30->Visible=false;} 
				else
			 {textBox32->Visible=true; textBox30->Visible=true;}
			
			 if(textBox31->Text=="") 
			 {textBox31->Visible=false; textBox29->Visible=false;} 
				else
			 {textBox31->Visible=true; textBox29->Visible=true;}
			 /////////////////////////////
			 if(textBox28->Text=="") 
			 {textBox28->Visible=false; textBox26->Visible=false;} 
				else
			 {textBox28->Visible=true; textBox26->Visible=true;}
			
			 if(textBox27->Text=="") 
			 {textBox27->Visible=false; textBox25->Visible=false;} 
				else
			 {textBox27->Visible=true; textBox25->Visible=true;}
			 //////////////////////11111111111
			 if(textBox64->Text=="") 
			 {textBox64->Visible=false; textBox62->Visible=false;} 
				else
			 {textBox64->Visible=true; textBox62->Visible=true;}
			
			 if(textBox63->Text=="") 
			 {textBox63->Visible=false; textBox61->Visible=false;} 
				else
			 {textBox63->Visible=true; textBox61->Visible=true;}
			 ////////////////////////
			 if(textBox60->Text=="") 
			 {textBox60->Visible=false; textBox58->Visible=false;} 
				else
			 {textBox60->Visible=true; textBox58->Visible=true;}
			
			 if(textBox59->Text=="") 
			 {textBox59->Visible=false; textBox57->Visible=false;} 
				else
			 {textBox59->Visible=true; textBox57->Visible=true;}
			 ////////////////////////
			 if(textBox56->Text=="") 
			 {textBox56->Visible=false; textBox54->Visible=false;} 
				else
			 {textBox56->Visible=true; textBox54->Visible=true;}
			
			 if(textBox55->Text=="") 
			 {textBox55->Visible=false; textBox53->Visible=false;} 
				else
			 {textBox55->Visible=true; textBox53->Visible=true;}
			 //////////////////////////////
			 if(textBox52->Text=="") 
			 {textBox52->Visible=false; textBox50->Visible=false;} 
				else
			 {textBox52->Visible=true; textBox50->Visible=true;}
			
			 if(textBox51->Text=="") 
			 {textBox51->Visible=false; textBox49->Visible=false;} 
				else
			 {textBox51->Visible=true; textBox49->Visible=true;}
			 ///////////////////////
			 if(textBox96->Text=="") 
			 {textBox96->Visible=false; textBox94->Visible=false;} 
				else
			 {textBox96->Visible=true; textBox94->Visible=true;}
			
			 if(textBox95->Text=="") 
			 {textBox95->Visible=false; textBox93->Visible=false;} 
				else
			 {textBox95->Visible=true; textBox93->Visible=true;}
			 /////////////////////
			 if(textBox92->Text=="") 
			 {textBox92->Visible=false; textBox90->Visible=false;} 
				else
			 {textBox92->Visible=true; textBox90->Visible=true;}
			
			 if(textBox91->Text=="") 
			 {textBox91->Visible=false; textBox89->Visible=false;} 
				else
			 {textBox91->Visible=true; textBox89->Visible=true;}
			 //////////////////////
			 if(textBox88->Text=="") 
			 {textBox88->Visible=false; textBox86->Visible=false;} 
				else
			 {textBox88->Visible=true; textBox86->Visible=true;}
			
			 if(textBox87->Text=="") 
			 {textBox87->Visible=false; textBox85->Visible=false;} 
				else
			 {textBox87->Visible=true; textBox85->Visible=true;}
			 //////////////////////////////
			 if(textBox84->Text=="") 
			 {textBox84->Visible=false; textBox82->Visible=false;} 
				else
			 {textBox84->Visible=true; textBox82->Visible=true;}
			
			 if(textBox83->Text=="") 
			 {textBox83->Visible=false; textBox81->Visible=false;} 
				else
			 {textBox83->Visible=true; textBox81->Visible=true;}
			 ///////////////////////////
			 if(textBox16->Text=="") 
			 {textBox16->Visible=false; textBox14->Visible=false;} 
				else
			 {textBox16->Visible=true; textBox14->Visible=true;}
			
			 if(textBox15->Text=="") 
			 {textBox15->Visible=false; textBox13->Visible=false;} 
				else
			 {textBox15->Visible=true; textBox13->Visible=true;}
			 /////////////////////////
			 if(textBox12->Text=="") 
			 {textBox12->Visible=false; textBox10->Visible=false;} 
				else
			 {textBox12->Visible=true; textBox10->Visible=true;}
			
			 if(textBox11->Text=="") 
			 {textBox11->Visible=false; textBox9->Visible=false;} 
				else
			 {textBox11->Visible=true; textBox9->Visible=true;}
			 ////////////////////////
			 if(textBox8->Text=="") 
			 {textBox8->Visible=false; textBox6->Visible=false;} 
				else
			 {textBox8->Visible=true; textBox6->Visible=true;}
			
			 if(textBox7->Text=="") 
			 {textBox7->Visible=false; textBox5->Visible=false;} 
				else
			 {textBox7->Visible=true; textBox5->Visible=true;}
			 /////////////////////////////
			 if(textBox4->Text=="") 
			 {textBox4->Visible=false; textBox2->Visible=false;} 
				else
			 {textBox4->Visible=true; textBox2->Visible=true;}
			
			 if(textBox3->Text=="") 
			 {textBox3->Visible=false; textBox1->Visible=false;} 
				else
			 {textBox3->Visible=true; textBox1->Visible=true;}
			 /////////////////////////
			 if(textBox48->Text=="") 
			 {textBox48->Visible=false; textBox46->Visible=false;} 
				else
			 {textBox48->Visible=true; textBox46->Visible=true;}
			
			 if(textBox47->Text=="") 
			 {textBox47->Visible=false; textBox45->Visible=false;} 
				else
			 {textBox47->Visible=true; textBox45->Visible=true;}
			 /////////////////////////
			 if(textBox44->Text=="") 
			 {textBox44->Visible=false; textBox42->Visible=false;} 
				else
			 {textBox44->Visible=true; textBox42->Visible=true;}
			
			 if(textBox43->Text=="") 
			 {textBox43->Visible=false; textBox41->Visible=false;} 
				else
			 {textBox43->Visible=true; textBox41->Visible=true;}
			 //////////////////////////
			 if(textBox24->Text=="") 
			 {textBox24->Visible=false; textBox22->Visible=false;} 
				else
			 {textBox24->Visible=true; textBox22->Visible=true;}
			
			 if(textBox23->Text=="") 
			 {textBox23->Visible=false; textBox21->Visible=false;} 
				else
			 {textBox23->Visible=true; textBox21->Visible=true;}
			 //////////////////////////
			 if(textBox20->Text=="") 
			 {textBox20->Visible=false; textBox18->Visible=false;} 
				else
			 {textBox20->Visible=true; textBox18->Visible=true;}
			
			 if(textBox19->Text=="") 
			 {textBox19->Visible=false; textBox17->Visible=false;} 
				else
			 {textBox19->Visible=true; textBox17->Visible=true;}
			 /////////////////////////
			 if(textBox80->Text=="") 
			 {textBox80->Visible=false; textBox78->Visible=false;} 
				else
			 {textBox80->Visible=true; textBox78->Visible=true;}
			
			 if(textBox79->Text=="") 
			 {textBox79->Visible=false; textBox77->Visible=false;} 
				else
			 {textBox79->Visible=true; textBox77->Visible=true;}
			 /////////////////////////////////
			 if(textBox76->Text=="") 
			 {textBox76->Visible=false; textBox74->Visible=false;} 
				else
			 {textBox76->Visible=true; textBox74->Visible=true;}
			
			 if(textBox75->Text=="") 
			 {textBox75->Visible=false; textBox73->Visible=false;} 
				else
			 {textBox75->Visible=true; textBox73->Visible=true;}
			 ////////////////////////
			 if(textBox72->Text=="") 
			 {textBox72->Visible=false; textBox70->Visible=false;} 
				else
			 {textBox72->Visible=true; textBox70->Visible=true;}
			
			 if(textBox71->Text=="") 
			 {textBox71->Visible=false; textBox69->Visible=false;} 
				else
			 {textBox71->Visible=true; textBox69->Visible=true;}
			 ////////////////////////
			 if(textBox68->Text=="") 
			 {textBox68->Visible=false; textBox66->Visible=false;} 
				else
			 {textBox68->Visible=true; textBox66->Visible=true;}
			
			 if(textBox67->Text=="") 
			 {textBox67->Visible=false; textBox65->Visible=false;} 
				else
			 {textBox67->Visible=true; textBox65->Visible=true;}
			 //////////////////////
		}
private: System::Void tozalashToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void chiqishToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void tahrirlashToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 panel1->Enabled=true;
			 panel2->Enabled=true;
			 panel3->Enabled=true;
			 panel4->Enabled=true;
			 panel5->Enabled=true;
			 panel6->Enabled=true;

			 ///////////////
			 {textBox40->Visible=true; textBox38->Visible=true;}
			
			 {textBox39->Visible=true; textBox37->Visible=true;}
			 
			 {textBox36->Visible=true; textBox34->Visible=true;}
			
			 {textBox35->Visible=true; textBox33->Visible=true;}
			 
			 {textBox32->Visible=true; textBox30->Visible=true;}
			
			 {textBox31->Visible=true; textBox29->Visible=true;}
			 
			 {textBox28->Visible=true; textBox26->Visible=true;}
			
			 {textBox27->Visible=true; textBox25->Visible=true;}
			 
			 {textBox64->Visible=true; textBox62->Visible=true;}
			
			 {textBox63->Visible=true; textBox61->Visible=true;}
			 
			 {textBox60->Visible=true; textBox58->Visible=true;}
			
			 {textBox59->Visible=true; textBox57->Visible=true;}
			 
			 {textBox56->Visible=true; textBox54->Visible=true;}
			
			 {textBox55->Visible=true; textBox53->Visible=true;}
			 
			 {textBox52->Visible=true; textBox50->Visible=true;}
			
			 {textBox51->Visible=true; textBox49->Visible=true;}
			 
			 {textBox96->Visible=true; textBox94->Visible=true;}
			
			 {textBox95->Visible=true; textBox93->Visible=true;}
			 
			 {textBox92->Visible=true; textBox90->Visible=true;}
			
			 {textBox91->Visible=true; textBox89->Visible=true;}
			 
			 {textBox88->Visible=true; textBox86->Visible=true;}
			
			 {textBox87->Visible=true; textBox85->Visible=true;}
			 
			 {textBox84->Visible=true; textBox82->Visible=true;}
			
			 {textBox83->Visible=true; textBox81->Visible=true;}
			 
			 {textBox16->Visible=true; textBox14->Visible=true;}
			
			 {textBox15->Visible=true; textBox13->Visible=true;}
			 
			 {textBox12->Visible=true; textBox10->Visible=true;}
			
			 {textBox11->Visible=true; textBox9->Visible=true;}
			 
			 {textBox8->Visible=true; textBox6->Visible=true;}
			
			 {textBox7->Visible=true; textBox5->Visible=true;}
			 
			 {textBox4->Visible=true; textBox2->Visible=true;}
			
			 {textBox3->Visible=true; textBox1->Visible=true;}
			 
			 {textBox48->Visible=true; textBox46->Visible=true;}
			
			 {textBox47->Visible=true; textBox45->Visible=true;}
			 
			 {textBox44->Visible=true; textBox42->Visible=true;}
			
			 {textBox43->Visible=true; textBox41->Visible=true;}
			 
			 {textBox24->Visible=true; textBox22->Visible=true;}
			
			 {textBox23->Visible=true; textBox21->Visible=true;}
			 
			 {textBox20->Visible=true; textBox18->Visible=true;}
			
			 {textBox19->Visible=true; textBox17->Visible=true;}
			 
			 {textBox80->Visible=true; textBox78->Visible=true;}
			
			 {textBox79->Visible=true; textBox77->Visible=true;}
			 
			 {textBox76->Visible=true; textBox74->Visible=true;}
			
			 {textBox75->Visible=true; textBox73->Visible=true;}
			 
			 {textBox72->Visible=true; textBox70->Visible=true;}
			
			 {textBox71->Visible=true; textBox69->Visible=true;}
			 
			 {textBox68->Visible=true; textBox66->Visible=true;}
			
			 {textBox67->Visible=true; textBox65->Visible=true;}
			 //////////////////////
			 
			 button1->Visible=true;

		 }
private: System::Void tozalashToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 if(MessageBox::Show("Jadvaldagi barcha ma'lumotlar o`chirilishiga rozimisiz?","Dastur",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
				
			 {textBox40->Text=""; textBox38->Text="";}
			
			 {textBox39->Text=""; textBox37->Text="";}
			 
			 {textBox36->Text=""; textBox34->Text="";}
			
			 {textBox35->Text=""; textBox33->Text="";}
			 
			 {textBox32->Text=""; textBox30->Text="";}
			
			 {textBox31->Text=""; textBox29->Text="";}
			 
			 {textBox28->Text=""; textBox26->Text="";}
			
			 {textBox27->Text=""; textBox25->Text="";}
			 
			 {textBox64->Text=""; textBox62->Text="";}
			
			 {textBox63->Text=""; textBox61->Text="";}
			 
			 {textBox60->Text=""; textBox58->Text="";}
			
			 {textBox59->Text=""; textBox57->Text="";}
			 
			 {textBox56->Text=""; textBox54->Text="";}
			
			 {textBox55->Text=""; textBox53->Text="";}
			 
			 {textBox52->Text=""; textBox50->Text="";}
			
			 {textBox51->Text=""; textBox49->Text="";}
			 
			 {textBox96->Text=""; textBox94->Text="";}
			
			 {textBox95->Text=""; textBox93->Text="";}
			 
			 {textBox92->Text=""; textBox90->Text="";}
			
			 {textBox91->Text=""; textBox89->Text="";}
			 
			 {textBox88->Text=""; textBox86->Text="";}
			
			 {textBox87->Text=""; textBox85->Text="";}
			 
			 {textBox84->Text=""; textBox82->Text="";}
			
			 {textBox83->Text=""; textBox81->Text="";}
			 
			 {textBox16->Text=""; textBox14->Text="";}
			
			 {textBox15->Text=""; textBox13->Text="";}
			 
			 {textBox12->Text=""; textBox10->Text="";}
			
			 {textBox11->Text=""; textBox9->Text="";}
			 
			 {textBox8->Text=""; textBox6->Text="";}
			
			 {textBox7->Text=""; textBox5->Text="";}
			 
			 {textBox4->Text=""; textBox2->Text="";}
			
			 {textBox3->Text=""; textBox1->Text="";}
			 
			 {textBox48->Text=""; textBox46->Text="";}
			
			 {textBox47->Text=""; textBox45->Text="";}
			 
			 {textBox44->Text=""; textBox42->Text="";}
			
			 {textBox43->Text=""; textBox41->Text="";}
			 
			 {textBox24->Text=""; textBox22->Text="";}
			
			 {textBox23->Text=""; textBox21->Text="";}
			 
			 {textBox20->Text=""; textBox18->Text="";}
			
			 {textBox19->Text=""; textBox17->Text="";}
			 
			 {textBox80->Text=""; textBox78->Text="";}
			
			 {textBox79->Text=""; textBox77->Text="";}
			 
			 {textBox76->Text=""; textBox74->Text="";}
			
			 {textBox75->Text=""; textBox73->Text="";}
			 
			 {textBox72->Text=""; textBox70->Text="";}
			
			 {textBox71->Text=""; textBox69->Text="";}
			 
			 {textBox68->Text=""; textBox66->Text="";}
			
			 {textBox67->Text=""; textBox65->Text="";}

			 button1_Click(sender,e);
			 }
		 }
};
}

