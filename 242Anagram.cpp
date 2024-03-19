#include<bits/stdc++.h>
using namespace std;

int main(){

//Question - you have two string T and S return true is T is the
//Anagram of S else return false [anagram = nagaram (no element and element are same only sequence is change!)]

//Frist approach 

string s = "anagram";
string t = "nagaram";

//now sort both of them 
sort(s.begin(),s.end());
sort(t.begin(),t.end());

if(s!=t) return false;
else return true;


// Another approach is Create Freq table for both of them and check
//weather it is same frequency for all element is same or not 

/* Another way is first intialize table to 0 of length 256 becouse the ascii value range
first string -> increament
second string -> decreament;
after that -> list become 0 if true else not!;
*/

 int freq[256] = {0};
 for(int i = 0;i<s.size();i++){
    freq[s[i]]++;//autoCast take ascii
 }
 for(int i=0;i<t.size();i++){
    freq[t[i]]--;
 }
 for(int i=0;i<256;i++){
    if(freq[i]!=0) return false;
    else return true;
 }

    return 0;
}