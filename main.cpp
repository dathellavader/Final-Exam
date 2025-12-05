// ------------- FILE HEADER -------------
// Author ✅: Ella Henner
// Assignment ✅: Final Exam
// Date ✅: 12/7/25
// Citations:

// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 1
// Links (Optional):

// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: yes
// B. OUTPUT ✅: yes
// C. CALCULATIONS ✅: yes
// D. LOGIC and ALGORITHMS ✅: yes
//    (Optional) flow chart link or file name:

// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: yes
// (Optional) Additional tests count: 2

// ------------- CODE -------------
#include <iostream>
using namespace std;

// funct prototypes
void getInput(int &goal);
int calcTotal();

// main
int main()
{
  int totalMiles = 0;
  int goal = 0;

  cout << "Welcome to my Miles Tracker program." << endl;

  getInput(goal);
  if (goal <= 0)
  {
    cout << "No miles were tracked this week." << endl;
  }
  else
  {
    totalMiles = calcTotal();
  }
  if (goal > 0) {
  cout << "You flew " << totalMiles << " miles this week." << endl;
  if (totalMiles == goal)
  {
    cout << "Good job! You met your goal!" << endl;
  }
  else if (totalMiles > goal)
  {
    cout << "Great job! You exceeded your goal by " << (totalMiles - goal) << " miles!" << endl;
  }
  else
  {
    cout << "Uh oh! You missed your goal by " << (goal - totalMiles) << " miles!" << endl;
  }
  }
  cout << "See you next week!" << endl;
  return 0;
}

// getInput funct
void getInput(int &goal)
{
  cout << "How many miles do you want to fly this week? ";
  cin >> goal;
}

// calcTotal funct
int calcTotal()
{
  int totalMiles = 0;
  int milesToday = 0;
  string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

  for (int i = 0; i < 7; ++i)
  {
    cout << "How many miles did you ride on " << days[i] << "? ";
    cin >> milesToday;

    if (milesToday >= 0)
    {
      totalMiles += milesToday;
    }
    else
    {
      cout << "Miles must be 0 or greater!" << endl;
      i = i - 1;
    }
  }
  return totalMiles;
}

// ------------- DESIGN -------------
/*
Program Name: Miles Tracker

Program Description:

Design:
A. INPUT
int goal
int milesToday

B. OUTPUT
int totalMiles
// also difference miles

C. CALCULATIONS
totalMiles += milesToday
totalMiles - goal
goal - totalMiles
i = i - 1

D. LOGIC and ALGORITHMS
// funct prototypes
void getInput(int &goal);
int calcTotal();

// main funct
  MESSAGE "Welcome to my Miles Tracker program"

  CALL getInput(goal);
  IF (goal <= 0)
  {
    DISPLAY "No miles were tracked this week."
  }
  ELSE
  {
    totalMiles = calcTotal();
  }
  IF (goal > 0) {
  DISPLAY "You flew " totalMiles " miles this week.""
  IF (totalMiles == goal)
  {
    DISPLAY "Good job! You met your goal!"
  }
  ELSE IF (totalMiles > goal)
  {
    DISLAY "Great job! You exceeded your goal by " // goal calc " miles!"
  }
  ELSE
  {
    DISPLAY "Uh oh! You missed your goal by " // do calc " miles!"
  }
  }
  MESSAGE "See you next week!"
  RETURN 0;
}

// getInput funct
VOID getInput(int &goal)
{
  DISPLAY "How many miles do you want to ride this week? "
  INPUT goal
}

// calcTotal funct
INT calcTotal()
{
  int totalMiles
  int milesToday
  string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}

  FOR (int i = 0; i < 7; ++i)
  {
    DISPLAY "How many miles did you ride on " days[i] "? "
    cin >> milesToday;

    IF (milesToday >= 0)
    {
      // do calc
    }
    ELSE
    {
      DISPLAY "Miles must be 0 or greater!"
      // do calc
    }
  }
  RETURN totalMiles
}


SAMPLE RUNS
Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 50
How many miles did you ride on Sunday? -9
Miles must be 0 or greater!
How many miles did you ride on Sunday? -3
Miles must be 0 or greater!
How many miles did you ride on Sunday? 0
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 0
You rode 50 miles this week.
Good job! You met your goal!
Keep riding!



Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 100
How many miles did you ride on Sunday? 10
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 10
You rode 70 miles this week.
Uh oh! You missed your goal by 30 miles!
Keep riding!



Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 50
How many miles did you ride on Sunday? 10
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 10
You rode 70 miles this week.
Great job! You exceeded your goal by 20 miles!
Keep riding!



Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 0
No miles were tracked this week.
Keep riding!



Welcome to my Miles Tracker program.
How many miles do you want to ride this week? -10
No miles were tracked this week.
Keep riding!

*/