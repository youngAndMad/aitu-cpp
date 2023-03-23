перевести месячную инфляцую на годовую 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float inf; // инфляция в месяц
    cin>>inf;
    float res;
    res = pow(1+inf/100,12)-1;
    cout<<res*100<<"%";
    return 0;
}


