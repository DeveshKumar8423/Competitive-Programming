#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    //for fast input and output
    /*

    7 disable the synchronisation of C++ streams and C streams
    By default, C++ streams are synchronized with C streams to ensure
    that printf and scanf work properly with cout and cin.
    This synchronization can slow down the performance of I/O
    operations because it has to maintain consistency between the
    two libraries.
    When you set this to 0 (or false), it allows C++ streams to operate
    independently of C streams, which can significantly speed up I/O
    operations, especially when you are reading or writing
    large amounts of data.

    8 cin is tied to cout (the standard output stream). This means that
    whenever you read input using cin, C++ automatically flushes the
    output buffer of cout before the input operation. Flushing means
    ensuring that any data still waiting to be written to the output
    is immediately sent to the display.

    By using cin.tie(0), you are telling C++ that you don't want cin
    and cout to be automatically synced anymore. This can improve
    performance in programs that involve a lot of input and output
    because it prevents unnecessary flushing every time you read input.
    */
    


    int n;
    cin>>n;
    cout<<n<<'\n';//use \n instead of endl
    /*
    
    endl is used to flush as well as new line

    \n only performs to new line 

    flush only flushes the output buffer without adding new line

    */

    int m = (1e+9) + 7; //modular arithmatic

    //modlar arithmatic used for very large number
    //we can use long long also

    //code for factorial
    long long x = 1;
    for (int i = 1; i <= n; i++) {
        x = (x*i)%m; 
    }

    cout << x << "\n";

    return 0;
}

