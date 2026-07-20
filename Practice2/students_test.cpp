#include <iostream>
using namespace std;

class Student{
    public:
        string f_name;
        string l_name;
        string matric;

        int major_cyber[4];
        int major_oop[4];
        int major_web[4];

        void setInfo(){
            int num_grades = 4;
            cout<<"Enter first name: ";
            cin>>f_name;
            cout<<"Enter last name: ";
            cin>>l_name;
            cout<<"Enter matriculation: ";
            cin>>matric;
            cout<<"Enter grades scored in Cybersecurity: ";
            for (int i =0; i<num_grades; i++){
                cin>>major_cyber[i];
            }
            cout<<"Enter grades scored in C++ OOP: ";
            for (int i =0; i<num_grades; i++){
                cin>>major_oop[i];
            }
            cout<<"Enter grades scored in Web App Devt: ";
            for (int i =0; i<num_grades; i++){
                cin>>major_web[i];
            }
        }

        void displayInfo(){
            float sum_cyber=0, sum_oop=0, sum_web=0;
            int num_grades = 4;
            cout<<"First Name: "<<f_name<<endl;
            cout<<"Last Name: "<<l_name<<endl;

            cout<<"Cybersecurity GPA: ";
            for (int i=0; i<num_grades; i++){
                sum_cyber+=major_cyber[i];
            }
            float cyber_gpa = (sum_cyber/num_grades);
            cout<<cyber_gpa<<endl;   

            cout<<"C++ OOP GPA: ";
            for (int i=0; i<num_grades; i++){
                sum_oop+=major_oop[i];
            }
            float oop_gpa = (sum_oop/num_grades);
            cout<<oop_gpa<<endl;     

            cout<<"Web App Devt GPA: ";
            for (int i=0; i<num_grades; i++){
                sum_web+=major_web[i];
            }
            float web_gpa = (sum_web/num_grades);
            cout<<web_gpa<<endl;

            cout<<"Status: ";
            if (cyber_gpa>=60 && oop_gpa>=60 && web_gpa>=60){
                cout<<"Passed the EXAM";
                cout<<endl;
            }
            else{
                cout<<"Failed the EXAM";
                cout<<endl;
            }
        }

};

int main(){
    char option;
    cout<<"Enter a student's info (Y/N): ";
    cin>>option;
    Student s1;
    Student s2;

    if(option=='Y'){
        s1.setInfo();

        cout<<"Enter a student's info (Y/N): ";
        cin>>option;
    }

    if(option=='Y'){
        
        s2.setInfo();
        cout<<"Enter a student's info (Y/N): ";
        cin>>option;
    }

    if(option=='Y'){
        Student s3;
        s3.setInfo();
        cout<<"Enter a student's info (Y/N): ";
        cin>>option;
    }
    else if (option == 'N'){
        s1.displayInfo();
        cout<<endl;
        s2.displayInfo();
    }
}
