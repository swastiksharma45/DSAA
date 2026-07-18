/*To Run the code Press ctrl+shift+B */
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
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
