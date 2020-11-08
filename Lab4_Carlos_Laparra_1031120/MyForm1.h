#include"Lista.h"
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
	private: System::Windows::Forms::DataGridView^ dgv_Tablero;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btn_QuickSort;
	private: System::Windows::Forms::Button^ btn_BubbleSort;
	private: System::Windows::Forms::DataGridView^ dgv_Dato;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

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
			this->lbl_Covid = (gcnew System::Windows::Forms::Label());
			this->ofd_Importar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btn_Importar = (gcnew System::Windows::Forms::Button());
			this->dgv_Tablero = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btn_QuickSort = (gcnew System::Windows::Forms::Button());
			this->btn_BubbleSort = (gcnew System::Windows::Forms::Button());
			this->dgv_Dato = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Tablero))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Dato))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_Covid
			// 
			this->lbl_Covid->AutoSize = true;
			this->lbl_Covid->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Covid->Font = (gcnew System::Drawing::Font(L"Nobile", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Covid->Location = System::Drawing::Point(445, 31);
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
			// dgv_Tablero
			// 
			this->dgv_Tablero->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgv_Tablero->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_Tablero->ColumnHeadersVisible = false;
			this->dgv_Tablero->Location = System::Drawing::Point(159, 109);
			this->dgv_Tablero->Name = L"dgv_Tablero";
			this->dgv_Tablero->RowHeadersVisible = false;
			this->dgv_Tablero->RowHeadersWidth = 62;
			this->dgv_Tablero->RowTemplate->Height = 28;
			this->dgv_Tablero->Size = System::Drawing::Size(937, 308);
			this->dgv_Tablero->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Total Cases\t", L"Total Deaths", L"Total Recoveries",
					L"Active Cases", L"Serious, Critical", L"Total Cases / 1M pop", L"Deaths / 1M pop", L"Total Tests", L"Tests / 1M pop", L"Population"
			});
			this->comboBox1->Location = System::Drawing::Point(22, 226);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// btn_QuickSort
			// 
			this->btn_QuickSort->Location = System::Drawing::Point(1102, 119);
			this->btn_QuickSort->Name = L"btn_QuickSort";
			this->btn_QuickSort->Size = System::Drawing::Size(122, 34);
			this->btn_QuickSort->TabIndex = 7;
			this->btn_QuickSort->Text = L"Quick Sort";
			this->btn_QuickSort->UseVisualStyleBackColor = true;
			this->btn_QuickSort->Click += gcnew System::EventHandler(this, &MyForm1::btn_QuickSort_Click);
			// 
			// btn_BubbleSort
			// 
			this->btn_BubbleSort->Location = System::Drawing::Point(1102, 174);
			this->btn_BubbleSort->Name = L"btn_BubbleSort";
			this->btn_BubbleSort->Size = System::Drawing::Size(122, 34);
			this->btn_BubbleSort->TabIndex = 8;
			this->btn_BubbleSort->Text = L"Bubble Sort";
			this->btn_BubbleSort->UseVisualStyleBackColor = true;
			this->btn_BubbleSort->Click += gcnew System::EventHandler(this, &MyForm1::btn_BubbleSort_Click);
			// 
			// dgv_Dato
			// 
			this->dgv_Dato->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgv_Dato->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_Dato->ColumnHeadersVisible = false;
			this->dgv_Dato->Location = System::Drawing::Point(1252, 109);
			this->dgv_Dato->Name = L"dgv_Dato";
			this->dgv_Dato->RowHeadersVisible = false;
			this->dgv_Dato->RowHeadersWidth = 62;
			this->dgv_Dato->RowTemplate->Height = 28;
			this->dgv_Dato->Size = System::Drawing::Size(221, 308);
			this->dgv_Dato->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1098, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Elegir método de ordenamiento";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 277);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 40);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Elegir dato a \r\nordenar";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1098, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 60);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Los 0 simbolizan \r\ndatos que no son \r\nnuméricos";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1524, 456);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgv_Dato);
			this->Controls->Add(this->btn_BubbleSort);
			this->Controls->Add(this->btn_QuickSort);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dgv_Tablero);
			this->Controls->Add(this->btn_Importar);
			this->Controls->Add(this->lbl_Covid);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Tablero))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Dato))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<String^, 2>^ listiz = gcnew array<String^, 2>(12, 217);
		int v1;
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void btn_Importar_Click(System::Object^ sender, System::EventArgs^ e) {
		ReestablecerMatriz();
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
							listiz[j, i] = fila[j];							
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
		Llenar_DGV();
	}
		   void Llenar_DGV() {
			   for (int i = 0; i < 12; i++) {
				   DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
				   nuevacolumna->Width = 20;
				   //Le agrega el tipo de columna que será
				   DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
				   nuevacolumna->CellTemplate = cellTemplate;
				   //Inserta la columna
				   dgv_Tablero->Columns->Add(nuevacolumna);
			   }

			   //Agrega las filas de manera dinámica
			   for (int i = 0; i < 216; i++) {
				   dgv_Tablero->Rows->Add();
			   }

			   //Llena el DatagridView
			   for (int i = 0; i < 12; i++) {
				   for (int j = 0; j < 216; j++) {
					   dgv_Tablero->Rows[j]->Cells[i]->Value = listiz[i,j];
				   }
			   }
		   }
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {		
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	v1 = comboBox1->SelectedIndex;
	llenarlista();
	v1 = 0;
}
	   void llenarlista() {
		   lista1->Limpiar();
		   for (int i = 0; i < 216; i++) {
			   try {
				   lista1->InsertAtEnd(Convert::ToInt32(listiz[v1 + 2, i]));
			   }
			   catch (Exception^ e) {
				   lista1->InsertAtEnd(0);
			   }
		   }
	   }
	   void QuickSort(Lista* list, int start, int end) {
		   if (start < end)
		   {
			   int pivot = dividir(list, start, end);
			   QuickSort(list, start, pivot - 1);
			   QuickSort(list, pivot + 1, end);
		   }
	   }
	   int dividir(Lista* list, int start, int end) {
		   int pivot = list->GetValue(end);
		   int i = start - 1;
		   for (int j = start; j < end - 1; j++)
		   {
			   if (list->GetValue(j) < pivot)
			   {
				   i++;
				   int aux = list->GetValue(i);
				   list->InsertAtPosition(list->GetValue(j), i);
				   list->ExtractAtPosition(i + 1);
				   list->InsertAtPosition(aux, j);
				   list->ExtractAtPosition(j+1);
			   }
		   }		   

		   int aux1 = list->GetValue(i + 1);
		   list->InsertAtPosition(list->GetValue(end), i + 1);
		   list->ExtractAtPosition(i + 2);
		   list->InsertAtPosition(aux1, end);
		   list->ExtractAtPosition(end + 1);
		   
		   return (i + 1);
	   }
private: System::Void btn_QuickSort_Click(System::Object^ sender, System::EventArgs^ e) {
	llenarlista();
	QuickSort(lista1, 1, 216-1);
	RMatriz();
	llenar_DGV1();
}
	   void llenar_DGV1() {
		   for (int i = 0; i < 1; i++) {
			   DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
			   nuevacolumna->Width = 20;			   
			   DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
			   nuevacolumna->CellTemplate = cellTemplate;			   
			   dgv_Dato->Columns->Add(nuevacolumna);
		   }

		   //Agrega las filas de manera dinámica
		   for (int i = 0; i < 216; i++) {
			   dgv_Dato->Rows->Add();
		   }
		   for (int i = 0; i < 216; i++) {
			   dgv_Dato->Rows[i]->Cells[0]->Value = lista1->GetValue(i);
		   }
	   }
	   void ReestablecerMatriz() {
		   dgv_Tablero->Rows->Clear();
		   dgv_Tablero->Columns->Clear();
		   dgv_Tablero->ColumnHeadersVisible = false;
		   dgv_Tablero->RowHeadersVisible = false;
	   }
	   void RMatriz(){
		   dgv_Dato->Rows->Clear();
		   dgv_Dato->Columns->Clear();
		   dgv_Dato->ColumnHeadersVisible = false;
		   dgv_Dato->RowHeadersVisible = false;
	   }
private: System::Void btn_BubbleSort_Click(System::Object^ sender, System::EventArgs^ e) {	
	llenarlista();
	int aux;
	for (int i = 0; i < (lista1->conta - 1); i++) {

		// Last i elements are already in place  
		for (int j = 0; j < (lista1->conta-i-1); j++)
			if (Convert::ToInt32(lista1->GetValue(j)) > Convert::ToInt32(lista1->GetValue(j+1))) {
				aux = Convert::ToInt32(lista1->GetValue(j));			
				lista1->InsertAtPosition(lista1->GetValue(j+1), j);				
				lista1->ExtractAtPosition(j+1);
				lista1->InsertAtPosition(aux, j+1);				
				lista1->ExtractAtPosition(j + 2);
			}
	}
	RMatriz();
	llenar_DGV1();
}
};
}
