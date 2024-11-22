#include<iostream>

#include<string.h>
using namespace std;
int main(){
	
	char string[20];
	int i, length, flag=0;
	cout<<"Enter any string: ";
	cin>>string;
	length=strlen(string);
	
	for(i=0; i<length; i++){
		if(string[i]!=string[length-i-1] )
		{flag =1;
		break;
		}
	}
	if(flag){
		cout<<string<<" string is not a palidrone."<<endl;
	}
	else
	cout<<string<<" string is palidrone."<<endl;
	getch();
}
