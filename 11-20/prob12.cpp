/*

What is the value of the first triangle number to have over five hundred divisors?

*/

#include <iostream>
#include <cmath>

using namespace std;

long long countDivisors(long long value) 
{ 
    long long result = 0; 
    for (long long i = 1; i <= sqrt(value); i++) { 
        if (value % i == 0) { 
            if (value / i == i) 
                result++; 
            else 
                result += 2; 
        } 
    } 
    return result; 
} 

int main(){
    long long num = 1;
    int iteration = 1;
    while(countDivisors(num)<500){
      iteration++;
      num = iteration * (iteration+1)/2;
    }
    cout << num << endl;
}