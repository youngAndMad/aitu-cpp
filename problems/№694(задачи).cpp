г)#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    int massiv[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i==j) massiv[i][j]=k*k+k;
           else massiv[i][j]=0;
            
        }
        k++;
    }
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<massiv[i][j]<<" ";
        }
        cout<<endl;
      }
    return 0;
}
в)#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int massiv[n][n];
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)massiv[i][j]=n-k;
            else massiv[i][j]=0;
        }
        k++; 
    }
  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<massiv[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

