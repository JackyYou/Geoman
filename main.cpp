//Area Tools 图形面积计算器
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

class Triangle
{
	public:
		float a,b,c;
		
		void setSide()
		{
			while(int i=1)
			{
				cout<<"请分别输入三边：";
				cin>>a>>b>>c;
				if(a+b<=c || a+c<=b || b+c<=a || abs(a-b)>=c || abs(a-c)>=b || abs(b-c)>=a)
				{
					cout<<"边长数据错误！请重新输入！"<<endl;
					Sleep(2000);
					system("cls");
					continue; 
				}
				break;
			}
		}
		
		float getArea()
		{
			float p=(a+b+c)/2;
			float s=sqrt(p*(p-a)*(p-b)*(p-c));
			return s;
		}
};

class Quadrise
{
	public:
		float a,b,c,d,x,y,t;
		const float PI=3.14159265; 
		
		void setSide()
		{
			cout<<"请分别输入四边：";
			cin>>a>>b>>c>>d;
			cout<<"请输入一对对角度数：";
			cin>>x>>y;
			t=(x+y)/2*(PI/180);
		}
		
		float getArea()
		{
			float p=(a+b+c+d)/2;
			float s=sqrt((p-a)*(p-b)*(p-c)*(p-d)-a*b*c*d*pow(cos(t),2));
			return s;
		}
};

class Circle
{
	public:
		float r;
		const float PI=3.14159265;
		
		void setSide()
		{
			cout<<"请输入圆的半径：";
			cin>>r;
		}
		
		float getArea()
		{
			float s=PI*r*r;
			return s;
		}
};

int main()
{
	cout<<"AreaTools图形面积计算器"<<endl;
	
	while (int i=1)
	{
		int choose;
		cout<<"================"<<endl;
		cout<<"1.计算三角形面积"<<endl
			<<"2.计算四边形面积"<<endl
			<<"3.计算圆面积"<<endl
			<<"4.退出本程序"<<endl
			<<"================"<<endl; 
		cout<<"请输入你要进行的操作：";
		cin>>choose;
		system("cls");
	
		if(choose==1)
		{
			Triangle triangle1;
			triangle1.setSide();
			cout<<"此三角形面积为 "<<triangle1.getArea()<<endl;
			Sleep(3000); 
			system("cls");
		}
		else if(choose==2)
		{
			Quadrise quadrise1;
			quadrise1.setSide();
			cout<<"此四边形面积为 "<<quadrise1.getArea()<<endl;
			Sleep(3000); 
			system("cls");
		}
		else if(choose==3)
		{
			Circle circle1;
			circle1.setSide();
			cout<<"此圆面积为 "<<circle1.getArea()<<endl; 
			Sleep(3000); 
			system("cls");
		}
		else if(choose==4)
		{
			cout<<"感谢您使用本程序！"<<endl;
			Sleep(1000); 
			break; 
		}
		else
		{
			cout<<"没有此操作，请重新输入！"<<endl;
			Sleep(2000); 
			system("cls");
		}
	}
}
