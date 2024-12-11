#include <bits/stdc++.h>
using namespace std;
int makeArrayUnique(vector<int>&arr, int n)
{
   
    map<int, int> p;
    set<int> used;
 
    for (int x = 0; x < n; x++) {
        int i = arr[x];
        if (p[i] != 0)
           p[i]++;
        else {
            p[i] = 1;
            used.insert(i);
        }
    }
 
    int maxUsed = 0; 
    int ans = 0;
 
    for (auto entry : p) {
 
        int value = entry.first;
        int freq = entry.second;
 
        if (freq <= 1) 
            continue;
 
        int duplicates
            = freq
              - 1; 
       
        int cur = max(value + 1, maxUsed);
        while (duplicates > 0) {
            if (used.find(cur) == used.end()) {
                ans += cur - value;
                used.insert(cur);
                duplicates--;
                maxUsed = cur;
            }
            cur++;
        }
    }
 
    
    return ans;
}
int main()
{   vector<int> A;
   
    A.push_back(7);
    A.push_back(1);
    A.push_back(1);
    A.push_back(1);
    //A.push_back(2);
   // A.push_back(2);
    //A.push_back(2);
    //A.push_back(6);
    int n = 4;
    cout << makeArrayUnique(A, n);
}