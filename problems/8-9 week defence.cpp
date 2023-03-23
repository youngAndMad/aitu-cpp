----first letter is lower-------
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[2555];
    cin.getline(s,2555);
    char *res = strtok(s," ");
    while(res!=NULL)
    {
        if(islower(res[i]))
        {
            cout<<res<<" ";
        }
         res = strtok(NULL," ");
    }
    
}

----first letter is capital-----
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[2555];
    cin.getline(s,2555);
    char *res = strtok(s," ");
    int i=0;
    while(res!=NULL)
    {
        if(isupper(res[i]))
        {
            cout<<res<<" ";
        }
         res = strtok(NULL," ");
    }
    
}
------longest word--------
#include<iostream>
#include<cstring>
using namespace std;
int  RES(char *res)
{
    return strlen(res);
}
int main()
{
    char *s= new char [1000];
    cin.getline(s,1000);
    int max = -1;
    char *res = strtok(s," ");
    char  output[1000];
    while(res!=NULL)
    {
        if(RES(res)>=max)
        {
            max= strlen(res);
     for(int i=0;i<strlen(res);i++)
     {
         output[i] = res[i];
     }
        res = strtok(NULL," ");
        
    }
    }
    cout<<output;
}

------shortest word----------
#include<iostream>
#include<cstring>
using namespace std;
int  RES(char *res)
{
    return strlen(res);
}
int main()
{
    char *s= new char [1000];
    cin.getline(s,1000);
    int min=1000;
    char *res = strtok(s," ");
    char  output[1000];
    while(res!=NULL)
    {
        if(RES(res)=<min)
        {
            min= strlen(res);
     for(int i=0;i<strlen(res);i++)
     {
         output[i] = res[i];
     }
        res = strtok(NULL," ");
        
    }
    }
    cout<<output;
}

------replace words----------
#include<iostream>
#include<cstring>
using namespace std;
void replace(char* source, char* key, char* text, char* dest) // a and *
{
   char *res = strtok(source," ");
    while(res!=NULL)
    {
      if(strcmp(res,key)==0)
      {
          strcat(dest, text);
          strcat(dest, " ");
      }
      else 
      {
          strcat(dest, res);
          strcat(dest, " ");
      }
     res = strtok(NULL," ");
    }
}
int main()
{
    char a[1001],d[1001],s[1001],t[1001];
    cin.getline(a,1000);
    cin >> s >> t;
    replace(a,s,t,d);
    cout << d+2;
}

---------change words to-->"*" to "A"----------
#include<iostream>
#include<cstring>
using namespace std;
bool check(char *k)
{
    for(int i=0;i<strlen(k);i++)
    {
        if(k[i]=='A')
        return true ;
    }
    return false;
}

int main(){
   char *str=new char[1000];
   cin.getline(str,1000);
   char *k=strtok(str," ");
   while(k!=NULL)
   {
    if( check(k)==true)
    {
        cout<<"*"<<" ";
    }
    else cout<<k<<" ";
       k=strtok(NULL," ");
   }
}

-------only lowercase----------
#include<iostream>
#include<cstring>
using namespace std;
bool lowCase(char *res)
{
    int counter = 0;
    for(int i=0;i<strlen(res);i++)
    {
        if(res[i]>='A' and res[i]<='Z' )
        {
          counter++;
	if(counter==strlen(res)-1)  
          return false;
        }
    }
    return true;
}
int main()
{
    char s[1000]; 
    cin.getline(s,1000);
    char *res = strtok(s," ");
    while(res!=NULL)
    {
        if(lowCase(res)==true)
        {
            cout<<res<<" ";
        }
        res = strtok(NULL," ");
    }
}

------only uppercase------
#include<iostream>
#include<cstring>
using namespace std;
bool lowCase(char *res)
{
    int counter = 0 ;
    for(int i=0;i<strlen(res);i++)
    {
        if(res[i]>='A' and res[i]<='Z' )
        {
            counter++;
            if(counter == strlen(res)-1)return true;
        }
    }
    return false;
}
int main()
{
    char s[1000]; 
    cin.getline(s,1000);
    char *res = strtok(s," ");
    while(res!=NULL)
    {
        if(lowCase(res)==true)
        {
            cout<<res<<" ";
        }
        res = strtok(NULL," ");
    }
}------the last word-------
#include<iostream>
#include<cstring>
using namespace std;
int  mostRecent(char *s)
{
    int k ;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        k=i;
    }
    return k;
}
void print (char *s){
    int k = mostRecent(s);
    int n = strlen(s);
    for(int i=k;i<n;i++)
    {
       if(isalpha(s[i])){
       cout<<s[i];
       }
}
}
int main(){
    char *s=new char [1000];
    cin.getline(s,1000);
    print(s);
    delete [] s;
}
----first word------
#include<iostream>
#include<cstring>
using namespace std;
string firstWord(char *s){
     string k  = strtok(s," ");
     return k;
}
int main(){
    char *s= new char[100];
    cin.getline(s,100);
    cout<<firstWord(s);
}
----THE LAST LETTER with OUR given character-----
#include<iostream>
#include<cstring>
using namespace std;
bool check(char *res)
{
    if(res[strlen(res)-1]=='A')return true;///вместо А можно написать желаемый обьект
    return false;
}
int main()
{
    char s[2555];
    cin.getline(s,2555);
    char *res = strtok(s," ");
    while(res!=NULL)
    {
        if(check(res)==true)
        {
            cout<<res<<" ";
        }
         res = strtok(NULL," ");
    }
    
}
----THE FIRST LETTER with OUR given character-----
#include<iostream>
#include<cstring>
using namespace std;
bool check(char *res)
{
    if(res[0]=='A')return true;///вместо А можно написать желаемый обьект
    return false;
}
int main()
{
    char s[2555];
    cin.getline(s,2555);
    char *res = strtok(s," ");
    int i=0;
    while(res!=NULL)
    {
        if(check(res)==true)
        {
            cout<<res<<" ";
        }
         res = strtok(NULL," ");
    }
    
}
---------string without letters---------
#include <iostream>
#include <cstring>
#include<string>
using namespace std;
void auystiru(char* source, char* dest)
{
    int length = strlen(source);
    for (int i = 0; i < length; i++)
    {
        if ((source[i] >= 'a' && source[i] <= 'z' || source[i] >= 'A' && source[i] <= 'Z'))
            dest[i] = ' ';
        else
            dest[i] = source[i];
    }
}
void replace(string text, char* dest) {
    for (int i = 0; i < text.length(); i++)

    {
        if (text[i] == ' ' && text[i + 1] == ' ')
        {
            text.erase(i, 1);
            i--;
        }
    }
    if (text[0] == ' ')
    {
        text.erase(0, 1);
    }
    if (text[text.length() - 1] == ' ')
    {
        text.erase(text.length() - 1, 1);
    }
    cout << text;
}
int main()
{
    char* EngizuString = new char[1000];
    cin.getline(EngizuString, 1000);
    char* newEngizuString = new char[strlen(EngizuString)];
    auystiru(EngizuString, newEngizuString);
    string text(newEngizuString);
    replace(text, newEngizuString);
}
-------string with  letters--------
#include <iostream>
#include <cstring>
#include<string>
using namespace std;
void auystiru(char* source, char* dest)
{
    int length = strlen(source);
    for (int i = 0; i < length; i++)
    {
        if (!(source[i] >= 'a' && source[i] <= 'z' || source[i] >= 'A' && source[i] <= 'Z'))
            dest[i] = ' ';
        else{
            dest[i] = source[i];
    }
    }
}
void replace(string text, char* dest) {
    for (int i = 0; i < text.length(); i++)

    {
        if (text[i] == ' ' && text[i + 1] == ' ')
        {
            text.erase(i, 1);
            i--;
        }
    }
    if (text[0] == ' ')
    {
        text.erase(0, 1);
    }
    if (text[text.length() - 1] == ' ')
    {
        text.erase(text.length() - 1, 1);
    }
    cout << text;
}
int main()
{
    char* EngizuString = new char[1000];
    cin.getline(EngizuString, 1000);
    char* newEngizuString = new char[strlen(EngizuString)];
    auystiru(EngizuString, newEngizuString);
    string text(newEngizuString);
    replace(text, newEngizuString);
}
------Search words with determine character--------
#include <iostream>
#include <cstring>
using namespace std;
void select(char* zhas, char* ulan) {
	char* pch;
	pch = strtok(zhas, " ");
	while (pch != NULL) {
		if (strstr(pch, "object") != 0) {
			strcat(ulan, pch);
			strcat(ulan, " ");
		}
		pch = strtok(NULL, " ");
	}
}
int main() {
	char input[1001], output[1001];
	cin.getline(input, 1001);
	select(input, output);
	cout << output;
	return 0;
}

--------letters to * ----------
#include <iostream>
#include <cstring>
#include<string>
using namespace std;
void auystiru(char* source, char* dest)
{
    int length = strlen(source);
    for (int i = 0; i < length; i++)
    {
        if ((source[i] >= 'a' && source[i] <= 'z' || source[i] >= 'A' && source[i] <= 'Z'))
            dest[i] ='*';
        else{
            dest[i] = source[i];
    }
    }
}
void replace(string text, char* dest) {
    for (int i = 0; i < text.length(); i++)

    {
        if (text[i] == ' ' && text[i + 1] == ' ')
        {
            text.erase(i, 1);
            i--;
        }
    }
    if (text[0] == ' ')
    {
        text.erase(0, 1);
    }
    if (text[text.length() - 1] == ' ')
    {
        text.erase(text.length() - 1, 1);
    }
    cout << text;
}
int main()
{
    char* EngizuString = new char[1000];
    cin.getline(EngizuString, 1000);
    char* newEngizuString = new char[strlen(EngizuString)];
    auystiru(EngizuString, newEngizuString);
    string text(newEngizuString);
    replace(text, newEngizuString);
}
----numbers to *-------
#include <iostream>
#include <cstring>
#include<string>
using namespace std;
void auystiru(char* source, char* dest)
{
    int length = strlen(source);
    for (int i = 0; i < length; i++)
    {
        if (source[i]>='0' && source[i]<='9')
            dest[i] = '*';
        else{
            dest[i] =source[i];
    }
    }
}
void replace(string text, char* dest) {
    for (int i = 0; i < text.length(); i++)

    {
        if (text[i] == ' ' && text[i + 1] == ' ')
        {
            text.erase(i, 1);
            i--;
        }
    }
    if (text[0] == ' ')
    {
        text.erase(0, 1);
    }
    if (text[text.length() - 1] == ' ')
    {
        text.erase(text.length() - 1, 1);
    }
    cout << text;
}
int main()
{
    char* EngizuString = new char[1000];
    cin.getline(EngizuString, 1000);
    char* newEngizuString = new char[strlen(EngizuString)];
    auystiru(EngizuString, newEngizuString);
    string text(newEngizuString);
    replace(text, newEngizuString);
}