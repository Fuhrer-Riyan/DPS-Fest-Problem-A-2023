// SOLUTION TO QUESTION NO.C
// Code and Logic by Abdul Riyan 
// SOLUTION IN C++ 
// SLHS TEAM 
// CHRYSALIS (DPS FEST) 2023





#include<bits/stdc++.h>
using namespace std;



bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }

    while (n % 2 == 0) {
        n /= 2;
    }

    if(n==1){
        return true;
    }else{
        return false;
    }
}




int main(){

    int num,ans=0;
    cin>>num;


    while(!isPowerOfTwo(num)){
        if(num%2!=0){
            num--;
            ans++;
            num/=2;
        }else if(num%2==0){
            num/=2;
        }
    }

    ans++;

    cout<<ans;


    return 0;


}