#include <iostream>
#include <vector>
using namespace std;

struct Student{
    string f_name;
    string l_name;
    int lab_s;
    int test_s;
    char c_grade;

    char getGrade(){
        int cal_lab = (lab_s * 70)/100;
        int cal_test = (test_s * 30)/100;
        int grade = cal_lab + cal_test;
        if (grade<=100 && grade>=90){
            c_grade= 'A';
        }
        else if (grade<90 && grade>=80){
            c_grade= 'B';
        }
        else if (grade<80){
            c_grade='C';
        }
        else{
            cout<<"Invalid scores entered!";
        }
        return c_grade;
    }

    void displayInfo(){
        cout<<f_name<<" "<<l_name<<"\'s "<<"Lab score is: "<<lab_s<<
        " Test score is: "<<test_s<<" Grade is: "<<c_grade<<endl;
    }
};

int main(){
    /*Student student1{"John","White",70,88};
    cout<<student1.getGrade(student1)<<endl;
    student1.displayInfo(student1);*/

    vector<Student*>students {new Student{"John", "White", 70,80}, 
    new Student{"Alisa","Brown",64,90}, new Student{"Mike","Green",90,75}};



    for (auto s: students){
        cout<<s->f_name<<endl;
        cout<<s->l_name<<endl;
        cout<<s->test_s<<endl;
        cout<<s->lab_s<<endl;
        cout<<s->getGrade()<<endl;
        //cout<<s->displayInfo()<<endl;
    }

}