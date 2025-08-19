// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).

 

// Example 1:

// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.
// Example 2:

// Input: nums1 = [1,2], nums2 = [3,4]
// Output: 2.50000
// Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 

// Constraints:

// nums1.length == m
// nums2.length == n
// 0 <= m <= 1000
// 0 <= n <= 1000
// 1 <= m + n <= 2000
// -106 <= nums1[i], nums2[i] <= 106

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        double answer=0;
        int n1;
        for(int x: nums1){
            result.push_back(x);
        }
        for(int x:nums2){
            result.push_back(x);
        }
        sort(result.begin(),result.end());
        if(result.size()%2==0){
           n1=result.size()/2;
           answer=(result[n1]+result[n1-1])/2.0;
        }
        else{
            n1=(result.size()-1)/2.0;
            answer=result[n1];
        }
        return answer;

        
    }

int main(){
    int k=0;
    int l=0;
    vector<int>arr1;
    vector<int>arr2;
    int h1=0;
    int h2=0;
    cout<<"Enter the number of elements in array 1 and 2:";
    cin>>k>>l;
    cout<<"Enter the elements of array 1:";
    for(int i=0;i<k;i++){
        cin>>h1;
        arr1.push_back(h1);
    }
    cout<<"Enter the elements of array 2:";
    for(int j=0;j<l;j++){
        cin>>h2;
        arr2.push_back(h2);
    }
    double result=findMedianSortedArrays(arr1,arr2);
    cout<<"The median is: "<<result;
}

    