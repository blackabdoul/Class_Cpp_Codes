#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    //Initializer list

    array<int, 5>ages = {45,25,66,87,21};
    cout<<"Before sorting: ";
    for(const auto& a : ages)
        cout<<a<<" ";
    cout<<endl;

    //Sorting our array

    cout<<"After sorting: ";
    sort(ages.begin(), ages.end());
    for(const auto& a : ages)
        cout<<a<<" ";
    cout<<endl;

    auto found = find(ages.begin(),ages.end(), 45);
    if(found != ages.end()){
        cout<<"The number is in the age container  ";
        cout<<found<<" "<<*found<<endl;}
    else{
        cout<<"The number is not in the age container  ";
        cout<<found<<" "<<*found<<endl;
    }

    // Summing our array

    int sum = accumulate(ages.begin(), ages.end(), 0);
    cout << "The sum of the element of array (ages) is : " << sum<<endl;
}