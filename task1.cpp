#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main (void) {
    srand(time(nullptr));
    int random_number = rand() %100 + 1;
    int guess;
    cout<<"Guess the Secret Number"<<endl;
    do {
    cin>>guess;
    if(guess < random_number)cout<<"Too low! Try again"<<endl;
    else  if (guess > random_number)cout<<"Too high! Try again"<<endl;
    else cout<<"Congratulations! You guessed the correct number"<<endl;}
    while (guess!= random_number);

    return 0;
}
