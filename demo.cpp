/*To Run the code Press ctrl+shift+B */
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
    int main(){
        int n;
        cin>>n;
        print(n);
    }
