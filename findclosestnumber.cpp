#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
// i've started practicing leetcode dsa questions
// i will later figure out how to work the function without inputting its size
// algorithm for finding closest number to 0
int findclosestNumber(vector<int> set){
  int closest = set[0];
  int n = set.size();
  for(int i = 0;i < n;i++){
    if(abs(set[i]) < abs(closest) || nums[i] == abs(closest){
      closest = set[i];  
    }
  }
  return closest;
} 

int main(){
  vector <int> set = {-1,-2,3,4,-6};
  cout << findclosestNumber(set);

}
