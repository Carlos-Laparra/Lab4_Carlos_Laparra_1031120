#pragma once

namespace Lab4CarlosLaparra1031120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_Violencia;
	private: System::Windows::Forms::OpenFileDialog^ ofd_Importar;
	private: System::Windows::Forms::Button^ btn_Importar;
	private: System::Windows::Forms::RichTextBox^ rtb_Casos;
	private: System::Windows::Forms::RichTextBox^ rt_1;
	private: System::Windows::Forms::RichTextBox^ rt_2;
	private: System::Windows::Forms::Button^ btn_Quick;
	private: System::Windows::Forms::Button^ btn_Merge;

	private: System::Windows::Forms::Button^ btn_Bubble;


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
			this->lbl_Violencia = (gcnew System::Windows::Forms::Label());
			this->ofd_Importar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btn_Importar = (gcnew System::Windows::Forms::Button());
			this->rtb_Casos = (gcnew System::Windows::Forms::RichTextBox());
			this->rt_1 = (gcnew System::Windows::Forms::RichTextBox());
			this->rt_2 = (gcnew System::Windows::Forms::RichTextBox());
			this->btn_Quick = (gcnew System::Windows::Forms::Button());
			this->btn_Merge = (gcnew System::Windows::Forms::Button());
			this->btn_Bubble = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_Violencia
			// 
			this->lbl_Violencia->AutoSize = true;
			this->lbl_Violencia->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Violencia->Font = (gcnew System::Drawing::Font(L"Nobile", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Violencia->Location = System::Drawing::Point(158, 32);
			this->lbl_Violencia->Name = L"lbl_Violencia";
			this->lbl_Violencia->Size = System::Drawing::Size(301, 38);
			this->lbl_Violencia->TabIndex = 2;
			this->lbl_Violencia->Text = L"Violencia Intrafamiliar";
			// 
			// ofd_Importar
			// 
			this->ofd_Importar->FileName = L"openFileDialog1";
			// 
			// btn_Importar
			// 
			this->btn_Importar->Location = System::Drawing::Point(12, 112);
			this->btn_Importar->Name = L"btn_Importar";
			this->btn_Importar->Size = System::Drawing::Size(122, 34);
			this->btn_Importar->TabIndex = 3;
			this->btn_Importar->Text = L"Importar";
			this->btn_Importar->UseVisualStyleBackColor = true;
			this->btn_Importar->Click += gcnew System::EventHandler(this, &MyForm2::btn_Importar_Click);
			// 
			// rtb_Casos
			// 
			this->rtb_Casos->Location = System::Drawing::Point(202, 101);
			this->rtb_Casos->Name = L"rtb_Casos";
			this->rtb_Casos->Size = System::Drawing::Size(152, 302);
			this->rtb_Casos->TabIndex = 4;
			this->rtb_Casos->Text = L"";
			// 
			// rt_1
			// 
			this->rt_1->Location = System::Drawing::Point(374, 101);
			this->rt_1->Name = L"rt_1";
			this->rt_1->Size = System::Drawing::Size(152, 302);
			this->rt_1->TabIndex = 5;
			this->rt_1->Text = L"";
			// 
			// rt_2
			// 
			this->rt_2->Location = System::Drawing::Point(542, 101);
			this->rt_2->Name = L"rt_2";
			this->rt_2->Size = System::Drawing::Size(152, 302);
			this->rt_2->TabIndex = 6;
			this->rt_2->Text = L"";
			// 
			// btn_Quick
			// 
			this->btn_Quick->Location = System::Drawing::Point(12, 208);
			this->btn_Quick->Name = L"btn_Quick";
			this->btn_Quick->Size = System::Drawing::Size(122, 34);
			this->btn_Quick->TabIndex = 7;
			this->btn_Quick->Text = L"QuickSort";
			this->btn_Quick->UseVisualStyleBackColor = true;
			this->btn_Quick->Click += gcnew System::EventHandler(this, &MyForm2::btn_Quick_Click);
			// 
			// btn_Merge
			// 
			this->btn_Merge->Location = System::Drawing::Point(12, 315);
			this->btn_Merge->Name = L"btn_Merge";
			this->btn_Merge->Size = System::Drawing::Size(122, 34);
			this->btn_Merge->TabIndex = 8;
			this->btn_Merge->Text = L"MergeSort";
			this->btn_Merge->UseVisualStyleBackColor = true;
			this->btn_Merge->Click += gcnew System::EventHandler(this, &MyForm2::btn_Merge_Click);
			// 
			// btn_Bubble
			// 
			this->btn_Bubble->Location = System::Drawing::Point(12, 263);
			this->btn_Bubble->Name = L"btn_Bubble";
			this->btn_Bubble->Size = System::Drawing::Size(122, 34);
			this->btn_Bubble->TabIndex = 9;
			this->btn_Bubble->Text = L"BubbleSort";
			this->btn_Bubble->UseVisualStyleBackColor = true;
			this->btn_Bubble->Click += gcnew System::EventHandler(this, &MyForm2::btn_Bubble_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(758, 451);
			this->Controls->Add(this->btn_Bubble);
			this->Controls->Add(this->btn_Merge);
			this->Controls->Add(this->btn_Quick);
			this->Controls->Add(this->rt_2);
			this->Controls->Add(this->rt_1);
			this->Controls->Add(this->rtb_Casos);
			this->Controls->Add(this->btn_Importar);
			this->Controls->Add(this->lbl_Violencia);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<String^, 2>^ matriz = gcnew array<String^, 2>(3,241);
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

						
						for (int j = 0; j < fila->Length;j++) {
							matriz[j,i] = fila[j];				
							
							if (j == 0) {
								rtb_Casos->Text += Convert::ToString(matriz[j, i]);
							}
							else if (j == 1) {
								rt_1->Text += Convert::ToString(matriz[j, i]);
							}
							else {
								rt_2->Text += Convert::ToString(matriz[j, i]);							
							}
						}
						rtb_Casos->Text += "\r\n";
						rt_1->Text += "\r\n";
						rt_2->Text += "\r\n";
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
		   void BubbleSort(array<String^, 2>^ matr, int n) {
			   String^ aux1;
			   String^ aux2;
			   int aux, i, j;
			   for (i = 1; i < n - 1; i++) {

				   // Last i elements are already in place  
				   for (j = 1; j < n; j++)
					   if (Convert::ToInt32(matr[2, i]) > Convert::ToInt32(matr[2, j])) {
						   aux = Convert::ToInt32(matr[2, i]);
						   matr[2, i] = matr[2, j];
						   matr[2,j] = Convert::ToString(aux);

						   aux1 = matriz[1, i];
						   matr[1, i] = matr[1, j];
						   matr[1, j] = aux1;

						   aux2 = matriz[0, i];
						   matr[0, i] = matr[0, j];
						   matr[0, j] = aux2;
					   }
			   }
			   Vaciar();
			   Reescribir(matr);
		   }		   		   
		   void Vaciar() {
			   rtb_Casos->Text="";
			   rt_1->Text = "";
			   rt_2->Text = "";
		   }
		   void Reescribir(array<String^, 2>^ matr) {

			   for (int i = 0; i < 241; i++) {
				   for (int j = 0; j < 3; j++) {
					   if (j == 0) {
						   rtb_Casos->Text += Convert::ToString(matriz[j, i]);
					   }
					   else if (j == 1) {
						   rt_1->Text += Convert::ToString(matriz[j, i]);
					   }
					   else {
						   rt_2->Text += Convert::ToString(matriz[j, i]);
					   }
				   }
				   rtb_Casos->Text += "\r\n";
				   rt_1->Text += "\r\n";
				   rt_2->Text += "\r\n";
			   }
		   }
			   
	private: System::Void btn_Quick_Click(System::Object^ sender, System::EventArgs^ e) {
		int start = Convert::ToInt32(matriz[2, 1]);
		int end = Convert::ToInt32(matriz[2, 240]);
		int n = Convert::ToInt32(matriz[2,end])/ Convert::ToInt32(matriz[2,1]);;
		QuickSort(matriz,1,n-1);
		Vaciar();
		Reescribir(matriz);

	}
private: System::Void btn_Bubble_Click(System::Object^ sender, System::EventArgs^ e) {
	BubbleSort(matriz,241);
}
private: System::Void btn_Merge_Click(System::Object^ sender, System::EventArgs^ e) {	
	
}
	   void QuickSort(array<String^, 2>^ matr, int start, int end) {
		   int pivot;
		   if (start < end) {
			   pivot = dividir(matr, start, end);

			   QuickSort(matr, start, pivot - 1);

			   QuickSort(matr, pivot + 1, end);


		   }
	   }
	   int dividir(array<String^, 2>^ matr, int start, int end) {
		   int pivot = Convert::ToInt32(matriz[2, end]);
		   int i = (start - 1);


		   for (int j = start; j < end; j++) {
			   if (Convert::ToInt32(matriz[2, j]) <= pivot) {
				   i++;
				   int t = Convert::ToInt32(matriz[2, i]);
				   matriz[2, i] = matriz[2, j];
				   matriz[2, j] = Convert::ToString(t);
				   String^ aux1;
				   String^ aux2;
				   aux1 = matriz[1, i];
				   matr[1, i] = matr[1, j];
				   matr[1, j] = aux1;

				   aux2 = matriz[0, i];
				   matr[0, i] = matr[0, j];
				   matr[0, j] = aux2;

			   }

			   int t = Convert::ToInt32(matriz[2, i]);
			   matriz[2, i] = matriz[2, j];
			   matriz[2, j] = Convert::ToString(t);
			   String^ aux1;
			   String^ aux2;
			   aux1 = matriz[1, i];
			   matr[1, i] = matr[1, j];
			   matr[1, j] = aux1;

			   aux2 = matriz[0, i];
			   matr[0, i] = matr[0, j];
			   matr[0, j] = aux2;
			   return (i + 1);
		   }
	   }
};
}
