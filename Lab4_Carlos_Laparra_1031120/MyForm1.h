#include"Lista.h"
#pragma once

namespace Lab4CarlosLaparra1031120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		Lista* lista1;
		MyForm1(void)
		{
			InitializeComponent();
			lista1 = new Lista();
			lista1->conta = 0;
			lista1->start = nullptr;
			lista1->end = nullptr;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_Covid;
	private: System::Windows::Forms::OpenFileDialog^ ofd_Importar;
	private: System::Windows::Forms::Button^ btn_Importar;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->lbl_Covid = (gcnew System::Windows::Forms::Label());
			this->ofd_Importar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btn_Importar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_Covid
			// 
			this->lbl_Covid->AutoSize = true;
			this->lbl_Covid->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Covid->Font = (gcnew System::Drawing::Font(L"Nobile", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Covid->Location = System::Drawing::Point(245, 34);
			this->lbl_Covid->Name = L"lbl_Covid";
			this->lbl_Covid->Size = System::Drawing::Size(120, 38);
			this->lbl_Covid->TabIndex = 3;
			this->lbl_Covid->Text = L"Covid 19";
			// 
			// ofd_Importar
			// 
			this->ofd_Importar->FileName = L"openFileDialog1";
			// 
			// btn_Importar
			// 
			this->btn_Importar->Location = System::Drawing::Point(22, 119);
			this->btn_Importar->Name = L"btn_Importar";
			this->btn_Importar->Size = System::Drawing::Size(122, 34);
			this->btn_Importar->TabIndex = 4;
			this->btn_Importar->Text = L"Importar";
			this->btn_Importar->UseVisualStyleBackColor = true;
			this->btn_Importar->Click += gcnew System::EventHandler(this, &MyForm1::btn_Importar_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(640, 456);
			this->Controls->Add(this->btn_Importar);
			this->Controls->Add(this->lbl_Covid);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<String^, 2>^ matriz = gcnew array<String^, 2>(12, 216);
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void btn_Importar_Click(System::Object^ sender, System::EventArgs^ e) {
		ofd_Importar->Filter = "Archivos separados por coma (csv) | *.csv";
		ofd_Importar->FileName = "";

		if (ofd_Importar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			array<String^>^ archivoLineas = File::ReadAllLines(ofd_Importar->FileName);

			if (archivoLineas->Length > 0) {
				array<String^>^ archivoColumna = archivoLineas[0]->Split(';');
				if (archivoColumna->Length > 0) {
					int cantidadColumnas = archivoColumna->Length;
					for (int i = 0; i < archivoLineas->Length; i++) {
						array<String^>^ fila = archivoLineas[i]->Split(';');
						int j = 0;
						for (int j = 0; j < fila->Length; j++) {
							matriz[j, i] = fila[j];							
						}					
					}

				}
			}

		}
		else {
			MessageBox::Show("No se seleccionó ningún archivo"
				, "Archivo no seleccionado"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Exclamation);
		}
	}
	};
}
