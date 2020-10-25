#include<stdio.h>
#pragma once

namespace Lab4CarlosLaparra1031120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;
	using namespace System ::Threading;

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
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Label^ lbl_tiempo;
	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->lbl_Violencia = (gcnew System::Windows::Forms::Label());
			this->ofd_Importar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btn_Importar = (gcnew System::Windows::Forms::Button());
			this->rtb_Casos = (gcnew System::Windows::Forms::RichTextBox());
			this->rt_1 = (gcnew System::Windows::Forms::RichTextBox());
			this->rt_2 = (gcnew System::Windows::Forms::RichTextBox());
			this->btn_Quick = (gcnew System::Windows::Forms::Button());
			this->btn_Merge = (gcnew System::Windows::Forms::Button());
			this->btn_Bubble = (gcnew System::Windows::Forms::Button());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->lbl_tiempo = (gcnew System::Windows::Forms::Label());
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
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm2::timer_Tick);
			// 
			// lbl_tiempo
			// 
			this->lbl_tiempo->AutoSize = true;
			this->lbl_tiempo->BackColor = System::Drawing::Color::Transparent;
			this->lbl_tiempo->Font = (gcnew System::Drawing::Font(L"Nobile", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_tiempo->Location = System::Drawing::Point(208, 416);
			this->lbl_tiempo->Name = L"lbl_tiempo";
			this->lbl_tiempo->Size = System::Drawing::Size(0, 38);
			this->lbl_tiempo->TabIndex = 10;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(758, 463);
			this->Controls->Add(this->lbl_tiempo);
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
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<String^, 2>^ matriz = gcnew array<String^, 2>(3, 241);
		
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
private: System::Void btn_Quick_Click(System::Object^ sender, System::EventArgs^ e) {	
	QuickSort(matriz,1,241-1);
	Vaciar();
	Reescribir(matriz);
	}
private: System::Void btn_Bubble_Click(System::Object^ sender, System::EventArgs^ e) {
	BubbleSort(matriz,241);	
}
private: System::Void btn_Merge_Click(System::Object^ sender, System::EventArgs^ e) {	
	MergeSort(matriz, 1, 241 - 1);
	Vaciar();
	Reescribir(matriz);
}
	   void QuickSort(array<String^, 2>^ matr, int start, int end) {		   
		   if (start < end)
		   {
			   int pivot = dividir(matr, start, end);
			   QuickSort(matr, start, pivot - 1);
			   QuickSort(matr, pivot + 1, end);
		   }
	   }
	   int dividir(array<String^, 2>^ matr, int start, int end) {
		   int pivot = Convert::ToInt32(matr[2,end]);   
		   int i = start-1;   
		   for (int j = start; j < end - 1; j++)
		   {			   
			   if (Convert::ToInt32(matr[2,j]) < pivot)
			   {
				   i++;  				   
				   int temp = Convert::ToInt32(matr[2, i]);
				   matr[2, i] = matr[2, j];
				   matr[2, j] = Convert::ToString(temp);
				   String^ aux;
				   String^ auxx;
				   aux = matr[1, i];
				   matr[1, i] = matr[1, j];
				   matr[1, j] = aux;
				   aux = matr[0, i];
				   matr[0, i] = matr[0, j];
				   matr[0, j] = aux;


			   }
		   }	
		   int temp1 = Convert::ToInt32(matr[2,i + 1]);
		   matr[2, i + 1] = matr[2, end];
		   matr[2, end] = Convert::ToString(temp1);
		   String^ aux1;
		   String^ auxx1;
		   aux1 = matr[1, i+1];
		   matr[1, i+1] = matr[1, end];
		   matr[1, end] = aux1;
		   auxx1 = matr[0, i+1];
		   matr[0, i+1] = matr[0, end];
		   matr[0, end] = auxx1;
		   return (i + 1);
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
					   matr[2, j] = Convert::ToString(aux);

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
	   void MergeSort(array<String^, 2>^ matr, int n1, int n2) {
		   if (n1 < n2) {
			   int aux = (n1 + (n2 - 1)) / 2;
			   MergeSort(matr, n1, aux);
			   MergeSort(matr, aux+ 1, n2);

			   
			   Merge(matr, n1, aux, n2);
		   }
	   }
	   void Merge(array<String^, 2>^ matr, int n1, int n2, int n3) {
		   //p=n1,q=n2,r=n3,a1=n1,a2=n2,p1=l,p2=M
		   int a1 = n2 - n1 + 1;
		   int a2 = n3 - n2;

		   array<Int32^>^ p1 = gcnew array<Int32^>(a1);
		   array<Int32^>^ p2 = gcnew array<Int32^>(a2);
		   array<String^>^ h1 = gcnew array<String^>(a1);
		   array<String^>^ h2 = gcnew array<String^>(a2);
		   array<String^>^ j1 = gcnew array<String^>(a1);
		   array<String^>^ j2 = gcnew array<String^>(a2);
		   for (int i = 0; i < a1; i++) {
			   p1[i] = Convert::ToInt32(matr[2, n1 + i]);
			   h1[i] = (matr[1, n1 + i]);
			   j1[i] = (matr[0, n1 + i]);
		   }
		   for (int j = 0; j < a2; j++) {
			   p2[j] = Convert::ToInt32(matr[2, n2 + 1 + j]);
			   h2[j] = (matr[1, n2 + 1 + j]);
			   j2[j] =(matr[0, n2 + 1 + j]);
		   }
		   
		   int i, j, k;
		   i = 0;
		   j = 0;
		   k = n1;

		   while (i < a1 && j < a2) {
			   if (Convert::ToInt32(p1[i]) <= Convert::ToInt32(p2[j])) {
				   matr[2,k] = Convert::ToString(p1[i]);
				   matr[1, k] = (h1[i]);
				   matr[0, k] = (j1[i]);
				   i++;
			   }
			   else {
				   matr[2,k] = Convert::ToString(p2[j]);
				   matr[1, k] = (h2[j]);
				   matr[0, k] = (j2[j]);
				   j++;
			   }
			   k++;
		   }

		   
		   while (i < a1) {
			   matr[2,k] = Convert::ToString(p1[i]);
			   matr[1, k] = (h1[i]);
			   matr[0, k] = (j1[i]);
			   i++;
			   k++;
		   }

		   while (j < a2) {
			   matr[2,k] = Convert::ToString(p2[j]);
			   matr[1, k] = (h2[j]);
			   matr[0, k] = (j2[j]);
			   j++;
			   k++;
		   }
	   }
	   void Vaciar() {
		   rtb_Casos->Text = "";
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
	   
private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {	
}
private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
