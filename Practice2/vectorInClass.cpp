#include<iostream>
#include<vector>
using namespace std;

int main(){
  // initializer list
  vector<int> vector1 = {1, 2, 3, 4, 5};
  // uniform initialization
  vector<int> vector2{6, 7, 8, 9, 10};
  // method 3
  vector<int> vector3(5, 12);

  cout << "vector1 = ";
  // ranged loop
  for (const int& i : vector1) {
    cout << i << "  ";
  }

  cout << "\nvector2 = ";
  // ranged loop
  for (const int& i : vector2) {
    cout << i << "  ";
  }

  cout << "\nvector3 = ";
  // ranged loop
  for (int i : vector3) {
    cout << i << "  ";
  }

  cout<<endl;

  //Using empty(), size(), clear().

  cout<< "\nIs vector1 empty? "<<(vector1.empty()? "Yes" : "No");
  cout<< "\nVector1 size: "<<vector1.size();
  cout<< "\nVector1 capacity: "<<vector1.capacity();
  vector1.clear();
  cout<< "\nIs vector1 empty? "<<(vector1.empty()? "Yes" : "No");
  cout<< "\nVector1 size: "<<vector1.size();

  cout << endl;
  //Inserting or appending element at the end of a vector

  vector3.push_back(13);
  vector3.push_back(14);

  cout << "\nvector3 = ";
  // ranged loop
  for (int i : vector3) {
    cout << i << "  ";
  }
  cout<<endl;

  //Assessing an element in a vector

  cout << "\nElement at Index 0 of v3: " << vector3.at(0) << endl;
  cout << "Element at Index 2 of v3: " << vector3[2] << endl;
  cout << "Element at Index 4 of v3: " << vector3.at(5)<< endl;
  cout << "Element at the front of v3: " << vector3.front()<<endl;
  cout << "Element at the back of v3: " << vector3.back()<<endl;

  //Modifying the elements of a vector

  // change elements at indexes 1 and 4
  vector3.at(1) = 9;
  vector3[4] = 7;

  //Deleting the elements of a vector

  // remove the last element
  vector3.pop_back();

  // final vector
  cout << "\nUpdated Vector: ";
  for (int i : vector3) {
    cout << i << " ";
  }

  cout<<endl;

  // remove the last element
  vector3.pop_back();

  // final vector
  cout << "\nUpdated Vector: ";
  for (int i : vector3) {
     cout << i << " ";
  }

  //.begin() and .end() function

  /* the begin() function returns an iterator (or pointer) that returns the addrress of 
  the first element of a vector, hence we need to dereference it to get its value*/
  cout<< "Vector's first element: "<<*(vector3.begin())<<endl;

  /* the begin() function returns an iterator (or pointer pointing theoretical 
  to the first element)that returns the addrress of 
  the first element of a vector, hence w eneed to dereference it to get its value*/
  cout<< "Vector's last element: "<<*(vector3.end()-1)<<endl;
  cout<<endl;

  //Inserting using iterators in vectors
  
  //It doesnt replace the former element at the index, but pushes or displaces it to the right
  vector3.insert(vector3.begin(),666); // inserting an int once

  cout<<"Updated vector\n";
  for(auto i : vector3){
    cout<<i<<" ";
  }

  vector3.insert(vector3.begin()+2,3,55); // inserting an int multiple times

  cout<<"\n\nUpdated vector\n";
  for(auto i : vector3){
    cout<<i<<" ";
  }

  vector3.insert(vector3.begin()+3,{690,751,320}); // inserting once

  cout<<"\n\nUpdated vector\n";
  for(auto i : vector3){
    cout<<i<<" ";
  }

  // .emplace(position, args) funtion

  vector3.emplace(vector3.end(),1000); // inserting once

  cout<<"\n\nUpdated vector\n";
  for(auto i : vector3){
    cout<<i<<" ";
  }

  // .erase() function

  vector3.erase(vector3.end()+5); // erasing an element at 

  cout<<"\n\nUpdated vector\n";
  cout<<"Deleting anm elemrent at index 7\n";
  for(auto i : vector3){
    cout<<i<<" ";
  }
    
  // Iterators 

  cout<<"\n\nIterator Operation\n";
  //Declaring and initializing
  vector<int>::iterator it {vector3.begin()};
  // OR
  // auto it = vector3.begin();

  // Assessing using iterator

  cout<< "First element: "<< *it <<endl;
  cout<< "Second element: "<< *(it+1) <<endl;
  // OR
  // it++  // second element
  // it++; // third element
  // cout<< "Third element: "<< *it <<endl;
  cout<< "Fifth element: "<< *(it+4) <<endl;

  // For loop with iterators
  cout<<"\nUsing for loop with iterators: "<<endl;
  for (auto it = vector3.begin(); it!=vector3.end(); it++){
    cout<<*it<<" ";
  }

  // Modify with iterator
  *it = 1000;
  *(it+2) = 2000;

  cout<<"\nUsing for loop with iterators: "<<endl;
  for (auto it = vector3.begin(); it!=vector3.end(); it++){
    cout<<*it<<" ";
  }

  /*vector<int> v4 = {};
  cout<<"enter:";
  cin>>v4[0]>>v4[1];

  for(auto i : v4){
    cout<<i<<" ";
  }*/

}

