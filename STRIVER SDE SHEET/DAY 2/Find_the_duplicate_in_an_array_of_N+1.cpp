/*

Find the duplicate in an array of N+1 integers
Problem Statement: Given an array of N + 1 size, where each element is between 1 and N. Assuming there is only one duplicate number, your task is to find the duplicate number.

Examples:

Example 1: 

Input: arr=[1,3,4,2,2]

Output: 2

Explanation: Since 2 is the duplicate number the answer will be 2.

Example 2:

Input: [3,1,3,4,2]

Output:3

Explanation: Since 3 is the duplicate number the answer will be 3.



*/



Brute Force Approch


#include<bits/stdc++.h>

using namespace std;
int findDuplicate(vector < int > & arr) {
  int n = arr.size();
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] == arr[i + 1]) {
      return arr[i];
    }
  }
}
int main() {
  vector < int > arr;
  arr = {1,3,4,2,2};
  cout << "The duplicate element is " << findDuplicate(arr) << endl;
}




Using Frequency Array Method 


#include<bits/stdc++.h>

using namespace std;
int findDuplicate(vector < int > & arr) {
  int n = arr.size();
  int freq[n + 1] = {
    0
  };
  for (int i = 0; i < n; i++) {
    if (freq[arr[i]] == 0) {
      freq[arr[i]] += 1;
    } else {
      return arr[i];
    }
  }
  return 0;
}
int main() {
  vector < int > arr;
  arr = {1,3,4,2,3};
  cout << "The duplicate element is " << findDuplicate(arr) << endl;
}



Using Linked List method


#include<bits/stdc++.h>

using namespace std;
int findDuplicate(vector < int > & nums) {
  int slow = nums[0];
  int fast = nums[0];
  do {
    slow = nums[slow];
    fast = nums[nums[fast]];
  } while (slow != fast);
  fast = nums[0];
  while (slow != fast) {
    slow = nums[slow];
    fast = nums[fast];
  }
  return slow;
}
int main() {
  vector < int > arr;
  arr = {1,3,4,2,3};
  cout << "The duplicate element is " << findDuplicate(arr) << endl;
}