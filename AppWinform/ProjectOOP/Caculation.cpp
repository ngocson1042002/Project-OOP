#include "Caculation.h"

using namespace System;
using namespace System::Windows::Forms;

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectOOP::Caculation form;
	Application::Run(% form);
}