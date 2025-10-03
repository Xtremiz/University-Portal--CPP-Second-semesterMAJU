#pragma once
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

ref class Account
{
public:

   
    void UpdatePass(String^ filePath, String^ oldPassword, String^ newPassword) {

        List<String^>^ lines = gcnew List<String^>(File::ReadAllLines(filePath));
        bool passwordUpdated = false;

        for (int i = 0; i < lines->Count; i++) {
            array<String^>^ parts = lines[i]->Split(',');

            // Ensure the format is valid and the old password matches
            if (parts->Length == 7 && parts[6]->Equals(oldPassword)) {
                parts[6] = newPassword; // Update the password
                lines[i] = String::Join(",", parts); // Reconstruct the line
                passwordUpdated = true;
                break;
            }
            else  if (parts->Length == 12 && parts[6]->Equals(oldPassword)) {
                parts[6] = newPassword; // Update the password
                lines[i] = String::Join(",", parts); // Reconstruct the line
                passwordUpdated = true;
                break;
            }
        }

        if (passwordUpdated) {
            // Write the updated lines back to the file
            File::WriteAllLines(filePath, lines->ToArray());
            MessageBox::Show("Password updated successfully.");
        }
        else {
            MessageBox::Show("Failed to update password. Old password is incorrect.");
        }
    // Validate the new password
        if (String::IsNullOrWhiteSpace(newPassword)) {
            MessageBox::Show("Password cannot be empty.");
            return;
        }

        if (newPassword->Length < 8) {
            MessageBox::Show("Password must be at least 8 characters long.");
            return;
        }
    }

  

    void LoadLoggedInUserData(String^ filePath, String^ username, DataGridView^ dataGridView)
    {
        if (File::Exists(filePath))
        {
            array<String^>^ lines = File::ReadAllLines(filePath);
            for each (String ^ line in lines)
            {
                array<String^>^ parts = line->Split(',');
                if (parts->Length == 7 && parts[2]->Equals(username)) // Match username
                {
                    dataGridView->Rows->Clear(); // Clear the DataGridView before adding new data
                    dataGridView->Rows->Add(parts[0], parts[1], parts[2], parts[3], parts[4], parts[5], parts[6]);
                    return; 
                }
                else if (parts->Length == 12 && parts[2]->Equals(username)) // Match username
                {
                    dataGridView->Rows->Clear(); // Clear the DataGridView before adding new data
                    dataGridView->Rows->Add(parts[0], parts[1], parts[2], parts[3], parts[4], parts[5], parts[6]);
                    return; // Exit once the matching entry is found
                }
            }
        }
    }

};


