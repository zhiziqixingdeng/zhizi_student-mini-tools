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
	cout<<"��ӭʹ��С��ͨѶ¼"<<endl;
	sleep(1);
	while(1==1){
		cout<<"��������Ҫ��ʲô"<<endl<<"1.�������"<<endl<<"2.�鿴ͨѶ¼"<<endl<<"3.ɾ������"<<endl<<"4.�˳�"<<endl;
		cin>>n;
		if(n==1){
			cnt++;
			cout<<"���������������:";
			getline(cin,x[cnt].name);
			cout<<"���������������/�绰����"<<endl;
			getline(cin,x[cnt].h);
			cout<<"��ӳɹ�!"<<endl;
		}
		else if(n==2){
			cout<<"����ΪͨѶ¼�б�:";
			for(int i=1;i<=cnt;i++){
				cout<<"����:"<<x[i].name<<endl;
				if(x[i].name!=""&&x[i].h!=""){
					if(x[i].h.find("@")!=std::string::npos){
					cout<<"����:"<<x[i].h<<endl;
				} 
				else{
					cout<<"�绰����:"<<x[i].h<<endl;
				}
				cout<<"----------------------------"<<endl;
				}
			}
			system("pause");
			system("cls");
		}
		else if(n==3){
			cout<<"��������Ҫ����ɾ��"<<endl;
			cout<<"1.��������"<<endl;
			cout<<"2.�����绰����/����"<<endl;
			cin>>w;
			if(w==1){
				cout<<"���������������:";
				getline(cin,str);
				flag=0;
				for(int i=1;i<=cnt;i++){
					if(x[i].name==str){
						flag=1;
						cout<<"�ҵ�����";
						if(x[i].h.find("@")!=std::string::npos){
							cout<<"��������:"<<x[i].h<<endl; 
						} 
						else{
							cout<<"���ѵ绰����:"<<x[i].h<<endl;
						}
						cout<<"�Ƿ�Ҫɾ�� 1.ɾ�� 2.��ɾ��"<<endl;
						cin>>ww;
						if(ww==1){
							x[i].name="";
							x[i].h="";
							cout<<"ɾ�����"<<endl;
							system("pause");
						}
						else{
							cout<<"�õģ����Ǽ���Ѱ��"<<endl;
						}
					}
				}
				if(flag==0){
					cout<<"δ�ҵ�����"<<endl;
				}
				system("pause");
				system("cls"); 
			}
			else if(w==2){
				cout<<"����������ѵ绰����/����:";
				getline(cin,str);
				flag=0;
				for(int i=1;i<=cnt;i++){
					if(x[i].name==str){
						flag=1;
						cout<<"�ҵ�����"<<endl;
						cout<<"��������:"<<x[i].name<<endl; 
						cout<<"�Ƿ�Ҫɾ�� 1.ɾ�� 2.��ɾ��"<<endl;
						cin>>ww;
						if(ww==1){
							x[i].name="";
							x[i].h="";
							cout<<"ɾ�����"<<endl;
							system("pause");
						}
						else{
							cout<<"�õģ����Ǽ���Ѱ��"<<endl;
						}
					}
				}
				if(flag==0){
					cout<<"δ�ҵ�����"<<endl;
				}
				system("pause");
				system("cls"); 
			}
			else{
				cout<<"����"<<endl;
				}
			}
			else if(n==5){
				cout<<"��лʹ�����ǵĲ�Ʒ"<<endl;
				sleep(1);
				return 0;
			}
			else{
				cout<<"����"<<endl;
			}
		}
	}
