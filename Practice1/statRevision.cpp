#include <iostream>
#include <vector>
using namespace std;

/*
double (vector<double, float> data_points)
{
}
*/
int main()
{

    int n;
    cout << "Enter the number of data points: ";
    cin >> n;
    vector<double> data_points(n);
    cout << "Enter you different data points: ";

    for (int i = 0; i < n; ++i)
    {
        cin >> data_points[i];
    }

    for (char i : data_points)
    {
        cout << data_points[i] << endl;
    }
}
