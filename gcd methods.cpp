//method-1 gcd

#include<iostream>
using namespace std;
int main(){
    int n1,n2,gcd;
    cin>>n1>>n2;
    for(int i = 1;i<=n1||i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
    cout<<gcd;
}

//method-2 repeated substraction euclidan substraction

#include<iostream>
using namespace std;
int main(){
    int n1,n2,gcd=1;
    cin>>n1>>n2;
    while(n1!=n2){
        if(n1>n2){
            n1=n1-n2;
        }else{
            n2=n2-n1;
        }
    }
    printf("The GCD: %d", n1, n2, gcd);
}

//method-3 recursive function

#include<iostream>
using namespace std;
int gcd(int n1,int n2){
    if(n1==0){
        return n2;
    }
    
    if(n2==0){
        return n1;
    }
    
    if((n1 == 0) && (n2 == 0)){
        return 0;
    }
    
    if(n1>n2){
        return gcd(n1-n2,n2);
    }
    
    return gcd(n1,n2-n1);
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int gcdin = gcd(n1,n2);
    cout<<gcdin;
}

//method-4 gcd using modulo operator

#include<iostream>
using namespace std;
int calcGCD(int a,int b){
    return b == 0 ? a : calcGCD(b, a % b);   
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int gcd = calcGCD(n1, n2);
    cout<<gcd;
    return 0;
}
