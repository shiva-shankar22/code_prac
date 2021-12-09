#include<bits/stdc++.h>
using namespace std;

//print all subsets
/*void subsetSum(int ar[],int i,int n,vector<int> &v){
     if(i==n){
         for(auto it:v)
           cout<<it<<" ";
           cout<<endl;



           return ;
     }
      subsetSum(ar,i+1,n,v);
    
    v.push_back(ar[i]);
     subsetSum(ar,i+1,n,v);
    v.pop_back();
   
}
*/

//check for subset Sum
/*bool isSubset(int ar[],int sum,int i,int n){
    if(i==n)
      if(sum==0)
        return true;
      else return false;
    return ( isSubset(ar,sum-ar[i],i+1,n)|| isSubset(ar,sum,i+1,n) ) ;

}
*/
//Minimum coins to make value
int minCoins(int ar[],int money,int n){
    if(money==0)return 0;

    int res=INT_MAX;
  
    for(int i=0;i<n;i++){
       
        if(money<=ar[i]){
          int sub_res=minCoins(ar,money-ar[i],n);
          
           if(sub_res!=INT_MAX && sub_res+1<res)
             res=sub_res+1;

        }

    }
    return res;
}

int main(){

     int ar[]={1,2,5,3};
    vector<int> v;
  //   subsetSum(ar,0,sizeof(ar)/sizeof(ar[0]),v);

  /* if(isSubset(ar,8,0,3))
     cout<<"Exists";
   else cout<<"Dont Exists";
*/

    return 0;
}
