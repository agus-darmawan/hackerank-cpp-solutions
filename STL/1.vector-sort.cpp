#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int jml;
    vector<int> v;
    cin >> jml;
    
    for(int i = 0; i< jml; i++){
      int temp;
      cin >> temp;
      v.push_back(temp);
    }
      
    sort(v.begin(),v.end()); 
    
    for(int i = 0; i < jml; i++){
       cout<<v[i]<<" ";
    }
    return 0;
}