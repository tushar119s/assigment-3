#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int k;
    int count = 0;
    cin >> n >> k;
    vector<int> a(n);
    for(int x = 0;x < n;x++){
       cin >> a[x];
    }
    
    for(int i =0 ; i < n -1 ; i++){
        for(int j=i+1 ; j < n ; j++){
            if( (a[i]+a[j])%k ==0){
                count++;
            }
        }
    }
    
    cout << count;
    return 0;
}