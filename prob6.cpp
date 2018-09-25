/*
Find the difference between the sum of the squares
of the first one hundred natural numbers and the square of the sum.

*/

#include <iostream>
#include <cmath>

using namespace std;


int main(){
	int sum_squares = 0 ;
    int square_sum = 0;
    int threshold = 100;
    for(int i = 1 ; i <= threshold ; i++){
        sum_squares += i*i;
        square_sum += i;
    }
    square_sum *= square_sum;
    cout << square_sum - sum_squares << endl;
}