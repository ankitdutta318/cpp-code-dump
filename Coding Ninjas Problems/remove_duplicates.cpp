#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> removeDuplicates(vector<int> input){

    // Write your code here

  std::vector<int>::iterator it;
  it = unique(input.begin(), input.end());
  input.resize(distance(input.begin(), it));

  return input;
  
}

int main() {
  
  int n, val;
  cin >> n;

  vector <int> arr;
  vector <int> new_arr;

  // Take input
  for(int i=0; i<10; ++i) {
    cin >> val;
    arr.push_back(val);
  }

  sort(arr.begin(), arr.end());

  // Call removeDuplicate function
  new_arr = removeDuplicates(arr);

  // Print out the new array
  for(vector <int>::iterator it=new_arr.begin(); it!=new_arr.end(); ++it) {
    cout << *it << " ";
  }
  return 0;
}