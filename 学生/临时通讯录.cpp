#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
using namespace std;
struct t{
	string name;
	string h;
}x[100000];
int n,w,cnt,flag,ww;
string str,str2;
int main(){
	cout<<"欢迎使用小型通讯录"<<endl;
	sleep(1);
	while(1==1){
		cout<<"请输入需要干什么"<<endl<<"1.添加朋友"<<endl<<"2.查看通讯录"<<endl<<"3.删除朋友"<<endl<<"4.退出"<<endl;
		cin>>n;
		if(n==1){
			cnt++;
			cout<<"请输入该朋友名字:";
			getline(cin,x[cnt].name);
			cout<<"请输入该朋友邮箱/电话号码"<<endl;
			getline(cin,x[cnt].h);
			cout<<"添加成功!"<<endl;
		}
		else if(n==2){
			cout<<"以下为通讯录列表:";
			for(int i=1;i<=cnt;i++){
				cout<<"姓名:"<<x[i].name<<endl;
				if(x[i].name!=""&&x[i].h!=""){
					if(x[i].h.find("@")!=std::string::npos){
					cout<<"邮箱:"<<x[i].h<<endl;
				} 
				else{
					cout<<"电话号码:"<<x[i].h<<endl;
				}
				cout<<"----------------------------"<<endl;
				}
			}
			system("pause");
			system("cls");
		}
		else if(n==3){
			cout<<"请输入需要哪种删除"<<endl;
			cout<<"1.搜索名字"<<endl;
			cout<<"2.搜索电话号码/邮箱"<<endl;
			cin>>w;
			if(w==1){
				cout<<"请输入该朋友名字:";
				getline(cin,str);
				flag=0;
				for(int i=1;i<=cnt;i++){
					if(x[i].name==str){
						flag=1;
						cout<<"找到朋友";
						if(x[i].h.find("@")!=std::string::npos){
							cout<<"朋友邮箱:"<<x[i].h<<endl; 
						} 
						else{
							cout<<"朋友电话号码:"<<x[i].h<<endl;
						}
						cout<<"是否要删除 1.删除 2.不删除"<<endl;
						cin>>ww;
						if(ww==1){
							x[i].name="";
							x[i].h="";
							cout<<"删除完成"<<endl;
							system("pause");
						}
						else{
							cout<<"好的，我们继续寻找"<<endl;
						}
					}
				}
				if(flag==0){
					cout<<"未找到朋友"<<endl;
				}
				system("pause");
				system("cls"); 
			}
			else if(w==2){
				cout<<"请输入该朋友电话号码/邮箱:";
				getline(cin,str);
				flag=0;
				for(int i=1;i<=cnt;i++){
					if(x[i].name==str){
						flag=1;
						cout<<"找到朋友"<<endl;
						cout<<"朋友名字:"<<x[i].name<<endl; 
						cout<<"是否要删除 1.删除 2.不删除"<<endl;
						cin>>ww;
						if(ww==1){
							x[i].name="";
							x[i].h="";
							cout<<"删除完成"<<endl;
							system("pause");
						}
						else{
							cout<<"好的，我们继续寻找"<<endl;
						}
					}
				}
				if(flag==0){
					cout<<"未找到朋友"<<endl;
				}
				system("pause");
				system("cls"); 
			}
			else{
				cout<<"错误"<<endl;
				}
			}
			else if(n==5){
				cout<<"感谢使用我们的产品"<<endl;
				sleep(1);
				return 0;
			}
			else{
				cout<<"错误"<<endl;
			}
		}
	}
