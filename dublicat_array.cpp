/*
1,3,4,2,2  2 repete number
this sole linera search
*/


//----------------   MY APPORCH---------
/*

#include <iostream>
using namespace std;
int main()
{
   my apporch

    liner search use kare jab value  i == j hogi to dublicate mil jayega

    int a[] = {1, 3, 4, 2, 2}; // declare aray

    int n = sizeof(a) / sizeof(a[0]); // humne size nikla


    cout << "n is size" << n << endl; // size ko print kar diya  

    int count = 0;  // count liya kuku jab dublicate value milegee increase kar denge
    int dub_num = 0; // dublicate value store kara denge

    for (int i = 0; i < n; i++)   
    {

        cout << "i run -->" << a[i] << endl;

        for (int j = i + 1; j < n; j++)
        {

            cout << "j value run -->" << a[j] << endl;

            if (a[i] == a[j])
            {
                count++;
                dub_num = a[j];
            }
        }
    }

    if (count > 0)
    {
        cout << dub_num << endl;
    }
}
*/

//---------------------Using sorting----------
/*
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
*/





//--------------------Using frequency array


/*
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
*/


//-------------Linked List cycle method---
/*
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
*/

//STRIVER LINK:-https://takeuforward.org/data-structure/find-the-duplicate-in-an-array-of-n1-integers/