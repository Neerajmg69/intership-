#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    int secretnumber= rand()% 100 + 1;
    int guess;
    int attempts =0;

    cout<<"welcome to the number game"<<endl;
    cout<<"try to guess the number between 1 and 100"<<endl;
do {
    cout<<"enter your guess:";
    cin>> guess;
    attempts++;

    if(guess > secretnumber){
        cout<<"too high try again.\n";
    }else if (guess < secretnumber){
        cout<<"too low try again.\n";
    }else{
        cout <<"congratulations you guessed the number"<<endl;
    }
    }while(guess != secretnumber);

    return 0;
}