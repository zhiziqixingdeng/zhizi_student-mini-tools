#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
using namespace std;
string str;
int n,w,cnt,a;
struct flagg{
	int flag[10000];
}c[10000];
void jia(){
	cout<<"请输入需要加密的语句:";
	cin.ignore();
	getline(cin,str);
	for(int i=1;i<=str.length();i++){
		if(str[i]>='a'&&str[i]<'z'){
			str[i]+=1;
			c[cnt].flag[i]=1;
		}
		else if(str[i]>='0'&&str[i]<'8'){
			str[i]+=2;
			c[cnt].flag[i]=1;
		}
		else if(str[i]>='B'&&str[i]<='Z'){
			str[i]-=1;
			c[cnt].flag[i]=1;
		}
		else{
			str[i]=str[i];
		}
	}
	cout<<"加密后的:"<<str<<endl;
	cout<<"加密编码:"<<cnt<<endl;
	system("pause");
	return;
}
void jie(){
	cout<<"请输入需要解密的语句:";
	cin.ignore();
	getline(cin,str);
	cout<<"加密编码:";
	cin>>a;
	for(int i=1;i<=str.length();i++){
		if(str[i]>='b'&&str[i]<='z'&&c[a].flag[i]==1){
			str[i]-=1;
		}
		else if(str[i]>='2'&&str[i]<='9'&&c[a].flag[i]==1){
			str[i]-=2;
		}
		else if(str[i]>='A'&&str[i]<='Y'&&c[a].flag[i]==1){
			str[i]+=1;
		}
		else{
			str[i]=str[i];
		}
	}
	cout<<"解密后的:"<<str<<endl;
}
int main(){
	cout<<"欢迎使用加密解密小助手"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"请输入你要干什么"<<endl<<"1.加密"<<endl<<"2.解密"<<endl<<"3.退出"<<endl;
		cin>>n;
		if(n==1){
			jia();
		}
		else if(n==2){
			jie();
		}
		else{
			cout<<"感谢使用"<<endl;
			sleep(1);
			return 0;
		}
	}
}
