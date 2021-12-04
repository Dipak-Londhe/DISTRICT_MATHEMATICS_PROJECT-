#include<iostream>

using namespace std;

int main()
{   
	char Array[10];
	int i, n;
	cout<<"Enter the size of the set(TOTAL NO OF VARIBLES ):";
	cin>>n;
	for(i=0;i<n;i++)
	{
	  cout<<"Enter the set of characters(VARIABLE): ";
	  cin>>Array[i];
	}
	

	int p;
	p<2^n;
	
	
	cout<<"how many pairs you want add in relation :";
	cin>>p;
	char R1[2*p];
	int sum=0;
	int count=0;
	int j, k;
	char A1[p],A2[p];
	for(i=0;i<p;i++)
	{
	  
	  
	  cout<<"Enter the  1st elements of pair of relation: ";
	  cin>>A1[i];
	  //A1[i]=R1[i];
	  cout<<"Enter the 2nd element of pair of relation: ";
	  cin>>A2[i];
	 // A2[i]=R1[i++];
}
 cout<<" RELATION :\n";
	cout<<" { ";
	for(i=0;i<n;i++)
	{
		
		
					cout<<" ("<<A1[i]<<","<<A2[i]<<") "<<",";
		
	}
	cout<<" } \n";
 

	 for(i=0;i<p;i++) 
	{ if(A1[i]==A2[i])                              //condition for reflexive
     {
	 sum +=1;
     }
     
    
    }
  
   
   for(j=0;j<p;j++)
   {
   	  for(k=1;k<p;k++)
   	  {
   	  	 if(A1[j]!=A2[j] && A1[k]!=A2[k]){
			 
   	  	   if(A1[j]==A2[k] && A2[j]==A1[k]){
   	  	   	
					
			 
   	  		count+=1;}
			 }
   	  	 }
	  }
     
    
    
	 
    if(sum==n)
    {cout<<"\t\tREFLEXIVE"<<endl;
	}
    else
    {
    	cout<<"\t\tNOT REFLEXIVE !"<<endl;
	}
	if(count>=1)
	{
		cout<<"\t\tSYMMETRIC"<<endl;
		cout<<"\t\tNOT  ANTY SYMMETRIC !"<<endl;
	}
	else
	{
		
		cout<<"\t\tNOT SYMMETRIC !"<<endl;
		if(sum>=1)
		{
			cout<<"\t\tANTY SYMMETRIC"<<endl;
		}
		else
		{
			cout<<"\t\tNOT  ANTY SYMMETRIC !"<<endl;
		}
	}
	
	int a,b,c;
	
//	for
	
	return 0;
	
}




































