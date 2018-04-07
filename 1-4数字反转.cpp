#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[20];
	cin>>s;
	int flag=0;
	int len=strlen(s);
	
	if(s[0]=='-')
	{
		cout<<"-";
		for(int i=len-1; i>=1; i--)
		{
			if(s[i]!='0') flag=1;
			if(flag==1)
				cout<<s[i];
		}
	}
	else
		for(int i=len-1; i>=0; i--)
		{
			if(s[i]!='0') flag=1;
			if(flag==1)
				cout<<s[i];
		}

}
