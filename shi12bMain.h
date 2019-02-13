#pragma once

namespace shi12bAssignment2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// shi12bMain 摘要
	/// </summary>
	public ref class shi12bMain : public System::Windows::Forms::Form
	{
	public:
		shi12bMain(void)
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
		~shi12bMain()
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

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(317, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L" !!! Why \?\?\? Anyway A New Game will START NOW ..... ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Your score is";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(105, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(11, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(133, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 12);
			this->label4->TabIndex = 3;
			this->label4->Text = L"with";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(168, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 12);
			this->label6->TabIndex = 5;
			this->label6->Text = L"penalties.";
			this->label6->Click += gcnew System::EventHandler(this, &shi12bMain::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 66);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 12);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Time is";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(71, 66);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 12);
			this->label8->TabIndex = 7;
			this->label8->Text = L"0:00";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(107, 66);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 12);
			this->label9->TabIndex = 8;
			this->label9->Text = L"minutes.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(19, 102);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 12);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Your Name";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(236, 132);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &shi12bMain::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(85, 99);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(101, 21);
			this->textBox1->TabIndex = 11;
			// 
			// shi12bMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(346, 167);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"shi12bMain";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String ^ Username;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Username = textBox1->Text;
		Hide();
	}

	public: void setVar(int score, double time, int num) {
		if (num == 8) {
			label1->Text = "Congratulations! All 8 queens are safe";
		}
		label3->Text = Convert::ToString(score);
		if (num * 100 == score) {
			label6->Text = "no penalty.";
		}
		else {
			label6->Text = "penalty.";
		}
		label8->Text = Convert::ToString((double)((int)((time / 60 + 0.005) * 100)) /100);
	}

			public: String ^ getName() {
				return Username;
			}
	
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
