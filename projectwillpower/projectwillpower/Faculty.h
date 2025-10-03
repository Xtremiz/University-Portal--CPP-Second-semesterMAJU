#pragma once
#include "specialfunc.h"
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;


ref class Faculty : public specialfunc
{
protected:
    virtual String^ GetFilePath() override
    {
        return "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Faculty.txt";
    }
public:

     bool CanAddFaculty()
    {
        String^ facultyFilePath = "C:\\Users\\kk\\OneDrive\\Desktop\\update\\Faculty.txt";  // Path to Faculty.txt

        // Check if the file exists
        if (File::Exists(facultyFilePath))
        {
            // Read all lines from the file
            array<String^>^ lines = File::ReadAllLines(facultyFilePath);

            // If there are already 4 or more entries, return false
            if (lines->Length >= 4)
            {
                return false;  // Cannot add more faculty members
            }
        }

        return true;  // If file doesn't exist or has less than 4 entries
    }
    void checkfaculty()
    {
        if (!CanAddFaculty())
        {
            MessageBox::Show("Cannot add more faculty members. Maximum of 4 faculty members allowed.");
            return;
        }
        // Add faculty logic here if CanAddFaculty() returns true
    }
   
    
    // Function to check the number of faculty members (lines in the Faculty.txt)
};


