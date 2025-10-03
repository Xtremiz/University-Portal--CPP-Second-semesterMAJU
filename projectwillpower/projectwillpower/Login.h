#pragma once
#include "Account.h"
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;


ref class Login
{
public:
    String^ loggedInStudentUsername;
    String^ loggedInStudentPassword;
    String^ loggedInFacultyUsername;
    String^ loggedInFacultyPassword;
    String^ studentData = "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Student.txt";
    String^ facultyData = "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Faculty.txt";
    String^ adminUsername = "Admin";
    String^ adminPassword = "admin";

    void login(TextBox^ username, TextBox^ password, TabControl^ tabControl, TabPage^ studentTab, TabPage^ facultyTab, TabPage^ adminTab, TabPage^ loginTab, DataGridView^ dataGridView, DataGridView^ dataGridView2)
    {
        String^ name = username->Text;
        String^ pass = password->Text;

        // Admin login check
        if (name->Equals(adminUsername) && pass->Equals(adminPassword))
        {
            tabControl->TabPages->Add(adminTab);
            tabControl->TabPages->Remove(loginTab);
            tabControl->SelectedTab = adminTab;
            MessageBox::Show("Login Successful as Admin!");
            return;
        }

        // Student login check
        if (File::Exists(studentData))
        {
            array<String^>^ studentLines = File::ReadAllLines(studentData);
            for each (String ^ line in studentLines)
            {
                array<String^>^ parts = line->Split(',');
                if (parts->Length == 12 && parts[2]->Equals(name) && parts[6]->Equals(pass))
                {
                    loggedInStudentUsername = name;
                    loggedInStudentPassword = pass;

                    // Load the logged-in student's data into the DataGridView
                    Account^ account = gcnew Account();
                    account->LoadLoggedInUserData(studentData, name, dataGridView); // Student's DataGridView

                    tabControl->TabPages->Add(studentTab);
                    tabControl->TabPages->Remove(loginTab);
                    tabControl->SelectedTab = studentTab;
                    MessageBox::Show("Login Successful as Student!");
                    return;
                }
            }
        }

        // Faculty login check
        if (File::Exists(facultyData))
        {
            array<String^>^ facultyLines = File::ReadAllLines(facultyData);
            for each (String ^ line in facultyLines)
            {
                array<String^>^ parts = line->Split(',');
                if (parts->Length == 7 && parts[2]->Equals(name) && parts[6]->Equals(pass))
                {
                    loggedInFacultyUsername = name;
                    loggedInFacultyPassword = pass;

                    // Load the logged-in faculty's data into the second DataGridView
                    Account^ account = gcnew Account();
                    account->LoadLoggedInUserData(facultyData, name, dataGridView2); // Faculty's DataGridView

                    tabControl->TabPages->Add(facultyTab);
                    tabControl->TabPages->Remove(loginTab);
                    tabControl->SelectedTab = facultyTab;
                    MessageBox::Show("Login Successful as Faculty!");
                    return;
                }
            }
        }

        // Invalid login
        MessageBox::Show("Invalid username or password.");
    }


    void logout(TabControl^ tabControl, TabPage^ currentTab, TabPage^ loginTab)
    {
        tabControl->TabPages->Remove(currentTab);
        if (!tabControl->TabPages->Contains(loginTab))
        {
            tabControl->TabPages->Add(loginTab);
        }
        tabControl->SelectedTab = loginTab;
    }

};

