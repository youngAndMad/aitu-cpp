

#include<iostream>
using namespace std;
int main() {
    int a[50][50];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)a[i][j] = j + 1;
            else if (j == 0)a[i][j] = i + 1;
            else if (j == n - 1)a[i][j] = i + 1 + j;
            else if (i == n - 1)a[i][j] = i + 1 + j;
            cout << a[i][j];
        }
        cout << endl;
    }
}

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int massiv[10][10];
    int k = 0;
    for (int i = 0; i < n; i++) {
        k++;
        for (int j = 0; j <= n; j++) {
            if (j >= n-k)massiv[i][j] = k;
            else massiv[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << massiv[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mas[117][117];
    for (int i = 0, val = 1; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << val;
        cout << endl;
        if (i >= n / 2)val--;
        else val++;
    }

    return 0;
}

#include <iostream>
#include<string>
using namespace std;

string counter(string x) {
    string ans;
    int sz = x.length();
    for (int i = 0; i <= sz - 1; i++) {
        if (!((x[i] >= 'a' && x[i] <= 'z')  (x[i] >= 'A' && x[i] <= 'Z'))) {
            ans += x[i];
        }
        else if (x[i] == ' ')
            ans += x[i];
    }
    return ans;
}

int main() {
    string x;
    getline(cin, x);
    string ans = counter(x);
    cout << ans;
}



#include <iostream>
using namespace std;
double a[100000];
double solve(double n) {
    return n / 2;
}
int main() {
    int n;
    cin >> n;
    int i = 0;
    double a[100];
    
    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;
void auystiru(char*, char*);
int main()
{
    char* EngizuString = new char[1000];
    cin.getline(EngizuString, 1000);
    char* newEngizuString = new char[strlen(EngizuString)];
    auystiru(EngizuString, newEngizuString);
    cout << newEngizuString << endl;
}
void auystiru(char* source, char* dest)
{
    int length = strlen(source);
    for (int i = 0; i < length; i++)
    {
        if (!(source[i] >= 'a' && source[i] <= 'z'  source[i] >= 'A' && source[i] <= 'Z'))
            dest[i] = '@';
        else 
            dest[i] = source[i];
    }

    dest[length] = '\0';
}


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000][1000];
    for (int i = 0, m = n / 2; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m + 1 << ' ';
        }
        cout << endl;
        if (i <= m % 2) m--;
        else m++;
    }
    return 0;
}


#include<iostream>
using namespace std;
int main() {
  int a[100][100];
  int n, m;
  int min = 1111111111111;
  cin >> n >> m;
  int x, y,z;
  for (int i = 0; i < n; i++) 
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
      if (a[i][j] < min)
      {
        min = a[i][j];
        x = i;
        y = j;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++) {
      a[x][y] = a[x][y];
      a[x][j] = 1;
      a[i][j] = 0;
      cout << a[i][j];
    }
    cout << endl;
  }
}


#include<iostream>
using namespace std;
void res(int a[100][100],int n )
{
    int min = 111111;
  int x, y;
  for (int i = 0; i < n; i++) 
  {
    for (int j = 0; j < n; j++)
    {
      if (a[i][j] < min)
      {
        min = a[i][j];
        x = i;
        y = j;
      }
    }
  }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
        {
            if(j==y && i==x)
      {
          a[i][j]==a[i][j];
      }
      else if(i==x && j!=y)
      {
          a[i][j] = 1;
      }
      else a[i][j]=0;
      cout << a[i][j]<<" ";
    }
    cout << endl;
  }
}

int main(){
    int n;
    cin>>n;
    
    int arr[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    res(arr,n);
}