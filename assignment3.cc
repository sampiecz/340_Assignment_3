/***********************************************************
 CSCI 340 - Assignment 3 - Spring 2018
 
 Progammer: Sam Piecz
 Z-ID: Z1732715
 Section: 1
 TA: 
 Date Due: February 12, 2018
 
 Purpose: Implement Sieve of Eratosthenes algorithm. This
 algorithm prints all prime numbers within a range.
 ************************************************************/
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <set>
#include <string>
using std::cin;
using std::cout;
using std::atoi;
using std::setw;

/***************************************************************
 Name: sieve
 
 Use: Applies logic of Sieve of Eratoshenes algorithm. 

 Parameters: A constant reference to a set s, a constant integer
 lower, and a constant integer upper.

 Returns: None. 

 ***************************************************************/
void sieve( set<int>& s, const int lower, const int upper)
{

}

/***************************************************************
 Name: print_primes
 
 Use: This prints elements of a set. 

 Parameters: A reference to a constant set s, a constant integer
 lower, and a constant integer upper.

 Returns: None. 

 ***************************************************************/
void print_primes( const set<int>& s, const int lower, const int upper) 
{

    const int ITEM_W = 4;
    const int NO_ITEMS = 6;
    set<int>::const_iterator it;
    for (it = s.begin(); it != set.end(); it++)
    {
        cout << setw(ITEM_W) << *it;
        if ((it - set.begin()) % NO_ITEMS == 9)
        { 
            cout << endl;
        }
    }


}

/***************************************************************
 Name: run_game
 
 Use: Takes input from user, invokes other functions sieve and
 print_primes. This will loop until user says stop.

 Parameters: A reference to a set s. 

 Returns: None. 

 ***************************************************************/
void run_game(set<int>& s) 
{

    bool stopOrStart = True;

    while(stopOrStart)
    {

        // instantiate strings
        string upperInput, lowerInput;
        int upper, lower;
        
        // get upper value 
        cout << "";
        cin >> upper;
        if (upperInput == "q")
        {
            stopOrStart = False; 
        }
        else
        {
            upper = atoi(upperInput);
        }
        
        // get lower value
        cout << "";
        cin >> lowerInput;
        {
            stopOrStart = False; 
        }
        else
        {
            lower = atoi(lowerInput);
        }

        // call sieve function
        sieve(s, lower, upper); 

        // call print function
        print_primes(s, lower, upper);

    }
}

int main() {
    set<int> s;
    run_game(s);
    return 0;
}
