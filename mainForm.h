#pragma once


namespace waccu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:
	private: System::Windows::Forms::TextBox^  inputBox;
	private: System::Windows::Forms::TextBox^  outputBox;
	private: System::Windows::Forms::ComboBox^  conversionSelect;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->inputBox = (gcnew System::Windows::Forms::TextBox());
			this->outputBox = (gcnew System::Windows::Forms::TextBox());
			this->conversionSelect = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// inputBox
			// 
			this->inputBox->Location = System::Drawing::Point(12, 56);
			this->inputBox->Name = L"inputBox";
			this->inputBox->Size = System::Drawing::Size(114, 20);
			this->inputBox->TabIndex = 1;
			this->inputBox->Text = L"0";
			this->inputBox->TextChanged += gcnew System::EventHandler(this, &Form1::inputBox_TextChanged);
			// 
			// outputBox
			// 
			this->outputBox->BackColor = System::Drawing::SystemColors::Window;
			this->outputBox->Location = System::Drawing::Point(193, 56);
			this->outputBox->Name = L"outputBox";
			this->outputBox->ReadOnly = true;
			this->outputBox->Size = System::Drawing::Size(117, 20);
			this->outputBox->TabIndex = 3;
			this->outputBox->TextChanged += gcnew System::EventHandler(this, &Form1::outputBox_TextChanged);
			// 
			// conversionSelect
			// 
			this->conversionSelect->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(12) {
				L"Acres to Hectares",
					L"Hectares to Acres", L"Square Feet to Square Metres", L"Square Metres to Square Feet", L"Acres to Square Feet", L"Acres to Square Metres",
					L"Hectares to Square Feet", L"Hectares to Square Metres", L"Square Feet to Acres", L"Square Feet to Hectares", L"Square Metres to Acres",
					L"Square Metres to Hectares"
			});
			this->conversionSelect->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->conversionSelect->Cursor = System::Windows::Forms::Cursors::Default;
			this->conversionSelect->FormattingEnabled = true;
			this->conversionSelect->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Acres to Hectares", L"Hectares to Acres",
					L"Square Feet to Square Metres", L"Square Metres to Square Feet", L"Acres to Square Feet", L"Acres to Square Metres", L"Hectares to Square Feet",
					L"Hectares to Square Metres", L"Square Feet to Acres", L"Square Feet to Hectares", L"Square Metres to Acres", L"Square Metres to Hectares"
			});
			this->conversionSelect->Location = System::Drawing::Point(12, 111);
			this->conversionSelect->MaxDropDownItems = 12;
			this->conversionSelect->Name = L"conversionSelect";
			this->conversionSelect->Size = System::Drawing::Size(298, 21);
			this->conversionSelect->TabIndex = 2;
			this->conversionSelect->Text = L"Acres to Hectares";
			this->conversionSelect->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::conversionSelect_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->AllowDrop = true;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(1, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(82, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Help";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(164, 1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"About";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(246, 1);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(132, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"is equal to";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Number to convert";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(190, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Result";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Conversion required";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(322, 144);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->conversionSelect);
			this->Controls->Add(this->outputBox);
			this->Controls->Add(this->inputBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Windows ACCU 3.5";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void toolStripButton4_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->outputBox->ResetText();
				 this->inputBox->Text = "0";
	}
	private: System::Void outputBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
	}
	private: System::Void inputBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 calculation();
	}
	private: System::Void conversionSelect_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 calculation();
	}

#pragma region The Calculation
			 /// <summary>
			 /// This is the bit that does the calculation
			 /// </summary>
	public: void calculation()
	{
				double fct = 0;
				int selectedIndex = this->conversionSelect->SelectedIndex;
				Object^ selectedItem = this->conversionSelect->SelectedItem;
				String^ fctTxt = selectedItem->ToString();

				if (fctTxt == "Acres to Hectares"){
					fct = 0.404685642;
				}
				else if (fctTxt == "Hectares to Acres"){
					fct = 2.471053815;
				}
				else if (fctTxt == "Square Feet to Square Metres"){
					fct = 0.09290304;
				}
				else if (fctTxt == "Square Metres to Square Feet"){
					fct = 10.763910417;
				}
				else if (fctTxt == "Acres to Square Feet"){
					fct = 43560;
				}
				else if (fctTxt == "Acres to Square Metres"){
					fct = 4046.8564224;
				}
				else if (fctTxt == "Hectares to Square Feet"){
					fct = 107639.104167097;
				}
				else if (fctTxt == "Hectares to Square Metres"){
					fct = 10000;
				}
				else if (fctTxt == "Square Feet to Acres"){
					fct = 0.000022957;
				}
				else if (fctTxt == "Square Feet to Hectares"){
					fct = 0.00000929;
				}
				else if (fctTxt == "Square Metres to Acres"){
					fct = 0.000247105;
				}
				else if (fctTxt == "Square Metres to Hectares"){
					fct = 0.0001;
				}
				else{
					fct = 1;
				};

				double inp = 0;
				try {
					inp = System::Convert::ToDouble(this->inputBox->Text);
				}
				catch (System::FormatException^)
				{
					inp = 0;
				}
				double oup = 0;
				oup = inp * fct;
				this->outputBox->Text = System::Convert::ToString(oup);
	}

#pragma endregion

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("Windows ACCU\nVersion 3.5\nCopyright Dave Wynne 2014", "About WACCU");
	}

#pragma region Help Screen

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("Windows ACCU\n(Windows Area Conversion Calculation Utility)\n\n \
								  Welcome to Version 3.5 of Windows ACCU.\n \
								  This program was designed to simplify the conversion of floor and site areas\n \
								  between metric and imperial units and different types of metric and imperial units.\n \
								  \n Using the program could not be simpler. Just follow the steps below:\n\n \
								  1. Double click in the box titled ‘Number to be converted’. This will highlight the number already there.\n\n \
								  2. Type in the number you wish to convert. Because the previous number was highlighted the new \n \
								       number will overwrite the original.\n\n \
									   3. Select the conversion required from the drop down list titled ‘Conversion required’.\n\n \
									   4. Read the answer.\n\n \
									   In addition you can use the right click menu to copy and paste from your word processor\n \
									   or any other application.\n\n \
									   It really is that simple.", "Windows ACCU Help");
	}
#pragma endregion
	};
}

