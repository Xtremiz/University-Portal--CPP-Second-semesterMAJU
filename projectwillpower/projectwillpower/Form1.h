#pragma once
#include "Header1.h"
#include "Header2.h"
#include "OOP.h"
#include "Faculty.h"
#include "Student.h"
#include "Notice.h"
#include "Account.h"
#include "Login.h"
#include "specialfunc.h"
#include "mapper.h"

namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Form1 : public System::Windows::Forms::Form
    {
    private:
        Student^ student;
        Faculty^ faculty;
        Notice^ notice;
        Account^ account;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
    private: System::Windows::Forms::DataGridView^ dataGridView5;







    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ textBox20;
    private: System::Windows::Forms::TextBox^ textBox22;
    private: System::Windows::Forms::Label^ label33;











    private: System::Windows::Forms::DataGridView^ dataGridView6;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn23;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn25;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn27;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column280;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn29;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column30;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column31;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::DataGridView^ dataGridView7;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn28;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn30;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn31;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column32;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn33;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column34;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column35;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn36;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn37;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn38;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn39;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label37;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn22;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column23;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn24;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column25;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn26;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column27;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column28;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
    private: System::Windows::Forms::Label^ label40;
    private: System::Windows::Forms::Label^ label39;
    private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::Label^ label41;
    private: System::Windows::Forms::Label^ label42;
    private: System::Windows::Forms::Label^ label43;
    private: System::Windows::Forms::Label^ label44;
    private: System::Windows::Forms::Button^ button17;
    private: System::Windows::Forms::ListBox^ listBox1;
    private: System::Windows::Forms::Label^ label45;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label49;
    private: System::Windows::Forms::Label^ label48;
    private: System::Windows::Forms::Label^ label47;
    private: System::Windows::Forms::Label^ label46;
    private: System::Windows::Forms::Label^ label50;
    private: System::Windows::Forms::TabPage^ tabPage4;












private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::DataGridView^ dataGridView8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn32;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn34;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn35;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column40;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn41;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column42;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column43;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column44;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column45;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column46;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column47;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::DataGridView^ dataGridView9;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn40;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn42;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn43;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn44;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn45;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn46;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn47;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn48;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn49;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn50;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn51;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn52;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
private: System::Windows::Forms::TabPage^ tabPage8;
private: System::Windows::Forms::Button^ button20;








private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::DataGridView^ dataGridView10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn53;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn54;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn55;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn56;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn57;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn58;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn59;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn60;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn61;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn62;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn63;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn64;
private: System::Windows::Forms::TabPage^ tabPage10;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::DataGridView^ dataGridView11;














private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn65;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn66;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn67;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn69;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn68;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn70;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn71;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn72;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn73;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn74;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn75;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::TabPage^ tabPage12;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::DataGridView^ dataGridView12;






private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn76;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn78;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn80;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn85;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn86;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column24;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;




























































































           Login^ login;

    public:
        Form1(void)
        {
            InitializeComponent();
            student = gcnew Student();
            faculty = gcnew Faculty();
            notice = gcnew Notice();
            account = gcnew Account();
            login = gcnew Login();
        }

    protected:
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TabControl^ tabControl1;
    protected:
    private: System::Windows::Forms::Button^ button37;
    private: System::Windows::Forms::TextBox^ textBox21;
    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::Button^ button35;
    private: System::Windows::Forms::TextBox^ textBox19;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TabPage^ tabPage2;
    private: System::Windows::Forms::DataGridView^ dataGridView3;







    private: System::Windows::Forms::DataGridView^ dataGridView4;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn19;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn21;



    private: System::Windows::Forms::TabPage^ tabPage6;
    private: System::Windows::Forms::TabPage^ tabPage7;


    private: System::Windows::Forms::TabControl^ tabControl3;
    private: System::Windows::Forms::TabPage^ tabPage9;



    private: System::Windows::Forms::TabPage^ tabPage13;
    private: System::Windows::Forms::TabControl^ tabControl4;
    private: System::Windows::Forms::TabPage^ tabPage15;

    private: System::Windows::Forms::TabPage^ tabPage16;








    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::ListBox^ listBox4;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button4;


    private: System::Windows::Forms::TabPage^ tabPage19;


    private: System::Windows::Forms::TabControl^ tabControl5;
    private: System::Windows::Forms::TabPage^ tabPage20;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ textBox6;

    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TabPage^ tabPage21;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::TextBox^ textBox10;
    private: System::Windows::Forms::TextBox^ textBox11;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::TextBox^ textBox12;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::TextBox^ textBox13;

    private: System::Windows::Forms::TextBox^ textBox14;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::TextBox^ textBox15;


    private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TabControl^ tabControl2;
private: System::Windows::Forms::TabPage^ TabPage3;





    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Label^ label21;


    private: System::Windows::Forms::TabPage^ tabPage5;

    private: System::Windows::Forms::TabPage^ tabPage14;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::TabPage^ tabPage11;
    private: System::Windows::Forms::Button^ button16;

    private: System::Windows::Forms::Label^ label24;













    private: System::Windows::Forms::TextBox^ textBox16;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::Button^ button21;


    private: System::Windows::Forms::Button^ button24;










    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Button^ button29;
    private: System::Windows::Forms::Button^ button31;
    private: System::Windows::Forms::ListBox^ listBox14;


    private: System::Windows::Forms::TextBox^ textBox17;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Button^ button32;
    private: System::Windows::Forms::TextBox^ textBox18;

    private: System::Windows::Forms::Button^ button33;
    private: System::Windows::Forms::Button^ button34;
    private: System::Windows::Forms::DataGridView^ dataGridView1;











    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::DataGridView^ dataGridView2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
    protected:
    private:


        System::ComponentModel::Container^ components;

        // Class-level variable to retain value between button clicks.

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
            this->TabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button32 = (gcnew System::Windows::Forms::Button());
            this->textBox18 = (gcnew System::Windows::Forms::TextBox());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn33 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn36 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn37 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn38 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn39 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column280 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button29 = (gcnew System::Windows::Forms::Button());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->button31 = (gcnew System::Windows::Forms::Button());
            this->listBox14 = (gcnew System::Windows::Forms::ListBox());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->dataGridView9 = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn40 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn42 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn43 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn44 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn45 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn46 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn47 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn48 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn49 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn50 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn51 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn52 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column40 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn41 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column42 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column43 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column44 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column45 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column46 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column47 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
            this->button25 = (gcnew System::Windows::Forms::Button());
            this->label54 = (gcnew System::Windows::Forms::Label());
            this->dataGridView12 = (gcnew System::Windows::Forms::DataGridView());
            this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
            this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
            this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button33 = (gcnew System::Windows::Forms::Button());
            this->textBox17 = (gcnew System::Windows::Forms::TextBox());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->tabPage19 = (gcnew System::Windows::Forms::TabPage());
            this->textBox22 = (gcnew System::Windows::Forms::TextBox());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->textBox20 = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button34 = (gcnew System::Windows::Forms::Button());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->button24 = (gcnew System::Windows::Forms::Button());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
            this->button23 = (gcnew System::Windows::Forms::Button());
            this->label53 = (gcnew System::Windows::Forms::Label());
            this->textBox23 = (gcnew System::Windows::Forms::TextBox());
            this->button22 = (gcnew System::Windows::Forms::Button());
            this->dataGridView11 = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn65 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn66 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn67 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn69 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn68 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn70 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn71 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn72 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn73 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn74 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn75 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
            this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
            this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage20 = (gcnew System::Windows::Forms::TabPage());
            this->button37 = (gcnew System::Windows::Forms::Button());
            this->textBox21 = (gcnew System::Windows::Forms::TextBox());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->tabPage21 = (gcnew System::Windows::Forms::TabPage());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->button35 = (gcnew System::Windows::Forms::Button());
            this->textBox19 = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
            this->listBox4 = (gcnew System::Windows::Forms::ListBox());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
            this->dataGridView10 = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn53 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn54 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn55 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn56 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn57 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn58 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn59 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn60 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn61 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn62 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn63 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn64 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->label52 = (gcnew System::Windows::Forms::Label());
            this->dataGridViewTextBoxColumn76 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn78 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn80 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn85 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn86 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->tabPage2->SuspendLayout();
            this->tabControl2->SuspendLayout();
            this->TabPage3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
            this->tabPage5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
            this->tabPage14->SuspendLayout();
            this->tabPage4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->BeginInit();
            this->tabPage12->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView12))->BeginInit();
            this->tabPage6->SuspendLayout();
            this->tabControl3->SuspendLayout();
            this->tabPage9->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
            this->tabPage13->SuspendLayout();
            this->tabPage19->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
            this->tabPage10->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView11))->BeginInit();
            this->tabPage7->SuspendLayout();
            this->tabControl4->SuspendLayout();
            this->tabPage11->SuspendLayout();
            this->tabPage15->SuspendLayout();
            this->tabControl5->SuspendLayout();
            this->tabPage20->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->tabPage21->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            this->tabPage16->SuspendLayout();
            this->tabPage8->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView10))->BeginInit();
            this->SuspendLayout();
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
       /*     this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Controls->Add(this->tabPage6);
            this->tabControl1->Controls->Add(this->tabPage7);*/
            this->tabControl1->Dock = System::Windows::Forms::DockStyle::Top;
            this->tabControl1->Location = System::Drawing::Point(0, 0);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(1059, 665);
            this->tabControl1->TabIndex = 0;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->label41);
            this->tabPage1->Controls->Add(this->label3);
            this->tabPage1->Controls->Add(this->label2);
            this->tabPage1->Controls->Add(this->label1);
            this->tabPage1->Controls->Add(this->button1);
            this->tabPage1->Controls->Add(this->textBox2);
            this->tabPage1->Controls->Add(this->textBox1);
            this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tabPage1->Location = System::Drawing::Point(4, 29);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
            this->tabPage1->Size = System::Drawing::Size(1051, 632);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"Login";
            this->tabPage1->UseVisualStyleBackColor = true;
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->Location = System::Drawing::Point(273, 85);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(501, 64);
            this->label41->TabIndex = 12;
            this->label41->Text = L"HFS UNIVERSITY";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(442, 260);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(0, 20);
            this->label3->TabIndex = 11;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(326, 254);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(106, 25);
            this->label2->TabIndex = 10;
            this->label2->Text = L"Password";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(326, 200);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(84, 25);
            this->label1->TabIndex = 9;
            this->label1->Text = L"User ID";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(512, 328);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(98, 45);
            this->button1->TabIndex = 8;
            this->button1->Text = L"Login";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(448, 254);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(254, 26);
            this->textBox2->TabIndex = 7;
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(446, 197);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(254, 26);
            this->textBox1->TabIndex = 6;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->tabControl2);
            this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tabPage2->Location = System::Drawing::Point(4, 29);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
            this->tabPage2->Size = System::Drawing::Size(1051, 632);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Student";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // tabControl2
            // 
            this->tabControl2->Controls->Add(this->TabPage3);
            this->tabControl2->Controls->Add(this->tabPage5);
            this->tabControl2->Controls->Add(this->tabPage14);
            this->tabControl2->Controls->Add(this->tabPage4);
            this->tabControl2->Controls->Add(this->tabPage12);
            this->tabControl2->Dock = System::Windows::Forms::DockStyle::Top;
            this->tabControl2->Location = System::Drawing::Point(3, 3);
            this->tabControl2->Name = L"tabControl2";
            this->tabControl2->SelectedIndex = 0;
            this->tabControl2->Size = System::Drawing::Size(1045, 632);
            this->tabControl2->TabIndex = 1;
            // 
            // TabPage3
            // 
            this->TabPage3->Controls->Add(this->label50);
            this->TabPage3->Controls->Add(this->dataGridView4);
            this->TabPage3->Controls->Add(this->button32);
            this->TabPage3->Controls->Add(this->textBox18);
            this->TabPage3->Controls->Add(this->button14);
            this->TabPage3->Controls->Add(this->label21);
            this->TabPage3->Location = System::Drawing::Point(4, 29);
            this->TabPage3->Name = L"TabPage3";
            this->TabPage3->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
            this->TabPage3->Size = System::Drawing::Size(1037, 599);
            this->TabPage3->TabIndex = 0;
            this->TabPage3->Text = L"Home";
            this->TabPage3->UseVisualStyleBackColor = true;
            // 
            // label50
            // 
            this->label50->AutoSize = true;
            this->label50->Location = System::Drawing::Point(20, 94);
            this->label50->Name = L"label50";
            this->label50->Size = System::Drawing::Size(138, 20);
            this->label50->TabIndex = 41;
            this->label50->Text = L"Change Password";
            // 
            // dataGridView4
            // 
            dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView4->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
            this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
                this->dataGridViewTextBoxColumn15,
                    this->dataGridViewTextBoxColumn16, this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19,
                    this->dataGridViewTextBoxColumn20, this->dataGridViewTextBoxColumn21
            });
            dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->dataGridView4->DefaultCellStyle = dataGridViewCellStyle2;
            this->dataGridView4->Location = System::Drawing::Point(21, 158);
            this->dataGridView4->Name = L"dataGridView4";
            this->dataGridView4->RowHeadersWidth = 62;
            this->dataGridView4->RowTemplate->Height = 28;
            this->dataGridView4->Size = System::Drawing::Size(978, 105);
            this->dataGridView4->TabIndex = 40;
            // 
            // dataGridViewTextBoxColumn15
            // 
            this->dataGridViewTextBoxColumn15->HeaderText = L"Name";
            this->dataGridViewTextBoxColumn15->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
            this->dataGridViewTextBoxColumn15->Width = 150;
            // 
            // dataGridViewTextBoxColumn16
            // 
            this->dataGridViewTextBoxColumn16->HeaderText = L"Father Name";
            this->dataGridViewTextBoxColumn16->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
            this->dataGridViewTextBoxColumn16->Width = 150;
            // 
            // dataGridViewTextBoxColumn17
            // 
            this->dataGridViewTextBoxColumn17->HeaderText = L"ID";
            this->dataGridViewTextBoxColumn17->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
            this->dataGridViewTextBoxColumn17->Width = 150;
            // 
            // dataGridViewTextBoxColumn18
            // 
            this->dataGridViewTextBoxColumn18->HeaderText = L"Contact Number";
            this->dataGridViewTextBoxColumn18->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
            this->dataGridViewTextBoxColumn18->Width = 150;
            // 
            // dataGridViewTextBoxColumn19
            // 
            this->dataGridViewTextBoxColumn19->HeaderText = L"Programme";
            this->dataGridViewTextBoxColumn19->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
            this->dataGridViewTextBoxColumn19->Width = 150;
            // 
            // dataGridViewTextBoxColumn20
            // 
            this->dataGridViewTextBoxColumn20->HeaderText = L"Gender";
            this->dataGridViewTextBoxColumn20->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
            this->dataGridViewTextBoxColumn20->Width = 150;
            // 
            // dataGridViewTextBoxColumn21
            // 
            this->dataGridViewTextBoxColumn21->HeaderText = L"Password";
            this->dataGridViewTextBoxColumn21->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
            this->dataGridViewTextBoxColumn21->Width = 150;
            // 
            // button32
            // 
            this->button32->Location = System::Drawing::Point(488, 82);
            this->button32->Name = L"button32";
            this->button32->Size = System::Drawing::Size(86, 38);
            this->button32->TabIndex = 9;
            this->button32->Text = L"Change";
            this->button32->UseVisualStyleBackColor = true;
            this->button32->Click += gcnew System::EventHandler(this, &Form1::button32_Click);
            // 
            // textBox18
            // 
            this->textBox18->Location = System::Drawing::Point(176, 89);
            this->textBox18->Name = L"textBox18";
            this->textBox18->Size = System::Drawing::Size(290, 26);
            this->textBox18->TabIndex = 8;
            this->textBox18->TextChanged += gcnew System::EventHandler(this, &Form1::textBox18_TextChanged);
            // 
            // button14
            // 
            this->button14->Location = System::Drawing::Point(930, 17);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(86, 38);
            this->button14->TabIndex = 2;
            this->button14->Text = L"Logout";
            this->button14->UseVisualStyleBackColor = true;
            this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(12, 18);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(401, 52);
            this->label21->TabIndex = 1;
            this->label21->Text = L"Student Information";
            // 
            // tabPage5
            // 
            this->tabPage5->Controls->Add(this->label37);
            this->tabPage5->Controls->Add(this->label34);
            this->tabPage5->Controls->Add(this->label31);
            this->tabPage5->Controls->Add(this->label30);
            this->tabPage5->Controls->Add(this->label28);
            this->tabPage5->Controls->Add(this->label27);
            this->tabPage5->Controls->Add(this->dataGridView7);
            this->tabPage5->Controls->Add(this->dataGridView6);
            this->tabPage5->Controls->Add(this->button29);
            this->tabPage5->Controls->Add(this->label32);
            this->tabPage5->Location = System::Drawing::Point(4, 29);
            this->tabPage5->Name = L"tabPage5";
            this->tabPage5->Size = System::Drawing::Size(1033, 599);
            this->tabPage5->TabIndex = 2;
            this->tabPage5->Text = L"Result";
            this->tabPage5->UseVisualStyleBackColor = true;
            this->tabPage5->Click += gcnew System::EventHandler(this, &Form1::tabPage5_Click);
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->Location = System::Drawing::Point(36, 532);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(594, 25);
            this->label37->TabIndex = 47;
            this->label37->Text = L"3. If the CGPA is 4 you will get 100% discount on your Tuition Fees.";
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(38, 498);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(599, 25);
            this->label34->TabIndex = 46;
            this->label34->Text = L"2. If the CGPA is 3.9 you will get 50% discount on your Tuition Fees.";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(36, 463);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(610, 25);
            this->label31->TabIndex = 45;
            this->label31->Text = L"1. If the CGPA is 3.75 you will get 25% discount on your Tuition Fees.";
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->Location = System::Drawing::Point(32, 412);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(321, 40);
            this->label30->TabIndex = 44;
            this->label30->Text = L"SCHOLARSHIPS:";
            this->label30->Click += gcnew System::EventHandler(this, &Form1::label30_Click);
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(436, 18);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(165, 40);
            this->label28->TabIndex = 43;
            this->label28->Text = L"RESULT";
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(32, 232);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(112, 37);
            this->label27->TabIndex = 42;
            this->label27->Text = L"CGPA";
            // 
            // dataGridView7
            // 
            dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView7->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
            this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView7->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
                this->dataGridViewTextBoxColumn28,
                    this->dataGridViewTextBoxColumn30, this->dataGridViewTextBoxColumn31, this->Column32, this->dataGridViewTextBoxColumn33, this->Column34,
                    this->Column35, this->dataGridViewTextBoxColumn36, this->dataGridViewTextBoxColumn37, this->dataGridViewTextBoxColumn38, this->dataGridViewTextBoxColumn39,
                    this->Column16
            });
            dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->dataGridView7->DefaultCellStyle = dataGridViewCellStyle4;
            this->dataGridView7->Location = System::Drawing::Point(38, 272);
            this->dataGridView7->Name = L"dataGridView7";
            this->dataGridView7->RowHeadersWidth = 62;
            this->dataGridView7->RowTemplate->Height = 28;
            this->dataGridView7->Size = System::Drawing::Size(962, 108);
            this->dataGridView7->TabIndex = 41;
            // 
            // dataGridViewTextBoxColumn28
            // 
            this->dataGridViewTextBoxColumn28->HeaderText = L"Name";
            this->dataGridViewTextBoxColumn28->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn28->Name = L"dataGridViewTextBoxColumn28";
            this->dataGridViewTextBoxColumn28->Width = 150;
            // 
            // dataGridViewTextBoxColumn30
            // 
            this->dataGridViewTextBoxColumn30->HeaderText = L"Father Name";
            this->dataGridViewTextBoxColumn30->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn30->Name = L"dataGridViewTextBoxColumn30";
            this->dataGridViewTextBoxColumn30->Width = 150;
            // 
            // dataGridViewTextBoxColumn31
            // 
            this->dataGridViewTextBoxColumn31->HeaderText = L"ID";
            this->dataGridViewTextBoxColumn31->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn31->Name = L"dataGridViewTextBoxColumn31";
            this->dataGridViewTextBoxColumn31->Width = 150;
            // 
            // Column32
            // 
            this->Column32->HeaderText = L"Contact Number";
            this->Column32->MinimumWidth = 8;
            this->Column32->Name = L"Column32";
            this->Column32->Width = 150;
            // 
            // dataGridViewTextBoxColumn33
            // 
            this->dataGridViewTextBoxColumn33->HeaderText = L"Department";
            this->dataGridViewTextBoxColumn33->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn33->Name = L"dataGridViewTextBoxColumn33";
            this->dataGridViewTextBoxColumn33->Width = 150;
            // 
            // Column34
            // 
            this->Column34->HeaderText = L"Gender";
            this->Column34->MinimumWidth = 8;
            this->Column34->Name = L"Column34";
            this->Column34->Width = 150;
            // 
            // Column35
            // 
            this->Column35->HeaderText = L"Password";
            this->Column35->MinimumWidth = 8;
            this->Column35->Name = L"Column35";
            this->Column35->Width = 150;
            // 
            // dataGridViewTextBoxColumn36
            // 
            this->dataGridViewTextBoxColumn36->HeaderText = L"Computer";
            this->dataGridViewTextBoxColumn36->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn36->Name = L"dataGridViewTextBoxColumn36";
            this->dataGridViewTextBoxColumn36->Width = 150;
            // 
            // dataGridViewTextBoxColumn37
            // 
            this->dataGridViewTextBoxColumn37->HeaderText = L"Physics";
            this->dataGridViewTextBoxColumn37->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn37->Name = L"dataGridViewTextBoxColumn37";
            this->dataGridViewTextBoxColumn37->Width = 150;
            // 
            // dataGridViewTextBoxColumn38
            // 
            this->dataGridViewTextBoxColumn38->HeaderText = L"Calculus";
            this->dataGridViewTextBoxColumn38->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn38->Name = L"dataGridViewTextBoxColumn38";
            this->dataGridViewTextBoxColumn38->Width = 150;
            // 
            // dataGridViewTextBoxColumn39
            // 
            this->dataGridViewTextBoxColumn39->HeaderText = L"Programming";
            this->dataGridViewTextBoxColumn39->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn39->Name = L"dataGridViewTextBoxColumn39";
            this->dataGridViewTextBoxColumn39->Width = 150;
            // 
            // Column16
            // 
            this->Column16->HeaderText = L"CGPA";
            this->Column16->MinimumWidth = 8;
            this->Column16->Name = L"Column16";
            this->Column16->Width = 150;
            // 
            // dataGridView6
            // 
            dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView6->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
            this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
                this->dataGridViewTextBoxColumn23,
                    this->dataGridViewTextBoxColumn25, this->dataGridViewTextBoxColumn27, this->Column280, this->dataGridViewTextBoxColumn29, this->Column30,
                    this->Column31, this->Column12, this->Column13, this->Column14, this->Column15
            });
            dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->dataGridView6->DefaultCellStyle = dataGridViewCellStyle6;
            this->dataGridView6->Location = System::Drawing::Point(38, 112);
            this->dataGridView6->Name = L"dataGridView6";
            this->dataGridView6->RowHeadersWidth = 62;
            this->dataGridView6->RowTemplate->Height = 28;
            this->dataGridView6->Size = System::Drawing::Size(962, 111);
            this->dataGridView6->TabIndex = 40;
            // 
            // dataGridViewTextBoxColumn23
            // 
            this->dataGridViewTextBoxColumn23->HeaderText = L"Name";
            this->dataGridViewTextBoxColumn23->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
            this->dataGridViewTextBoxColumn23->Width = 150;
            // 
            // dataGridViewTextBoxColumn25
            // 
            this->dataGridViewTextBoxColumn25->HeaderText = L"Father Name";
            this->dataGridViewTextBoxColumn25->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn25->Name = L"dataGridViewTextBoxColumn25";
            this->dataGridViewTextBoxColumn25->Width = 150;
            // 
            // dataGridViewTextBoxColumn27
            // 
            this->dataGridViewTextBoxColumn27->HeaderText = L"ID";
            this->dataGridViewTextBoxColumn27->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn27->Name = L"dataGridViewTextBoxColumn27";
            this->dataGridViewTextBoxColumn27->Width = 150;
            // 
            // Column280
            // 
            this->Column280->HeaderText = L"Contact Number";
            this->Column280->MinimumWidth = 8;
            this->Column280->Name = L"Column280";
            this->Column280->Width = 150;
            // 
            // dataGridViewTextBoxColumn29
            // 
            this->dataGridViewTextBoxColumn29->HeaderText = L"Department";
            this->dataGridViewTextBoxColumn29->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn29->Name = L"dataGridViewTextBoxColumn29";
            this->dataGridViewTextBoxColumn29->Width = 150;
            // 
            // Column30
            // 
            this->Column30->HeaderText = L"Gender";
            this->Column30->MinimumWidth = 8;
            this->Column30->Name = L"Column30";
            this->Column30->Width = 150;
            // 
            // Column31
            // 
            this->Column31->HeaderText = L"Password";
            this->Column31->MinimumWidth = 8;
            this->Column31->Name = L"Column31";
            this->Column31->Width = 150;
            // 
            // Column12
            // 
            this->Column12->HeaderText = L"Computer";
            this->Column12->MinimumWidth = 8;
            this->Column12->Name = L"Column12";
            this->Column12->Width = 150;
            // 
            // Column13
            // 
            this->Column13->HeaderText = L"Physics";
            this->Column13->MinimumWidth = 8;
            this->Column13->Name = L"Column13";
            this->Column13->Width = 150;
            // 
            // Column14
            // 
            this->Column14->HeaderText = L"Calculus";
            this->Column14->MinimumWidth = 8;
            this->Column14->Name = L"Column14";
            this->Column14->Width = 150;
            // 
            // Column15
            // 
            this->Column15->HeaderText = L"Programming";
            this->Column15->MinimumWidth = 8;
            this->Column15->Name = L"Column15";
            this->Column15->Width = 150;
            // 
            // button29
            // 
            this->button29->Location = System::Drawing::Point(891, 68);
            this->button29->Name = L"button29";
            this->button29->Size = System::Drawing::Size(108, 38);
            this->button29->TabIndex = 2;
            this->button29->Text = L"load";
            this->button29->UseVisualStyleBackColor = true;
            this->button29->Click += gcnew System::EventHandler(this, &Form1::button29_Click);
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(30, 68);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(134, 37);
            this->label32->TabIndex = 0;
            this->label32->Text = L"MARKS";
            // 
            // tabPage14
            // 
            this->tabPage14->Controls->Add(this->label40);
            this->tabPage14->Controls->Add(this->label39);
            this->tabPage14->Controls->Add(this->label38);
            this->tabPage14->Controls->Add(this->button31);
            this->tabPage14->Controls->Add(this->listBox14);
            this->tabPage14->Controls->Add(this->label24);
            this->tabPage14->Location = System::Drawing::Point(4, 29);
            this->tabPage14->Name = L"tabPage14";
            this->tabPage14->Size = System::Drawing::Size(1033, 599);
            this->tabPage14->TabIndex = 5;
            this->tabPage14->Text = L"Notice";
            this->tabPage14->UseVisualStyleBackColor = true;
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->Location = System::Drawing::Point(40, 488);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(411, 25);
            this->label40->TabIndex = 12;
            this->label40->Text = L"2.Load everytime whenever you visit this Tab. ";
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label39->Location = System::Drawing::Point(40, 452);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(387, 25);
            this->label39->TabIndex = 11;
            this->label39->Text = L"1.Every Notice is been given by the Admin. ";
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->Location = System::Drawing::Point(34, 386);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(295, 55);
            this->label38->TabIndex = 10;
            this->label38->Text = L"Instructions:";
            // 
            // button31
            // 
            this->button31->Location = System::Drawing::Point(464, 312);
            this->button31->Name = L"button31";
            this->button31->Size = System::Drawing::Size(130, 45);
            this->button31->TabIndex = 9;
            this->button31->Text = L"Load";
            this->button31->UseVisualStyleBackColor = true;
            this->button31->Click += gcnew System::EventHandler(this, &Form1::button31_Click);
            // 
            // listBox14
            // 
            this->listBox14->FormattingEnabled = true;
            this->listBox14->ItemHeight = 20;
            this->listBox14->Location = System::Drawing::Point(94, 142);
            this->listBox14->Name = L"listBox14";
            this->listBox14->Size = System::Drawing::Size(848, 144);
            this->listBox14->TabIndex = 7;
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(446, 43);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(166, 55);
            this->label24->TabIndex = 4;
            this->label24->Text = L"Notice";
            // 
            // tabPage4
            // 
            this->tabPage4->Controls->Add(this->button19);
            this->tabPage4->Controls->Add(this->label51);
            this->tabPage4->Controls->Add(this->dataGridView9);
            this->tabPage4->Controls->Add(this->label26);
            this->tabPage4->Controls->Add(this->dataGridView8);
            this->tabPage4->Controls->Add(this->button18);
            this->tabPage4->Location = System::Drawing::Point(4, 29);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
            this->tabPage4->Size = System::Drawing::Size(1033, 599);
            this->tabPage4->TabIndex = 6;
            this->tabPage4->Text = L"Fees";
            this->tabPage4->UseVisualStyleBackColor = true;
            this->tabPage4->Click += gcnew System::EventHandler(this, &Form1::tabPage4_Click);
            // 
            // button19
            // 
            this->button19->Location = System::Drawing::Point(886, 206);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(108, 46);
            this->button19->TabIndex = 48;
            this->button19->Text = L"Installments";
            this->button19->UseVisualStyleBackColor = true;
            this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
            // 
            // label51
            // 
            this->label51->AutoSize = true;
            this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label51->Location = System::Drawing::Point(27, 218);
            this->label51->Name = L"label51";
            this->label51->Size = System::Drawing::Size(812, 25);
            this->label51->TabIndex = 47;
            this->label51->Text = L"If you want to divide your fees into 3 months installments, Click On The Button H"
                L"ere";
            // 
            // dataGridView9
            // 
            dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView9->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
            this->dataGridView9->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView9->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(15) {
                this->dataGridViewTextBoxColumn40,
                    this->dataGridViewTextBoxColumn42, this->dataGridViewTextBoxColumn43, this->dataGridViewTextBoxColumn44, this->dataGridViewTextBoxColumn45,
                    this->dataGridViewTextBoxColumn46, this->dataGridViewTextBoxColumn47, this->dataGridViewTextBoxColumn48, this->dataGridViewTextBoxColumn49,
                    this->dataGridViewTextBoxColumn50, this->dataGridViewTextBoxColumn51, this->dataGridViewTextBoxColumn52, this->Column18, this->Column19,
                    this->Column20
            });
            dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->dataGridView9->DefaultCellStyle = dataGridViewCellStyle8;
            this->dataGridView9->Location = System::Drawing::Point(34, 258);
            this->dataGridView9->Name = L"dataGridView9";
            this->dataGridView9->RowHeadersWidth = 62;
            this->dataGridView9->RowTemplate->Height = 28;
            this->dataGridView9->Size = System::Drawing::Size(962, 115);
            this->dataGridView9->TabIndex = 46;
            // 
            // dataGridViewTextBoxColumn40
            // 
            this->dataGridViewTextBoxColumn40->HeaderText = L"Name";
            this->dataGridViewTextBoxColumn40->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn40->Name = L"dataGridViewTextBoxColumn40";
            this->dataGridViewTextBoxColumn40->Width = 150;
            // 
            // dataGridViewTextBoxColumn42
            // 
            this->dataGridViewTextBoxColumn42->HeaderText = L"Father Name";
            this->dataGridViewTextBoxColumn42->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn42->Name = L"dataGridViewTextBoxColumn42";
            this->dataGridViewTextBoxColumn42->Width = 150;
            // 
            // dataGridViewTextBoxColumn43
            // 
            this->dataGridViewTextBoxColumn43->HeaderText = L"ID";
            this->dataGridViewTextBoxColumn43->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn43->Name = L"dataGridViewTextBoxColumn43";
            this->dataGridViewTextBoxColumn43->Width = 150;
            // 
            // dataGridViewTextBoxColumn44
            // 
            this->dataGridViewTextBoxColumn44->HeaderText = L"Contact Number";
            this->dataGridViewTextBoxColumn44->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn44->Name = L"dataGridViewTextBoxColumn44";
            this->dataGridViewTextBoxColumn44->Width = 150;
            // 
            // dataGridViewTextBoxColumn45
            // 
            this->dataGridViewTextBoxColumn45->HeaderText = L"Department";
            this->dataGridViewTextBoxColumn45->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn45->Name = L"dataGridViewTextBoxColumn45";
            this->dataGridViewTextBoxColumn45->Width = 150;
            // 
            // dataGridViewTextBoxColumn46
            // 
            this->dataGridViewTextBoxColumn46->HeaderText = L"Gender";
            this->dataGridViewTextBoxColumn46->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn46->Name = L"dataGridViewTextBoxColumn46";
            this->dataGridViewTextBoxColumn46->Width = 150;
            // 
            // dataGridViewTextBoxColumn47
            // 
            this->dataGridViewTextBoxColumn47->HeaderText = L"Password";
            this->dataGridViewTextBoxColumn47->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn47->Name = L"dataGridViewTextBoxColumn47";
            this->dataGridViewTextBoxColumn47->Width = 150;
            // 
            // dataGridViewTextBoxColumn48
            // 
            this->dataGridViewTextBoxColumn48->HeaderText = L"Computer";
            this->dataGridViewTextBoxColumn48->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn48->Name = L"dataGridViewTextBoxColumn48";
            this->dataGridViewTextBoxColumn48->Width = 150;
            // 
            // dataGridViewTextBoxColumn49
            // 
            this->dataGridViewTextBoxColumn49->HeaderText = L"Physics";
            this->dataGridViewTextBoxColumn49->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn49->Name = L"dataGridViewTextBoxColumn49";
            this->dataGridViewTextBoxColumn49->Width = 150;
            // 
            // dataGridViewTextBoxColumn50
            // 
            this->dataGridViewTextBoxColumn50->HeaderText = L"Calculus";
            this->dataGridViewTextBoxColumn50->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn50->Name = L"dataGridViewTextBoxColumn50";
            this->dataGridViewTextBoxColumn50->Width = 150;
            // 
            // dataGridViewTextBoxColumn51
            // 
            this->dataGridViewTextBoxColumn51->HeaderText = L"Programming";
            this->dataGridViewTextBoxColumn51->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn51->Name = L"dataGridViewTextBoxColumn51";
            this->dataGridViewTextBoxColumn51->Width = 150;
            // 
            // dataGridViewTextBoxColumn52
            // 
            this->dataGridViewTextBoxColumn52->HeaderText = L"Fees";
            this->dataGridViewTextBoxColumn52->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn52->Name = L"dataGridViewTextBoxColumn52";
            this->dataGridViewTextBoxColumn52->Width = 150;
            // 
            // Column18
            // 
            this->Column18->HeaderText = L"Installment 01";
            this->Column18->MinimumWidth = 8;
            this->Column18->Name = L"Column18";
            this->Column18->Width = 150;
            // 
            // Column19
            // 
            this->Column19->HeaderText = L"Installment 02";
            this->Column19->MinimumWidth = 8;
            this->Column19->Name = L"Column19";
            this->Column19->Width = 150;
            // 
            // Column20
            // 
            this->Column20->HeaderText = L"Installment 03";
            this->Column20->MinimumWidth = 8;
            this->Column20->Name = L"Column20";
            this->Column20->Width = 150;
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(24, 22);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(135, 55);
            this->label26->TabIndex = 45;
            this->label26->Text = L"Fees";
            // 
            // dataGridView8
            // 
            dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView8->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
            this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView8->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
                this->dataGridViewTextBoxColumn32,
                    this->dataGridViewTextBoxColumn34, this->dataGridViewTextBoxColumn35, this->Column40, this->dataGridViewTextBoxColumn41, this->Column42,
                    this->Column43, this->Column44, this->Column45, this->Column46, this->Column47, this->Column17
            });
            dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle10->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->dataGridView8->DefaultCellStyle = dataGridViewCellStyle10;
            this->dataGridView8->Location = System::Drawing::Point(34, 83);
            this->dataGridView8->Name = L"dataGridView8";
            this->dataGridView8->RowHeadersWidth = 62;
            this->dataGridView8->RowTemplate->Height = 28;
            this->dataGridView8->Size = System::Drawing::Size(962, 108);
            this->dataGridView8->TabIndex = 44;
            this->dataGridView8->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView8_CellContentClick);
            // 
            // dataGridViewTextBoxColumn32
            // 
            this->dataGridViewTextBoxColumn32->HeaderText = L"Name";
            this->dataGridViewTextBoxColumn32->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn32->Name = L"dataGridViewTextBoxColumn32";
            this->dataGridViewTextBoxColumn32->Width = 150;
            // 
            // dataGridViewTextBoxColumn34
            // 
            this->dataGridViewTextBoxColumn34->HeaderText = L"Father Name";
            this->dataGridViewTextBoxColumn34->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn34->Name = L"dataGridViewTextBoxColumn34";
            this->dataGridViewTextBoxColumn34->Width = 150;
            // 
            // dataGridViewTextBoxColumn35
            // 
            this->dataGridViewTextBoxColumn35->HeaderText = L"ID";
            this->dataGridViewTextBoxColumn35->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn35->Name = L"dataGridViewTextBoxColumn35";
            this->dataGridViewTextBoxColumn35->Width = 150;
            // 
            // Column40
            // 
            this->Column40->HeaderText = L"Contact Number";
            this->Column40->MinimumWidth = 8;
            this->Column40->Name = L"Column40";
            this->Column40->Width = 150;
            // 
            // dataGridViewTextBoxColumn41
            // 
            this->dataGridViewTextBoxColumn41->HeaderText = L"Department";
            this->dataGridViewTextBoxColumn41->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn41->Name = L"dataGridViewTextBoxColumn41";
            this->dataGridViewTextBoxColumn41->Width = 150;
            // 
            // Column42
            // 
            this->Column42->HeaderText = L"Gender";
            this->Column42->MinimumWidth = 8;
            this->Column42->Name = L"Column42";
            this->Column42->Width = 150;
            // 
            // Column43
            // 
            this->Column43->HeaderText = L"Password";
            this->Column43->MinimumWidth = 8;
            this->Column43->Name = L"Column43";
            this->Column43->Width = 150;
            // 
            // Column44
            // 
            this->Column44->HeaderText = L"Computer";
            this->Column44->MinimumWidth = 8;
            this->Column44->Name = L"Column44";
            this->Column44->Width = 150;
            // 
            // Column45
            // 
            this->Column45->HeaderText = L"Physics";
            this->Column45->MinimumWidth = 8;
            this->Column45->Name = L"Column45";
            this->Column45->Width = 150;
            // 
            // Column46
            // 
            this->Column46->HeaderText = L"Calculus";
            this->Column46->MinimumWidth = 8;
            this->Column46->Name = L"Column46";
            this->Column46->Width = 150;
            // 
            // Column47
            // 
            this->Column47->HeaderText = L"Programming";
            this->Column47->MinimumWidth = 8;
            this->Column47->Name = L"Column47";
            this->Column47->Width = 150;
            // 
            // Column17
            // 
            this->Column17->HeaderText = L"Fees";
            this->Column17->MinimumWidth = 8;
            this->Column17->Name = L"Column17";
            this->Column17->Width = 150;
            // 
            // button18
            // 
            this->button18->Location = System::Drawing::Point(886, 28);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(108, 38);
            this->button18->TabIndex = 43;
            this->button18->Text = L"load";
            this->button18->UseVisualStyleBackColor = true;
            this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
            // 
            // tabPage12
            // 
            this->tabPage12->Controls->Add(this->button25);
            this->tabPage12->Controls->Add(this->label54);
            this->tabPage12->Controls->Add(this->dataGridView12);
            this->tabPage12->Location = System::Drawing::Point(4, 29);
            this->tabPage12->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage12->Name = L"tabPage12";
            this->tabPage12->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage12->Size = System::Drawing::Size(1037, 599);
            this->tabPage12->TabIndex = 7;
            this->tabPage12->Text = L"Attendance";
            this->tabPage12->UseVisualStyleBackColor = true;
            // 
            // button25
            // 
            this->button25->Location = System::Drawing::Point(886, 46);
            this->button25->Name = L"button25";
            this->button25->Size = System::Drawing::Size(108, 38);
            this->button25->TabIndex = 47;
            this->button25->Text = L"load";
            this->button25->UseVisualStyleBackColor = true;
            this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
            // 
            // label54
            // 
            this->label54->AutoSize = true;
            this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label54->Location = System::Drawing::Point(24, 31);
            this->label54->Name = L"label54";
            this->label54->Size = System::Drawing::Size(241, 52);
            this->label54->TabIndex = 46;
            this->label54->Text = L"Attendance";
            // 
            // dataGridView12
            // 
            dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle11->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView12->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle11;
            this->dataGridView12->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView12->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
                this->dataGridViewTextBoxColumn76,
                    this->dataGridViewTextBoxColumn78, this->dataGridViewTextBoxColumn80, this->dataGridViewTextBoxColumn85, this->dataGridViewTextBoxColumn86,
                    this->Column24, this->Column22
            });
            dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle12->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle12->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->dataGridView12->DefaultCellStyle = dataGridViewCellStyle12;
            this->dataGridView12->Location = System::Drawing::Point(33, 103);
            this->dataGridView12->Name = L"dataGridView12";
            this->dataGridView12->RowHeadersWidth = 62;
            this->dataGridView12->RowTemplate->Height = 28;
            this->dataGridView12->Size = System::Drawing::Size(962, 108);
            this->dataGridView12->TabIndex = 45;
            // 
            // tabPage6
            // 
            this->tabPage6->Controls->Add(this->tabControl3);
            this->tabPage6->Location = System::Drawing::Point(4, 29);
            this->tabPage6->Name = L"tabPage6";
            this->tabPage6->Size = System::Drawing::Size(1051, 632);
            this->tabPage6->TabIndex = 2;
            this->tabPage6->Text = L"Faculty";
            this->tabPage6->UseVisualStyleBackColor = true;
            // 
            // tabControl3
            // 
            this->tabControl3->Controls->Add(this->tabPage9);
            this->tabControl3->Controls->Add(this->tabPage13);
            this->tabControl3->Controls->Add(this->tabPage19);
            this->tabControl3->Controls->Add(this->tabPage10);
            this->tabControl3->Dock = System::Windows::Forms::DockStyle::Top;
            this->tabControl3->Location = System::Drawing::Point(0, 0);
            this->tabControl3->Name = L"tabControl3";
            this->tabControl3->SelectedIndex = 0;
            this->tabControl3->Size = System::Drawing::Size(1051, 635);
            this->tabControl3->TabIndex = 0;
            // 
            // tabPage9
            // 
            this->tabPage9->Controls->Add(this->dataGridView3);
            this->tabPage9->Controls->Add(this->button33);
            this->tabPage9->Controls->Add(this->textBox17);
            this->tabPage9->Controls->Add(this->label25);
            this->tabPage9->Controls->Add(this->button15);
            this->tabPage9->Controls->Add(this->label22);
            this->tabPage9->Location = System::Drawing::Point(4, 29);
            this->tabPage9->Name = L"tabPage9";
            this->tabPage9->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
            this->tabPage9->Size = System::Drawing::Size(1043, 602);
            this->tabPage9->TabIndex = 0;
            this->tabPage9->Text = L"Home";
            this->tabPage9->UseVisualStyleBackColor = true;
            // 
            // dataGridView3
            // 
            dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle13->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle13->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle13->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle13->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle13;
            this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
                this->dataGridViewTextBoxColumn8,
                    this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12,
                    this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14
            });
            dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle14->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle14->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle14->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle14->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle14;
            this->dataGridView3->Location = System::Drawing::Point(28, 132);
            this->dataGridView3->Name = L"dataGridView3";
            dataGridViewCellStyle15->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle15->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle15->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle15->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle15->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle15->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView3->RowHeadersDefaultCellStyle = dataGridViewCellStyle15;
            this->dataGridView3->RowHeadersWidth = 62;
            this->dataGridView3->RowTemplate->Height = 28;
            this->dataGridView3->Size = System::Drawing::Size(975, 200);
            this->dataGridView3->TabIndex = 39;
            // 
            // dataGridViewTextBoxColumn8
            // 
            this->dataGridViewTextBoxColumn8->HeaderText = L"Name";
            this->dataGridViewTextBoxColumn8->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
            this->dataGridViewTextBoxColumn8->Width = 150;
            // 
            // dataGridViewTextBoxColumn9
            // 
            this->dataGridViewTextBoxColumn9->HeaderText = L"Father Name";
            this->dataGridViewTextBoxColumn9->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
            this->dataGridViewTextBoxColumn9->Width = 150;
            // 
            // dataGridViewTextBoxColumn10
            // 
            this->dataGridViewTextBoxColumn10->HeaderText = L"ID";
            this->dataGridViewTextBoxColumn10->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
            this->dataGridViewTextBoxColumn10->Width = 150;
            // 
            // dataGridViewTextBoxColumn11
            // 
            this->dataGridViewTextBoxColumn11->HeaderText = L"Contact Number";
            this->dataGridViewTextBoxColumn11->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
            this->dataGridViewTextBoxColumn11->Width = 150;
            // 
            // dataGridViewTextBoxColumn12
            // 
            this->dataGridViewTextBoxColumn12->HeaderText = L"Department";
            this->dataGridViewTextBoxColumn12->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
            this->dataGridViewTextBoxColumn12->Width = 150;
            // 
            // dataGridViewTextBoxColumn13
            // 
            this->dataGridViewTextBoxColumn13->HeaderText = L"Gender";
            this->dataGridViewTextBoxColumn13->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
            this->dataGridViewTextBoxColumn13->Width = 150;
            // 
            // dataGridViewTextBoxColumn14
            // 
            this->dataGridViewTextBoxColumn14->HeaderText = L"Password";
            this->dataGridViewTextBoxColumn14->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
            this->dataGridViewTextBoxColumn14->Width = 150;
            // 
            // button33
            // 
            this->button33->Location = System::Drawing::Point(488, 80);
            this->button33->Name = L"button33";
            this->button33->Size = System::Drawing::Size(86, 38);
            this->button33->TabIndex = 10;
            this->button33->Text = L"Change";
            this->button33->UseVisualStyleBackColor = true;
            this->button33->Click += gcnew System::EventHandler(this, &Form1::button33_Click);
            // 
            // textBox17
            // 
            this->textBox17->Location = System::Drawing::Point(176, 86);
            this->textBox17->Name = L"textBox17";
            this->textBox17->Size = System::Drawing::Size(290, 26);
            this->textBox17->TabIndex = 6;
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Location = System::Drawing::Point(24, 92);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(138, 20);
            this->label25->TabIndex = 5;
            this->label25->Text = L"Change Password";
            // 
            // button15
            // 
            this->button15->Location = System::Drawing::Point(916, 28);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(86, 38);
            this->button15->TabIndex = 4;
            this->button15->Text = L"Logout";
            this->button15->UseVisualStyleBackColor = true;
            this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(20, 28);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(393, 52);
            this->label22->TabIndex = 3;
            this->label22->Text = L"Faculty Information";
            // 
            // tabPage13
            // 
            this->tabPage13->Controls->Add(this->label42);
            this->tabPage13->Controls->Add(this->label43);
            this->tabPage13->Controls->Add(this->label44);
            this->tabPage13->Controls->Add(this->button17);
            this->tabPage13->Controls->Add(this->listBox1);
            this->tabPage13->Controls->Add(this->label45);
            this->tabPage13->Location = System::Drawing::Point(4, 29);
            this->tabPage13->Name = L"tabPage13";
            this->tabPage13->Size = System::Drawing::Size(1039, 602);
            this->tabPage13->TabIndex = 3;
            this->tabPage13->Text = L"Notice";
            this->tabPage13->UseVisualStyleBackColor = true;
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->Location = System::Drawing::Point(44, 497);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(411, 25);
            this->label42->TabIndex = 18;
            this->label42->Text = L"2.Load everytime whenever you visit this Tab. ";
            // 
            // label43
            // 
            this->label43->AutoSize = true;
            this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43->Location = System::Drawing::Point(42, 462);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(387, 25);
            this->label43->TabIndex = 17;
            this->label43->Text = L"1.Every Notice is been given by the Admin. ";
            // 
            // label44
            // 
            this->label44->AutoSize = true;
            this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label44->Location = System::Drawing::Point(38, 395);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(295, 55);
            this->label44->TabIndex = 16;
            this->label44->Text = L"Instructions:";
            // 
            // button17
            // 
            this->button17->Location = System::Drawing::Point(459, 311);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(130, 45);
            this->button17->TabIndex = 15;
            this->button17->Text = L"Load";
            this->button17->UseVisualStyleBackColor = true;
            this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
            // 
            // listBox1
            // 
            this->listBox1->FormattingEnabled = true;
            this->listBox1->ItemHeight = 20;
            this->listBox1->Location = System::Drawing::Point(93, 120);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(862, 164);
            this->listBox1->TabIndex = 14;
            // 
            // label45
            // 
            this->label45->AutoSize = true;
            this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label45->Location = System::Drawing::Point(436, 37);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(166, 55);
            this->label45->TabIndex = 13;
            this->label45->Text = L"Notice";
            // 
            // tabPage19
            // 
            this->tabPage19->Controls->Add(this->textBox22);
            this->tabPage19->Controls->Add(this->label33);
            this->tabPage19->Controls->Add(this->textBox20);
            this->tabPage19->Controls->Add(this->label8);
            this->tabPage19->Controls->Add(this->dataGridView5);
            this->tabPage19->Controls->Add(this->button34);
            this->tabPage19->Controls->Add(this->button21);
            this->tabPage19->Controls->Add(this->button24);
            this->tabPage19->Controls->Add(this->textBox16);
            this->tabPage19->Controls->Add(this->label29);
            this->tabPage19->Location = System::Drawing::Point(4, 29);
            this->tabPage19->Name = L"tabPage19";
            this->tabPage19->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
            this->tabPage19->Size = System::Drawing::Size(1039, 602);
            this->tabPage19->TabIndex = 4;
            this->tabPage19->Text = L"Generate Marks";
            this->tabPage19->UseVisualStyleBackColor = true;
            // 
            // textBox22
            // 
            this->textBox22->Location = System::Drawing::Point(224, 48);
            this->textBox22->Name = L"textBox22";
            this->textBox22->Size = System::Drawing::Size(594, 26);
            this->textBox22->TabIndex = 43;
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Location = System::Drawing::Point(68, 55);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(121, 20);
            this->label33->TabIndex = 42;
            this->label33->Text = L"Search Student";
            // 
            // textBox20
            // 
            this->textBox20->Location = System::Drawing::Point(602, 94);
            this->textBox20->Name = L"textBox20";
            this->textBox20->Size = System::Drawing::Size(216, 26);
            this->textBox20->TabIndex = 41;
            this->textBox20->TextChanged += gcnew System::EventHandler(this, &Form1::textBox20_TextChanged);
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(495, 98);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(95, 20);
            this->label8->TabIndex = 40;
            this->label8->Text = L"Enter Marks";
            this->label8->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
            // 
            // dataGridView5
            // 
            this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
                this->dataGridViewTextBoxColumn22,
                    this->Column23, this->dataGridViewTextBoxColumn24, this->Column25, this->dataGridViewTextBoxColumn26, this->Column27, this->Column28,
                    this->Column8, this->Column9, this->Column10, this->Column11
            });
            this->dataGridView5->Location = System::Drawing::Point(56, 197);
            this->dataGridView5->Name = L"dataGridView5";
            this->dataGridView5->RowHeadersWidth = 62;
            this->dataGridView5->RowTemplate->Height = 28;
            this->dataGridView5->Size = System::Drawing::Size(924, 355);
            this->dataGridView5->TabIndex = 39;
            this->dataGridView5->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView5_CellContentClick);
            // 
            // dataGridViewTextBoxColumn22
            // 
            this->dataGridViewTextBoxColumn22->HeaderText = L"Name";
            this->dataGridViewTextBoxColumn22->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
            this->dataGridViewTextBoxColumn22->Width = 150;
            // 
            // Column23
            // 
            this->Column23->HeaderText = L"Father Name";
            this->Column23->MinimumWidth = 8;
            this->Column23->Name = L"Column23";
            this->Column23->Width = 150;
            // 
            // dataGridViewTextBoxColumn24
            // 
            this->dataGridViewTextBoxColumn24->HeaderText = L"ID";
            this->dataGridViewTextBoxColumn24->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
            this->dataGridViewTextBoxColumn24->Width = 150;
            // 
            // Column25
            // 
            this->Column25->HeaderText = L"Contact Number";
            this->Column25->MinimumWidth = 8;
            this->Column25->Name = L"Column25";
            this->Column25->Width = 150;
            // 
            // dataGridViewTextBoxColumn26
            // 
            this->dataGridViewTextBoxColumn26->HeaderText = L"Program";
            this->dataGridViewTextBoxColumn26->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn26->Name = L"dataGridViewTextBoxColumn26";
            this->dataGridViewTextBoxColumn26->Width = 150;
            // 
            // Column27
            // 
            this->Column27->HeaderText = L"Gender";
            this->Column27->MinimumWidth = 8;
            this->Column27->Name = L"Column27";
            this->Column27->Width = 150;
            // 
            // Column28
            // 
            this->Column28->HeaderText = L"Password";
            this->Column28->MinimumWidth = 8;
            this->Column28->Name = L"Column28";
            this->Column28->Width = 150;
            // 
            // Column8
            // 
            this->Column8->HeaderText = L"Computer";
            this->Column8->MinimumWidth = 8;
            this->Column8->Name = L"Column8";
            this->Column8->Width = 150;
            // 
            // Column9
            // 
            this->Column9->HeaderText = L"Physics";
            this->Column9->MinimumWidth = 8;
            this->Column9->Name = L"Column9";
            this->Column9->Width = 150;
            // 
            // Column10
            // 
            this->Column10->HeaderText = L"Calculs";
            this->Column10->MinimumWidth = 8;
            this->Column10->Name = L"Column10";
            this->Column10->Width = 150;
            // 
            // Column11
            // 
            this->Column11->HeaderText = L"Programming";
            this->Column11->MinimumWidth = 8;
            this->Column11->Name = L"Column11";
            this->Column11->Width = 150;
            // 
            // button34
            // 
            this->button34->Location = System::Drawing::Point(843, 51);
            this->button34->Name = L"button34";
            this->button34->Size = System::Drawing::Size(123, 32);
            this->button34->TabIndex = 12;
            this->button34->Text = L"Search";
            this->button34->UseVisualStyleBackColor = true;
            this->button34->Click += gcnew System::EventHandler(this, &Form1::button34_Click);
            // 
            // button21
            // 
            this->button21->Location = System::Drawing::Point(476, 155);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(123, 32);
            this->button21->TabIndex = 11;
            this->button21->Text = L"Load";
            this->button21->UseVisualStyleBackColor = true;
            this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
            // 
            // button24
            // 
            this->button24->Location = System::Drawing::Point(843, 91);
            this->button24->Name = L"button24";
            this->button24->Size = System::Drawing::Size(123, 32);
            this->button24->TabIndex = 8;
            this->button24->Text = L"Add";
            this->button24->UseVisualStyleBackColor = true;
            this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
            // 
            // textBox16
            // 
            this->textBox16->Location = System::Drawing::Point(224, 92);
            this->textBox16->Name = L"textBox16";
            this->textBox16->Size = System::Drawing::Size(224, 26);
            this->textBox16->TabIndex = 1;
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Location = System::Drawing::Point(68, 98);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(87, 20);
            this->label29->TabIndex = 0;
            this->label29->Text = L"Student ID";
            this->label29->Click += gcnew System::EventHandler(this, &Form1::label29_Click);
            // 
            // tabPage10
            // 
            this->tabPage10->Controls->Add(this->button23);
            this->tabPage10->Controls->Add(this->label53);
            this->tabPage10->Controls->Add(this->textBox23);
            this->tabPage10->Controls->Add(this->button22);
            this->tabPage10->Controls->Add(this->dataGridView11);
            this->tabPage10->Location = System::Drawing::Point(4, 29);
            this->tabPage10->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage10->Name = L"tabPage10";
            this->tabPage10->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage10->Size = System::Drawing::Size(1039, 602);
            this->tabPage10->TabIndex = 5;
            this->tabPage10->Text = L"Attendance";
            this->tabPage10->UseVisualStyleBackColor = true;
            // 
            // button23
            // 
            this->button23->Location = System::Drawing::Point(844, 35);
            this->button23->Name = L"button23";
            this->button23->Size = System::Drawing::Size(135, 49);
            this->button23->TabIndex = 44;
            this->button23->Text = L"Update";
            this->button23->UseVisualStyleBackColor = true;
            this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click_1);
            // 
            // label53
            // 
            this->label53->AutoSize = true;
            this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label53->Location = System::Drawing::Point(51, 45);
            this->label53->Name = L"label53";
            this->label53->Size = System::Drawing::Size(106, 29);
            this->label53->TabIndex = 43;
            this->label53->Text = L"Program";
            // 
            // textBox23
            // 
            this->textBox23->Location = System::Drawing::Point(156, 45);
            this->textBox23->Name = L"textBox23";
            this->textBox23->Size = System::Drawing::Size(290, 26);
            this->textBox23->TabIndex = 7;
            // 
            // button22
            // 
            this->button22->Location = System::Drawing::Point(454, 35);
            this->button22->Name = L"button22";
            this->button22->Size = System::Drawing::Size(135, 49);
            this->button22->TabIndex = 41;
            this->button22->Text = L"Load";
            this->button22->UseVisualStyleBackColor = true;
            this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
            // 
            // dataGridView11
            // 
            this->dataGridView11->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView11->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
                this->dataGridViewTextBoxColumn65,
                    this->dataGridViewTextBoxColumn66, this->dataGridViewTextBoxColumn67, this->dataGridViewTextBoxColumn69, this->Column21, this->dataGridViewTextBoxColumn68,
                    this->dataGridViewTextBoxColumn70, this->dataGridViewTextBoxColumn71, this->dataGridViewTextBoxColumn72, this->dataGridViewTextBoxColumn73,
                    this->dataGridViewTextBoxColumn74, this->dataGridViewTextBoxColumn75
            });
            this->dataGridView11->Location = System::Drawing::Point(56, 98);
            this->dataGridView11->Name = L"dataGridView11";
            this->dataGridView11->RowHeadersWidth = 62;
            this->dataGridView11->RowTemplate->Height = 28;
            this->dataGridView11->Size = System::Drawing::Size(924, 355);
            this->dataGridView11->TabIndex = 40;
            // 
            // dataGridViewTextBoxColumn65
            // 
            this->dataGridViewTextBoxColumn65->HeaderText = L"Name";
            this->dataGridViewTextBoxColumn65->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn65->Name = L"dataGridViewTextBoxColumn65";
            this->dataGridViewTextBoxColumn65->Width = 150;
            // 
            // dataGridViewTextBoxColumn66
            // 
            this->dataGridViewTextBoxColumn66->HeaderText = L"Father Name";
            this->dataGridViewTextBoxColumn66->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn66->Name = L"dataGridViewTextBoxColumn66";
            this->dataGridViewTextBoxColumn66->Width = 150;
            // 
            // dataGridViewTextBoxColumn67
            // 
            this->dataGridViewTextBoxColumn67->HeaderText = L"ID";
            this->dataGridViewTextBoxColumn67->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn67->Name = L"dataGridViewTextBoxColumn67";
            this->dataGridViewTextBoxColumn67->Width = 150;
            // 
            // dataGridViewTextBoxColumn69
            // 
            this->dataGridViewTextBoxColumn69->HeaderText = L"Program";
            this->dataGridViewTextBoxColumn69->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn69->Name = L"dataGridViewTextBoxColumn69";
            this->dataGridViewTextBoxColumn69->Width = 150;
            // 
            // Column21
            // 
            this->Column21->HeaderText = L"Attendance";
            this->Column21->MinimumWidth = 8;
            this->Column21->Name = L"Column21";
            this->Column21->Width = 150;
            // 
            // dataGridViewTextBoxColumn68
            // 
            this->dataGridViewTextBoxColumn68->HeaderText = L"Contact Number";
            this->dataGridViewTextBoxColumn68->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn68->Name = L"dataGridViewTextBoxColumn68";
            this->dataGridViewTextBoxColumn68->Width = 150;
            // 
            // dataGridViewTextBoxColumn70
            // 
            this->dataGridViewTextBoxColumn70->HeaderText = L"Gender";
            this->dataGridViewTextBoxColumn70->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn70->Name = L"dataGridViewTextBoxColumn70";
            this->dataGridViewTextBoxColumn70->Width = 150;
            // 
            // dataGridViewTextBoxColumn71
            // 
            this->dataGridViewTextBoxColumn71->HeaderText = L"Password";
            this->dataGridViewTextBoxColumn71->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn71->Name = L"dataGridViewTextBoxColumn71";
            this->dataGridViewTextBoxColumn71->Width = 150;
            // 
            // dataGridViewTextBoxColumn72
            // 
            this->dataGridViewTextBoxColumn72->HeaderText = L"Computer";
            this->dataGridViewTextBoxColumn72->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn72->Name = L"dataGridViewTextBoxColumn72";
            this->dataGridViewTextBoxColumn72->Width = 150;
            // 
            // dataGridViewTextBoxColumn73
            // 
            this->dataGridViewTextBoxColumn73->HeaderText = L"Physics";
            this->dataGridViewTextBoxColumn73->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn73->Name = L"dataGridViewTextBoxColumn73";
            this->dataGridViewTextBoxColumn73->Width = 150;
            // 
            // dataGridViewTextBoxColumn74
            // 
            this->dataGridViewTextBoxColumn74->HeaderText = L"Calculs";
            this->dataGridViewTextBoxColumn74->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn74->Name = L"dataGridViewTextBoxColumn74";
            this->dataGridViewTextBoxColumn74->Width = 150;
            // 
            // dataGridViewTextBoxColumn75
            // 
            this->dataGridViewTextBoxColumn75->HeaderText = L"Programming";
            this->dataGridViewTextBoxColumn75->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn75->Name = L"dataGridViewTextBoxColumn75";
            this->dataGridViewTextBoxColumn75->Width = 150;
            // 
            // tabPage7
            // 
            this->tabPage7->Controls->Add(this->tabControl4);
            this->tabPage7->Location = System::Drawing::Point(4, 29);
            this->tabPage7->Name = L"tabPage7";
            this->tabPage7->Size = System::Drawing::Size(1051, 632);
            this->tabPage7->TabIndex = 3;
            this->tabPage7->Text = L"Admin";
            this->tabPage7->UseVisualStyleBackColor = true;
            // 
            // tabControl4
            // 
            this->tabControl4->Controls->Add(this->tabPage11);
            this->tabControl4->Controls->Add(this->tabPage15);
            this->tabControl4->Controls->Add(this->tabPage16);
            this->tabControl4->Controls->Add(this->tabPage8);
            this->tabControl4->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->tabControl4->Dock = System::Windows::Forms::DockStyle::Top;
            this->tabControl4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tabControl4->Location = System::Drawing::Point(0, 0);
            this->tabControl4->Name = L"tabControl4";
            this->tabControl4->SelectedIndex = 0;
            this->tabControl4->Size = System::Drawing::Size(1051, 635);
            this->tabControl4->TabIndex = 0;
            // 
            // tabPage11
            // 
            this->tabPage11->Controls->Add(this->label35);
            this->tabPage11->Controls->Add(this->button16);
            this->tabPage11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tabPage11->Location = System::Drawing::Point(4, 32);
            this->tabPage11->Name = L"tabPage11";
            this->tabPage11->Size = System::Drawing::Size(1043, 599);
            this->tabPage11->TabIndex = 4;
            this->tabPage11->Text = L"Home";
            this->tabPage11->UseVisualStyleBackColor = true;
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->Location = System::Drawing::Point(152, 189);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(741, 108);
            this->label35->TabIndex = 4;
            this->label35->Text = L"Welcome Admin";
            // 
            // button16
            // 
            this->button16->Location = System::Drawing::Point(938, 17);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(86, 38);
            this->button16->TabIndex = 3;
            this->button16->Text = L"Logout";
            this->button16->UseVisualStyleBackColor = true;
            this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
            // 
            // tabPage15
            // 
            this->tabPage15->Controls->Add(this->tabControl5);
            this->tabPage15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tabPage15->Location = System::Drawing::Point(4, 32);
            this->tabPage15->Name = L"tabPage15";
            this->tabPage15->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
            this->tabPage15->Size = System::Drawing::Size(1039, 599);
            this->tabPage15->TabIndex = 0;
            this->tabPage15->Text = L"Add";
            this->tabPage15->UseVisualStyleBackColor = true;
            // 
            // tabControl5
            // 
            this->tabControl5->Controls->Add(this->tabPage20);
            this->tabControl5->Controls->Add(this->tabPage21);
            this->tabControl5->Dock = System::Windows::Forms::DockStyle::Top;
            this->tabControl5->Location = System::Drawing::Point(3, 3);
            this->tabControl5->Name = L"tabControl5";
            this->tabControl5->SelectedIndex = 0;
            this->tabControl5->Size = System::Drawing::Size(1033, 591);
            this->tabControl5->TabIndex = 0;
            // 
            // tabPage20
            // 
            this->tabPage20->Controls->Add(this->button37);
            this->tabPage20->Controls->Add(this->textBox21);
            this->tabPage20->Controls->Add(this->label36);
            this->tabPage20->Controls->Add(this->dataGridView1);
            this->tabPage20->Controls->Add(this->button9);
            this->tabPage20->Controls->Add(this->button8);
            this->tabPage20->Controls->Add(this->button7);
            this->tabPage20->Controls->Add(this->button6);
            this->tabPage20->Controls->Add(this->label14);
            this->tabPage20->Controls->Add(this->label12);
            this->tabPage20->Controls->Add(this->textBox9);
            this->tabPage20->Controls->Add(this->textBox8);
            this->tabPage20->Controls->Add(this->label11);
            this->tabPage20->Controls->Add(this->textBox7);
            this->tabPage20->Controls->Add(this->label10);
            this->tabPage20->Controls->Add(this->label9);
            this->tabPage20->Controls->Add(this->label5);
            this->tabPage20->Controls->Add(this->textBox6);
            this->tabPage20->Controls->Add(this->textBox4);
            this->tabPage20->Controls->Add(this->label4);
            this->tabPage20->Controls->Add(this->textBox3);
            this->tabPage20->Location = System::Drawing::Point(4, 29);
            this->tabPage20->Name = L"tabPage20";
            this->tabPage20->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
            this->tabPage20->Size = System::Drawing::Size(1025, 558);
            this->tabPage20->TabIndex = 0;
            this->tabPage20->Text = L"Student";
            this->tabPage20->UseVisualStyleBackColor = true;
            this->tabPage20->Click += gcnew System::EventHandler(this, &Form1::tabPage20_Click);
            // 
            // button37
            // 
            this->button37->Location = System::Drawing::Point(896, 28);
            this->button37->Name = L"button37";
            this->button37->Size = System::Drawing::Size(90, 31);
            this->button37->TabIndex = 45;
            this->button37->Text = L"Search";
            this->button37->UseVisualStyleBackColor = true;
            this->button37->Click += gcnew System::EventHandler(this, &Form1::button37_Click);
            // 
            // textBox21
            // 
            this->textBox21->Location = System::Drawing::Point(626, 32);
            this->textBox21->Name = L"textBox21";
            this->textBox21->Size = System::Drawing::Size(252, 26);
            this->textBox21->TabIndex = 44;
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Location = System::Drawing::Point(482, 38);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(126, 20);
            this->label36->TabIndex = 43;
            this->label36->Text = L"Search by Name";
            // 
            // dataGridView1
            // 
            dataGridViewCellStyle16->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle16->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle16->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle16->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle16->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle16->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle16;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
                this->Column1,
                    this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
            });
            dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle17->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle17->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle17->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle17->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle17->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle17;
            this->dataGridView1->Location = System::Drawing::Point(486, 68);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 62;
            this->dataGridView1->RowTemplate->Height = 28;
            this->dataGridView1->Size = System::Drawing::Size(502, 200);
            this->dataGridView1->TabIndex = 38;
            // 
            // Column1
            // 
            this->Column1->HeaderText = L"Name";
            this->Column1->MinimumWidth = 8;
            this->Column1->Name = L"Column1";
            this->Column1->Width = 150;
            // 
            // Column2
            // 
            this->Column2->HeaderText = L"Father Name";
            this->Column2->MinimumWidth = 8;
            this->Column2->Name = L"Column2";
            this->Column2->Width = 150;
            // 
            // Column3
            // 
            this->Column3->HeaderText = L"ID";
            this->Column3->MinimumWidth = 8;
            this->Column3->Name = L"Column3";
            this->Column3->Width = 150;
            // 
            // Column4
            // 
            this->Column4->HeaderText = L"Contact Number";
            this->Column4->MinimumWidth = 8;
            this->Column4->Name = L"Column4";
            this->Column4->Width = 150;
            // 
            // Column5
            // 
            this->Column5->HeaderText = L"Programme";
            this->Column5->MinimumWidth = 8;
            this->Column5->Name = L"Column5";
            this->Column5->Width = 150;
            // 
            // Column6
            // 
            this->Column6->HeaderText = L"Gender";
            this->Column6->MinimumWidth = 8;
            this->Column6->Name = L"Column6";
            this->Column6->Width = 150;
            // 
            // Column7
            // 
            this->Column7->HeaderText = L"Password";
            this->Column7->MinimumWidth = 8;
            this->Column7->Name = L"Column7";
            this->Column7->Width = 150;
            // 
            // button9
            // 
            this->button9->Location = System::Drawing::Point(836, 300);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(154, 45);
            this->button9->TabIndex = 37;
            this->button9->Text = L"Delete";
            this->button9->UseVisualStyleBackColor = true;
            this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
            // 
            // button8
            // 
            this->button8->Location = System::Drawing::Point(658, 300);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(154, 45);
            this->button8->TabIndex = 36;
            this->button8->Text = L"load";
            this->button8->UseVisualStyleBackColor = true;
            this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
            // 
            // button7
            // 
            this->button7->Location = System::Drawing::Point(486, 300);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(154, 45);
            this->button7->TabIndex = 35;
            this->button7->Text = L"Update";
            this->button7->UseVisualStyleBackColor = true;
            this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
            // 
            // button6
            // 
            this->button6->Location = System::Drawing::Point(208, 300);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(154, 45);
            this->button6->TabIndex = 34;
            this->button6->Text = L"ADD";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Location = System::Drawing::Point(460, 223);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(0, 20);
            this->label14->TabIndex = 33;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Location = System::Drawing::Point(22, 249);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(63, 20);
            this->label12->TabIndex = 32;
            this->label12->Text = L"Gender";
            // 
            // textBox9
            // 
            this->textBox9->Location = System::Drawing::Point(176, 245);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(250, 26);
            this->textBox9->TabIndex = 31;
            // 
            // textBox8
            // 
            this->textBox8->Location = System::Drawing::Point(176, 208);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(250, 26);
            this->textBox8->TabIndex = 30;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(22, 209);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(69, 20);
            this->label11->TabIndex = 29;
            this->label11->Text = L"Program";
            // 
            // textBox7
            // 
            this->textBox7->Location = System::Drawing::Point(176, 169);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(250, 26);
            this->textBox7->TabIndex = 28;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(22, 140);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(26, 20);
            this->label10->TabIndex = 27;
            this->label10->Text = L"ID";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(22, 177);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(89, 20);
            this->label9->TabIndex = 26;
            this->label9->Text = L"Contact No";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(22, 100);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(102, 20);
            this->label5->TabIndex = 25;
            this->label5->Text = L"Father Name";
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(176, 132);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(250, 26);
            this->textBox6->TabIndex = 24;
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(176, 97);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(250, 26);
            this->textBox4->TabIndex = 22;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(22, 65);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(51, 20);
            this->label4->TabIndex = 21;
            this->label4->Text = L"Name";
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(176, 65);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(250, 26);
            this->textBox3->TabIndex = 20;
            // 
            // tabPage21
            // 
            this->tabPage21->Controls->Add(this->label49);
            this->tabPage21->Controls->Add(this->label48);
            this->tabPage21->Controls->Add(this->label47);
            this->tabPage21->Controls->Add(this->label46);
            this->tabPage21->Controls->Add(this->label23);
            this->tabPage21->Controls->Add(this->button35);
            this->tabPage21->Controls->Add(this->textBox19);
            this->tabPage21->Controls->Add(this->label7);
            this->tabPage21->Controls->Add(this->dataGridView2);
            this->tabPage21->Controls->Add(this->button10);
            this->tabPage21->Controls->Add(this->button11);
            this->tabPage21->Controls->Add(this->button12);
            this->tabPage21->Controls->Add(this->button13);
            this->tabPage21->Controls->Add(this->label13);
            this->tabPage21->Controls->Add(this->label15);
            this->tabPage21->Controls->Add(this->textBox10);
            this->tabPage21->Controls->Add(this->textBox11);
            this->tabPage21->Controls->Add(this->label16);
            this->tabPage21->Controls->Add(this->textBox12);
            this->tabPage21->Controls->Add(this->label17);
            this->tabPage21->Controls->Add(this->label18);
            this->tabPage21->Controls->Add(this->label19);
            this->tabPage21->Controls->Add(this->textBox13);
            this->tabPage21->Controls->Add(this->textBox14);
            this->tabPage21->Controls->Add(this->label20);
            this->tabPage21->Controls->Add(this->textBox15);
            this->tabPage21->Location = System::Drawing::Point(4, 29);
            this->tabPage21->Name = L"tabPage21";
            this->tabPage21->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
            this->tabPage21->Size = System::Drawing::Size(1021, 558);
            this->tabPage21->TabIndex = 1;
            this->tabPage21->Text = L"Faculty";
            this->tabPage21->UseVisualStyleBackColor = true;
            this->tabPage21->Click += gcnew System::EventHandler(this, &Form1::tabPage21_Click);
            // 
            // label49
            // 
            this->label49->AutoSize = true;
            this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label49->Location = System::Drawing::Point(26, 425);
            this->label49->Name = L"label49";
            this->label49->Size = System::Drawing::Size(283, 25);
            this->label49->TabIndex = 53;
            this->label49->Text = L"Faculty3 will teach CALCULUS";
            // 
            // label48
            // 
            this->label48->AutoSize = true;
            this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label48->Location = System::Drawing::Point(26, 449);
            this->label48->Name = L"label48";
            this->label48->Size = System::Drawing::Size(327, 25);
            this->label48->TabIndex = 52;
            this->label48->Text = L"Faculty4 will teach PROGRAMMING";
            // 
            // label47
            // 
            this->label47->AutoSize = true;
            this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label47->Location = System::Drawing::Point(26, 402);
            this->label47->Name = L"label47";
            this->label47->Size = System::Drawing::Size(268, 25);
            this->label47->TabIndex = 51;
            this->label47->Text = L"Faculty2 will teach PHYSICS ";
            // 
            // label46
            // 
            this->label46->AutoSize = true;
            this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label46->Location = System::Drawing::Point(26, 374);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(289, 25);
            this->label46->TabIndex = 50;
            this->label46->Text = L"Faculty1 will teach COMPUTER";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(21, 338);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(121, 37);
            this->label23->TabIndex = 49;
            this->label23->Text = L"NOTE:";
            // 
            // button35
            // 
            this->button35->Location = System::Drawing::Point(888, 15);
            this->button35->Name = L"button35";
            this->button35->Size = System::Drawing::Size(90, 31);
            this->button35->TabIndex = 48;
            this->button35->Text = L"Search";
            this->button35->UseVisualStyleBackColor = true;
            this->button35->Click += gcnew System::EventHandler(this, &Form1::button35_Click);
            // 
            // textBox19
            // 
            this->textBox19->Location = System::Drawing::Point(618, 18);
            this->textBox19->Name = L"textBox19";
            this->textBox19->Size = System::Drawing::Size(256, 26);
            this->textBox19->TabIndex = 47;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(474, 25);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(126, 20);
            this->label7->TabIndex = 46;
            this->label7->Text = L"Search by Name";
            // 
            // dataGridView2
            // 
            dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle18->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle18->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle18->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle18->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle18->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle18;
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
                this->dataGridViewTextBoxColumn1,
                    this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
                    this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7
            });
            dataGridViewCellStyle19->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle19->BackColor = System::Drawing::SystemColors::Window;
            dataGridViewCellStyle19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle19->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle19->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle19->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle19->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle19;
            this->dataGridView2->Location = System::Drawing::Point(478, 57);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->RowHeadersWidth = 62;
            this->dataGridView2->RowTemplate->Height = 28;
            this->dataGridView2->Size = System::Drawing::Size(500, 200);
            this->dataGridView2->TabIndex = 39;
            // 
            // dataGridViewTextBoxColumn1
            // 
            this->dataGridViewTextBoxColumn1->HeaderText = L"Name";
            this->dataGridViewTextBoxColumn1->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
            this->dataGridViewTextBoxColumn1->Width = 150;
            // 
            // dataGridViewTextBoxColumn2
            // 
            this->dataGridViewTextBoxColumn2->HeaderText = L"Father Name";
            this->dataGridViewTextBoxColumn2->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
            this->dataGridViewTextBoxColumn2->Width = 150;
            // 
            // dataGridViewTextBoxColumn3
            // 
            this->dataGridViewTextBoxColumn3->HeaderText = L"ID";
            this->dataGridViewTextBoxColumn3->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
            this->dataGridViewTextBoxColumn3->Width = 150;
            // 
            // dataGridViewTextBoxColumn4
            // 
            this->dataGridViewTextBoxColumn4->HeaderText = L"Contact Number";
            this->dataGridViewTextBoxColumn4->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
            this->dataGridViewTextBoxColumn4->Width = 150;
            // 
            // dataGridViewTextBoxColumn5
            // 
            this->dataGridViewTextBoxColumn5->HeaderText = L"Programme";
            this->dataGridViewTextBoxColumn5->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
            this->dataGridViewTextBoxColumn5->Width = 150;
            // 
            // dataGridViewTextBoxColumn6
            // 
            this->dataGridViewTextBoxColumn6->HeaderText = L"Gender";
            this->dataGridViewTextBoxColumn6->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
            this->dataGridViewTextBoxColumn6->Width = 150;
            // 
            // dataGridViewTextBoxColumn7
            // 
            this->dataGridViewTextBoxColumn7->HeaderText = L"Password";
            this->dataGridViewTextBoxColumn7->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
            this->dataGridViewTextBoxColumn7->Width = 150;
            // 
            // button10
            // 
            this->button10->Location = System::Drawing::Point(824, 288);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(154, 45);
            this->button10->TabIndex = 37;
            this->button10->Text = L"Delete";
            this->button10->UseVisualStyleBackColor = true;
            this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
            // 
            // button11
            // 
            this->button11->Location = System::Drawing::Point(651, 288);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(154, 45);
            this->button11->TabIndex = 36;
            this->button11->Text = L"Load";
            this->button11->UseVisualStyleBackColor = true;
            this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
            // 
            // button12
            // 
            this->button12->Location = System::Drawing::Point(478, 288);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(154, 45);
            this->button12->TabIndex = 35;
            this->button12->Text = L"Update";
            this->button12->UseVisualStyleBackColor = true;
            this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
            // 
            // button13
            // 
            this->button13->Location = System::Drawing::Point(208, 275);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(154, 45);
            this->button13->TabIndex = 34;
            this->button13->Text = L"ADD";
            this->button13->UseVisualStyleBackColor = true;
            this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(460, 209);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(0, 20);
            this->label13->TabIndex = 33;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Location = System::Drawing::Point(22, 237);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(63, 20);
            this->label15->TabIndex = 32;
            this->label15->Text = L"Gender";
            // 
            // textBox10
            // 
            this->textBox10->Location = System::Drawing::Point(176, 231);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(250, 26);
            this->textBox10->TabIndex = 31;
            // 
            // textBox11
            // 
            this->textBox11->Location = System::Drawing::Point(176, 194);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(250, 26);
            this->textBox11->TabIndex = 30;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Location = System::Drawing::Point(22, 197);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(94, 20);
            this->label16->TabIndex = 29;
            this->label16->Text = L"Department";
            // 
            // textBox12
            // 
            this->textBox12->Location = System::Drawing::Point(176, 155);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(250, 26);
            this->textBox12->TabIndex = 28;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Location = System::Drawing::Point(22, 125);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(26, 20);
            this->label17->TabIndex = 27;
            this->label17->Text = L"ID";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Location = System::Drawing::Point(22, 158);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(89, 20);
            this->label18->TabIndex = 26;
            this->label18->Text = L"Contact No";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Location = System::Drawing::Point(22, 88);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(102, 20);
            this->label19->TabIndex = 25;
            this->label19->Text = L"Father Name";
            // 
            // textBox13
            // 
            this->textBox13->Location = System::Drawing::Point(176, 120);
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(250, 26);
            this->textBox13->TabIndex = 24;
            // 
            // textBox14
            // 
            this->textBox14->Location = System::Drawing::Point(176, 85);
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(250, 26);
            this->textBox14->TabIndex = 22;
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Location = System::Drawing::Point(22, 51);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(51, 20);
            this->label20->TabIndex = 21;
            this->label20->Text = L"Name";
            // 
            // textBox15
            // 
            this->textBox15->Location = System::Drawing::Point(176, 49);
            this->textBox15->Name = L"textBox15";
            this->textBox15->Size = System::Drawing::Size(250, 26);
            this->textBox15->TabIndex = 20;
            // 
            // tabPage16
            // 
            this->tabPage16->Controls->Add(this->listBox4);
            this->tabPage16->Controls->Add(this->button5);
            this->tabPage16->Controls->Add(this->button4);
            this->tabPage16->Controls->Add(this->button3);
            this->tabPage16->Controls->Add(this->button2);
            this->tabPage16->Controls->Add(this->textBox5);
            this->tabPage16->Controls->Add(this->label6);
            this->tabPage16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tabPage16->Location = System::Drawing::Point(4, 32);
            this->tabPage16->Name = L"tabPage16";
            this->tabPage16->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
            this->tabPage16->Size = System::Drawing::Size(1039, 599);
            this->tabPage16->TabIndex = 1;
            this->tabPage16->Text = L"Notice";
            this->tabPage16->UseVisualStyleBackColor = true;
            // 
            // listBox4
            // 
            this->listBox4->FormattingEnabled = true;
            this->listBox4->ItemHeight = 20;
            this->listBox4->Location = System::Drawing::Point(140, 232);
            this->listBox4->Name = L"listBox4";
            this->listBox4->Size = System::Drawing::Size(758, 144);
            this->listBox4->TabIndex = 6;
            // 
            // button5
            // 
            this->button5->Location = System::Drawing::Point(732, 152);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(166, 42);
            this->button5->TabIndex = 5;
            this->button5->Text = L"Load Notice";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
            // 
            // button4
            // 
            this->button4->Location = System::Drawing::Point(530, 152);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(166, 42);
            this->button4->TabIndex = 4;
            this->button4->Text = L"Delete Notice";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(334, 152);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(166, 42);
            this->button3->TabIndex = 3;
            this->button3->Text = L"Update Notice";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(140, 152);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(166, 42);
            this->button2->TabIndex = 2;
            this->button2->Text = L"Add Notice";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(140, 100);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(758, 26);
            this->textBox5->TabIndex = 1;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(438, 31);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(146, 52);
            this->label6->TabIndex = 0;
            this->label6->Text = L"Notice";
            // 
            // tabPage8
            // 
            this->tabPage8->Controls->Add(this->dataGridView10);
            this->tabPage8->Controls->Add(this->button20);
            this->tabPage8->Controls->Add(this->label52);
            this->tabPage8->Location = System::Drawing::Point(4, 32);
            this->tabPage8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage8->Name = L"tabPage8";
            this->tabPage8->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabPage8->Size = System::Drawing::Size(1039, 599);
            this->tabPage8->TabIndex = 5;
            this->tabPage8->Text = L"Records";
            this->tabPage8->UseVisualStyleBackColor = true;
            // 
            // dataGridView10
            // 
            this->dataGridView10->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView10->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
                this->dataGridViewTextBoxColumn53,
                    this->dataGridViewTextBoxColumn54, this->dataGridViewTextBoxColumn55, this->dataGridViewTextBoxColumn56, this->dataGridViewTextBoxColumn57,
                    this->dataGridViewTextBoxColumn58, this->dataGridViewTextBoxColumn59, this->dataGridViewTextBoxColumn60, this->dataGridViewTextBoxColumn61,
                    this->dataGridViewTextBoxColumn62, this->dataGridViewTextBoxColumn63, this->dataGridViewTextBoxColumn64
            });
            this->dataGridView10->Location = System::Drawing::Point(38, 85);
            this->dataGridView10->Name = L"dataGridView10";
            this->dataGridView10->RowHeadersWidth = 62;
            this->dataGridView10->RowTemplate->Height = 28;
            this->dataGridView10->Size = System::Drawing::Size(962, 317);
            this->dataGridView10->TabIndex = 42;
            // 
            // dataGridViewTextBoxColumn53
            // 
            this->dataGridViewTextBoxColumn53->HeaderText = L"Name";
            this->dataGridViewTextBoxColumn53->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn53->Name = L"dataGridViewTextBoxColumn53";
            this->dataGridViewTextBoxColumn53->Width = 120;
            // 
            // dataGridViewTextBoxColumn54
            // 
            this->dataGridViewTextBoxColumn54->HeaderText = L"Father Name";
            this->dataGridViewTextBoxColumn54->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn54->Name = L"dataGridViewTextBoxColumn54";
            this->dataGridViewTextBoxColumn54->Width = 120;
            // 
            // dataGridViewTextBoxColumn55
            // 
            this->dataGridViewTextBoxColumn55->HeaderText = L"ID";
            this->dataGridViewTextBoxColumn55->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn55->Name = L"dataGridViewTextBoxColumn55";
            this->dataGridViewTextBoxColumn55->Width = 120;
            // 
            // dataGridViewTextBoxColumn56
            // 
            this->dataGridViewTextBoxColumn56->HeaderText = L"Contact Number";
            this->dataGridViewTextBoxColumn56->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn56->Name = L"dataGridViewTextBoxColumn56";
            this->dataGridViewTextBoxColumn56->Width = 120;
            // 
            // dataGridViewTextBoxColumn57
            // 
            this->dataGridViewTextBoxColumn57->HeaderText = L"Department";
            this->dataGridViewTextBoxColumn57->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn57->Name = L"dataGridViewTextBoxColumn57";
            this->dataGridViewTextBoxColumn57->Width = 120;
            // 
            // dataGridViewTextBoxColumn58
            // 
            this->dataGridViewTextBoxColumn58->HeaderText = L"Gender";
            this->dataGridViewTextBoxColumn58->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn58->Name = L"dataGridViewTextBoxColumn58";
            this->dataGridViewTextBoxColumn58->Width = 120;
            // 
            // dataGridViewTextBoxColumn59
            // 
            this->dataGridViewTextBoxColumn59->HeaderText = L"Password";
            this->dataGridViewTextBoxColumn59->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn59->Name = L"dataGridViewTextBoxColumn59";
            this->dataGridViewTextBoxColumn59->Width = 120;
            // 
            // dataGridViewTextBoxColumn60
            // 
            this->dataGridViewTextBoxColumn60->HeaderText = L"Computer";
            this->dataGridViewTextBoxColumn60->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn60->Name = L"dataGridViewTextBoxColumn60";
            this->dataGridViewTextBoxColumn60->Width = 120;
            // 
            // dataGridViewTextBoxColumn61
            // 
            this->dataGridViewTextBoxColumn61->HeaderText = L"Physics";
            this->dataGridViewTextBoxColumn61->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn61->Name = L"dataGridViewTextBoxColumn61";
            this->dataGridViewTextBoxColumn61->Width = 120;
            // 
            // dataGridViewTextBoxColumn62
            // 
            this->dataGridViewTextBoxColumn62->HeaderText = L"Calculus";
            this->dataGridViewTextBoxColumn62->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn62->Name = L"dataGridViewTextBoxColumn62";
            this->dataGridViewTextBoxColumn62->Width = 120;
            // 
            // dataGridViewTextBoxColumn63
            // 
            this->dataGridViewTextBoxColumn63->HeaderText = L"Programming";
            this->dataGridViewTextBoxColumn63->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn63->Name = L"dataGridViewTextBoxColumn63";
            this->dataGridViewTextBoxColumn63->Width = 120;
            // 
            // dataGridViewTextBoxColumn64
            // 
            this->dataGridViewTextBoxColumn64->HeaderText = L"CGPA";
            this->dataGridViewTextBoxColumn64->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn64->Name = L"dataGridViewTextBoxColumn64";
            this->dataGridViewTextBoxColumn64->Width = 120;
            // 
            // button20
            // 
            this->button20->Location = System::Drawing::Point(902, 34);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(98, 45);
            this->button20->TabIndex = 40;
            this->button20->Text = L"load";
            this->button20->UseVisualStyleBackColor = true;
            this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
            // 
            // label52
            // 
            this->label52->AutoSize = true;
            this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label52->Location = System::Drawing::Point(306, 23);
            this->label52->Name = L"label52";
            this->label52->Size = System::Drawing::Size(431, 47);
            this->label52->TabIndex = 5;
            this->label52->Text = L"STUDENT RECORDS";
            // 
            // dataGridViewTextBoxColumn76
            // 
            this->dataGridViewTextBoxColumn76->HeaderText = L"Name";
            this->dataGridViewTextBoxColumn76->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn76->Name = L"dataGridViewTextBoxColumn76";
            this->dataGridViewTextBoxColumn76->Width = 130;
            // 
            // dataGridViewTextBoxColumn78
            // 
            this->dataGridViewTextBoxColumn78->HeaderText = L"ID";
            this->dataGridViewTextBoxColumn78->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn78->Name = L"dataGridViewTextBoxColumn78";
            this->dataGridViewTextBoxColumn78->Width = 130;
            // 
            // dataGridViewTextBoxColumn80
            // 
            this->dataGridViewTextBoxColumn80->HeaderText = L"Department";
            this->dataGridViewTextBoxColumn80->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn80->Name = L"dataGridViewTextBoxColumn80";
            this->dataGridViewTextBoxColumn80->Width = 130;
            // 
            // dataGridViewTextBoxColumn85
            // 
            this->dataGridViewTextBoxColumn85->HeaderText = L"Total Present";
            this->dataGridViewTextBoxColumn85->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn85->Name = L"dataGridViewTextBoxColumn85";
            this->dataGridViewTextBoxColumn85->Width = 130;
            // 
            // dataGridViewTextBoxColumn86
            // 
            this->dataGridViewTextBoxColumn86->HeaderText = L"Total Absent";
            this->dataGridViewTextBoxColumn86->MinimumWidth = 8;
            this->dataGridViewTextBoxColumn86->Name = L"dataGridViewTextBoxColumn86";
            this->dataGridViewTextBoxColumn86->Width = 130;
            // 
            // Column24
            // 
            this->Column24->HeaderText = L"Total Classes";
            this->Column24->MinimumWidth = 8;
            this->Column24->Name = L"Column24";
            this->Column24->Width = 130;
            // 
            // Column22
            // 
            this->Column22->HeaderText = L"Ratio";
            this->Column22->MinimumWidth = 8;
            this->Column22->Name = L"Column22";
            this->Column22->Width = 130;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1059, 489);
            this->Controls->Add(this->tabControl1);
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            this->tabPage2->ResumeLayout(false);
            this->tabControl2->ResumeLayout(false);
            this->TabPage3->ResumeLayout(false);
            this->TabPage3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
            this->tabPage5->ResumeLayout(false);
            this->tabPage5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
            this->tabPage14->ResumeLayout(false);
            this->tabPage14->PerformLayout();
            this->tabPage4->ResumeLayout(false);
            this->tabPage4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->EndInit();
            this->tabPage12->ResumeLayout(false);
            this->tabPage12->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView12))->EndInit();
            this->tabPage6->ResumeLayout(false);
            this->tabControl3->ResumeLayout(false);
            this->tabPage9->ResumeLayout(false);
            this->tabPage9->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
            this->tabPage13->ResumeLayout(false);
            this->tabPage13->PerformLayout();
            this->tabPage19->ResumeLayout(false);
            this->tabPage19->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
            this->tabPage10->ResumeLayout(false);
            this->tabPage10->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView11))->EndInit();
            this->tabPage7->ResumeLayout(false);
            this->tabControl4->ResumeLayout(false);
            this->tabPage11->ResumeLayout(false);
            this->tabPage11->PerformLayout();
            this->tabPage15->ResumeLayout(false);
            this->tabControl5->ResumeLayout(false);
            this->tabPage20->ResumeLayout(false);
            this->tabPage20->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->tabPage21->ResumeLayout(false);
            this->tabPage21->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
            this->tabPage16->ResumeLayout(false);
            this->tabPage16->PerformLayout();
            this->tabPage8->ResumeLayout(false);
            this->tabPage8->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView10))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion



    private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ name = textBox3->Text;
        String^ fathername = textBox4->Text;
        String^ id = textBox6->Text;
        String^ contact = textBox7->Text;
        String^ programme = textBox8->Text;
        String^ gender = textBox9->Text;
        String^ marks1;
        String^ empty;
        String^ marks2;
        String^ empty1;
        String^ marks3;
        String^ fees;
   
        if (!String::IsNullOrEmpty(name) && !String::IsNullOrEmpty(fathername) && !String::IsNullOrEmpty(id) && !String::IsNullOrEmpty(contact) && !String::IsNullOrEmpty(programme) && !String::IsNullOrEmpty(gender))
        {
            student->Addstd(name, fathername, id, contact, programme, gender, marks1, empty1, marks2, empty, marks3,fees);
            student->LoadDataToGrid(dataGridView1); // Reload data after addition

            textBox3->Clear();
            textBox4->Clear();
            textBox6->Clear();
            textBox7->Clear();
            textBox8->Clear();
            textBox9->Clear();
        }
        else
        {
            MessageBox::Show("Please fill in both fields.");
        }
    }
    private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
        if (dataGridView1->SelectedRows->Count > 0)
        {
            // Get the selected row
            DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];

           
            // Get the old values from the selected row
            String^ oldName = selectedRow->Cells[0]->Value->ToString(); // Name
            String^ oldFatherName = selectedRow->Cells[1]->Value->ToString(); // Father Name
            String^ oldID = selectedRow->Cells[2]->Value->ToString(); // ID
            String^ oldContactNo = selectedRow->Cells[3]->Value->ToString(); // Contact No
            String^ oldField1 = selectedRow->Cells[4]->Value->ToString(); // Programme (for Student)
            String^ oldGender = selectedRow->Cells[5]->Value->ToString(); // Gender

            // Get the new values from the textboxes
            String^ newID = textBox6->Text; // ID
            String^ newName = textBox3->Text; // Name
            String^ newFatherName = textBox4->Text; // Father Name
            String^ newContactNo = textBox7->Text; // Contact No
            String^ newField1 = textBox8->Text; // Programme (for Student)
            String^ newGender = textBox9->Text; // Gender

            // Check if all fields are filled
            if (!String::IsNullOrEmpty(newID) && !String::IsNullOrEmpty(newName) &&
                !String::IsNullOrEmpty(newFatherName) && !String::IsNullOrEmpty(newContactNo) &&
                !String::IsNullOrEmpty(newField1) && !String::IsNullOrEmpty(newGender))
            {
                // Update the student data (pass both old and new values)
                student->Update(oldID, oldName, oldFatherName, oldContactNo, oldField1, oldGender,
                    newID, newName, newFatherName, newContactNo, newField1, newGender);

                // Reload the DataGrid to reflect the updated data
                student->LoadDataToGrid(dataGridView1);

                // Clear the textboxes after updating
                textBox3->Clear();
                textBox4->Clear();
                textBox6->Clear();
                textBox7->Clear();
                textBox8->Clear();
                textBox9->Clear();
            }
            else
            {
                // Show error message if any field is empty
                MessageBox::Show("Please fill in all fields.");
            }
        }
        else
        {
            // Show error if no row is selected
            MessageBox::Show("Please select a row to update.");
        }
    }

    private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
        student->LoadDataToGrid1(dataGridView1);
    }
    private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
        if (dataGridView1->SelectedRows->Count > 0 && dataGridView1->SelectedRows[0]->Cells[2]->Value != nullptr)
        {

            auto selectedRow = dataGridView1->SelectedRows[0];
            String^ id = selectedRow->Cells[2]->Value->ToString();
            student->Delete(id);
            student->LoadDataToGrid(dataGridView1);

            MessageBox::Show("Entry deleted successfully.", "Success");
        }
        else
        {
            MessageBox::Show("Please select a valid row to delete.", "Error");
        }
    }




           // faculty k button basic crud k 
    private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ name = textBox15->Text;
        String^ fathername = textBox14->Text;
        String^ id = textBox13->Text;
        String^ contact = textBox12->Text;
        String^ department = textBox11->Text;
        String^ gender = textBox10->Text;

        // Check if all fields are filled
        if (!String::IsNullOrEmpty(name) && !String::IsNullOrEmpty(fathername) && !String::IsNullOrEmpty(id) && !String::IsNullOrEmpty(contact) && !String::IsNullOrEmpty(department) && !String::IsNullOrEmpty(gender))
        {
            // Check if we can add a new faculty member
            if (faculty->CanAddFaculty())
            {
                // Add the new faculty member
                faculty->Add(name, fathername, id, contact, department, gender);

                // Display success message
                // Reload the data into the grid
                faculty->LoadDataToGrid(dataGridView2);

                // Clear the text fields
                textBox15->Clear();
                textBox14->Clear();
                textBox13->Clear();
                textBox12->Clear();
                textBox11->Clear();
                textBox10->Clear();
            }
            else
            {
                // If maximum number of faculty members is reached, show the error message
                faculty->checkfaculty();
            }
        }
        else
        {
            // If any field is empty, show an error message
            MessageBox::Show("Please fill in all fields.");
        }
    }
    private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
        if (dataGridView2->SelectedRows->Count > 0)
        {
            // Get the selected row
            DataGridViewRow^ selectedRow = dataGridView2->SelectedRows[0];

            // Get the old values from the selected row
            String^ oldName = selectedRow->Cells[0]->Value->ToString(); // Name
            String^ oldFatherName = selectedRow->Cells[1]->Value->ToString(); 
            String^ oldID = selectedRow->Cells[2]->Value->ToString(); // ID
            String^ oldContactNo = selectedRow->Cells[3]->Value->ToString(); // Contact No
            String^ oldField1 = selectedRow->Cells[4]->Value->ToString(); // Programme (for Student)
            String^ oldGender = selectedRow->Cells[5]->Value->ToString(); // Gender

            // Get the new values from the textboxes
            String^ newID = textBox13->Text; // ID
            String^ newName = textBox15->Text; // Name
            String^ newFatherName = textBox14->Text; // Father Name
            String^ newContactNo = textBox12->Text; // Contact No
            String^ newField1 = textBox11->Text; // Programme (for Student)
            String^ newGender = textBox10->Text; // Gender

            // Check if all fields are filled
            if (!String::IsNullOrEmpty(newID) && !String::IsNullOrEmpty(newName) &&
                !String::IsNullOrEmpty(newFatherName) && !String::IsNullOrEmpty(newContactNo) &&
                !String::IsNullOrEmpty(newField1) && !String::IsNullOrEmpty(newGender))
            {
                // Update the student data (pass both old and new values)
                faculty->Update(oldID, oldName, oldFatherName, oldContactNo, oldField1, oldGender,
                    newID, newName, newFatherName, newContactNo, newField1, newGender);

                // Reload the DataGrid to reflect the updated data
                faculty->LoadDataToGrid(dataGridView2);

                // Clear the textboxes after updating
                textBox15->Clear();
                textBox14->Clear();
                textBox13->Clear();
                textBox12->Clear();
                textBox11->Clear();
                textBox10->Clear();
            }
            else
            {
                // Show error message if any field is empty
                MessageBox::Show("Please fill in all fields.");
            }
        }
        else
        {
            // Show error if no row is selected
            MessageBox::Show("Please select a row to update.");
        }
    }

    private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
        faculty->LoadDataToGrid(dataGridView2);
    }
    private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
        if (dataGridView2->SelectedRows->Count > 0 && dataGridView2->SelectedRows[0]->Cells[2]->Value != nullptr)
        {

            auto selectedRow = dataGridView2->SelectedRows[0];
            String^ id = selectedRow->Cells[2]->Value->ToString();
            faculty->Delete(id);
            faculty->LoadDataToGrid(dataGridView2);

            MessageBox::Show("Entry deleted successfully.", "Success");
        }
        else
        {
            MessageBox::Show("Please select a valid row to delete.", "Error");
        }
    }
//search functionalty for both student anf fculty
    private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ searchText = textBox21->Text->Trim();
        if (!String::IsNullOrWhiteSpace(searchText))
        {
            student->FilterRows(dataGridView1, searchText); // Call the filter method
            textBox21->Clear();
        }
        else
        {
            // Reset the grid to show all rows
            for each (DataGridViewRow ^ row in dataGridView1->Rows)
            {
                row->Visible = true;
            }
        }
    }
    private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ searchText = textBox19->Text->Trim();
    if (!String::IsNullOrWhiteSpace(searchText))
    {
        faculty->FilterRows(dataGridView2, searchText); 
        textBox19->Clear();
    }
    else
    {
        for each (DataGridViewRow ^ row in dataGridView2->Rows)
        {
            row->Visible = true;
        }
    }
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

    String^ noticeText = textBox5->Text; 

    if (String::IsNullOrWhiteSpace(noticeText)) {
        MessageBox::Show("Notice text cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    notice->Add(noticeText);  
    textBox5->Clear();        
    notice->Load(listBox4);   
    MessageBox::Show("Notice added successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    if (listBox4->SelectedItem == nullptr) {
        MessageBox::Show("Please select a notice to update.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    String^ oldNotice = listBox4->SelectedItem->ToString(); // Get the selected notice
    String^ newNotice = textBox5->Text; // Get the new notice from textBox5

    if (String::IsNullOrWhiteSpace(newNotice)) {
        MessageBox::Show("New notice text cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    
    notice->Update(listBox4, oldNotice, newNotice); // Update the selected notice
    textBox5->Clear(); // Clear the text box after updating the notice
    MessageBox::Show("Notice updated successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    if (listBox4->SelectedItem == nullptr) {
        MessageBox::Show("Please select a notice to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    
    notice->Delete(listBox4); // Delete the selected notice
    MessageBox::Show("Notice deleted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    // Load button click functionality
   
    notice->Load(listBox4); 
    MessageBox::Show("Notices loaded successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
      
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
    notice->Load(listBox14);
    MessageBox::Show("Notices loaded successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
  }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    Login^ login = gcnew Login();

    login->login(textBox1, textBox2, tabControl1, tabPage2, tabPage6, tabPage7, tabPage1, dataGridView4, dataGridView3);

    textBox1->Clear();
    textBox2->Clear();
}





private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {

    login->logout(tabControl1, tabPage2, tabPage1); 
    dataGridView6->Rows->Clear();
    dataGridView7->Rows->Clear();
    dataGridView8->Rows->Clear();
    dataGridView9->Rows->Clear();
    dataGridView12->Rows->Clear();
}

private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
    login->logout(tabControl1, tabPage6, tabPage1); 
}

private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
    login->logout(tabControl1, tabPage7, tabPage1); 
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ username = dataGridView4->Rows[0]->Cells[0]->Value->ToString();
    String^ currentPassword = dataGridView4->Rows[0]->Cells[6]->Value->ToString();
    String^ newPassword = textBox18->Text;
    if (String::IsNullOrWhiteSpace(newPassword)) {
        MessageBox::Show("New password cannot be empty.");
        return;
    }
    if (newPassword->Length < 8) {
        MessageBox::Show("Password must be at least 8 characters long.");
        return;
    }
    Account^ account = gcnew Account();
    String^ studentFilePath = "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Student.txt";
    account->UpdatePass(studentFilePath, currentPassword, newPassword);
    dataGridView4->Rows[0]->Cells[6]->Value = newPassword;
    textBox18->Clear();
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ username = dataGridView3->Rows[0]->Cells[0]->Value->ToString();
    String^ currentPassword = dataGridView3->Rows[0]->Cells[6]->Value->ToString();
    String^ newPassword = textBox17->Text;
    if (String::IsNullOrWhiteSpace(newPassword)) {
        MessageBox::Show("New password cannot be empty.");
        return;
    }
    if (newPassword->Length < 8) {
        MessageBox::Show("Password must be at least 8 characters long.");
        return;
    }
    Account^ account = gcnew Account();
    String^ studentFilePath = "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Faculty.txt";
    account->UpdatePass(studentFilePath,  currentPassword, newPassword);
    dataGridView3->Rows[0]->Cells[6]->Value = newPassword;
    textBox17->Clear();
  
}
private: System::Void listBox10_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView5_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{
    
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) 
{
    dataGridView5->Columns["Column25"]->Visible = false;
    dataGridView5->Columns["Column27"]->Visible = false;
    dataGridView5->Columns["Column28"]->Visible = false;
    dataGridView5->Columns["Column23"]->Visible = false;
    student->LoadDataToGrid1(dataGridView5);
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ searchText = textBox22->Text->Trim();
    if (!String::IsNullOrWhiteSpace(searchText))
    {
        student->FilterRows(dataGridView5, searchText); // Call the filter method
        textBox22->Clear();
    }
    else
    {
        // Reset the grid to show all rows
        for each (DataGridViewRow ^ row in dataGridView5->Rows)
        {
            row->Visible = true;
        }
    }

}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) 
{
    String^ studentID =  textBox16->Text; 
    String^ teacherName = dataGridView3->Rows[0]->Cells[0]->Value->ToString()->Trim();  
    String^ temp= textBox20->Text;

    int marks = Int32::Parse(temp);
    
    if (Int32::TryParse(textBox20->Text, marks))
    {
        student->AddMarks(studentID, teacherName, marks);(studentID, teacherName, marks);
        student->LoadDataToGrid1(dataGridView5);
    }
    else
    {
        MessageBox::Show("Please enter a valid number for marks.");
    }
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
    if (dataGridView5->SelectedRows->Count > 0 && dataGridView5->SelectedRows[0]->Cells[2]->Value != nullptr)
    {
        // Get the selected row
        auto selectedRow = dataGridView5->SelectedRows[0];

        // Get the 'id' from the selected row (assumed to be in column 2)
        String^ id = selectedRow->Cells[2]->Value->ToString();


        // Show success message
        MessageBox::Show("Entry deleted successfully.", "Success");
    }
    else
    {
        MessageBox::Show("Please select a valid row to delete.", "Error");
    }
   

}
private: System::Void tabPage5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
  


    String^ username = dataGridView4->Rows[0]->Cells[0]->Value->ToString()->Trim();
    dataGridView6->Columns["Column31"]->Visible = false;
    dataGridView6->Columns["Column280"]->Visible = false;
    dataGridView6->Columns["Column30"]->Visible = false;
    dataGridView7->Columns["Column32"]->Visible = false;
    dataGridView7->Columns["Column34"]->Visible = false;
    dataGridView7->Columns["Column35"]->Visible = false;
    // Ensure the TextBox is not empty
    if (String::IsNullOrEmpty(username))
    {
        MessageBox::Show("Please enter a username to search.");
        return;
    }
 
    String^ filePath = "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Student.txt"; 
    student->marksData(filePath, username, dataGridView6);
   student->CGPA(filePath, username, dataGridView7);
}
private: System::Void label30_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox20_TextChanged(System::Object^ sender, System::EventArgs^ e) {

    double value = 0.0;
    if (Double::TryParse(textBox20->Text, value))
    {
        if (value > 100)
        {
            MessageBox::Show("Error: Marks cannot be greater than 100.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            textBox20->Text = "100";  // Or you could clear it: textBoxMarks->Text = "";
        }
    }
}
private: System::Void tabPage20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
    notice->Load(listBox1);
    MessageBox::Show("Notices loaded successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textBox2->PasswordChar = '*';
}
private: System::Void tabPage21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox18_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

    String^ username =  dataGridView4->Rows[0]->Cells[0]->Value->ToString()->Trim();
    dataGridView8->Columns["Column40"]->Visible = false;
    dataGridView8->Columns["Column42"]->Visible = false;
    dataGridView8->Columns["Column43"]->Visible = false;
    dataGridView8->Columns["Column44"]->Visible = false;
    dataGridView8->Columns["Column45"]->Visible = false;
    dataGridView8->Columns["Column46"]->Visible = false;
    dataGridView8->Columns["Column47"]->Visible = false;

    String^ filePath = "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Student.txt";
    student->marksData(filePath, username, dataGridView8);

}
private: System::Void dataGridView8_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ username = dataGridView4->Rows[0]->Cells[0]->Value->ToString()->Trim();
    dataGridView9->Columns["dataGridViewTextBoxColumn44"]->Visible = false;
    dataGridView9->Columns["dataGridViewTextBoxColumn46"]->Visible = false;
    dataGridView9->Columns["dataGridViewTextBoxColumn47"]->Visible = false;
    dataGridView9->Columns["dataGridViewTextBoxColumn48"]->Visible = false;
    dataGridView9->Columns["dataGridViewTextBoxColumn49"]->Visible = false;
    dataGridView9->Columns["dataGridViewTextBoxColumn50"]->Visible = false;
    dataGridView9->Columns["dataGridViewTextBoxColumn51"]->Visible = false;

    String^ filePath = "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Student.txt";
    student->marksData(filePath, username, dataGridView8);
    student->Installments(filePath, username, dataGridView9);
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
    dataGridView10->Columns["dataGridViewTextBoxColumn56"]->Visible = false;
    dataGridView10->Columns["dataGridViewTextBoxColumn58"]->Visible = false;
    dataGridView10->Columns["dataGridViewTextBoxColumn59"]->Visible = false;
    String^ filePath = "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Student.txt";
    student->record(filePath, dataGridView10);

}

private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ program = textBox23->Text;
    String^ attfilePath = "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Attendance";
  
    String^ filePath = "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Student.txt";

    student->recordAttendance(filePath, attfilePath, program, dataGridView11);
}
private: System::Void button23_Click_1(System::Object^ sender, System::EventArgs^ e) {
    String^ program = textBox23->Text;
    String^ attfilePath = "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Attendance";
    String^ attendanceFileName = Path::Combine(attfilePath, "attendance_" + program + ".txt");
    student->updateAttendance(attendanceFileName, dataGridView11);
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ program = dataGridView4->Rows[0]->Cells[4]->Value->ToString()->Trim();
    String^ attfilePath = "C:\\Users\\kk\\OneDrive\\Desktop\\Final\\Attendance";
    String^ attendanceFileName = Path::Combine(attfilePath, "attendance_" + program + ".txt");
    String^ studentID = dataGridView4->Rows[0]->Cells[2]->Value->ToString()->Trim();
    String^ stdname = dataGridView4->Rows[0]->Cells[0]->Value->ToString()->Trim();
    String^ stdprogram = dataGridView4->Rows[0]->Cells[4]->Value->ToString()->Trim();

        student->calculateAttendance(attendanceFileName, studentID,stdname,stdprogram, dataGridView12);
}
};
};


