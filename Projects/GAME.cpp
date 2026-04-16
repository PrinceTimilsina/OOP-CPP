//------------------------This is C++ Number Guessing Game:Here, i am using rand() and srand()------------------------------  
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
using namespace std;
int main() {
//-------------------------------- Seed the random number generator with the current time-------------------------------
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber=rand()%100+1; // Random number between 1 and 100 //MVP
    int guess;
    int attempts=0;
    cout<<"Welcome to the Number Guessing Game!"<<endl;
    cout<<"You have to chose a number between 1 and 100. Try to guess it!"<<endl;

    // Main game loop
	
    do {
       cout << "Enter your guess: ";
       cin >> guess;
       attempts++;

    if (guess > randomNumber) 
	  {
        cout<< "Too high! Try again." <<endl;
      } 
        
	else if(guess < randomNumber) 
		{
        cout<<"Too low! Try again."<<endl;
        } 
        
	else
	   {
        cout<<"Congratulations! You guessed the number in"<<attempts<<"attempts"<<endl;
       }
        
	} 
	while (guess!=randomNumber);
    return 0;
}

