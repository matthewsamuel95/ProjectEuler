/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long n){
    if (n <= 1)  
    	return false; 
    if (n <= 3)  
    	return true; 
    for (int i = 5 ; i <= sqrt(n) ; i++) 
        if (n % i == 0) 
           return false; 
    return true; 
}

int main(){
	long value = 600851475143;
	int result = 0 ;
	for(long i = 1 ; i <= sqrt(value) ; i++)
		if(isPrime(i) && value % i == 0)
			result=i;
	cout << result << endl;
}