#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ pp)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	������1::MyForm form;
	Application::Run(% form);
}