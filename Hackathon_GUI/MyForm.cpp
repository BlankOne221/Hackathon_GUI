#include "MyForm.h"

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <msclr/marshal_cppstd.h>

// main file to run GUI

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array<String^>^ args) {

    // This is the GUI interface run code
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    HackathonGUI::MyForm form;
    Application::Run(% form);

}


