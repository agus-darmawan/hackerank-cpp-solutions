#include <iostream>
#include <set>
using namespace std;


int main() {
    set<int> s;
    int N;
    cin >> N; 
    for (int i = 0; i<N;i++){
      int val, temp;
      cin >> val;
      cin >> temp;
      if(val == 1){
        s.insert(temp);
      }
      else if(val == 2){
        s.erase(temp);
      }
      else{
        set<int>::iterator itr=s.find(temp);
        if(itr == s.end()){
          cout << "No" << endl;
        }
        else {
          cout << "Yes" << endl;
        }
      }
    }
return 0;
}



