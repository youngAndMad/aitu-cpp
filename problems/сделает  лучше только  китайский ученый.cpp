#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[50][50];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i%2==0 && j%2==0 || i%2!=0 && j%2!=0)
            {
            a[i][j]=(i+j+2)/2;
            }
            else
            {
                a[i][j]=0;
            }
            cout<<a[i][j];
        }
       
        cout<<endl;
    }
}