#include <iostream>
#include <cstdlib>
using namespace std;
int a,b,cnt;
int main(){
	cout<<"��ӭʹ�����ִ�����ϰ"<<endl;
	cout<<"��������Ҫ����ٸ���:";
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
		a=rand()%9;
		cout<<"����"<<a<<"��"<<endl;
		cin>>b;
		if(b==a){
			cout<<"��ȷ"<<endl;
		}
		else{
			cout<<"����"<<endl; 
		}
	}
	system("pause");
	return 0;
} 
