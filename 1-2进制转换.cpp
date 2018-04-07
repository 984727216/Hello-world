#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
	int a,b;
	char str[100];
	long long temp,ten,t=0;
	while(cin>>a>>str>>b)
	{
		int len=strlen(str);
//		cout<<len<<endl;
		ten=0;
		for(int i=0; str[i]; i++)       //把a进制数转化为10进制
		{
			if(str[i]>='a') str[i]-=32;
			temp=(str[i]>='A'&&str[i]<='Z')?str[i]-'A'+10:str[i]-'0';
			ten+=temp*pow(a,len-1-i);
		}
//		cout<<ten<<endl;
		if(ten==0)
		{
			cout<<"0"<<endl;
			continue;
		}
		int j=0;
		while(ten!=0)     //把10进制 转化为b进制。
		{
			t=ten%b;
			if(t<=9)
				str[j++]=t+'0';
			else
				str[j++]=t-10+'A';
			ten/=b;
			
		}
		for(int i=j-1; i>=0; i--)
		{
			cout<<str[i];
		}
		//cout<<"";
		cout<<endl;

	}
}
