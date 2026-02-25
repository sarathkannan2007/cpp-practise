#include<iostream>
using namespace std;
int main(){
    int i , j;
    char c;
   for(int j = 0; j<5;j++){
    for(int i = j; i<5;i++){
        char c = 'A' + i;
        cout<<c<<" ";
    }
    cout<<endl;
   }
   return 0;
}
