#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int jml, p1,p2,p3;
    vector<int> v;
    cin >> jml;
    
    for(int i = 0; i< jml; i++){
      int temp;
      cin >> temp;
      v.push_back(temp);
    }
    
    cin>>p1;
    cin>>p2>>p3;
    v.erase (v.begin()+(p1-1));
    v.erase(v.begin()+p2-1 , v.begin()+p3-1);
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
       cout<<v[i]<<" ";
    }
}
