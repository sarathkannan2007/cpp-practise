//NYMBER GUESSING GAME
#include<iostream>
using namespace std;
int main()
{   cout << "=== Number Guessing Game ===" << endl;
    int num=rand()%100+1,guess=0,x;
    do{
    cout<<"Enter a number : "<<endl;
    cin>>x;
    guess ++;
    if(x==num){
        cout<<"You guessed the number correctly"<<endl;
        cout<<"Guess : "<<guess;
    }
    else if(x>num){
        cout<<"Guessed number is too high"<<endl;     
    }
    else if(x<num){
        cout<<"Guessed number is too low"<<endl;
    }     
    }while(x != num);
    return 0;
}
