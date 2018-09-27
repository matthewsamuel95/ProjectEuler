/*

How many such routes are there through a 20×20 grid?

*/

#include <iostream>
#include <vector>

using namespace std;

long routes (int grid_size){
   vector < vector<long> > table(grid_size+1, vector<long>(grid_size+1));
   for(int i = 0 ; i <= grid_size ; i++){
        table[0][i] = 1;
        table[i][0] = 1;
   }
   for(int i = 1 ; i <= grid_size ; i++){
        for(int j = 1 ; j <= grid_size ; j++){
            table[i][j] = table[i-1][j] + table[i][j-1];
        }
   }
   return table[grid_size][grid_size];
}

int main(){
   int grid_size = 20;
   cout << routes(grid_size) << endl;
}