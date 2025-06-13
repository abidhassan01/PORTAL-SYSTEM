#include <iostream>
using namespace std;

void addGrade(double grade[]);
void addAttendance(bool attendance[]);
void displayGrade(double grade[]);
void displayAttendance(bool attendance[]);
void faculty();
void info();

int main() {
    cout<<"+--------------------------------+"<<endl;
    cout<<"|                                |"<<endl;
    cout<<"|   University Of Management     |"<<endl;
    cout<<"|                                |"<<endl;
    cout<<"+--------------------------------+"<<endl;

    double grade[10];
    bool attendance[10];
    int mode, choice;
    int facultyPin = 1234;
    int studentPin = 5678;

    do {
        cout<<"+-----------------------+"<<endl;
        cout<<"|         Menu          |"<<endl;
        cout<<"+-----------------------+"<<endl;
        cout<<"| 1. Faculty            |"<<endl;
        cout<<"| 2. Student Portal     |"<<endl;
        cout<<"| 3. Information        |"<<endl;
        cout<<"| 4. Our Faculty        |"<<endl;
        cout<<"| 5. Exit               |"<<endl;
        cout<<"+-----------------------+"<<endl;
        cout<<"Enter your choice: ";
        cin>>mode;

        switch (mode) {
            case 1: {
                int enteredPin;
                cout<<"Enter faculty PIN: ";
                cin>>enteredPin;
                if (enteredPin != facultyPin) {
                    cout<<"Invalid PIN. Access denied!"<<endl;
                    break;
                }

                cout<<"+-----------------------+"<<endl;
                cout<<"|      Faculty Menu     |"<<endl;
                cout<<"+-----------------------+"<<endl;
                cout<<"| 1. Add Grades         |"<<endl;
                cout<<"| 2. Display Grades     |"<<endl;
                cout<<"| 3. Add Attendance     |"<<endl;
                cout<<"| 4. Display Attendance |"<<endl;
                cout<<"+-----------------------+"<<endl;
                cout<<"Enter your choice: ";
                cin>>choice;

                if (choice == 1) {
                    addGrade(grade);
                    cout<<"Grades added successfully!"<<endl;
                } else if (choice == 2) {
                    displayGrade(grade);
                } else if (choice == 3) {
                    addAttendance(attendance);
                    cout<<"Attendance added successfully!"<<endl;
                } else if (choice == 4) {
                    displayAttendance(attendance);
                } else {
                    cout<<"Invalid choice. Exiting..."<<endl;
                    return 1;
                }
                break;
            }
            case 2: {
                int enteredPin;
                cout<<"Enter student PIN: ";
                cin>>enteredPin;
                if (enteredPin != studentPin) {
                    cout<<"Invalid PIN. Access denied!"<<endl;
                    break;
                }
                cout<<"+-----------------------+"<<endl;
                cout<<"|     Student Menu      |"<<endl;
                cout<<"+-----------------------+"<<endl;
                cout<<"| 1. Display Grades     |"<<endl;
                cout<<"| 2. Display Attendance |"<<endl;
                cout<<"+-----------------------+"<<endl;
                cout<<"Enter your choice: ";
                cin>>choice;
                if (choice == 1) {
                    displayGrade(grade);
                } else if (choice == 2) {
                    displayAttendance(attendance);
                } else {
                    cout<<"Invalid choice."<<endl;
                }
                break;
            }
            case 3:
                cout<<"+-----------------------+"<<endl;
                cout<<"|     University Info   |"<<endl;
                cout<<"+-----------------------+"<<endl;
                info();
                break;
            case 4:
                cout<<"+-----------------------+"<<endl;
                cout<<"|     Our Faculty       |"<<endl;
                cout<<"+-----------------------+"<<endl;
                faculty();
                break;
            case 5:
                cout<<"Exiting program. Thank you!"<<endl;
                break;
            default:
                cout<<"Invalid mode selection. Exiting..."<<endl;
                return 1;
        }
    } while (mode != 5);
    return 0;
}

void addGrade(double grade[]) {
    for (int i = 0; i < 10; i++) {
        cout<<"Enter Student "<<i + 1<<" Marks: ";
        cin>>grade[i];
    }
}

void displayGrade(double grade[]) {
    cout<<"Grades:"<<endl;
    for (int i = 0; i < 10; i++) {
        cout<<"Student "<<i + 1<<" Marks: "<<grade[i]<<endl;
    }
}

void addAttendance(bool attendance[]) {
    char ch;
    for (int i = 0; i < 10; i++) {
        cout<<"Is Student "<<i + 1<<" present? (y/n): ";
        cin>>ch;
        attendance[i] = (ch == 'y' || ch == 'Y');
    }
}

void displayAttendance(bool attendance[]) {
    cout<<"Attendance:"<<endl;
    for (int i = 0; i < 10; i++) {
        cout<<"Student "<<i + 1<<" Attendance: "<<(attendance[i] ? "Present" : "Absent")<<endl;
    }
}

void faculty() {
    cout<<"SST Dean"<<endl;
    cout<<"Name: ____________"<<endl;
    cout<<"Education: ____________"<<endl;
    cout<<"Experience: ____________"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"STD Dean"<<endl;
    cout<<"Name: ____________"<<endl;
    cout<<"Education: ____________"<<endl;
    cout<<"DOB: ____________"<<endl;
    cout<<"Experience: ____________"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"SST HOD"<<endl;
    cout<<"Name: ____________"<<endl;
    cout<<"Education: ____________"<<endl;
    cout<<"Experience: ____________"<<endl;
}

void info() {
    cout<<"University of Management and Technology (UMT) Lahore"<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"Location: Lahore, Punjab, Pakistan"<<endl;
    cout<<"Founded: 1990"<<endl;
    cout<<"Chancellor: Hasan Sohaib Murad"<<endl;
    cout<<"Vice-Chancellor: Dr. Muhammad Aslam"<<endl;
    cout<<"Campus Size: Urban, 200 acres"<<endl;
    cout<<"Website: www.umt.edu.pk"<<endl;
}

