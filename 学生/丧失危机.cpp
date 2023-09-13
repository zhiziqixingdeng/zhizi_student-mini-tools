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
	cout<<"你死了"<<endl;
	cout<<"原因：你被丧失咬死了"<<endl;
	cout<<"奖励:";
	sleep(1);
	cout<<"5颗子弹"<<endl;
	cout<<"3份食物"<<endl;
	system("pause");
	s[1].d+=5;
	s[1].x+=3;
	return;
}
void bad2(){
	cout<<"你死了"<<endl;
	cout<<"原因:你饿死了"<<endl;
	cout<<"奖励"<<endl;
	sleep(1);
	cout<<"4份食物"<<endl;
	system("pause");
	return;
}
void level1(){
	cout<<"有一天，你开始了平凡的一天"<<endl;
	sleep(1);
	cout<<"你:真是美好啊，要加油啊"<<s[1].name<<endl;
	cout<<"你突然发现"<<endl;
	sleep(1);
	cout<<"一只丧尸"<<endl;
	cout<<"你:怎么办啊!"<<endl;
	sleep(1);
	system("cls");
	cout<<"1.过去干掉他"<<endl<<"2.躲在家里"<<endl;
	cin>>ww;
	if(w==1){
		if(s[1].d-3>=0){
			cout<<"你冲过去干掉了他"<<endl;
		}
		else{
			bad();
			return;
		}
	}
	else if(w==2){
		if(s[1].x-2>=0){
			cout<<"你在家里成功等到了他走了"<<endl;
		}
		else{
			bad2();
			return;
		}
	}
	else{
		cout<<"恭喜获得隐藏选项"<<endl;
		cout<<"你获得了6份子弹"<<endl;
		s[1].d+=6;
	}
	cout<<"你发现了质子，于是说起了话"<<endl;
	sleep(1);
	cout<<"你:质子你好啊"<<endl;
	sleep(1);
	cout<<"质子:你好啊，我是质子"<<endl;
	sleep(1);
	cout<<"质子:我们来拯救世界"<<endl;
	sleep(1);
	cout<<"你:好啊"<<endl;
	sleep(1);
	cout<<"本章结束"<<endl;
	sleep(1);
	cout<<"你获得了10颗子弹还有6份食物"<<endl;
	s[1].d+=10;
	s[1].x+=6;
	return;
}
void level2(){
	cout<<"你和质子来到了一座工厂"<<endl;
	cout<<"你:我们去找点物资吗?"<<endl;
	sleep(1);
	cout<<"质子:不用，我去找药剂"<<endl;
	sleep(1);
	cout<<"请输入你要怎么办"<<endl<<"1.跟着质子去找"<<endl<<"2.去找物资"<<endl;
	cin>>ww;
	if(ww==2){
		bad(); 
		return;
	}
	else{
		cout<<"你和质子过了一夜"<<endl;
		if(s[1].x-4<0){
			bad2(); 
		}
		else{
			cout<<"你们来到了药剂"<<endl;
			cout<<"质子:太好了!"<<endl;
			sleep(1);
			cout<<"你:真不错啊"<<endl;
			sleep(1);
			cout<<"质子:多亏了你啊,"<<s[1].name<<endl;
			cout<<"本章结束"<<endl;
			sleep(1);
			system("cls"); 
			cout<<"你获得了:3份食物，1颗子弹";
			s[1].d+=1;
			s[1].x+=3;
			return;
		}
	}
}
void level3(){
	cout<<"质子:洒出药剂吧，但是需要"<<endl;
	cout<<"。。。。。"<<endl;
	sleep(1);
	cout<<"你:什么"<<endl;
	sleep(1);
	cout<<"质子:10份食物，12颗子弹"<<endl;
	sleep(1);
	cout<<"你:好的"<<endl;
	if(s[1].x-10>=0&&s[1].d-12>=0){
		cout<<"你成功的解除了危机!"<<endl;
		sleep(1);
		return;
	}
	else{
		bad();
		return;
	}
}
int main(){
	cout<<"欢迎来到小游戏"<<endl;
	cout<<"请输入你的名字:";
	cin>>s[1].name;
	cout<<"你好啊"<<s[1].name<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"请输入你要玩什么"<<endl;
		cout<<"1.剧情游戏"<<endl;
		cout<<"2.无尽模式"<<endl;
		cout<<"3.新手礼包（必须拿，要不然没法玩)"<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入你要玩哪个章节"<<endl;
			cout<<"1.初次发现丧失"<<endl;
			cout<<"2.寻找药剂"<<endl;
			cout<<"3.解除危机"<<endl;
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
				cout<<"无效选择"<<endl;
			}
		}
		else if(n==2){
			cout<<"你遇到了丧失"<<endl;
			cout<<"你消耗了2颗子弹"<<endl;
			sleep(1);
			s[1].d-=2;
			w=rand()%2;
			if(w==0){
				cout<<"你胜利了"<<endl;
			}
			else{
				cout<<"你失败了"<<endl;
			}
		}
		else if(n==3){
			if(s[1].flag==0){
				cout<<"你获得了5颗子弹"<<endl;
				cout<<"你获得了3份食物"<<endl;
				s[1].d+=5;
				s[1].x+=3;
				sleep(1);
				cout<<"好了"<<endl;
				s[1].flag=1;
			}
			else{
				cout<<"还想领？做梦!"<<endl;
			}
		}
		else{
			cout<<"错误"<<endl;
		}
	}
} 
