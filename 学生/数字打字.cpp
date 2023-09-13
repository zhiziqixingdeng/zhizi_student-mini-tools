#include <iostream>
#include <cstdlib>
using namespace std;
int a,b,cnt;
int main(){
	cout<<"欢迎使用数字打字练习"<<endl;
	cout<<"请输入你要打多少个字:";
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
		a=rand()%9;
		cout<<"请打出"<<a<<"吧"<<endl;
		cin>>b;
		if(b==a){
			cout<<"正确"<<endl;
		}
		else{
			cout<<"错误"<<endl; 
		}
	}
	system("pause");
	return 0;
} 
