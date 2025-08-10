#include <bits/stdc++.h>
using namespace std;
 
// int mex(vector<int> &arr)
// {
//   sort(arr.begin(), arr.end());
//   int N = arr.size();
//   int mex = 0;
//   for (int idx = 0; idx < N; idx++)
//   {
//     if (arr[idx] == mex)
//     {
//       mex += 1;
//     }
//   }
//   return mex;
// }
 
// int gcd(int a, int b) {
//     if (a == 0)
//         return b;
//     return gcd(b % a, a);
// }
 
// void solve(){
//     int n;
//     cin>>n;
//     vector<int> arr();
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// }
 
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    if(n%2==0){
        for(int i=0;i<=n-2;i++){
            arr[i] = -1;
            i = i+1;
        }
        for(int i=1;i<=n-3;i++){
            arr[i] = 3;
            i = i+1;
        }
        arr[n-1] = 2;
    }else{
        for(int i=0;i<=n-1;i++){
            arr[i] = -1;
            i = i+1;
        }
        for(int i=1;i<=n-2;i++){
            arr[i] = 3;
            i = i+1;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
int main() {
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
