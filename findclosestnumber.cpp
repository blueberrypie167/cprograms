#include <iostream>
#include <cmath>
using namespace std;
// i've started practicing leetcode dsa questions
// i will later figure out how to work the function without inputting its size
// algorithm for finding closest number to 0
int findclosestNumber(int set[], int n){
  int closest = set[0];
  for(int i = 0;i < n;i++){
    if(abs(set[i]) < abs(closest)){
      closest = set[i];  
    }
  }
  return closest;
} 

int main(){
  int set[5] = {-1,-2,3,4,-6};
  int n = sizeof(set) / sizeof(set[0]);
  cout << findclosestNumber(set, n);

}
