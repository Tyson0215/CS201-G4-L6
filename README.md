# CS201-G4-L6
CSU EB CS201 Fall Semester. Group 4. Lab 6. 
------------------------------------------------------------------
Q1.
Write a program that simulates a simple bank system.
Requirements:
1. Store balances for 5 accounts in an array of doubles.
2. Use functions with prototypes:
- void deposit(double &balance, double amount); (pass by reference)
- void withdraw(double &balance, double amount); (if withdrawal > balance, program
ends with exit(0)).
- double getTotalBalance(const double accounts[], int size); (return value).
3. Add a static local variable inside a function transactionCount() that keeps track of how
many deposits/withdrawals were made.
4. Use a default argument function void displayMessage(string msg="Transaction
complete");
5. Demonstrate global vs local variables: have a global int totalTransactions, and update it
each time a deposit/withdrawal is made.
Hints:
- Arrays are passed to functions by reference automatically.
- Use reference parameters (&) in deposit and withdraw.
- A static variable remembers its value across function calls.
- Global vs local: show how both counters behave differently.
Sample Input/Output
Input:
1. Deposit $100 into account 0
2. Withdraw $50 from account 0
3. Show total balance
Output:
Deposited $100. New balance = 100
Withdrew $50. New balance = 50
Total balance across all accounts = 50
(transactionCount called 2 times)
(totalTransactions = 2)
------------------------------------------------------------------------
Q2.
Write a program that collects and analyzes movie ratings from users.
Requirements:
1. Store ratings from 3 users for 4 movies in a 2D array.
2. Write functions:
- void inputRatings(int ratings[][4], int users);
- double averageMovieRating(const int ratings[][4], int users, int movieIndex);
- void displayRatings(const int ratings[][4], int users);
3. Add an overloaded function void showResult(int rating) and void showResult(double
avg).
4. Use a vector<int> to store the highest rating each user gave.
5. If a user enters a rating outside 1–5, end the program using exit(0).
Hints:
- A 2D array can be declared as int ratings[3][4].
- Loop through one column to get average for a movie.
- Overload showResult() by parameter type (int vs double).
- Use vector push_back() to add highest ratings.
Sample Input/Output
Input:
User 1 ratings: 5 4 3 4
User 2 ratings: 4 5 4 5
User 3 ratings: 3 2 5 4
Output:
Ratings table:
5 4 3 4
4 5 4 5
3 2 5 4
Average rating for Movie 0 = 4.0
Highest ratings per user = [5, 5, 5]
--------------------------------------------------------------------
Q3.
Design a simple shopping cart system using stubs and a driver program.
Requirements:
1. Write a stub function:
double calculateTotal(const vector<double> &prices) {
cout << "[Stub called: calculateTotal()]" << endl;
return 0.0;
}
2. The driver program should:
- Ask the user for the prices of 3 items.
- Store them in a vector.
- Call calculateTotal(prices) (stub).
- Display the result (will be 0.0 for now).
3. Later, the stub can be replaced with real code that sums the prices.
Sample Input/Output
Input:
Enter 3 item prices: 10.5 5.25 7.75
Output:
[Stub called: calculateTotal()]
Total = 0.0