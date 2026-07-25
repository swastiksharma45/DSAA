/*To Run the code Press ctrl+shift+B */
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void print(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++){
             cout <<" ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++){
            cout <<"*";
        }
        cout <<endl;
    }
}
void print1(int n){
    for(int i=0;i<n;i++)
    {
    for(int j=i;j<n-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=n*i-2*i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin >> n;
    print(n);
    print1(n);
}

