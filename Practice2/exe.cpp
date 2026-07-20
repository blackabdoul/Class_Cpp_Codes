#include <iostream>
#include <vector>
using namespace std;

vector<int> sliceArray(vector<int>& arr, int start, int end) {
    int sliced_arr[];
    for(int i=start ; i<=end ; ++i ){
        sliced_arr[i-1]=arr[i];
    }
    for(int n : sliced_arr){
        cout<<n<<" ";
    }
}
int main(){
    vector<int> arr[4,5,6,9,8,7,5,2];
    sliceArray(arr,2,5)
}