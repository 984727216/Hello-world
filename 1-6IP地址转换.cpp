#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int a[4];
	int two[8];
	while(cin>>a[0])
	{
		if(a[0]==-1)	break;
		scanf(".%d.%d.%d",&a[1],&a[2],&a[3]);
		for(int i=0;i<4;i++)
		{
			memset(two,0,sizeof(two));
			for(int j=0;j<8;j++){
				two[j]=a[i]%2;
				a[i]/=2;
			}
			for(int k=7;k>=0;k--)
			printf("%d",two[k]);
		}
		cout<<endl;
	}
}

