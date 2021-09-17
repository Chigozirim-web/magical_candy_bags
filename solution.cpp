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
    int x = q.top();
    q.pop();
    count+=x;
    x/=2;
    
    if(x != 0)
        q.push(x);
    
    k--;
  }
  
  return count;
}
