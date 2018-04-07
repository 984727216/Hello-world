#include<iostream>

using namespace std;
int main()
{
	int count=0;
	int a,b,c;
	cin>>a>>b>>c;
	int max1=c/b;
	int max2=c/a; 
	for(int i=0; i<=max2; i++)
	{
		for(int j=0; j<=max1; j++)
		{
			if((a*i+b*j)==c)
			{
				count++;
			}
		}
	}
	cout<<count<<endl;

}
