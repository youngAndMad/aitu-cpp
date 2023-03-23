-----nomer--------------
#include <iostream>
#include<cstring>
using namespace std;

struct adam {
	int ID;
	char* name ;
	char* phone;
};

void printCorrect(char* res) {
	cout<<"(";
	for(int i=0;i<4;i++)
	{
	    cout<<res[i];
	}
	cout<<")";
	for(int i =4;i<strlen(res);i++)
	{
	    cout<<res[i];
	}
}

int main() {

	int n;
	adam* s = new adam[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
	    s[i].name = new char [100];
	    s[i].phone = new char [100];
		cin >> s[i].ID >> s[i].name >> s[i].phone;
	}
	
	for (int i = 0; i < n; i++) {
		cout << s[i].ID << ' ' << s[i].name << ' ';
		printCorrect(s[i].phone);
	}

	for (int i = 0; i < n; i++) {
		delete[] s[i].name;
		delete[] s[i].phone;
	}
	delete[] s;
}
-------correct password---------
#include<iostream>
#include<cstring>
using namespace std;
struct user{
    int id;
    char *name =  new char[100] ;
    char *email = new char [100];
    char *password = new char [100];
};
bool compare(char *s)
{
    int r = strlen (s);
    if(r<8)return false;
    int i=0,n=0,k=0;
    for(int a = 0;a<strlen (s);a++){
        if(isdigit(s[i]))i++;
        if(isupper(s[i]))n++;
        if(islower(s[i]))k++;
    }
    if(i>0 and n>0 and k>0 and r>7 )return true;
}
int main
()
{
    arr* s = new arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i].id>>s[i].name>>s[i].email>>s[i].password;
    }
    for(int i=0;i<n;i++)
    {
        if(compare(s[i].password))
        {
            cout<<s[i].id<<" "<<s[i].name<<" "<<s[i].email<<" "<<s[i].password<<"\n";
        }
    }
    for (int i = 0; i < n; i++) {
    delete[] s[i].name;
    delete[] s[i].email;
    delete[] s[i].password;
   }
  delete[] s;
  return 0;
}
------email with dut---------
#include<iostream>
#include<cstring>
using namespace std;
struct CHEL {
  int id;
  char* name;
  char* lastname;
  char* email;
};
int   dut(char* s)
{
  int k;
  for (int i = strlen(s) - 1; i >= 0; i--)
  {
    if (s[i] == '.')
    {
      k = i;
    }
  }
  return k;
}
void replace(char* s)
{
  cout << s[0];
  int p = dut(s);
  for (int i = p; i < strlen(s); i++)
  {
    cout << s[i];
  }
}
int main(){
  int n;
  cin >> n;
  CHEL* s = new CHEL[1000];
  for (int i = 0; i < n; i++) 
  {
    s[i].name = new char[1000];
    s[i].lastname = new char[1000];
    s[i].email = new char[1000];
    cin >> s[i].id >> s[i].name >> s[i].lastname >> s[i].email;
  }
  for (int i = 0; i < n; i++)
  {
    cout << s[i].id << " " << s[i].name << " " << s[i].lastname<<" ";
    replace(s[i].email);
    cout << "\n";
  }
  
      for (int i = 0; i < n; i++) {
    delete[] s[i].name;
    delete[] s[i].lastname;
    delete[] s[i].email;
  }
  delete[] s;

}
----telephone nomer-----
#include <iostream>
using namespace std;

struct adam {
	int ID;
	char* name ;
	char* phone;
};

void printCorrect(char* res) {
	cout << "+7-" << res[1] << res[2] << res[3] << '-';
	for (int i = 4; i < 11; i++)
		cout << res[i];
	cout << endl;
}

int main() {

	int n;
	adam* s = new adam[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
	    s[i].name = new char [100];
	    s[i].phone = new char [100];
		cin >> s[i].ID >> s[i].name >> s[i].phone;
	}
	
	for (int i = 0; i < n; i++) {
		cout << s[i].ID << ' ' << s[i].name << ' ';
		printCorrect(s[i].phone);
	}

	for (int i = 0; i < n; i++) {
		delete[] s[i].name;
		delete[] s[i].phone;
	}
	delete[] s;
}
-----sort ID------
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct Bala
{
    int id;
    char* name;
    char* lastname;
};
bool compare(Bala a, Bala b)
{
    if (a.id != b.id)return a.id > b.id;
}
int main()
{
    int n;
    cin >> n;
    Bala* s = new Bala[n];
    for (int i = 0; i < n; i++)
    {
        s[i].lastname = new char[n];
        s[i].name = new char[100];
        cin >> s[i].id >> s[i].name >> s[i].lastname;
    }
    sort(s, s + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << s[i].id << " " << s[i].name << " " << s[i].lastname << "\n";
    }
    	for (int i = 0; i < n; i++) {
		delete[] s[i].name;
		delete[] s[i].lastname;
	}
	delete[] s;
}
----sort by points------
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct Bala
{
    int id;
    char* name;
    char point;
};
int  convert(char a)
{
    int n{};
    if (a == 'A')n = 100; 
    if (a == 'B')n = 80;
    if (a == 'C')n = 70;
    if (a == 'D')n = 50;
    if (a == 'F')n = 0;
    return n;
}
bool compare(Bala a, Bala b)
{
    if (a.point != b.point)return a.point < b.point;
}
int main()
{
    int n;
    cin >> n;
    Bala* s = new Bala[100];
    for (int i = 0; i < n; i++)
    {
        s[i].name = new char[100];
        cin >> s[i].id >> s[i].name >> s[i].point;
        convert(s[i].point);
    }
    sort(s, s + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << s[i].id << " " << s[i].name << " " << convert(s[i].point)<<"\n";
    }
  	for (int i = 0; i < n; i++) {
		delete[] s[i].name;
	}
	delete[] s;
}
-----sort tovar -------
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct tovar{
  int id;
  double price;
  bool ava;
};
bool compare(tovar a,tovar b)
{
    if(a.price!=b.price)return a.price>b.price;
    else return a.id>b.id;
}
int main(){
    int n;
    cin>>n;
    tovar *s = new tovar [100];
    for(int i=0;i<n;i++)
    {
        cin>>s[i].id>>s[i].price>>s[i].ava;
    }
    sort(s,s+n,compare);
    for(int i=0;i<n;i++)
    {
        if(s[i].ava==1)cout<<s[i].id<<" "<<s[i].price<<" "<<s[i].ava<<"\n";
    }
    delete []s;
}
-----correct email ----
#include<iostream>
#include<cstring>
using namespace std;
struct student
{
    string id;
    char* name;
    char* email;
};
bool EMAIL(char* email)
{
    if (email[1] == '@')return true;
    else return false;
}
bool count(char* email)
{
    int c = 0;
    for (int i = 0; i < strlen(email); i++)
    {
        if (email[i] == '@')c++;
    }
    if (c == 1)return true;
    else return false;
}
int main() {
    int  n;
    cin >> n;
    student* s = new student[100];
    for (int i = 0; i < n; i++)
    {
        s[i].name = new char[100];
        s[i].email = new char[100];
        cin >> s[i].id >> s[i].name >> s[i].email;
    }
    for (int i = 0; i < n; i++)
    {
        if (EMAIL(s[i].email) == true)
        {
            if(count(s[i].email)==true)cout << s[i].id << "_" << s[i].name << "_" << s[i].email << "\n";
        }
    }
    	for (int i = 0; i < n; i++) {
		delete[] s[i].name;
		delete[] s[i].email;
	}
	delete[] s;
}
------samsung ----
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct tovar{
  int id;
  char *name;
  double price;
  bool ava;
};
bool compare(tovar a,tovar b)
{
    if(strcmp(a.name,b.name)==0)return a.price<b.price;
}
void toUpperCase(char* s)
{ 
   for(int i=0;i<strlen(s);i++)
   {
       s[i]=toupper(s[i]);
   }
} 
int main(){
    int n;
    cin>>n;
    tovar *s = new tovar [100];
    for(int i=0;i<n;i++)
    {
        s[i].name=new char[100];
        cin>>s[i].id>>s[i].name>>s[i].price>>s[i].ava;
    }
    sort(s,s+n,compare);
   char *k=new char [100];
   cin>>k;
   for(int i=n-1;i>=0;i--)
   {
       if(strcmp(k,s[i].name)==0)
       {
          toUpperCase(s[i].name);
          cout<<s[i].id<<"-"<<s[i].name<<"-"<<s[i].price<<"-"<<s[i].ava;
          break;
       }
   }
   	for (int i = 0; i < n; i++) {
		delete[] s[i].name;
	}
	delete[] s;
}
------book-------
#include<iostream>
#include<cstring>
using namespace std;
struct kitap
{
    int id;
    char *name ;
    char *avtor;
};
void UPCASE(char *s)
{
    for(int i=0;i<strlen(s);i++)
    {
        s[i]=toupper(s[i]);
    }
}
bool check(char *a,char *b)
{
    if(strcmp(a,b)==0)return 1;
    else return 0;
}
int main()
{
    int n;
    cin>>n;
    kitap *q = new kitap[100];
    for(int i=0;i<n;i++)
    {
        q[i].name = new char [100];
        q[i].avtor = new char [100];
        cin>>q[i].id>>q[i].name>>q[i].avtor;
        UPCASE (q[i].name);
        UPCASE (q[i].avtor);
    }
    char *key = new char [100];
    cin>>key;
    int c=0;
    UPCASE(key);
    for(int i=0;i<n;i++)
    {
        if(check(key,q[i].name)==true)
        {
            c++;
            cout<<q[i].id<<"-"<<q[i].name<<"-"<<q[i].avtor<<"\n";
        }
         if(check(key,q[i].avtor)==true)
         {
             c++;
             cout<<q[i].id<<"-"<<q[i].name<<"-"<<q[i].avtor<<"\n";
         }
    }
    if(c==0)cout<<"NOT FOUND";
}

    

----correct email-----
#include<iostream>
#include<cstring>
using namespace std;
struct ADAM {
    string name;
};
bool FL(string s) {
    if (isupper(s[0]))return true;
    else return false;
}
bool AL(string s){
    int counter = 0;
    for (int i = 1; i <s.size(); i++)
    {
        if (islower(s[i]))counter++;

    }
    if (counter == s.size() - 1)return 1;
    else return false;
}
int main() {
    ADAM* s = new ADAM[100];
    for (int i = 0; i < 1; i++)
    {
        cin >> s[i].name;
        if (FL(s[i].name) == true) {
            if (AL(s[i].name) == true) {
                cout << s[i].name << "  is correct";
            }
            else cout << s[i].name << "   is incorrect";
        }
        else cout << s[i].name << "   is incorrect";
    }
}