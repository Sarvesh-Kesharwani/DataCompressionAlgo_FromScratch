#include<fstream>
#include<iostream>

using namespace std;
int main()
{
	char temp;float ms=0;
	int data[10000]={0};
	int a=0,b=0;int count0=0,count1=0;
	ofstream OutputFile("output.txt");
  	ifstream codefile("snakecode.txt");
  
  /*while(!codefile.eof())
  {
  	codefile>>temp;
  	temp=temp-'0';
  	if(temp==1)
  	a++;
  	else
  	b++;
  	cout<<"1";
  }
  cout<<"\na="<<a<<"\nb="<<b;*/
  
  while(!codefile.eof())
  {
  	codefile>>temp;
  	temp=temp-'0';
  	if(temp==1)
  	{
	  while(temp!=0)
  		{
  			count1++;
  			data[0]+=1;
  			codefile>>temp;
  			temp=temp-'0';
  			
		}
  	}
  	else
  	{
  		while(temp!=1)
  		{
  			count0++;
  			codefile>>temp;
  			temp=temp-'0';
		}
	}
	system("cls");
  	cout<<"Count0="<<count0<<"\nCount1="<<count1;
  	ms+=0.1;cout<<endl<<ms;
  }
  cout<<"\nTotalBits="<<count0+count1;
  
  OutputFile<<"\nTotalBits="<<count0+count1;
  OutputFile<<"\nCount0="<<count0;OutputFile<<"\nCount1="<<count1;
  OutputFile<<"\nMiliSecondsTaken:"<<ms;
  
  cout<<"\nCompleted 100%\n";
  return 0;
}

