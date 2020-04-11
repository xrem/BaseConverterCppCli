#include "MainForm.h"

using namespace SecondNet;
using namespace System::Windows;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main() {
	MainForm form;
	Application::Run(% form);
}