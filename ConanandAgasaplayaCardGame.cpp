#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<sstream>
#include<cmath>
#include<set>
using namespace std;
int main(){
    long int n;
    cin>>n;
    long int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    long int i=n-1,j=n-1,ans=0,count=0,flag=0;
    while(arr[j]){
        if(arr[i]==arr[j]){ count++; j--;}
        else{if(count>1)}
    }
    if(ans%2==1 || ans!=n || flag==1)
    cout<<"Conan"<<endl;
    else cout<<"Agasa"<<endl;
    
    return 0;
}