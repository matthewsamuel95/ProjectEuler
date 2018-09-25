/*

Find the sum of all the primes below two million.

*/

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long n){
    if (n <= 1)  
    	return false; 
    if (n <= 3)  
    	return true;
    if(n % 2 == 0 || n%3 ==0)
    	return false; 
    for (int i = 5 ; i <= sqrt(n) ; i+=6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
    return true; 
}

int main(){
	long value = 2000000;
    long sum = 0;
	for(long i = 1 ; i <= value ; i++)
		if(isPrime(i))
			sum += i;
	cout << sum << endl;
}