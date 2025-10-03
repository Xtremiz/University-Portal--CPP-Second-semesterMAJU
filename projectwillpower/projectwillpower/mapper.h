#pragma once
#include "OOP.h"
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;


ref class mapper:public CRUDoperation
{
public:
    void LoadDataToGrid1(DataGridView^ dataGridView)
    {
        auto entries = Load1();  
        dataGridView->Rows->Clear();
        for each (auto entry in entries)
        {
            // Check if the entry has exactly 11 parts
            if (entry->Length <= 15)
            {
                // Add the row to the DataGridView with the expected number of columns
                dataGridView->Rows->Add(entry[0], entry[1], entry[2], entry[3], entry[4], entry[5], entry[6], entry[7], entry[8], entry[9], entry[10]);
            }
            else
            {
                // Handle cases where the entry doesn't have 11 parts
                MessageBox::Show("Invalid entry found, skipping: " + String::Join(",", entry), "Error");
            }
        }
    }
    void LoadDataToGrid(DataGridView^ dataGridView)
    {
        auto entries = Load();
        dataGridView->Rows->Clear();
        for each (auto entry in entries)
        {
            dataGridView->Rows->Add(entry[0], entry[1], entry[2], entry[3], entry[4], entry[5], entry[6]);
        }
    }

};

