#pragma once
#include "mapper.h"
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;


ref class specialfunc : public mapper
{
public:
    cli::array<String^>^ LoadFacultyNames()
    {
        List<String^>^ teacherNames = gcnew List<String^>();

        // Define the file path for the faculty file
        String^ facultyFilePath = "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Faculty.txt";  // Specify the correct path

        // Check if the file exists
        if (File::Exists(facultyFilePath))
        {
            // Read all lines from the faculty file
            array<String^>^ lines = File::ReadAllLines(facultyFilePath);

            // Iterate over each line in the file
            for each (String ^ line in lines)
            {
                // Find the first comma in the line and extract the part before it (the teacher's name)
                int commaIndex = line->IndexOf(',');

                if (commaIndex != -1)
                {
                    // Extract the teacher name (everything before the first comma)
                    String^ teacherName = line->Substring(0, commaIndex);
                    teacherNames->Add(teacherName);  // Add the teacher's name to the list
                }
            }
        }
        else
        {
            MessageBox::Show("Faculty file not found.");
        }

        // Convert List to Array
        return teacherNames->ToArray();
    }
    int FindEntryIndex1(String^ studentID)
    {
        // Define the file path for the student records file
        String^ studentFilePath = "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Student.txt";  // Specify the correct path

        // Check if the file exists
        if (File::Exists(studentFilePath))
        {
            // Read all lines from the student data file
            array<String^>^ lines = File::ReadAllLines(studentFilePath);

            // Iterate over each line in the file
            for (int i = 0; i < lines->Length; i++)
            {
                // Split the line by commas to separate the parts
                array<String^>^ studentData = lines[i]->Split(',');

                // Check if we have enough data and the student ID is in the correct column (index 2)
                if (studentData->Length > 1 && studentData[2]->Trim() == studentID->Trim()) // Match the student ID
                {
                    return i;  // Return the index of the student
                }
            }
        }
        else
        {
            MessageBox::Show("Student data file not found.");
        }

        return -1;  // Return -1 if the student ID is not found
    }
    void AddMarks(String^ studentID, String^ teacherName, int marks)
    {
        auto lines = ReadFile();  // Read all data from file
        int index = FindEntryIndex1(studentID);  // Find the index of the student in the list

        if (index != -1)  // If student is found
        {
            array<String^>^ studentData = lines[index]->Split(',');

            // Read the teacher names from the file (assuming the list of faculty members)
            array<String^>^ teacherNames = LoadFacultyNames();

            // Check if the teacher name exists in the teacher names list
            int teacherIndex = Array::IndexOf(teacherNames, teacherName);

            if (teacherIndex != -1)  // If the teacher is valid
            {
                // Calculate the correct position to insert the teacher's marks
                int marksColumnIndex = teacherIndex + 7;  // Teacher's marks should be placed after 6 columns (6 fields before)

                // Ensure the studentData array has enough slots to accommodate the teacher's marks
                if (studentData->Length <= marksColumnIndex)
                {
                    // Resize the array to ensure it has enough columns
                    Array::Resize(studentData, marksColumnIndex + 1);
                }

                // Add or update the marks in the correct column
                studentData[marksColumnIndex] = marks.ToString();  // Store the marks at the calculated index
                lines[index] = String::Join(",", studentData);  // Join the student data with commas

                // Write the updated data back to the file
                WriteFile(lines);

                MessageBox::Show("Marks Entered Successfully.");
            }
            else
            {
                // If the teacher's name is not valid, show an error
                MessageBox::Show("Invalid teacher name.");
            }
        }
        else
        {
            // If the student is not found, show an error
            MessageBox::Show("Student ID not found.");
        }
    }

    array<String^>^ ReadFile(String^ filePath)
    {
        // This should read all lines from the file and return an array of strings
        return System::IO::File::ReadAllLines(filePath);
    }

     void WriteFile(String^ filePath, List<String^>^ lines)
    {

        System::IO::File::WriteAllLines(filePath, lines->ToArray());
    }

    void FilterRows(DataGridView^ gridView, String^ query)
    {
        for each (DataGridViewRow ^ row in gridView->Rows)
        {
            if (row->Cells[0]->Value != nullptr) // Ensure the cell is not null
            {
                row->Visible = Convert::ToString(row->Cells[0]->Value)->IndexOf(query, StringComparison::OrdinalIgnoreCase) >= 0;
            }
        }
    }



};

