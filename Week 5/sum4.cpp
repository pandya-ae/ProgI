#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;


int threeSum( void );

int fiveSum( void );


int main( int argc, char** argv )
{
    cout << "\n The sum of all the natural numbers below 1000 that are multiples of 3 or 5 = \n" << endl;

    cout << threeSum() + fiveSum() << endl << endl;

    system( "PAUSE" );
}


int threeSum( void )
{
    int sumSoFar = 0;

    for ( int i = 1 ; i < 1000 ; i++ )
    {
        if ( i % 3 == 0 )
                            sumSoFar = sumSoFar + i;
    }

    return sumSoFar;
}


int fiveSum( void )
{
    int sumSoFar = 0;

    for ( int i = 1 ; i < 1000 ; i++ )
    {
        if ( i % 5 == 0 )
                            sumSoFar = sumSoFar + i;
    }

    return sumSoFar;
}

