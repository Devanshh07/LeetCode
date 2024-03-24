#include<bits/stdc++.h>
using namespace std;


int main(){

    //    Given two integer arrays nums1 and nums2, return an array of their 
    //    intersection
    //    . Each element in the result must be unique and you may return the result in any order.
vector<int> nums1 = {9,4,2,9,4};
vector<int> nums2 = {9,4,5};

//initialize unoderd set that store unique element of nums1;
unordered_set<int> set1(nums1.begin(),nums1.end());

//initialize another set 
unordered_set<int> common;
//  for(auto el : nums2){
//             if(set1.contains(el)) common.insert(el); 
//         }

vector<int> res(common.begin(),common.end());


}