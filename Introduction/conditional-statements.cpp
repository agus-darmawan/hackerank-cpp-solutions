#include <iostream>
using namespace std;

int n;
int main (){
 cin >> n;
     string word[10] = {"","one","two","three","four","five","six","seven","eight","nine"};
        
    if(n > 0 && n < 10){
        cout << word[n];
    }
    else{
        cout << "Greater than 9";   
    }
    return 0;
}