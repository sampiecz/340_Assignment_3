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
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::stoi;
using std::setw;
using std::set;
using std::string;
using std::sqrt;

/***************************************************************
 Name: sieve
 
 Use: Applies logic of Sieve of Eratoshenes algorithm. 

 Parameters: A constant reference to a set s, a constant integer
 lower, and a constant integer upper.

 Returns: None. 

 ***************************************************************/
void sieve( set<int>& s, const int lower, const int upper)
{
    set<int>::iterator it;

    int m = 2;

    for (it = s.begin(); it != s.end(); it++)
    {
        if( *it == 1 )
        {
            continue;
        }
        else if( *it % m == 0 && m <= sqrt(upper))
        {
            /*cout << "#########" << endl;
            cout << "Not prime" << endl;
            cout << *it << endl;
            cout << "#########" << endl; */
            s.erase(it);
        }
        else
        {
            /* cout << "#########" << endl;
            cout << "Prime" << endl;
            cout << *it << endl;
            cout << "#########" << endl; */
        }

        m++;
    } 

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

    cout << "\nThere are " << s.size() << " prime numbers between " << lower << " and " << upper << ": " << endl;

    for (it = s.begin(); it != s.end(); it++)
    {
        int counter = 0;
        cout << setw(ITEM_W) << *it;
        if (counter % NO_ITEMS == 5)
        { 
            cout << endl;
        }

        counter++;
    }

}

/*************************************************************** Name: run_game
 
 Use: Takes input from user, invokes other functions sieve and
 print_primes. This will loop until user says stop.

 Parameters: A reference to a set s. 

 Returns: None. 

 ***************************************************************/
void run_game(set<int>& s) 
{

    bool stopOrStart = true;

    while(stopOrStart)
    {

        // instantiate strings
        string inputStopOrStart;
        int upper;
        int lower;
        
        // get upper value 
        cout << "Please input lower bound and upper bound and hit enter (e.g. 10 100): ";
        cin >> lower;
        cin >> upper;

        // make the set
        for(int i = lower; i <= upper; i++)
        {
            s.insert(i);
        }

        // call sieve function
        sieve(s, lower, upper); 

        // call print function
        print_primes(s, lower, upper);

        cout << "\n\nDo you want to continue or not? Please answer yes or no and hit enter: ";
        cin >> inputStopOrStart;

        if (inputStopOrStart == "yes")
        {
            // continue the loop
            stopOrStart = true;

            // make sure to clear the set
            s.clear();
        }
        else
        {
            // exit out of the loop
            stopOrStart = false;
        }

    };
}

int main() {
    set<int> s;
    run_game(s);
    return 0;
}
