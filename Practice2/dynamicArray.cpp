#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the number of your students:";
    int size;
    cin>>size;

    int *pGrades = nullptr;
    pGrades = new int[size];

    for(int i=0; i<size; i++){
        cout<<"Enter grade #"<<i+1<<":";
        cin>>pGrades[i];
    }

    for(int i=0; i<size; i++){
        cout<<"Grade #"<<i+1<<":"<<pGrades[i]<<endl;
    }
    delete[] pGrades;
}