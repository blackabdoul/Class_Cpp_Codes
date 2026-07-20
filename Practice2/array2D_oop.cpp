#include <iostream>
using namespace std;

class School;

class Student{
    private:
        string name;
        int** grades;
        int row, column;

    public:
        Student(string n, int r, int c){
            name=n;
            row=r;
            column=c;

            grades = new int *[row];
            for (int i = 0; i<row; i++){
                grades[i]= new int[column];
            }
        }

        Student(const Student& s){ 
            name = s.name;
            row = s.row;
            column = s.column;

            grades = new int *[row];
            for(int i=0; i<row; i++){
                grades[i]= new int[column];
            }

            for(int i=0; i<row; i++){
                for(int j=0; j<column; j++){
                    grades[i][j]=s.grades[i][j];
                }
            }
        }

        ~Student(){
            for(int i=0; i<row; i++){
                delete[] grades[i];
            }
            delete[] grades;
        }

        void inputGrades(){
            for(int i=0; i<row; i++){
                for(int j=0; j<column; j++){
                    cout<<"Enter grade ["<<i<<"]["<<j<<"]";
                    cin>>grades[i][j];
                }
            }
            cout<<endl;
        }

        void displayGrades(){
            for(int i=0; i<row; i++){
                for(int j=0; j<column; j++){
                    cout<<"Grade ["<<i<<"]["<<j<<"]: "<<grades[i][j]<<endl;
                }
            }
            cout<<endl;
        }

        friend float calculateAverage(const Student&);
        friend class School;
};

float calculateAverage(const Student& s){
    float sum;
    for(int i=0; i<s.row; i++){
        for(int j=0; j<s.column; j++){
            sum += s.grades[i][j];
        }
    }
    float average = (sum)/(s.row*s.column);
    return average;
}

class School{
    public:
        void printAllGrades(const Student& s){
            for(int i=0; i<s.row; i++){
                for(int j=0; j<s.column; j++){
                    cout<<"Grade ["<<i<<"]["<<j<<"]: "<<s.grades[i][j]<<endl;
                }
            }
            cout<<endl;
        }
};

int main(){
    Student s1("Alice", 3, 2);
    s1.inputGrades();
    s1.displayGrades();

    School mySchool;
    mySchool.printAllGrades(s1);

   
    float avg = calculateAverage(s1);
    cout<<"Average_S1: "<<avg<<endl;


    Student s2 = s1;

    //s2.inputGrades();
    s2.displayGrades();

    mySchool.printAllGrades(s2);

    float avgS2 = calculateAverage(s2);
    cout<<"Average_S2: "<<avgS2<<endl;


}
