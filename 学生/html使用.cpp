#include <iostream>
#include <unistd.h>
using namespace std;
string str;
int cnt;
struct c{
	string out;
	int l;
}s[10000];
int main(){
	cout<<"ETO-html制作工具"<<endl;
	while(str!="END"){
		cnt++;
		cout<<cnt<<":";
		cin>>str;
		if(str=="b"){
			cout<<"t:";
			cin.ignore();
			cin>>s[cnt].out;
			s[cnt].l=1;
		}
		else if(str=="p"){
			cout<<"t:";
			cin.ignore();
			cin>>s[cnt].out;
			s[cnt].l=2;
		}
		else if(str=="h1"){
			cout<<"t:";
			cin.ignore();
			cin>>s[cnt].out;
			s[cnt].l=3;
		}
		else if(str=="h2"){
			cout<<"t:";
			cin.ignore();
			cin>>s[cnt].out;
			s[cnt].l=4;
		}
		else if(str=="i"){
			cout<<"t:";
			cin.ignore();
			cin>>s[cnt].out;
			s[cnt].l=5;
		}
		else{
			cnt--;
		}
	}
	cout<<"转换后的:"<<endl;
	for(int i=1;i<=cnt;i++){
		if(s[cnt].l==1){
			cout<<"<b>"<<s[cnt].out<<"<b>"<<endl;
		} 
		else if(s[cnt].l==2){
			cout<<"<p>"<<s[cnt].out<<"<p>"<<endl;
		}
		else if(s[cnt].l==3){
			cout<<"<h1>"<<s[cnt].out<<"<h1>"<<endl;
		}
		else if(s[cnt].l==4){
			cout<<"<h2>"<<s[cnt].out<<"<h2>"<<endl;
		}
		else if(s[cnt].l==5){
			cout<<"<i>"<<s[cnt].out<<"<i>"<<endl;
		}
		else{
			cout<<"转换完成"<<endl;
			break;
		}
	}
	sleep(100);
	return 0;
} 
