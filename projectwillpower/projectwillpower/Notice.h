#pragma once
#include "OOP.h"
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;


ref class Notice : public CRUDoperation
{
protected:
    // Override to provide the file path for the notices
    virtual String^ GetFilePath() override
    {
        return "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Notice.txt";
    }

public:
    // Constructor
    Notice() {}

    // Add a new notice to the file
    void Add(String^ noticeText)
    {
        if (String::IsNullOrWhiteSpace(noticeText))
        {
            MessageBox::Show("Notice text cannot be empty.");
            return;
        }

        auto lines = ReadFile();
        lines->Add(noticeText);  // Add the new notice
        WriteFile(lines);        // Write updated list to file
    }

    // Load notices from the file and display them in the ListBox
    void Load(ListBox^ listBox)
    {
        auto lines = ReadFile();
        listBox->Items->Clear();  // Clear the ListBox before loading new items
        for each (String ^ line in lines)
        {
            listBox->Items->Add(line);  // Add each line (notice) to the ListBox
        }
    }

    // Update an existing notice
    void Update(ListBox^ listBox, String^ oldText, String^ newText)
    {
        if (String::IsNullOrWhiteSpace(newText))
        {
            MessageBox::Show("New notice text cannot be empty.");
            return;
        }

        auto lines = ReadFile();
        int index = lines->IndexOf(oldText);
        if (index != -1)
        {
            lines[index] = newText;
            WriteFile(lines);
            Load(listBox);
        }
        else
        {
            MessageBox::Show("Notice not found!");
        }
    }

    // Delete a selected notice
    void Delete(ListBox^ listBox)
    {
        if (listBox->SelectedItem != nullptr)
        {
            String^ selectedNotice = listBox->SelectedItem->ToString();
            auto lines = ReadFile();
            lines->Remove(selectedNotice);
            WriteFile(lines);                // Write the updated list to the file
            Load(listBox);                   // Reload the ListBox with updated data
        }
        else
        {
            MessageBox::Show("Please select a notice to delete.");
        }
    }


private:
    // Read notices from the file
    List<String^>^ ReadFile()
    {
        List<String^>^ lines = gcnew List<String^>();
        StreamReader^ reader = gcnew StreamReader(GetFilePath());
        String^ line;
        while ((line = reader->ReadLine()) != nullptr)
        {
            lines->Add(line);
        }
        reader->Close();
        return lines;
    }

    // Write notices back to the file
    void WriteFile(List<String^>^ lines)
    {
        StreamWriter^ writer = gcnew StreamWriter(GetFilePath(), false);
        for each (String ^ line in lines)
        {
            writer->WriteLine(line);
        }
        writer->Close();
    }
};

