#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student {
    private:
    string first_name;
    string last_name;
    string matriculation;
    vector<int> grades_cyber;
    vector<int> grades_cppoop;
    vector<int> grades_wad;

    public:
    // Setting student's identification
    void set_info(){

        cout << "Enter first name: ";
        cin >> first_name;
        cout << "Enter last name: ";
        cin >> last_name;
        cout << "Enter matriculation: ";
        cin >> matriculation;

        // Setting grades scored
        cout << "Enter grades scored in Cybersecurity: ";
        int cy1, cy2, cy3, cy4;
        grades_cyber.insert(grades_cyber.begin(), {cy1,cy2,cy3,cy4});
        /*grades_cyber = new float[4];
        for(int i=0; i<4; i++)
            cin >> grades_cyber[i];
        */
        cout << "Enter grades scored in C++ OOP: ";
        int co1, co2, co3, co4;
        grades_cppoop.insert(grades_cppoop.begin(), {co1,co2,co3,co4});
        /*grades_cppoop = new float[4];
        for(int i=0; i<4; i++)
            cin >> grades_cppoop[i];
         */   
        cout << "Enter grades scored in Web App Devt: ";
        int wa1, wa2, wa3, wa4;
        grades_cyber.insert(grades_wad.begin(), {wa1,wa2,wa3,wa4});
        /*grades_wad = new float[4];
        for(int i=0; i<4; i++)
            cin >> grades_wad[i];
        */    
    }

    // function to find gpa
    float get_gpa(vector<int> grades){
        float sum =0;
        for(int i=0; i<4; i++){
            sum += grades[i];
        }
        float gpa = sum / 4;
        return gpa;
    }

    // Display a student information
    void get_info(){
        cout << "\nFirst Name: " << first_name << endl;
        cout << "Last Name: " << last_name << endl;
        cout << "Cybersecurity GPA: " << get_gpa(grades_cyber) << endl;
        cout << "C++ OOP GPA: " << get_gpa(grades_cppoop) << endl;
        cout << "Web Application Development GPA: " << get_gpa(grades_wad) << endl;
    }
    void status_info(){
        if((get_gpa(grades_cyber)>=60) && (get_gpa(grades_cppoop) >= 60) && (get_gpa(grades_wad)>=60))
            cout << "Status: Passed the EXAM.\n";
        else
            cout << "Status: Failed the EXAM.\n"; 
    } 

    /*
    // Destructor
    ~Student(){
        delete[] grades_cyber;
        delete [] grades_cppoop;
        delete[] grades_wad;
    }
    */
};

int main(){
    // An array of objects of Student class
    Student students[100];
    
    char ch;
    cout << "Enter a student's info (Y/N): ";
    cin >> ch;
    ch = static_cast<char>(tolower(ch));
    int count=0; // counter
    while(ch=='y'){
        (students+count)->set_info();
        count++;
        
        // Take input from user
        cout << "\nEnter a student's info (Y/N): ";
        cin >> ch;
        ch = static_cast<char>(tolower(ch));
    }

    cout << "\nDisplaying Student Information\n";
    for(int i=0; i<count; i++){
        (students+i)->get_info();
        (students+i)->status_info();
    }
}