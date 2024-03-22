#include<bits/stdc++.h>

using namespace std;
int strStr(string haystack, string needle) {
          if (haystack.length()<needle.length()){
            return -1;
        }
        for (int i = 0; i <= haystack.length() - needle.length(); ++i) {
            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }
        return -1;
    }

int main(){
//Given two strings needle and haystack,
// return the index of the first occurrence of needle in haystack, or -1
// if needle is not part of haystack.
//Input: haystack = "sadbutsad", needle = "sad"
//Output: 0
string haystack = "saddevsad";
string needle = "sad";
 cout<<strStr(haystack,needle)<< " ";



    return 0;
}