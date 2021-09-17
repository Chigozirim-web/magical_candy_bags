#include <bits/stdc++.h>

using namespace std;


int maxCandies(vector <int> arr, int k) {
  // Write your code here
  priority_queue<int> q;
  int count = 0;
  
  for(int i = 0; i < arr.size(); i++)
    q.push(arr[i]);
  
  while(k > 0)
  {
    //he top element of a priority queue is the max
    int x = q.top();
    q.pop();
    count+=x;
    x/=2; //int division
    
    //if x is now zero, not necessary to add it to queue
    if(x != 0)
        q.push(x);
    
    k--;
  }
  
  return count;
}
