#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab4CarlosLaparra1031120::MyForm mainform;
	Application::Run(% mainform);
	return 0;
}


