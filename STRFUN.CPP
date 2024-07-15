#include<intro.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main(){
	char s1[20], s2[10],ch;
	int count=0, i=0, len=0;
	clrscr();
	intro();
	cout<<"Enter string 1: ";
	cin>>s1;
/*	cout<<"\nEnter string 2: ";
	cin>>s2;

	cout<<"\nLength of String: "<<strlen(s1);
	strcat(s1,s2);
	cout<<"\nConcat String: "<<s1;
	strcpy(s1,s2);
	cout<<"\ns2 copy into s1: "<<s1<<" and "<<s2;

	cout<<"\nEnter to find char: ";
	cin>>ch;
	if(strchr(s1,ch)){
		cout<<"\nChar Found: "<<ch;
	}else{
		cout<<"\nChar Not Found: "<<ch;
	}

	cout<<"\nEnter to find str: ";
	cin>>s2;
	if(strstr(s1,s2)){
		cout<<"\nStr Found: "<<s2;
	}else{
		cout<<"\nStr Not Found: "<<s2;
	}

	char* vowels="aeiouAEIOU";
	int l=strlen(s1);
	for(int i=0;i<l;i++){
		if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U'){
			count++;
		}
	}
	cout<<endl<<count; */

	len=strlen(s1);
	for(i=0;i<len/2;i++){
		if(s2[i] !=s1[len-i-1]){
			count++;
		}
	}
	if(strcmp(s1,s2)==0){
		cout<<"\nString is pelindrom.";
	}else{
		cout<<"\nString is not pelindrom.";
	}
	getch();
}