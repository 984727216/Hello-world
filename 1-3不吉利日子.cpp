#include<iostream>
#include<cstring>
using namespace std;
int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//int main()
//{
//	
//	
//	
//}

int main()               
{
	int w;
	int answer[15];
	memset(answer,0,sizeof(answer) );
	cin>>w;
	for(int i=1;i<=12;i++){
		if(i==2){
			for(int j=1;j<=28;j++)
			{
				if(j==13&&w==5)
				{
					answer[i]=1;
				}
				if(w==7)	w=1;
				else 	w++;
				
			}
		}
		else if(i==4||i==6||i==9||i==11){
			for(int k=1;k<=30;k++){
				if(k==13&&w==5)	answer[i]=1;
				if(w==7)  w=1;
				else w++;
			}
		}
		else {
			for(int l=1;l<=31;l++){
				if(l==13&&w==5) answer[i]=1;
				if(w==7)	w=1;
				else w++;
			}
		}
	}
	for(int i=1;i<=12;i++){
		if(answer[i]==1)	cout<<i<<endl;
	}
	
}
