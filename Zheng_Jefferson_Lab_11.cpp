//Jefferson Zheng
//November 12, 2024
//Lab 11

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    const int ARRAY_SIZE = 50;      //Define the array size
    double alpha[ARRAY_SIZE], beta[100], sum = 0;       //Create 2 arrays and 1 variable
    int hundreds = 0;       //Create a variable

    for(int iter = 0; iter < ARRAY_SIZE; iter++) {      //Iterate through the array
        if (iter < 25)      //If less than 25
            alpha[iter] = pow(iter, 2);     //Stores the square
        else        //Otherwise
            alpha[iter] = 3 * iter;     //Stores the triple
    }
    for(int iter = 0; iter < ARRAY_SIZE; iter++) {      //Iterate through the array
        cout << alpha[iter] << " ";     //Outputs the stored 
        if ((iter + 1) % 10 == 0)       //If there are 10 in a row
            cout << "\n";       //New Line!!!
    }

    srand(time(0));     //Random Seed
    for(int iter = 0; iter < 100; iter++) {     //Iterate through the array
        beta[iter] = (rand() + 1) % 100;       //Random integer 1 through 100
        sum += beta[iter];     //Takes the sum
        if (beta[iter] == 100)     //If value is 100
            hundreds++;     //Store it
    }

    cout << "Average: " << sum/100 << endl;     //Outputs the average
    cout << "Number of 100s: " << hundreds << endl;     //Outputs the number of 100s

    return 0;       //Exits Successfully
}

/*
0 1 4 9 16 25 36 49 64 81
100 121 144 169 196 225 256 289 324 361
400 441 484 529 576 75 78 81 84 87
90 93 96 99 102 105 108 111 114 117
120 123 126 129 132 135 138 141 144 147
Average: 48.63
Number of 100s: 0
*/
