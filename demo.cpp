/*To Run the code Press ctrl+shift+B */
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
 void print(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        for(int j=1;j<2*(n-i)-1;j++){
            cout<<" ";
        }
        for(int j=i+1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
 
int main() {
    int n;
    cin >> n;
    print(n);
}

