/*
	What is the 10 001st prime number?
*/

#include <iostream>
#include <cmath>
#include <vector>

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
	long prime = 2;
	int threshold = 10001;
	while(true){
		if(isPrime(prime))
		{
			threshold--;
			if(!threshold)
				break;
		}
		prime++;
	}
	cout<<prime<<endl;
}