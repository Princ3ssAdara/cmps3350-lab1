// CMPS 3350 - lab 1
// Prints each command-line argument passed into the program, one per line
#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char ** argv)
{
    for(int i = 1; i < argc; i++)
    {
        printf("arg %d: %s\n", i, argv[i]);
    }

    cout << "testing... 1, 2, 3...." << endl;
    return 0;
}

