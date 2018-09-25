/*

Which starting number, under one million, produces the longest chain?


*/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


int even(int n){
    return n/2;
}

int odd(int n){
    return (3*n)+1;
}

int main(){
	int start = 1;
    int threshold = 1000000;
    int longest = 0;
    int longest_num = 0;
    vector <int> hash (threshold,-1);
    for(int i = 5000 ; i < threshold ; i++){
        start = i;
        int counter = 0;
        while(start!=1){
            if(start % 2 == 0)
                start = even(start);
            else
                start = odd(start);
            counter++;
        }
        if(longest < counter){
            longest = counter;
            longest_num = i;
        }
    }
    cout << longest << endl;
    cout << longest_num <<endl;
}