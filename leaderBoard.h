#pragma once
#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>

namespace shi12bAssignment2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;

	struct grade {
		int num;
		std::string name;
		std::string date;
		double time;
		int score;
	};

	/// <summary>
	/// leaderBoard 摘要
	/// </summary>
	public ref class leaderBoard : public System::Windows::Forms::Form
	{
	public:
		leaderBoard(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~leaderBoard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  name1;
	private: System::Windows::Forms::Label^  name2;
	private: System::Windows::Forms::Label^  name3;
	private: System::Windows::Forms::Label^  name4;
	private: System::Windows::Forms::Label^  name5;
	private: System::Windows::Forms::Label^  name6;
	private: System::Windows::Forms::Label^  name7;
	private: System::Windows::Forms::Label^  name8;
	private: System::Windows::Forms::Label^  name9;
	private: System::Windows::Forms::Label^  name10;
	private: System::Windows::Forms::Label^  time1;
	private: System::Windows::Forms::Label^  time2;
	private: System::Windows::Forms::Label^  time3;
	private: System::Windows::Forms::Label^  time4;
	private: System::Windows::Forms::Label^  time5;
	private: System::Windows::Forms::Label^  time6;
	private: System::Windows::Forms::Label^  time7;
	private: System::Windows::Forms::Label^  time8;
	private: System::Windows::Forms::Label^  time9;
	private: System::Windows::Forms::Label^  time10;
	private: System::Windows::Forms::Label^  queen1;
	private: System::Windows::Forms::Label^  queen2;
	private: System::Windows::Forms::Label^  queen3;
	private: System::Windows::Forms::Label^  queen4;
	private: System::Windows::Forms::Label^  queen5;
	private: System::Windows::Forms::Label^  queen6;
	private: System::Windows::Forms::Label^  queen7;
	private: System::Windows::Forms::Label^  queen8;
	private: System::Windows::Forms::Label^  queen9;
	private: System::Windows::Forms::Label^  queen10;
	private: System::Windows::Forms::Label^  score1;
	private: System::Windows::Forms::Label^  score2;
	private: System::Windows::Forms::Label^  score3;
	private: System::Windows::Forms::Label^  score4;
	private: System::Windows::Forms::Label^  score5;
	private: System::Windows::Forms::Label^  score6;
	private: System::Windows::Forms::Label^  score7;
	private: System::Windows::Forms::Label^  score8;
	private: System::Windows::Forms::Label^  score9;
	private: System::Windows::Forms::Label^  score10;
	private: System::Windows::Forms::Label^  date1;
	private: System::Windows::Forms::Label^  date2;
	private: System::Windows::Forms::Label^  date3;
	private: System::Windows::Forms::Label^  date4;
	private: System::Windows::Forms::Label^  date5;
	private: System::Windows::Forms::Label^  date6;
	private: System::Windows::Forms::Label^  date7;
	private: System::Windows::Forms::Label^  date8;
	private: System::Windows::Forms::Label^  date9;
	private: System::Windows::Forms::Label^  date10;



















































	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(leaderBoard::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->name1 = (gcnew System::Windows::Forms::Label());
			this->name2 = (gcnew System::Windows::Forms::Label());
			this->name3 = (gcnew System::Windows::Forms::Label());
			this->name4 = (gcnew System::Windows::Forms::Label());
			this->name5 = (gcnew System::Windows::Forms::Label());
			this->name6 = (gcnew System::Windows::Forms::Label());
			this->name7 = (gcnew System::Windows::Forms::Label());
			this->name8 = (gcnew System::Windows::Forms::Label());
			this->name9 = (gcnew System::Windows::Forms::Label());
			this->name10 = (gcnew System::Windows::Forms::Label());
			this->time1 = (gcnew System::Windows::Forms::Label());
			this->time2 = (gcnew System::Windows::Forms::Label());
			this->time3 = (gcnew System::Windows::Forms::Label());
			this->time4 = (gcnew System::Windows::Forms::Label());
			this->time5 = (gcnew System::Windows::Forms::Label());
			this->time6 = (gcnew System::Windows::Forms::Label());
			this->time7 = (gcnew System::Windows::Forms::Label());
			this->time8 = (gcnew System::Windows::Forms::Label());
			this->time9 = (gcnew System::Windows::Forms::Label());
			this->time10 = (gcnew System::Windows::Forms::Label());
			this->queen1 = (gcnew System::Windows::Forms::Label());
			this->queen2 = (gcnew System::Windows::Forms::Label());
			this->queen3 = (gcnew System::Windows::Forms::Label());
			this->queen4 = (gcnew System::Windows::Forms::Label());
			this->queen5 = (gcnew System::Windows::Forms::Label());
			this->queen6 = (gcnew System::Windows::Forms::Label());
			this->queen7 = (gcnew System::Windows::Forms::Label());
			this->queen8 = (gcnew System::Windows::Forms::Label());
			this->queen9 = (gcnew System::Windows::Forms::Label());
			this->queen10 = (gcnew System::Windows::Forms::Label());
			this->score1 = (gcnew System::Windows::Forms::Label());
			this->score2 = (gcnew System::Windows::Forms::Label());
			this->score3 = (gcnew System::Windows::Forms::Label());
			this->score4 = (gcnew System::Windows::Forms::Label());
			this->score5 = (gcnew System::Windows::Forms::Label());
			this->score6 = (gcnew System::Windows::Forms::Label());
			this->score7 = (gcnew System::Windows::Forms::Label());
			this->score8 = (gcnew System::Windows::Forms::Label());
			this->score9 = (gcnew System::Windows::Forms::Label());
			this->score10 = (gcnew System::Windows::Forms::Label());
			this->date1 = (gcnew System::Windows::Forms::Label());
			this->date2 = (gcnew System::Windows::Forms::Label());
			this->date3 = (gcnew System::Windows::Forms::Label());
			this->date4 = (gcnew System::Windows::Forms::Label());
			this->date5 = (gcnew System::Windows::Forms::Label());
			this->date6 = (gcnew System::Windows::Forms::Label());
			this->date7 = (gcnew System::Windows::Forms::Label());
			this->date8 = (gcnew System::Windows::Forms::Label());
			this->date9 = (gcnew System::Windows::Forms::Label());
			this->date10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(261, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Top 10 Scores";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Pos.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(112, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(234, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 12);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Time";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(317, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 12);
			this->label5->TabIndex = 4;
			this->label5->Text = L"#of Queens";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(426, 53);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 12);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Score";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(507, 53);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 12);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Date";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(46, 86);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(17, 12);
			this->label8->TabIndex = 7;
			this->label8->Text = L"1.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(46, 118);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(17, 12);
			this->label9->TabIndex = 8;
			this->label9->Text = L"2.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(46, 150);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(17, 12);
			this->label10->TabIndex = 9;
			this->label10->Text = L"3.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(46, 181);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(17, 12);
			this->label11->TabIndex = 10;
			this->label11->Text = L"4.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(46, 211);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(17, 12);
			this->label12->TabIndex = 11;
			this->label12->Text = L"5.";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(46, 243);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(17, 12);
			this->label13->TabIndex = 12;
			this->label13->Text = L"6.";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(46, 270);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(17, 12);
			this->label14->TabIndex = 13;
			this->label14->Text = L"7.";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(46, 301);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(17, 12);
			this->label15->TabIndex = 14;
			this->label15->Text = L"8.";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(46, 336);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(17, 12);
			this->label16->TabIndex = 15;
			this->label16->Text = L"9.";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(46, 373);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(23, 12);
			this->label17->TabIndex = 16;
			this->label17->Text = L"10.";
			this->label17->Click += gcnew System::EventHandler(this, &leaderBoard::label17_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(307, 418);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &leaderBoard::button1_Click);
			// 
			// name1
			// 
			this->name1->AutoSize = true;
			this->name1->Location = System::Drawing::Point(112, 86);
			this->name1->Name = L"name1";
			this->name1->Size = System::Drawing::Size(29, 12);
			this->name1->TabIndex = 18;
			this->name1->Text = L"Name";
			// 
			// name2
			// 
			this->name2->AutoSize = true;
			this->name2->Location = System::Drawing::Point(112, 118);
			this->name2->Name = L"name2";
			this->name2->Size = System::Drawing::Size(29, 12);
			this->name2->TabIndex = 19;
			this->name2->Text = L"Name";
			// 
			// name3
			// 
			this->name3->AutoSize = true;
			this->name3->Location = System::Drawing::Point(112, 150);
			this->name3->Name = L"name3";
			this->name3->Size = System::Drawing::Size(29, 12);
			this->name3->TabIndex = 20;
			this->name3->Text = L"Name";
			// 
			// name4
			// 
			this->name4->AutoSize = true;
			this->name4->Location = System::Drawing::Point(112, 181);
			this->name4->Name = L"name4";
			this->name4->Size = System::Drawing::Size(29, 12);
			this->name4->TabIndex = 21;
			this->name4->Text = L"Name";
			// 
			// name5
			// 
			this->name5->AutoSize = true;
			this->name5->Location = System::Drawing::Point(112, 211);
			this->name5->Name = L"name5";
			this->name5->Size = System::Drawing::Size(29, 12);
			this->name5->TabIndex = 22;
			this->name5->Text = L"Name";
			// 
			// name6
			// 
			this->name6->AutoSize = true;
			this->name6->Location = System::Drawing::Point(112, 243);
			this->name6->Name = L"name6";
			this->name6->Size = System::Drawing::Size(29, 12);
			this->name6->TabIndex = 23;
			this->name6->Text = L"Name";
			// 
			// name7
			// 
			this->name7->AutoSize = true;
			this->name7->Location = System::Drawing::Point(112, 270);
			this->name7->Name = L"name7";
			this->name7->Size = System::Drawing::Size(29, 12);
			this->name7->TabIndex = 24;
			this->name7->Text = L"Name";
			// 
			// name8
			// 
			this->name8->AutoSize = true;
			this->name8->Location = System::Drawing::Point(112, 301);
			this->name8->Name = L"name8";
			this->name8->Size = System::Drawing::Size(29, 12);
			this->name8->TabIndex = 25;
			this->name8->Text = L"Name";
			// 
			// name9
			// 
			this->name9->AutoSize = true;
			this->name9->Location = System::Drawing::Point(112, 336);
			this->name9->Name = L"name9";
			this->name9->Size = System::Drawing::Size(29, 12);
			this->name9->TabIndex = 26;
			this->name9->Text = L"Name";
			// 
			// name10
			// 
			this->name10->AutoSize = true;
			this->name10->Location = System::Drawing::Point(112, 373);
			this->name10->Name = L"name10";
			this->name10->Size = System::Drawing::Size(29, 12);
			this->name10->TabIndex = 27;
			this->name10->Text = L"Name";
			// 
			// time1
			// 
			this->time1->AutoSize = true;
			this->time1->Location = System::Drawing::Point(234, 86);
			this->time1->Name = L"time1";
			this->time1->Size = System::Drawing::Size(29, 12);
			this->time1->TabIndex = 28;
			this->time1->Text = L"Time";
			// 
			// time2
			// 
			this->time2->AutoSize = true;
			this->time2->Location = System::Drawing::Point(234, 118);
			this->time2->Name = L"time2";
			this->time2->Size = System::Drawing::Size(29, 12);
			this->time2->TabIndex = 29;
			this->time2->Text = L"Time";
			// 
			// time3
			// 
			this->time3->AutoSize = true;
			this->time3->Location = System::Drawing::Point(234, 150);
			this->time3->Name = L"time3";
			this->time3->Size = System::Drawing::Size(29, 12);
			this->time3->TabIndex = 30;
			this->time3->Text = L"Time";
			// 
			// time4
			// 
			this->time4->AutoSize = true;
			this->time4->Location = System::Drawing::Point(234, 181);
			this->time4->Name = L"time4";
			this->time4->Size = System::Drawing::Size(29, 12);
			this->time4->TabIndex = 31;
			this->time4->Text = L"Time";
			// 
			// time5
			// 
			this->time5->AutoSize = true;
			this->time5->Location = System::Drawing::Point(234, 211);
			this->time5->Name = L"time5";
			this->time5->Size = System::Drawing::Size(29, 12);
			this->time5->TabIndex = 32;
			this->time5->Text = L"Time";
			// 
			// time6
			// 
			this->time6->AutoSize = true;
			this->time6->Location = System::Drawing::Point(234, 243);
			this->time6->Name = L"time6";
			this->time6->Size = System::Drawing::Size(29, 12);
			this->time6->TabIndex = 33;
			this->time6->Text = L"Time";
			// 
			// time7
			// 
			this->time7->AutoSize = true;
			this->time7->Location = System::Drawing::Point(234, 270);
			this->time7->Name = L"time7";
			this->time7->Size = System::Drawing::Size(29, 12);
			this->time7->TabIndex = 34;
			this->time7->Text = L"Time";
			// 
			// time8
			// 
			this->time8->AutoSize = true;
			this->time8->Location = System::Drawing::Point(234, 301);
			this->time8->Name = L"time8";
			this->time8->Size = System::Drawing::Size(29, 12);
			this->time8->TabIndex = 35;
			this->time8->Text = L"Time";
			// 
			// time9
			// 
			this->time9->AutoSize = true;
			this->time9->Location = System::Drawing::Point(234, 336);
			this->time9->Name = L"time9";
			this->time9->Size = System::Drawing::Size(29, 12);
			this->time9->TabIndex = 36;
			this->time9->Text = L"Time";
			// 
			// time10
			// 
			this->time10->AutoSize = true;
			this->time10->Location = System::Drawing::Point(234, 373);
			this->time10->Name = L"time10";
			this->time10->Size = System::Drawing::Size(29, 12);
			this->time10->TabIndex = 37;
			this->time10->Text = L"Time";
			// 
			// queen1
			// 
			this->queen1->AutoSize = true;
			this->queen1->Location = System::Drawing::Point(317, 86);
			this->queen1->Name = L"queen1";
			this->queen1->Size = System::Drawing::Size(65, 12);
			this->queen1->TabIndex = 38;
			this->queen1->Text = L"#of Queens";
			// 
			// queen2
			// 
			this->queen2->AutoSize = true;
			this->queen2->Location = System::Drawing::Point(317, 118);
			this->queen2->Name = L"queen2";
			this->queen2->Size = System::Drawing::Size(65, 12);
			this->queen2->TabIndex = 39;
			this->queen2->Text = L"#of Queens";
			// 
			// queen3
			// 
			this->queen3->AutoSize = true;
			this->queen3->Location = System::Drawing::Point(317, 150);
			this->queen3->Name = L"queen3";
			this->queen3->Size = System::Drawing::Size(65, 12);
			this->queen3->TabIndex = 40;
			this->queen3->Text = L"#of Queens";
			// 
			// queen4
			// 
			this->queen4->AutoSize = true;
			this->queen4->Location = System::Drawing::Point(317, 181);
			this->queen4->Name = L"queen4";
			this->queen4->Size = System::Drawing::Size(65, 12);
			this->queen4->TabIndex = 41;
			this->queen4->Text = L"#of Queens";
			// 
			// queen5
			// 
			this->queen5->AutoSize = true;
			this->queen5->Location = System::Drawing::Point(317, 211);
			this->queen5->Name = L"queen5";
			this->queen5->Size = System::Drawing::Size(65, 12);
			this->queen5->TabIndex = 42;
			this->queen5->Text = L"#of Queens";
			// 
			// queen6
			// 
			this->queen6->AutoSize = true;
			this->queen6->Location = System::Drawing::Point(317, 243);
			this->queen6->Name = L"queen6";
			this->queen6->Size = System::Drawing::Size(65, 12);
			this->queen6->TabIndex = 43;
			this->queen6->Text = L"#of Queens";
			// 
			// queen7
			// 
			this->queen7->AutoSize = true;
			this->queen7->Location = System::Drawing::Point(317, 270);
			this->queen7->Name = L"queen7";
			this->queen7->Size = System::Drawing::Size(65, 12);
			this->queen7->TabIndex = 44;
			this->queen7->Text = L"#of Queens";
			// 
			// queen8
			// 
			this->queen8->AutoSize = true;
			this->queen8->Location = System::Drawing::Point(317, 301);
			this->queen8->Name = L"queen8";
			this->queen8->Size = System::Drawing::Size(65, 12);
			this->queen8->TabIndex = 45;
			this->queen8->Text = L"#of Queens";
			// 
			// queen9
			// 
			this->queen9->AutoSize = true;
			this->queen9->Location = System::Drawing::Point(317, 336);
			this->queen9->Name = L"queen9";
			this->queen9->Size = System::Drawing::Size(65, 12);
			this->queen9->TabIndex = 46;
			this->queen9->Text = L"#of Queens";
			// 
			// queen10
			// 
			this->queen10->AutoSize = true;
			this->queen10->Location = System::Drawing::Point(317, 373);
			this->queen10->Name = L"queen10";
			this->queen10->Size = System::Drawing::Size(65, 12);
			this->queen10->TabIndex = 47;
			this->queen10->Text = L"#of Queens";
			// 
			// score1
			// 
			this->score1->AutoSize = true;
			this->score1->Location = System::Drawing::Point(426, 86);
			this->score1->Name = L"score1";
			this->score1->Size = System::Drawing::Size(35, 12);
			this->score1->TabIndex = 48;
			this->score1->Text = L"Score";
			// 
			// score2
			// 
			this->score2->AutoSize = true;
			this->score2->Location = System::Drawing::Point(426, 118);
			this->score2->Name = L"score2";
			this->score2->Size = System::Drawing::Size(35, 12);
			this->score2->TabIndex = 49;
			this->score2->Text = L"Score";
			// 
			// score3
			// 
			this->score3->AutoSize = true;
			this->score3->Location = System::Drawing::Point(426, 150);
			this->score3->Name = L"score3";
			this->score3->Size = System::Drawing::Size(35, 12);
			this->score3->TabIndex = 50;
			this->score3->Text = L"Score";
			// 
			// score4
			// 
			this->score4->AutoSize = true;
			this->score4->Location = System::Drawing::Point(426, 181);
			this->score4->Name = L"score4";
			this->score4->Size = System::Drawing::Size(35, 12);
			this->score4->TabIndex = 51;
			this->score4->Text = L"Score";
			// 
			// score5
			// 
			this->score5->AutoSize = true;
			this->score5->Location = System::Drawing::Point(426, 211);
			this->score5->Name = L"score5";
			this->score5->Size = System::Drawing::Size(35, 12);
			this->score5->TabIndex = 52;
			this->score5->Text = L"Score";
			// 
			// score6
			// 
			this->score6->AutoSize = true;
			this->score6->Location = System::Drawing::Point(426, 243);
			this->score6->Name = L"score6";
			this->score6->Size = System::Drawing::Size(35, 12);
			this->score6->TabIndex = 53;
			this->score6->Text = L"Score";
			// 
			// score7
			// 
			this->score7->AutoSize = true;
			this->score7->Location = System::Drawing::Point(426, 270);
			this->score7->Name = L"score7";
			this->score7->Size = System::Drawing::Size(35, 12);
			this->score7->TabIndex = 54;
			this->score7->Text = L"Score";
			// 
			// score8
			// 
			this->score8->AutoSize = true;
			this->score8->Location = System::Drawing::Point(426, 301);
			this->score8->Name = L"score8";
			this->score8->Size = System::Drawing::Size(35, 12);
			this->score8->TabIndex = 55;
			this->score8->Text = L"Score";
			// 
			// score9
			// 
			this->score9->AutoSize = true;
			this->score9->Location = System::Drawing::Point(426, 336);
			this->score9->Name = L"score9";
			this->score9->Size = System::Drawing::Size(35, 12);
			this->score9->TabIndex = 56;
			this->score9->Text = L"Score";
			// 
			// score10
			// 
			this->score10->AutoSize = true;
			this->score10->Location = System::Drawing::Point(426, 373);
			this->score10->Name = L"score10";
			this->score10->Size = System::Drawing::Size(35, 12);
			this->score10->TabIndex = 57;
			this->score10->Text = L"Score";
			// 
			// date1
			// 
			this->date1->AutoSize = true;
			this->date1->Location = System::Drawing::Point(507, 86);
			this->date1->Name = L"date1";
			this->date1->Size = System::Drawing::Size(29, 12);
			this->date1->TabIndex = 58;
			this->date1->Text = L"Date";
			// 
			// date2
			// 
			this->date2->AutoSize = true;
			this->date2->Location = System::Drawing::Point(507, 118);
			this->date2->Name = L"date2";
			this->date2->Size = System::Drawing::Size(29, 12);
			this->date2->TabIndex = 59;
			this->date2->Text = L"Date";
			// 
			// date3
			// 
			this->date3->AutoSize = true;
			this->date3->Location = System::Drawing::Point(507, 150);
			this->date3->Name = L"date3";
			this->date3->Size = System::Drawing::Size(29, 12);
			this->date3->TabIndex = 60;
			this->date3->Text = L"Date";
			// 
			// date4
			// 
			this->date4->AutoSize = true;
			this->date4->Location = System::Drawing::Point(507, 181);
			this->date4->Name = L"date4";
			this->date4->Size = System::Drawing::Size(29, 12);
			this->date4->TabIndex = 61;
			this->date4->Text = L"Date";
			// 
			// date5
			// 
			this->date5->AutoSize = true;
			this->date5->Location = System::Drawing::Point(507, 211);
			this->date5->Name = L"date5";
			this->date5->Size = System::Drawing::Size(29, 12);
			this->date5->TabIndex = 62;
			this->date5->Text = L"Date";
			// 
			// date6
			// 
			this->date6->AutoSize = true;
			this->date6->Location = System::Drawing::Point(507, 243);
			this->date6->Name = L"date6";
			this->date6->Size = System::Drawing::Size(29, 12);
			this->date6->TabIndex = 63;
			this->date6->Text = L"Date";
			// 
			// date7
			// 
			this->date7->AutoSize = true;
			this->date7->Location = System::Drawing::Point(507, 270);
			this->date7->Name = L"date7";
			this->date7->Size = System::Drawing::Size(29, 12);
			this->date7->TabIndex = 64;
			this->date7->Text = L"Date";
			// 
			// date8
			// 
			this->date8->AutoSize = true;
			this->date8->Location = System::Drawing::Point(507, 301);
			this->date8->Name = L"date8";
			this->date8->Size = System::Drawing::Size(29, 12);
			this->date8->TabIndex = 65;
			this->date8->Text = L"Date";
			// 
			// date9
			// 
			this->date9->AutoSize = true;
			this->date9->Location = System::Drawing::Point(507, 336);
			this->date9->Name = L"date9";
			this->date9->Size = System::Drawing::Size(29, 12);
			this->date9->TabIndex = 66;
			this->date9->Text = L"Date";
			// 
			// date10
			// 
			this->date10->AutoSize = true;
			this->date10->Location = System::Drawing::Point(507, 373);
			this->date10->Name = L"date10";
			this->date10->Size = System::Drawing::Size(29, 12);
			this->date10->TabIndex = 67;
			this->date10->Text = L"Date";
			// 
			// leaderBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(668, 470);
			this->Controls->Add(this->date10);
			this->Controls->Add(this->date9);
			this->Controls->Add(this->date8);
			this->Controls->Add(this->date7);
			this->Controls->Add(this->date6);
			this->Controls->Add(this->date5);
			this->Controls->Add(this->date4);
			this->Controls->Add(this->date3);
			this->Controls->Add(this->date2);
			this->Controls->Add(this->date1);
			this->Controls->Add(this->score10);
			this->Controls->Add(this->score9);
			this->Controls->Add(this->score8);
			this->Controls->Add(this->score7);
			this->Controls->Add(this->score6);
			this->Controls->Add(this->score5);
			this->Controls->Add(this->score4);
			this->Controls->Add(this->score3);
			this->Controls->Add(this->score2);
			this->Controls->Add(this->score1);
			this->Controls->Add(this->queen10);
			this->Controls->Add(this->queen9);
			this->Controls->Add(this->queen8);
			this->Controls->Add(this->queen7);
			this->Controls->Add(this->queen6);
			this->Controls->Add(this->queen5);
			this->Controls->Add(this->queen4);
			this->Controls->Add(this->queen3);
			this->Controls->Add(this->queen2);
			this->Controls->Add(this->queen1);
			this->Controls->Add(this->time10);
			this->Controls->Add(this->time9);
			this->Controls->Add(this->time8);
			this->Controls->Add(this->time7);
			this->Controls->Add(this->time6);
			this->Controls->Add(this->time5);
			this->Controls->Add(this->time4);
			this->Controls->Add(this->time3);
			this->Controls->Add(this->time2);
			this->Controls->Add(this->time1);
			this->Controls->Add(this->name10);
			this->Controls->Add(this->name9);
			this->Controls->Add(this->name8);
			this->Controls->Add(this->name7);
			this->Controls->Add(this->name6);
			this->Controls->Add(this->name5);
			this->Controls->Add(this->name4);
			this->Controls->Add(this->name3);
			this->Controls->Add(this->name2);
			this->Controls->Add(this->name1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"leaderBoard";
			this->Text = L"leaderBoard";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
		 public: void setUp() {
			 grade grades[50];
			 int count = 0;
			 std::ifstream file;
			 file.open("score.txt");
			 while (file >> grades[count].name) {
				 //printf("%s\r\n",grades[count].name);  all the string become true and the unreadable code was shown on the terminal. I couldn't solve
				 file >> grades[count].date;
				 file >> grades[count].time;
				 file >> grades[count].score;
				 file >> grades[count].num;
				 count++;
			 }
			 file.close();
			 for (int i = 0; i < count; i++) {
				 for (int j = 1; j < count; j++) {
					 compare(&grades[i], &grades[j]);
				 }
			 }
			 if (count >= 1) {
				 name1->Text = Convert::ToString((grades[0].name).c_str());
				 date1->Text = Convert::ToString((grades[0].date).c_str());
				 queen1->Text = Convert::ToString(grades[0].num);
				 time1->Text = Convert::ToString(grades[0].time);
				 score1->Text = Convert::ToString(grades[0].score);
			 }
			 if (count >= 2) {
				 name2->Text = Convert::ToString((grades[1].name).c_str());
				 date2->Text = Convert::ToString((grades[1].date).c_str());
				 queen2->Text = Convert::ToString(grades[1].num);
				 time2->Text = Convert::ToString(grades[1].time);
				 score2->Text = Convert::ToString(grades[1].score);
			 }
			 if (count >= 3) {
				 name3->Text = Convert::ToString((grades[2].name).c_str());
				 date3->Text = Convert::ToString((grades[2].date).c_str());
				 queen3->Text = Convert::ToString(grades[2].num);
				 time3->Text = Convert::ToString(grades[2].time);
				 score3->Text = Convert::ToString(grades[2].score);
			 }
			 if (count >= 4) {
				 name4->Text = Convert::ToString((grades[3].name).c_str());
				 date4->Text = Convert::ToString((grades[3].date).c_str());
				 queen4->Text = Convert::ToString(grades[3].num);
				 time4->Text = Convert::ToString(grades[3].time);
				 score4->Text = Convert::ToString(grades[3].score);
			 }
			 if (count >= 5) {
				 name5->Text = Convert::ToString((grades[4].name).c_str());
				 date5->Text = Convert::ToString((grades[4].date).c_str());
				 queen5->Text = Convert::ToString(grades[4].num);
				 time5->Text = Convert::ToString(grades[4].time);
				 score5->Text = Convert::ToString(grades[4].score);
			 }
			 if (count >= 6) {
				 name6->Text = Convert::ToString((grades[5].name).c_str());
				 date6->Text = Convert::ToString((grades[5].date).c_str());
				 queen6->Text = Convert::ToString(grades[5].num);
				 time6->Text = Convert::ToString(grades[5].time);
				 score6->Text = Convert::ToString(grades[5].score);
			 }
			 if (count >= 7) {
				 name7->Text = Convert::ToString((grades[6].name).c_str());
				 date7->Text = Convert::ToString((grades[6].date).c_str());
				 queen7->Text = Convert::ToString(grades[6].num);
				 time7->Text = Convert::ToString(grades[6].time);
				 score7->Text = Convert::ToString(grades[6].score);
			 }
			 if (count >= 8) {
				 name8->Text = Convert::ToString((grades[7].name).c_str());
				 date8->Text = Convert::ToString((grades[7].date).c_str());
				 queen8->Text = Convert::ToString(grades[7].num);
				 time8->Text = Convert::ToString(grades[7].time);
				 score8->Text = Convert::ToString(grades[7].score);
			 }
			 if (count >= 9) {
				 name9->Text = Convert::ToString((grades[8].name).c_str());
				 date9->Text = Convert::ToString((grades[8].date).c_str());
				 queen9->Text = Convert::ToString(grades[8].num);
				 time9->Text = Convert::ToString(grades[8].time);
				 score9->Text = Convert::ToString(grades[8].score);
			 }
			 if (count >= 10) {
				 name10->Text = Convert::ToString((grades[9].name).c_str());
				 date10->Text = Convert::ToString((grades[9].date).c_str());
				 queen10->Text = Convert::ToString(grades[9].num);
				 time10->Text = Convert::ToString(grades[9].time);
				 score10->Text = Convert::ToString(grades[9].score);
			 }
		 }

				 void compare(grade* grade1,grade* grade2) {
					 std::string natemp;
					 std::string dtemp;
					 int stemp;
					 int ntemp;
					 double ttemp;
					 //printf("%s %s\r\n", grade1->name,grade2->name);
					 if (grade2->num == grade1->num) {
						 if (grade2->score == grade1->score) {
							 if (grade2->time < grade1->time) {
								 natemp = grade2->name;
								 grade2->name = grade1->name;
								 grade1->name = natemp;
								 dtemp = grade2->date;
								 grade2->date = grade1->date;
								 grade1->date = dtemp;
								 stemp = grade2->score;
								 grade2->score = grade1->score;
								 grade1->score = stemp;
								 ntemp = grade2->num;
								 grade2->num = grade1->num;
								 grade1->num = ntemp;
								 ttemp = grade2->time;
								 grade2->time = grade1->time;
								 grade1->time = ttemp;
							 }
						 }
						 else if (grade2->score > grade1->score) {
							 natemp = grade2->name;
							 grade2->name = grade1->name;
							 grade1->name = natemp;
							 dtemp = grade2->date;
							 grade2->date = grade1->date;
							 grade1->date = dtemp;
							 stemp = grade2->score;
							 grade2->score = grade1->score;
							 grade1->score = stemp;
							 ntemp = grade2->num;
							 grade2->num = grade1->num;
							 grade1->num = ntemp;
							 ttemp = grade2->time;
							 grade2->time = grade1->time;
							 grade1->time = ttemp;
						 }
					 }
					 else if (grade2->num > grade1->num) {
						 natemp = grade2->name;
						 grade2->name = grade1->name;
						 grade1->name = natemp;
						 dtemp = grade2->date;
						 grade2->date = grade1->date;
						 grade1->date = dtemp;
						 stemp = grade2->score;
						 grade2->score = grade1->score;
						 grade1->score = stemp;
						 ntemp = grade2->num;
						 grade2->num = grade1->num;
						 grade1->num = ntemp;
						 ttemp = grade2->time;
						 grade2->time = grade1->time;
						 grade1->time = ttemp;
					 }
					 //printf("%s %s\r\n", grade1->name, grade2->name);
				 }
};
}
