#pragma once
#include "specialfunc.h"
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;


ref class Student : public specialfunc
{
protected:
    virtual String^ GetFilePath() override
    {
        return "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Student.txt";
    }
    

public:
    void Addstd(String^ name, String^ fatherName, String^ id, String^ contactNo, String^ field1, String^ gender, String^ marks1, String^ empty, String^ marks2, String^ empty1, String^ marks3, String^ fees)
    {
        // Read all existing lines from the file
        auto lines = ReadFile();

        // Check if the ID already exists in the file
        for each (String ^ line in lines)
        {
            array<String^>^ parts = line->Split(',');
            if (parts->Length > 2 && parts[2]->Trim()->Equals(id->Trim()))
            {
                MessageBox::Show("Error: ID already exists. Please use a unique ID.");
                return; 
            }
        }

        Dictionary<String^, int>^ programFees = gcnew Dictionary<String^, int>();
        programFees->Add("bscs", 150000);   // Example fee for BSCS
        programFees->Add("bsse", 155000);   // Example fee for BSSE
        programFees->Add("bsce", 160000);   // Example fee for BSCE
        programFees->Add("bsai", 165000);   // Example fee for BSAI

        // Assign fee based on the provided field (program)
        int fee = 0;
        if (programFees->ContainsKey(field1->ToLower()))
        {
            fee = programFees[field1->ToLower()];
        }
        else
        {
            fee = 0;  // Default fee, or handle as needed
        }

        // If the ID is unique, proceed with adding the new student entry
        String^ newEntry = name + "," + fatherName + "," + id + "," + contactNo + "," +
            field1 + "," + gender + "," + DefaultPassword + "," +
            marks1 + "," + marks2 + "," + marks3 + "," + ","+ fee.ToString() + " ";
        lines->Add(newEntry);
        MessageBox::Show("Data Added Successfully.");
        WriteFile(lines);
    }

  
    void marksData(String^ filePath, String^ username, DataGridView^ dataGridView)
    {
        if (File::Exists(filePath))
        {
            array<String^>^ lines = File::ReadAllLines(filePath);

            // Loop through each line in the file
            for each (String ^ line in lines)
            {
                // Split the line by commas
                array<String^>^ parts = line->Split(',');

                // Ensure there are at least 9 parts (index 0 to 8)
                if (parts->Length <= 15)
                {
                    // Trim spaces and check if username matches, ignoring case
                    if (parts[0]->Trim()->Equals(username, StringComparison::InvariantCultureIgnoreCase))
                    {
                        dataGridView->Rows->Clear();
                        dataGridView->Rows->Add(parts[0], parts[1], parts[2], parts[3], parts[4], parts[5], parts[6], parts[7], parts[8], parts[9], parts[10],parts[11]);
                        return;
                    }
                 
                }
            }

            // If no match is found, show a message
            MessageBox::Show("Student not found.", "Error");
        }
        else
        {
            // Handle file not existing
            MessageBox::Show("File does not exist.", "Error");
        }
    }

    void CGPA(String^ filePath, String^ username, DataGridView^ dataGridView)
    {
        if (File::Exists(filePath))
        {
            array<String^>^ lines = File::ReadAllLines(filePath);  // Read all lines from the file

            // Loop through each line in the file
            for each (String ^ line in lines)
            {
                array<String^>^ parts = line->Split(',');  

                if (parts->Length >= 11 && parts[0]->Trim()->Equals(username->Trim(), StringComparison::InvariantCultureIgnoreCase))
                {
                    dataGridView->Rows->Clear();
                    double mark1 = 0.0, mark2 = 0.0, mark3 = 0.0, mark4 = 0.0;

                    try
                    {
                        if (!Double::TryParse(parts[7]->Trim(), mark1) || !Double::TryParse(parts[8]->Trim(), mark2) ||
                            !Double::TryParse(parts[9]->Trim(), mark3) || !Double::TryParse(parts[10]->Trim(), mark4))
                        {
                            MessageBox::Show("Error: Invalid marks data. Please ensure the marks are numeric.", "Error");
                            return;
                        }
                        double cgpa = (mark1 + mark2 + mark3 + mark4) / 400 * 4;

                        // Add the student's data to the DataGridView, including CGPA
                        dataGridView->Rows->Add(parts[0], parts[1], parts[2], parts[3], parts[4], parts[5], parts[6], parts[7], parts[8], parts[9], parts[10], cgpa.ToString("F2"));

                        // Return as the student has been found and processed
                        return;
                    }
                    catch (FormatException^)
                    {

                        MessageBox::Show("Error: Invalid data format in the file. Please check the student data.", "Error");
                        return;
                    }
                }
            }
        }
        else
        {
            MessageBox::Show("File does not exist.", "Error");
        }
    }
    void record(String^ filePath, DataGridView^ dataGridView)
    {
        if (File::Exists(filePath))
        {
            array<String^>^ lines = File::ReadAllLines(filePath);  // Read all lines from the file

            // Clear DataGridView rows once before adding new data
            dataGridView->Rows->Clear();

            // Loop through each line in the file
            for each (String ^ line in lines)
            {
                array<String^>^ parts = line->Split(',');

                if (parts->Length >= 11)
                {
                    double mark1 = 0.0, mark2 = 0.0, mark3 = 0.0, mark4 = 0.0;

                    try
                    {
                        if (!Double::TryParse(parts[7]->Trim(), mark1) || !Double::TryParse(parts[8]->Trim(), mark2) ||
                            !Double::TryParse(parts[9]->Trim(), mark3) || !Double::TryParse(parts[10]->Trim(), mark4))
                        {
                            MessageBox::Show("Error: Invalid marks data. Please ensure the marks are numeric.", "Error");
                            return;
                        }

                        double cgpa = (mark1 + mark2 + mark3 + mark4) / 400 * 4;

                        // Add the student's data to the DataGridView, including CGPA
                        dataGridView->Rows->Add(parts[0], parts[1], parts[2], parts[3], parts[4], parts[5], parts[6], parts[7], parts[8], parts[9], parts[10], cgpa.ToString("F2"));
                    }
                    catch (FormatException^)
                    {
                        MessageBox::Show("Error: Invalid data format in the file. Please check the student data.", "Error");
                        return;
                    }
                }
            }
        }
        else
        {
            MessageBox::Show("File does not exist.", "Error");
        }
    }

    void Installments(String^ filePath, String^ username, DataGridView^ dataGridView)
    {
        // Check if the file exists
        if (File::Exists(filePath))
        {
            array<String^>^ lines = File::ReadAllLines(filePath);  // Read all lines from the file

            // Loop through each line in the file
            for each (String ^ line in lines)
            {
                array<String^>^ parts = line->Split(',');  // Split each line by comma

                if (parts->Length >= 11 && parts[0]->Trim()->Equals(username->Trim(), StringComparison::InvariantCultureIgnoreCase))
                {
                    // Clear the previous data in DataGridView
                    dataGridView->Rows->Clear();

                    // Try to convert the last four marks into numeric values
                   double fees = 0.0;

                    try
                    {
                        // Convert the last four parts (marks) to numbers
                        if ( !Double::TryParse(parts[11]->Trim(), fees))
                        {
                            MessageBox::Show("Error: Invalid marks data. Please ensure the marks are numeric.", "Error");
                            return;
                        }

                        // Calculate the CGPA as the average of these four marks
                        double installment = fees /  3;

                        // Add the student's data to the DataGridView, including CGPA
                        dataGridView->Rows->Add(parts[0], parts[1], parts[2], parts[3], parts[4], parts[5], parts[6], parts[7], parts[8], parts[9], parts[10], parts[11], installment.ToString("F2"), installment.ToString("F2"), installment.ToString("F2"));

                       
                        return;
                    }
                    catch (FormatException^)
                    {

                        MessageBox::Show("Error: Invalid data format in the file. Please check the student data.", "Error");
                        return;
                    }
                }
            }
        }
        else
        {
            MessageBox::Show("File does not exist.", "Error");
        }
    }
    void recordAttendance(String^ studentFilePath, String^ attendanceFolderPath, String^ programTextBox, DataGridView^ dataGridView)
    {
        static int attendanceSessionCount = 0; // Track the number of sessions
        const int maxSessions = 15;           // Maximum allowed sessions

        if (attendanceSessionCount >= maxSessions)
        {
            MessageBox::Show("Attendance limit of " + maxSessions + " sessions has been reached.", "Limit Reached");
            return;
        }

        if (File::Exists(studentFilePath))
        {
            // Read the program entered by the teacher
            String^ selectedProgram = programTextBox->ToString()->Trim();
            if (String::IsNullOrEmpty(selectedProgram))
            {
                MessageBox::Show("Please enter a program name.", "Error");
                return;
            }

            // Read student data from the file
            array<String^>^ lines = File::ReadAllLines(studentFilePath);

            dataGridView->Rows->Clear();
            if (dataGridView->Columns->Count == 0)
            {
                dataGridView->Columns->Add("StudentID", "Student ID");
                dataGridView->Columns->Add("StudentName", "Student Name");
                dataGridView->Columns->Add("Program", "Program");
                dataGridView->Columns->Add("AttendanceStatus", "Attendance");
            }

            List<String^>^ filteredStudents = gcnew List<String^>();
            for each (String ^ line in lines)
            {
                array<String^>^ parts = line->Split(','); // Assuming CSV format: "ID,Name,...,Program"
                if (parts->Length > 4 && parts[4]->Trim()->Equals(selectedProgram, StringComparison::OrdinalIgnoreCase))
                {
                    filteredStudents->Add(line);
                }
            }

            // Check if any students belong to the selected program
            if (filteredStudents->Count == 0)
            {
                MessageBox::Show("No students found for the program: " + selectedProgram, "No Data");
                return;
            }

            List<String^>^ attendanceData = gcnew List<String^>();
            attendanceData->Add("New Session: "  + " - " + DateTime::Now.ToString("dd-MM-yyyy HH:mm"));
            for each (String ^ student in filteredStudents)
            {
                array<String^>^ parts = student->Split(',');
                if (parts->Length > 4)
                {
                    String^ attendanceStatus = MessageBox::Show(
                        "Is " + parts[0]->Trim()+" "+ parts[2]->Trim() + " present?",
                        "Attendance - Program: " + selectedProgram,
                        MessageBoxButtons::YesNo) == DialogResult::Yes ? "Present" : "Absent";

                    // Add student data to DataGridView
                    dataGridView->Rows->Add(parts[0]->Trim(), parts[1]->Trim(), parts[2]->Trim(),  parts[4]->Trim(), attendanceStatus);

                    // Prepare attendance data for the new file
                    attendanceData->Add(parts[0]->Trim() + "," + parts[1]->Trim() + "," + parts[2]->Trim() + "," + selectedProgram + "," + attendanceStatus);
                }
            }

            // Ensure the directory exists
            if (!Directory::Exists(attendanceFolderPath))
            {
                Directory::CreateDirectory(attendanceFolderPath);
            }

            // Construct the full file path
            String^ attendanceFileName = Path::Combine(attendanceFolderPath, "attendance_" + selectedProgram + ".txt");

            // Append attendance data to the file
            File::AppendAllLines(attendanceFileName, attendanceData->ToArray());

            attendanceSessionCount++; // Increment the session count

            MessageBox::Show("Attendance for session " + attendanceSessionCount + " recorded successfully in: " + attendanceFileName, "Success");
        }
        else
        {
            MessageBox::Show("The student data file does not exist.", "Error");
        }
    }
    void updateAttendance(String^ attendanceFilePath, DataGridView^ dataGridView)
    {
        if (!File::Exists(attendanceFilePath))
        {
            MessageBox::Show("Attendance file does not exist.", "Error");
            return;
        }

        if (dataGridView->SelectedRows->Count == 0)
        {
            MessageBox::Show("Please select a row to update.", "Error");
            return;
        }

        // Get the selected row
        DataGridViewRow^ selectedRow = dataGridView->SelectedRows[0];
        if (selectedRow == nullptr || selectedRow->Cells->Count < 4)
        {
            MessageBox::Show("Invalid row selected.", "Error");
            return;
        }

        // Get student details from the selected row
        String^ studentID = selectedRow->Cells[2]->Value->ToString();
        String^ studentName = selectedRow->Cells[0]->Value->ToString();
        String^ program = selectedRow->Cells[4]->Value->ToString();

        // Prompt for new attendance status
        DialogResult result = MessageBox::Show(
            "Is " + studentName + " present?",
            "Update Attendance",
            MessageBoxButtons::YesNoCancel);

        if (result == DialogResult::Cancel)
        {
            return; // Do nothing if cancelled
        }

        String^ newAttendanceStatus = (result == DialogResult::Yes) ? "Present" : "Absent";

        // Update the DataGridView
        selectedRow->Cells[3]->Value = newAttendanceStatus;

        // Read all lines from the attendance file
        array<String^>^ lines = File::ReadAllLines(attendanceFilePath);
        List<String^>^ updatedLines = gcnew List<String^>();

        // Update the specific record in the file
        for each (String ^ line in lines)
        {
            array<String^>^ parts = line->Split(',');
            if (parts->Length >= 4 && parts[2]->Trim()->Equals(studentID) &&
                parts[0]->Trim()->Equals(studentName) &&
                parts[4]->Trim()->Equals(program))
            {
                // Replace the attendance status
                updatedLines->Add(studentName + "," + studentID + "," + program + "," + newAttendanceStatus);
            }
            else
            {
                updatedLines->Add(line); // Keep other lines as they are
            }
        }

        // Save updated data back to the file
        File::WriteAllLines(attendanceFilePath, updatedLines->ToArray());

        MessageBox::Show("Attendance updated successfully for " + studentName, "Success");
    }
    void calculateAttendance(String^ attendanceFilePath, String^ studentID, String^ studentName, String^ stdprogram, DataGridView^ dataGridView)
    {
        if (!File::Exists(attendanceFilePath))
        {
            MessageBox::Show("Attendance file does not exist.", "Error");
            return;
        }

        if (String::IsNullOrEmpty(studentID))
        {
            MessageBox::Show("Please provide a valid Student ID.", "Error");
            return;
        }

        // Read all lines from the attendance file
        array<String^>^ lines = File::ReadAllLines(attendanceFilePath);
       
        int presentCount = 0;
        int absentCount = 0;

        // Loop through each line to count attendance for the specific student
        for each (String ^ line in lines)
        {
            array<String^>^ parts = line->Split(','); // Assuming CSV format: "StudentID,StudentName,Program,AttendanceStatus"
            
            if (parts->Length >= 4 && parts[2]->Trim()->Equals(studentID, StringComparison::OrdinalIgnoreCase))
            {
                String^ attendanceStatus = parts[4]->Trim();
                if (attendanceStatus->Equals("Present", StringComparison::OrdinalIgnoreCase))
                {
                    presentCount++;
                }
                else if (attendanceStatus->Equals("Absent", StringComparison::OrdinalIgnoreCase))
                {
                    absentCount++;
                }
              
            }
        }
    
        // Clear and configure DataGridView
        dataGridView->Rows->Clear();
        if (dataGridView->Columns->Count == 0)
        {
            dataGridView->Columns->Add("StudentName", "Student Name");
            dataGridView->Columns->Add("StudentID", "Student ID");
            dataGridView->Columns->Add("PresentCount", "Present Count");
            dataGridView->Columns->Add("AbsentCount", "Absent Count");
        }
        int totalClasses = presentCount + absentCount;
        double ratio = (totalClasses > 0) ? (static_cast<double>(presentCount) / totalClasses) * 100 : 0.0;
        dataGridView->Rows->Add(studentName,studentID,stdprogram, presentCount.ToString(), absentCount.ToString(),totalClasses,ratio);

    }

};



