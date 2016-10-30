#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main() {
  // Set up
  // @TODO: update random number generation to use C++11 techniques.
  srand(time(0)); // Seed the random number generator

  int answer = (rand() % 10) + 1; // Random number between 1 and 10.
  bool keepGuessing = true;
  int guess;
  int guessCount = 0;

  cout << "Guess the number game!" << endl << endl;
  cout << "I am thinking of a number between 1 and 10." << endl;
  while (keepGuessing) {
      cout << "Enter a number: ";
      cin >> guess;
      if ( guess == answer ) {
        cout << "Congradulations!! You Won." << endl;
        cout << "It took you " << guessCount << " guess(es) to find the right answer." << endl;
        keepGuessing = false;
      } else if ( guess < answer ) {
        cout << "Try higher" << endl;
        guessCount++;
      } else if ( guess > answer ) {
        cout << "Try lower" << endl;
        guessCount++;
      }
  }
  return 0;
}
