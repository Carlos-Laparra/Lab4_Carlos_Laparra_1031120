#include"MyForm1.h"
#include"MyForm2.h"
#pragma once

namespace Lab4CarlosLaparra1031120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ lbl_Violencia;
	private: System::Windows::Forms::Label^ lbl_Covid;
	private: System::Windows::Forms::Button^ btn_Violencia;
	private: System::Windows::Forms::Button^ btn_Covid;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_Violencia = (gcnew System::Windows::Forms::Label());
			this->lbl_Covid = (gcnew System::Windows::Forms::Label());
			this->btn_Violencia = (gcnew System::Windows::Forms::Button());
			this->btn_Covid = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nobile", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(204, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Problemas";
			// 
			// lbl_Violencia
			// 
			this->lbl_Violencia->AutoSize = true;
			this->lbl_Violencia->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Violencia->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Violencia->Location = System::Drawing::Point(88, 101);
			this->lbl_Violencia->Name = L"lbl_Violencia";
			this->lbl_Violencia->Size = System::Drawing::Size(140, 62);
			this->lbl_Violencia->TabIndex = 1;
			this->lbl_Violencia->Text = L"-Violencia \r\nintrafamiliar";
			// 
			// lbl_Covid
			// 
			this->lbl_Covid->AutoSize = true;
			this->lbl_Covid->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Covid->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Covid->Location = System::Drawing::Point(385, 101);
			this->lbl_Covid->Name = L"lbl_Covid";
			this->lbl_Covid->Size = System::Drawing::Size(106, 31);
			this->lbl_Covid->TabIndex = 2;
			this->lbl_Covid->Text = L"-Covid 19";
			// 
			// btn_Violencia
			// 
			this->btn_Violencia->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_Violencia->Font = (gcnew System::Drawing::Font(L"Nobile", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Violencia->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btn_Violencia->Location = System::Drawing::Point(94, 193);
			this->btn_Violencia->Name = L"btn_Violencia";
			this->btn_Violencia->Size = System::Drawing::Size(134, 37);
			this->btn_Violencia->TabIndex = 3;
			this->btn_Violencia->Text = L"Consultar";
			this->btn_Violencia->UseVisualStyleBackColor = false;
			this->btn_Violencia->Click += gcnew System::EventHandler(this, &MyForm::btn_Violencia_Click);
			// 
			// btn_Covid
			// 
			this->btn_Covid->BackColor = System::Drawing::Color::Black;
			this->btn_Covid->Font = (gcnew System::Drawing::Font(L"Nobile", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Covid->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->btn_Covid->Location = System::Drawing::Point(372, 193);
			this->btn_Covid->Name = L"btn_Covid";
			this->btn_Covid->Size = System::Drawing::Size(134, 37);
			this->btn_Covid->TabIndex = 4;
			this->btn_Covid->Text = L"Consultar";
			this->btn_Covid->UseVisualStyleBackColor = false;
			this->btn_Covid->Click += gcnew System::EventHandler(this, &MyForm::btn_Covid_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(591, 293);
			this->Controls->Add(this->btn_Covid);
			this->Controls->Add(this->btn_Violencia);
			this->Controls->Add(this->lbl_Covid);
			this->Controls->Add(this->lbl_Violencia);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btn_Violencia_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ form = gcnew MyForm2();
	form->ShowDialog();
}
private: System::Void btn_Covid_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ form = gcnew MyForm1();
	form->ShowDialog();
}
};
}
