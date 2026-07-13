#include <iostream>
using namespace std;

int fib(int n);

int main(){
    int num, a=0, b=1, c, choice, count=2;
    cout<<"Enter a num:";
    cin>>num;
    cout<<"Generate the sequence with iterative or solve for the last number in the series with recursive method(1 or 2):";
    cin>>choice;

    if(choice==1){
        if(num==0){
            cout<<a<<" ";
        }else if (num==1){
            cout<<b<<" ";
        }else if (num>1){
            cout<<a<<" ";
            cout<<b<<" ";
            while(count<num){
                c=a+b;
                a=b;
                b=c;
                
                cout<<b<<" ";

                count++;
            }
        }else{
            cout<<"Negative number entered!";
        }
    }else{
        int seq = fib(num);
        cout<<"Last number of the series:";
        cout<<seq<<" ";
    }
}

int fib(int n){
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2); 
}