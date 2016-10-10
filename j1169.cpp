#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n, i;
    while(cin >> n){
        if(n < 1 || n > 1000){
            return 0;
        }
        int j = 0, k = 0;
        int a[n-1];
        for(i = 0; i < n; i++){
            cin >> a[i];
            if(a[i]%2 == 0){
                j++;
            }
            else{
                k++;
            }
        }
        if(j > k){
            printf("NO\n");
        }
        else
            printf("YES\n");
    }
    return 1;
}
