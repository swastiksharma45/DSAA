/*To Run the code Press ctrl+shift+B */
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void print(int n)
{
    for(int i=-1;i<n;i++){
        for(int j=0;j<=i;j++){
                cout<<" ";
        }
        for(int j=i;j<=n-i;j++){
                cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print(n);
}