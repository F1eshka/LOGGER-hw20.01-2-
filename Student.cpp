#include "Logger.h"
#include "Student.h"
#include <iostream>
using namespace std;

    /// <summary>
    /// ����������� ����������� ������ Student.
    /// ������� ����� �������� �� ������ ����������� �������.
    /// </summary>
    /// <param name="original">������������ �������, ������� ����� ����������.</param>
    Student::Student(const Student& original)
    {
        cout << "COPY C-TOR\n";

        this->surname = original.surname;
        this->name = original.name;
        this->middlename = original.middlename;
        this->adress = original.adress;
        this->phonenumber = original.phonenumber;
        this->countpractic = original.countpractic;
        this->counthomework = original.counthomework;
        this->countexam = original.countexam;


        this->grade_of_practic = new int[original.countpractic];
        for (int i = 0; i < countpractic; i++)
        {
            this->grade_of_practic[i] = original.grade_of_practic[i];
        }

        this->grade_of_homework = new int[original.counthomework];
        for (int i = 0; i < counthomework; i++)
        {
            this->grade_of_homework[i] = original.grade_of_homework[i];
        }

        this->grade_of_exam = new int[original.countexam];
        for (int i = 0; i < countexam; i++)
        {
            this->grade_of_exam[i] = original.grade_of_exam[i];
        }
    }

    /// <summary>
    ///  ����������� �� ��������� ������ Student.
    /// �������������� �������� ���������� �� ���������.
    /// </summary>
    Student::Student() : Student("Studenchenko", "Student", "Studentovich", "Studencheskaya 38", "0630300033") { Logger::GetInstance()->Write("Student has been created\n"); }

    /// <summary>
    /// ����������� ������ Student.
    /// �������������� �������� � ����������� ����������.
    /// </summary>
    /// <param name="surname">������� ��������.</param>
    /// <param name="name">��� ��������.</param>
    /// <param name="middlname">�������� ��������.</param>
    /// <param name="adress">����� ��������.</param>
    /// <param name="phonenumber">����� �������� ��������.</param>
    Student::Student(string surname, string name, string middlname, string adress, string phonenumber)
    {
        cout << "MAIN C-TOR\n";
        SetSurname(surname);
        SetName(name);
        SetMiddlName(middlname);
        SetAdress(adress);
        SetPhone(phonenumber);
        Logger::GetInstance()->Write("Student has been created\n");
    }
    


    /// <summary>
    /// ���������� ������ Student.
    /// ����������� ������, ������� ��������� ������.
    /// </summary>
    Student::~Student()
    {
        cout << "DESTRUCTOR\n";
        if (grade_of_practic != nullptr)
            delete[] grade_of_practic;
        if (grade_of_homework != nullptr)
            delete[] grade_of_homework;
        if (grade_of_exam != nullptr)
            delete[] grade_of_exam;
        Logger::GetInstance()->Write("Student has been destroyed\n");
    }

    /// <summary>
    /// ������� ���������� � �������� � �������.
    /// </summary>
    void Student::PrintStudent() const
    {
        cout << "Surname: " << surname << "\n";
        cout << "Name: " << name << "\n";
        cout << "Midlname: " << middlename << "\n";
        cout << "Adress: " << adress << "\n";
        cout << "Phonnumber: " << phonenumber << "\n";
        Logger::GetInstance()->Write("Student print\n");
    }

    /// <summary>
    /// ��������� ����� ������ �� �������� ��������.
    /// </summary>
    /// <param name="newcountry">����� ������ �� ��������.</param>
    void Student::AddPractic(int newcountry)
    {
        int* temp = new int[countpractic + 1];
        for (int i = 0; i < countpractic; i++)
        {
            temp[i] = grade_of_practic[i];
        }

        temp[countpractic] = newcountry;
        countpractic++;
        delete[]grade_of_practic;
        grade_of_practic = temp;
    }

    /// <summary>
    /// ������� ������ �� �������� �������� � �������.
    /// </summary>
    void Student::PrintPractic() const
    {
        for (int i = 0; i < countpractic; i++)
        {
            cout << grade_of_practic[i] << ", ";
        }
    }

    /// <summary>
    /// �������� ������ �� �������� �������� �� ���������� �������.
    /// </summary>
    /// <param name="index">������ ������ �� ��������</param>
    /// <returns>������ �� �������� �� ���������� �������</returns>
    int Student::GePracticRatesCount(unsigned int index) const
    {
        if (index < countpractic)
        {
            return grade_of_practic[index];
        }
    }

    /// <summary>
    /// ��������� ����� ������ �� �������� ������ ��������
    /// </summary>
    /// <param name="newcountry">����� ������ �� �������� ������</param>
    void Student::AddHomeWork(int newcountry)
    {
        int* temp = new int[counthomework + 1];
        for (int i = 0; i < counthomework; i++)
        {
            temp[i] = grade_of_homework[i];
        }
        temp[counthomework] = newcountry;
        counthomework++;
        delete[]grade_of_homework;
        grade_of_homework = temp;
    }

    /// <summary>
    /// ������� ������ �� �������� ������ �������� � �������.
    /// </summary>
    void Student::PrintHomeWork() const
    {
        for (int i = 0; i < counthomework; i++)
        {
            cout << grade_of_homework[i] << ", ";
        }
    }

    /// <summary>
    /// �������� ������ �� �������� ������ �������� �� ���������� �������.
    /// </summary>
    /// <param name="index">������ ������ �� �������� ������</param>
    /// <returns>������ �� �������� ������ �� ���������� �������</returns>
    int Student::GetHomeWorkRatesCount(unsigned int index) const
    {
        if (index < counthomework)
        {
            return grade_of_homework[index];
        }
    }

    /// <summary>
    /// ��������� ����� ������ �� ������� ��������
    /// </summary>
    /// <param name="newcountry">����� ������ �� �������</param>
    void Student::AddExam(int newcountry)
    {
        int* temp = new int[countexam + 1];
        for (int i = 0; i < countexam; i++)
        {
            temp[i] = grade_of_exam[i];
        }
        temp[countexam] = newcountry;
        countexam++;
        delete[]grade_of_exam;
        grade_of_exam = temp;
    }

    /// <summary>
    /// ������� ������ �� ������� �������� � �������
    /// </summary>
    void Student::PrintExam() const
    {
        for (int i = 0; i < countexam; i++)
        {
            cout << grade_of_exam[i] << ", ";
        }
    }

    /// <summary>
    /// �������� ������ �� ������� �������� �� ���������� �������
    /// </summary>
    /// <param name="index">������ ������ �� �������</param>
    /// <returns>������ �� ������� �� ���������� �������</returns>
    int Student::GetExamRatesCount(unsigned int index) const
    {
        if (index < countexam)
        {
            return grade_of_exam[index];
        }
    }

    /// <summary>
    /// ������������� ������� ��������
    /// </summary>
    /// <param name="surname">����� ������� ��������</param>
    void Student::SetSurname(string surname)
    {
        this->surname = surname;
    }

    /// <summary>
    /// ���������� ������� ��������
    /// </summary>
    /// <returns>������� ��������</returns>
    string Student::GetSurname() const
    {
        return surname;
    }

    /// <summary>
    /// ������������� ��� ��������
    /// </summary>
    /// <param name="name">����� ��� ��������</param>
    void Student::SetName(string name)
    {
        this->name = name;
    }

    /// <summary>
    /// ���������� ��� ��������
    /// </summary>
    /// <returns>��� ��������</returns>
    string Student::GetName() const
    {
        return name;
    }

    /// <summary>
    /// ������������� �������� ��������
    /// </summary>
    /// <param name="middlname">����� �������� ��������</param>
    void Student::SetMiddlName(string middlname)
    {
        this->middlename = middlname;
    }

    /// <summary>
    /// ���������� �������� ��������
    /// </summary>
    /// <returns>�������� ��������</returns>
    string Student::GetMiddlName() const
    {
        return middlename;
    }

    /// <summary>
    /// ������������� ����� ��������
    /// </summary>
    /// <param name="adress">����� ����� ��������</param>
    void Student::SetAdress(string adress)
    {
        this->adress = adress;
    }

    /// <summary>
    /// ���������� ����� ��������
    /// </summary>
    /// <returns>����� ��������</returns>
    string Student::GetAdress() const
    {
        return adress;
    }

    /// <summary>
    ///  ������������� ����� �������� ��������
    /// </summary>
    /// <param name="phonenumber">����� ����� �������� ��������</param>
    void Student::SetPhone(string phonenumber)
    {
        this->phonenumber = phonenumber;
    }

    /// <summary>
    /// ���������� ����� �������� ��������
    /// </summary>
    /// <returns>����� �������� ��������</returns>
    string Student::GetPhone() const
    {
        return phonenumber;
    }

    /// <summary>
    /// ����� ��� ������������ ������ � ��������� �������� �� ��������.
    /// </summary>
    /// <param name="s">�������, ������� ����� �������</param>
    void Student::GoToPeresdacha(Student s)
{
    cout << "hey hey peresdacha...\n";
}