/*To Run the code Press ctrl+shift+B */
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
 void print(int n){
        for(int i=0;i<n;i++){
            for(char ch='A';ch<='A'+i;ch++){
                cout<<ch;
            }
            cout<<endl;
        }
}
 
int main() {
    int n;
    cin >> n;
    print(n);
}

