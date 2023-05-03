#include <iostream>
#include<iomanip>
#include "Employee.h"
#include "HrSysteam.h"
#include "Hourly_Employee.h"
#include "Windows.h"
using namespace std;
int main()
{
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);

    //ContactBook CB;
    system("cls");
    system("Color F2");// F backround white / 2 text green
    cout << "\n\n\n\n\n\n\n\t\t\t\t          *Hello I'm Mohamed*";
    cout << "\n\t\t\t\t WELCOME TO MY Hr SYSTEAM  \n";
    system("pause");
    system("cls");
    system("Color 01");

    int sizeOfEmployee;
    int sizeOfDepartment;
    int choice;

    do {
        system("cls");
        cout << "Enter Size OF Employees: ";
        cin >> sizeOfEmployee;
        cout << "Enter Size OF Departments: ";
        cin >> sizeOfDepartment;
        if (sizeOfEmployee <= 0 || sizeOfDepartment <= 0)
            cout << "Enter a Valid Number\n";
    } while (sizeOfEmployee <= 0 || sizeOfDepartment <= 0);

    HrSysteam* ptrHrsysteam = new HrSysteam(sizeOfEmployee, sizeOfDepartment);
    do
    {
        system("cls");
        system("Color 02");
        cout << "+-----------------------------------------------------------------------------+" << endl;
        cout << "|                                   Hr System                                   |" << endl;
        cout << "+-----------------------------------------------------------------------------+" << endl;
        cout << "| No. |         Module              |           Description                     |" << endl;
        cout << "+-----------------------------------------------------------------------------+" << endl;
        cout << "|  1. | Employee Information System | 1-Add Employee                            |" << endl;
        cout << "|     |                             | 2-Delete Employee                         |" << endl;
        cout << "|     |                             | 3-Modify Employee                         |" << endl;
        cout << "|     |                             | 4-Search                                  |" << endl;
        cout << "|     |                             | 5-Calculate Payroll                       |" << endl;
        cout << "+-----------------------------------------------------------------------------+" << endl;
        cout << "|  2. | Benefit Management:         | 1-Add Benefit                             |" << endl;
        cout << "|     |                             | 2-Delete Benefit                          |" << endl;
        cout << "|     |                             | 3- modify Benefit                         |" << endl;
        cout << "+-----------------------------------------------------------------------------+" << endl;
        cout << "|  3. | Depatment:                  | 1-Add Department                          |" << endl;
        cout << "|     |                             | 2-Delete Department                       |" << endl;
        cout << "|     |                             | 3-Edit Department                         |" << endl;
        cout << "+-----------------------------------------------------------------------------+"  <<endl;
        cout << "|  4. | Reporting                   | 1-Employee Info                           |" << endl;
        cout << "|     |                             | 2-Benefit Info                            |" << endl;
        cout << "|     |                             | 3-Salary Info                             |" << endl;
        cout << "+-----------------------------------------------------------------------------+" << endl;
        cout << "|  0. | ";
        SetConsoleTextAttribute(H, 4);
        cout<<"Exit";
        SetConsoleTextAttribute(H, 2);
        cout << "\t\t\t\t\t\t\t\t\t | " << endl;
        cout << "+-----------------------------------------------------------------------------+" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            
            system("cls");
            system("Color 03");
            cout << "+------------------------------------+" << endl;
            cout << "| 1-Add Employee                     |" << endl;
            cout << "| 2-Delete Employee                  |" << endl;
            cout << "| 3-Edit Employee                    |" << endl;
            cout << "| 4-Search                           |" << endl;
            cout << "| 5-Calculate Payroll                |" << endl;
            cout << "+------------------------------------+" << endl; 
            int x;
            cout << "Enter your choice: ";
            cin >> x;
            if (x == 1)
                ptrHrsysteam->AddEmployee();
            else if (x == 2)
                ptrHrsysteam->DelEmployee();
            else if (x == 3)
                ptrHrsysteam->modifyEmployee();
            else if (x == 4)
                ptrHrsysteam->FindEmployee();
            else if (x == 5)
                ptrHrsysteam->getCalculatePayroll();

            system("cls");
            
            break;
        case 2:
            system("Color 03");

            system("cls");
            cout << "+------------------------------------+" << endl;
            cout << "| 1- Add Benefit                     |" << endl;
            cout << "| 2-Delete Benefit                   |" << endl;
            cout << "| 3-Edit Name Of Benefit             |" << endl;
            cout << "+------------------------------------+" << endl;
            cout << "Enter your choice: ";
            int f;
            cin >> f;
            if (f == 1)
                ptrHrsysteam->AddBenefit();
            else if (f == 2)
                ptrHrsysteam->delBenefit();
            else if (f == 3)
                ptrHrsysteam->EditBenefit();
            system("Color 03");

            break;
        case 3:
            system("Color 03");

            system("cls");
            
            cout << "+------------------------------------+" << endl;
            cout << "| 1-Add Department                   |" << endl;
            cout << "| 2-Delete Department                |" << endl;
            cout << "| 3-Edit Name Of Department          |" << endl;
            cout << "+------------------------------------+" << endl;
            system("Color 03");
            int d;
            cin >> d;
            if (d == 1)
                ptrHrsysteam->AddDepartment();//
            else if (d == 2)
            {
                ptrHrsysteam->DelDepartment();//Logic Error Fix It 
                system("pause");
            }
            else if (d == 3)
                ptrHrsysteam->EditDepartment();

            break;
        case 4:
            system("Color 03");

            system("cls");
            cout << "+------------------------------------+" << endl;
            cout << "| 1-Show Employees                   |" << endl;
            cout << "| 2-Show Departments                 |" << endl;
            cout << "+------------------------------------+" << endl;
            int g;
            cin >> g;
            if (g == 1)
            {
                system("cls");
                system("Color 02");
                ptrHrsysteam->ShowAllOfEmployee();// Logic Error Here Fix It 
                system("pause");
            }

            if (g == 2)
            {
                system("Color 02");
                system("cls");
                ptrHrsysteam->ShowAllOfDepartment();
                system("pause");
            }
                
            break;
        case(0):
            system("cls");
            system("Color 02");
            cout << "\n\n\n\n\t\t\t^_^Thank You For Using My systeam^_^\n\n\n";
            cout << "\n\n\t\t\t(: Good Bye :)\n\n";

            break;

        default:
            continue;

        }
    } while (choice != 0);

        return 0;

    }
