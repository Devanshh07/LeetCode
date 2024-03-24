#include<bits/stdc++.h>

using namespace std;

int main(){

   vector<int> v = {1,2,4,8};

   //first approach is -> direct Sort and print last elem!!
   sort(v.begin(),v.end());
   cout<<v[v.size()-1]<<" ";

   //another approach is this =>
   int max = v[0]; //let first element is maximum;

   for(auto i: v){
    if(i>max){
        max=i;
    }
   }
   cout<<max; //now we have max of this arary ;



    return 0;
}