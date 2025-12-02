// ------------- FILE HEADER -------------
// Author ✅: Ella Henner
// Assignment ✅: Final Exam
// Date ✅: 12/7/25
// Citations:

// ------------- ZYBOOKS SCORES -------------
// Chapter ✅:
// Participation ✅:
// Challenge ✅:
// Labs ✅:

// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional):

// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅:
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name:

// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅:
// (Optional) Additional tests count:

// ------------- CODE -------------
#include <iostream>

using namespace std;

// funct prototypes
void getInput(int &goal);
int calcTotal();

// main
int main()
{
  double totalMiles = 0;
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
  while(goal > 0) {
  cout << "You rode " << totalMiles << " miles this week." << endl;
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
  cout << "How many miles do you want to ride this week? ";
  cin >> goal;
}

// calcTotal funct
int calcTotal()
{
  double totalMiles = 0;
  double milesToday = 0;
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
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type.

B. OUTPUT
Define the output variables including data types.

C. CALCULATIONS
Describe calculations used by algorithms in step D.
List all formulas.
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts.
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs.
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


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