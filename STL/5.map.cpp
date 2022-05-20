#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    map <string,int> m;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
       int val, nil;
       string par;
       cin>>val;     
       if(val == 1){
           cin >> par >> nil;
           m[par] += nil;
       }
       else if (val == 2) {
           cin >> par;
           m.erase(par);
       }
       else{
           cin >> par;
           map<string,int>::iterator itr=m.find(par);
           if (itr == m.end()){
               cout<< 0 <<endl;
           }
           else{
               cout<<m[par]<<endl;
           }
       }
    
    }
}



