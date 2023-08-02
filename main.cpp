//Area Tools ͼ�����������
#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
	public:
		float a,b,c;
		
		void setSide()
		{
			cout<<"��ֱ��������ߣ�";
			cin>>a>>b>>c; 
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
			cout<<"��ֱ������ıߣ�";
			cin>>a>>b>>c>>d;
			cout<<"������һ�ԶԽǶ�����";
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
			cout<<"������Բ�İ뾶��";
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
	cout<<"��ӭʹ��AreaToolsͼ�����������1.0"<<endl; 
	
	while (int i=1)
	{
		int choose;
		cout<<"1.�������������"<<endl
			<<"2.�����ı������"<<endl
			<<"3.����Բ���"<<endl
			<<"4.�˳�������"<<endl; 
		cout<<"��������Ҫ���еĲ�����";
		cin>>choose;
	
		if(choose==1)
		{
			Triangle triangle1;
			triangle1.setSide();
			cout<<"�����������Ϊ "<<triangle1.getArea()<<endl;
		}
		else if(choose==2)
		{
		Quadrise quadrise1;
		quadrise1.setSide();
		cout<<"���ı������Ϊ "<<quadrise1.getArea()<<endl;
		}
		else if(choose==3)
		{
			Circle circle1;
			circle1.setSide();
			cout<<"��Բ���Ϊ "<<circle1.getArea()<<endl; 
		}
		else if(choose==4)
		{
			cout<<"��л��ʹ�ñ�����"<<endl;
			break; 
		}
		else
		{
			cout<<"û�д˲��������������룡"<<endl;
		}
	}
}
