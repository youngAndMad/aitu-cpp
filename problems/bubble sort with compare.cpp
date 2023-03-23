#include<iostream>
using namespace std;
bool osy(int a,int b)
{
    return a>b;
    
}
bool kemy(int a,int b)
{
    return a<b;
    
}

void MAIN(int *a,int n,bool (*compare)(int ,int))
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if((*compare)(a[j],a[j+1]))
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
void printer(int *a,int n)
{
    for(int *it=a;it!=a+n;it++)
    {
        cout<<*it<<" "; 
    }
}
int main(){
    int n;
    cin>>n;
    int *a= new int[n];
    for(int *it=a;it!=a+n;it++)
    {
        cin>>*it;
    }
    MAIN(a,n,osy);
    printer(a,n);
}