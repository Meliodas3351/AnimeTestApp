#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
Void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AnimeTestApp::MainForm form;
	form.resetToStartValues();
	Application::Run(% form);
}