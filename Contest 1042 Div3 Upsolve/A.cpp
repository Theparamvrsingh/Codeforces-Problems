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
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int iteration = 1;
    for(int i=0;i<n;i++){
        if(a[i] > b[i]){
            iteration += a[i] - b[i];
        }
    }
    cout << iteration<<endl;
}
 
// void solve(){
//     int n;
//     cin>>n;
// }
 
int main() {
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
