#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
struct r{
	string name;
	int d;
	int x;
	int flag; 
}s[3];
int n,w,ww;
void bad(){
	cout<<"������"<<endl;
	cout<<"ԭ���㱻ɥʧҧ����"<<endl;
	cout<<"����:";
	sleep(1);
	cout<<"5���ӵ�"<<endl;
	cout<<"3��ʳ��"<<endl;
	system("pause");
	s[1].d+=5;
	s[1].x+=3;
	return;
}
void bad2(){
	cout<<"������"<<endl;
	cout<<"ԭ��:�������"<<endl;
	cout<<"����"<<endl;
	sleep(1);
	cout<<"4��ʳ��"<<endl;
	system("pause");
	return;
}
void level1(){
	cout<<"��һ�죬�㿪ʼ��ƽ����һ��"<<endl;
	sleep(1);
	cout<<"��:�������ð���Ҫ���Ͱ�"<<s[1].name<<endl;
	cout<<"��ͻȻ����"<<endl;
	sleep(1);
	cout<<"һֻɥʬ"<<endl;
	cout<<"��:��ô�찡!"<<endl;
	sleep(1);
	system("cls");
	cout<<"1.��ȥ�ɵ���"<<endl<<"2.���ڼ���"<<endl;
	cin>>ww;
	if(w==1){
		if(s[1].d-3>=0){
			cout<<"����ȥ�ɵ�����"<<endl;
		}
		else{
			bad();
			return;
		}
	}
	else if(w==2){
		if(s[1].x-2>=0){
			cout<<"���ڼ���ɹ��ȵ���������"<<endl;
		}
		else{
			bad2();
			return;
		}
	}
	else{
		cout<<"��ϲ�������ѡ��"<<endl;
		cout<<"������6���ӵ�"<<endl;
		s[1].d+=6;
	}
	cout<<"�㷢�������ӣ�����˵���˻�"<<endl;
	sleep(1);
	cout<<"��:������ð�"<<endl;
	sleep(1);
	cout<<"����:��ð�����������"<<endl;
	sleep(1);
	cout<<"����:��������������"<<endl;
	sleep(1);
	cout<<"��:�ð�"<<endl;
	sleep(1);
	cout<<"���½���"<<endl;
	sleep(1);
	cout<<"������10���ӵ�����6��ʳ��"<<endl;
	s[1].d+=10;
	s[1].x+=6;
	return;
}
void level2(){
	cout<<"�������������һ������"<<endl;
	cout<<"��:����ȥ�ҵ�������?"<<endl;
	sleep(1);
	cout<<"����:���ã���ȥ��ҩ��"<<endl;
	sleep(1);
	cout<<"��������Ҫ��ô��"<<endl<<"1.��������ȥ��"<<endl<<"2.ȥ������"<<endl;
	cin>>ww;
	if(ww==2){
		bad(); 
		return;
	}
	else{
		cout<<"������ӹ���һҹ"<<endl;
		if(s[1].x-4<0){
			bad2(); 
		}
		else{
			cout<<"����������ҩ��"<<endl;
			cout<<"����:̫����!"<<endl;
			sleep(1);
			cout<<"��:�治��"<<endl;
			sleep(1);
			cout<<"����:������㰡,"<<s[1].name<<endl;
			cout<<"���½���"<<endl;
			sleep(1);
			system("cls"); 
			cout<<"������:3��ʳ�1���ӵ�";
			s[1].d+=1;
			s[1].x+=3;
			return;
		}
	}
}
void level3(){
	cout<<"����:����ҩ���ɣ�������Ҫ"<<endl;
	cout<<"����������"<<endl;
	sleep(1);
	cout<<"��:ʲô"<<endl;
	sleep(1);
	cout<<"����:10��ʳ�12���ӵ�"<<endl;
	sleep(1);
	cout<<"��:�õ�"<<endl;
	if(s[1].x-10>=0&&s[1].d-12>=0){
		cout<<"��ɹ��Ľ����Σ��!"<<endl;
		sleep(1);
		return;
	}
	else{
		bad();
		return;
	}
}
int main(){
	cout<<"��ӭ����С��Ϸ"<<endl;
	cout<<"�������������:";
	cin>>s[1].name;
	cout<<"��ð�"<<s[1].name<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"��������Ҫ��ʲô"<<endl;
		cout<<"1.������Ϸ"<<endl;
		cout<<"2.�޾�ģʽ"<<endl;
		cout<<"3.��������������ã�Ҫ��Ȼû����)"<<endl;
		cin>>n;
		if(n==1){
			cout<<"��������Ҫ���ĸ��½�"<<endl;
			cout<<"1.���η���ɥʧ"<<endl;
			cout<<"2.Ѱ��ҩ��"<<endl;
			cout<<"3.���Σ��"<<endl;
			cin>>w;
			if(w==1){
				level1();
			} 
			else if(w==2){
				level2();
			}
			else if(w==3){
				level3;
			}
			else{
				cout<<"��Чѡ��"<<endl;
			}
		}
		else if(n==2){
			cout<<"��������ɥʧ"<<endl;
			cout<<"��������2���ӵ�"<<endl;
			sleep(1);
			s[1].d-=2;
			w=rand()%2;
			if(w==0){
				cout<<"��ʤ����"<<endl;
			}
			else{
				cout<<"��ʧ����"<<endl;
			}
		}
		else if(n==3){
			if(s[1].flag==0){
				cout<<"������5���ӵ�"<<endl;
				cout<<"������3��ʳ��"<<endl;
				s[1].d+=5;
				s[1].x+=3;
				sleep(1);
				cout<<"����"<<endl;
				s[1].flag=1;
			}
			else{
				cout<<"�����죿����!"<<endl;
			}
		}
		else{
			cout<<"����"<<endl;
		}
	}
} 
