/*

Which starting number, under one million, produces the longest chain?


*/

#include <iostream>
#include <cmath>
#include <unordered_map>

using namespace std;


long even(long n){
    return n/2;
}

long odd(long n){
    return (3*n)+1;
}

int main(){
    long start = 1;
    int threshold = 1000000;
    int longest = 0;
    int longest_num = 0;
    unordered_map < int , int > hash;
    int counter = 1;
    for(long i = 1 ; i <=threshold ; i++){
        start = i;
        counter = 1;
        while(start!=1){
            if(start % 2 == 0)
                start = even(start);
            else
                start = odd(start);
            if(hash.find(start) != hash.end()){
                counter+=hash[start];
                break;
            }
            else
                counter++;
        }
        hash[i]=counter;
        if(longest < counter){
            longest = counter;
            longest_num = i;
        }
    }
    cout << longest_num << endl;
<<<<<<< .merge_file_22m5Xb
}
=======
}
>>>>>>> .merge_file_gtbRKQ
