#pragma once
#include "chessBoard.h"
#include "leaderBoard.h"

namespace shi12bAssignment2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// shi12bStart 摘要
	/// </summary>
	public ref class shi12bStart : public System::Windows::Forms::Form
	{
	public:
		shi12bStart(void)
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
		~shi12bStart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(shi12bStart::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(81, 44);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"8-Queen Game";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &shi12bStart::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(81, 96);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 36);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Leader Board";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &shi12bStart::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(81, 171);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 35);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &shi12bStart::button3_Click);
			// 
			// shi12bStart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"shi12bStart";
			this->Text = L"shi12bStart";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		shi12bAssignment2::chessBoard chessBoard;
		chessBoard.ShowDialog();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		shi12bAssignment2::leaderBoard leaderBoard;
		leaderBoard.setUp();
		leaderBoard.ShowDialog();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
};
}
