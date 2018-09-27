/*

Find the maximum total from top to bottom of the triangle below:

*/

#include <iostream>
#include <vector>

using namespace std;

int max_total (int triangle_size){
   vector < vector<int> > triangle(triangle_size+1, vector<int>(triangle_size+1,0));
   int start = 1;
   //pipe input from text file [usage: ' ./a.out < prob18.txt ']
   for(int i = 0 ; i < triangle_size ; i++){
      for(int j = 0 ; j < start ; j++){
        cin >> triangle[i][j];
      }
      start++;
   }   
   for (int i = triangle_size-2 ; i >= 0 ; i--){
      for(int j = 0 ; j <= i ; j++){
        triangle[i][j] += max(triangle[i+1][j] , triangle[i+1][j+1]);
      }
   }
   return triangle[0][0];
}



int main(){
   int triangle_size = 15;
   cout << max_total(triangle_size) << endl;
}