#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[12] = {"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    int a,b;

    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(i<=9){
            cout<<str[i-1]<<"\n";
        }
        else{
            cout<<str[9+(i%2)]<<"\n";
        }
    }
    return 0;
}
