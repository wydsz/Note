#include <iostream>
using namespace std;//����д�κ�c++�ļ���Ҫд������
void log(const char* message);//����log����
#include<string>//��c++������ַ���ʱ��Ҫ�������ͷ�ļ�
#include"point.h"
#include"circle.h"
//#include"swap.h"
//#define day 7
#include"bubbleSort.h"
#include"printArray.h"
#include<ctime>
    //ʵ��һ���ӷ������������£����������������ݣ�����������ӵĽ�������ҷ��أ�
	// 1������ֵ���� 2��int ������3�� add �����б� ��int num1 ,int num2�� 4�����������5�� return���ʽ
    //�����Ķ���
/*
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
*/
//ʵ���������ֽ��н�������
//���һ����������Ҫ����ֵ��������ʱ�����дvoid
/*
void swap(int num1, int num2)
{
	cout << "����ǰ�����ǣ�" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "�����������ǣ�" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;



	return;//������ֵ����Ҫ��ʱ����Բ�д
}
*/
 //����������
 //�ȽϺ�����ʵ���������ε����ֽ��бȽϣ����ؽϴ��ֵ
/*
int max(int a, int b)
{
	return a > b ? a : b;//��Ŀ�����
}
*/

//��ǰ���߱����������Ĵ��ڣ��������ú���������
//��������  �������max�����Ϳ���д��main����
//int max(int a, int b)
/*void swap02(int* p1, int* p2)//���ܵ�ַ
{

	int  temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
*/





//����ѧ���������ͣ�ѧ�����������������䡢������
	// �﷨ struct �������� {��Ա�б�}  �Զ����������͵ñ��ʾ��� һЩ���ͼ�����ɵ�һ������

/*
struct Student
{


	string name;//����
	int age;//����
	int score; //����




}s3;//����һ���ṹ�����

*/

/*
//�ṹ������ 
// 1������ṹ�� 2�� �����ṹ������ 3�����ṹ�������е�Ԫ�ظ�ֵ 4�������ṹ������

struct Student
{

	string name;//����
	int age;//����
	int score; //����


};
*/
/*
struct Student
{

	string name;//����
	int age;//����
	int score; //����


};

struct teacher
{
	int id;//��ʦ���
	string name;//��ʦ����
	int age;//��ʦ����
	struct Student stu;//������ѧ��
};
*/
/*
struct Student
{

	string name;//����
	int age;//����
	int score; //����


};

void printStudent1(struct Student s)//ֵ����
{
    s.age = 200;
	cout << "���Ӻ����д�ӡ ������" << s.name << "���䣺" << s.age << "������" << s.score << endl;
}

void printStudent2(struct Student * p )//��ַ����
{
	p->age = 200;
	cout << "���Ӻ���2�д�ӡ ������" << p->name << "���䣺" << p->age << "������" << p->score << endl;
}
*/
/*
struct Student
{

	string name;//����
	int age;//����
	int score; //����


};
void printStudent(const struct Student *s)//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
{
	//s->age = 150;//����const��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���ǵ������
	cout << "������" << s->name << "���䣺" << s->age << "������" << s->score << endl;
}
*/
/*
struct Student
{

	string sname;//����
	int score; //����


};
struct teacher
{
	string tname;//��ʦ����
	struct Student sArray[5];
};
//����ʦ��ѧ����ֵ�ú���
void allocateSpace(struct teacher tArray[],int len)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].tname = "Teacher_";
		tArray[i].tname += nameSeed[i];//��Teacher_׷��abc ��+=

		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sname = "Student_";
			tArray[i].sArray[j].sname += nameSeed[j];

			int random = rand() % 61+40;
			tArray[i].sArray[j].score = random;
		}
		
	}
}
void printIofo(struct teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������" << tArray[i].tname << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << tArray[i].sArray[j].sname <<
				"���Է�����"<< tArray[i].sArray[j].score<<endl;
		}
	}
}
*/
/*
struct Hero
{
	string name;
	int age;
	string sex;
};
//���������
void printIofo(struct Hero HArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "Ӣ��������" << HArray[i].name
			<<"���䣺" << HArray[i].age
			<<"�Ա�"<< HArray[i].sex<<endl;
	}
}
//ð������ ʵ���������������
void BubbleSort(struct Hero HArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		//�ڲ�ѭ���Ա�
		for (int j = 0; j < len - i - 1; j++)
		{
			//�����һ�����ֱȵڶ������ִ�ʵ�ֽ�����������
			if (HArray[j].age > HArray[j + 1].age)
			{
				struct Hero temp = HArray[j];//�����������ֵİ취����ס
				HArray[j] = HArray[j + 1];
				HArray[j + 1] = temp;
			}
		}
	}

}
*/

/*
//ȫ�ֱ���
int g_a = 10;
int g_b = 10;


const int c_g_a = 10;//const���ε�ȫ�ֱ�����Ҳ��ȫ�ֳ���
const int c_g_b = 10;
*/
/*
int * func(int b)//�β�����Ҳ�����ջ��
{

	int a = 10;//�ֲ�����  Ŀǰ�����ջ����ջ���������ں���ִ������Զ��ͷ�
	return &a;//���ؾֲ������ĵ�ַ

}
*/
/*
int * func()
{
	//����new�ؼ���  ���Խ����ݿ��ٵ�����
	//ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ���
	int *p=new int(10);
	return p;


}
*/



//new�û����﷨
//�ڶ�������new��������

/*
int* func()
{
	//�ڶ���������������
	//new�����Ǹ��������͵�ָ��
	int * p=new int(10);
	return p;

}
void test01()
{
	int* p = func();
	cout << *p << endl;
	delete p;
	//���������� �ɳ���Ա�����٣�����Ա�����ͷ�
	//������ͷŶ��������ݣ�����delete�ؼ���ɾ��
	//cout << *p << endl;//�ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ�
}
void test02()
{
	//����10�������ݵ����飬�ڶ���

	int * arr =new int[10];//10����������10��Ԫ��,��¼�����������׵�ַ
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;

	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//�ͷŶ�������
	delete[]arr;//�ͷ������ʱ��Ҫ��[]�ſ���
}
*/
//��������
/*
//1��ֵ����
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "mySwap01 a= " << a << endl;
	cout << "mySwap01 b= " << b << endl;
}
//2����ַ����
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3�����ô���
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
*/
/*
//�����������ķ���ֵ
	//1����Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;//�ֲ���������������е� ջ��
	return a;
}
*/
//2�������ĵ��ÿ�����Ϊ��ֵ
/*
int& test02() 
{
	static int a = 10;//��̬�����������ȫ������ȫ�����ϵ������ڳ��������ϵͳ�ͷ�
	return a;
}
//��ӡ���ݺ���
void showValue(const int &val)
{
	///val = 1000;
	cout << "val=" << val << endl;
}
*/
//����Ĭ�ϲ���
//��������Լ��������ݣ������Լ������ݣ����û�У���ô��Ĭ��ֵ
//�﷨�� ����ֵ���� ���������β�=Ĭ��ֵ��
//ע������
//1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
//2���������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//������ʵ��ֻ����һ����Ĭ�ϲ��� 
/*
int func(int a, int b=20, int c = 30)
{
	return a + b + c;


}
*/
//ռλ����
//Ŀǰ�ֽ׶ε�ռλ���������ǻ��ò���������γ��л��õ�
//ռλ���� ��������Ĭ�ϲ���
/*
void func(int a,int)
{
	cout << "this is func " << endl;
}
*/

//��������
//�����ú�������ͬ����߸�����
/*
void func()
{
	cout << "func�ĵ���" << endl;
}
void func(int a)
{
	cout << "func(int a)�ĵ���!" << endl;
}
void func(double a)
{
	cout << "func(double a)�ĵ���!" << endl;
}
void func(int a, double b)
{
	
		cout << "func(int a, double b)�ĵ���!" << endl;
	
}
void func(double a, int b)
{

	cout << "func(double a, int b)�ĵ���!" << endl;

}
*/
//ע������
//�����ķ���ֵ��������Ϊ�������ص�����

/*
//�������ص�ע������
//1��������Ϊ���ص�����
void func(int& a)// int &a=10;���Ϸ�
{
	cout << "func(int &a)�ĵ���" << endl;
}
void func(const  int& a)//const int &a=10; �Ϸ� 
{
	cout << "func(const int &a)�ĵ���" << endl;
}
//2��������������Ĭ�ϲ���
void func2(int a,int b=10)
{
	cout << "func2( int a,int b=10)�ĵ���" << endl;
}
void func2(int a)
{
	cout << "func2( int a)�ĵ���" << endl;
}
*/


/*

//c++����������� ��װ
//���һ��Բ�࣬��Բ���ܳ�
const double PI = 3.14;//����PI
class	Circle //����Ҫ���һ�����ˡ�
{
	//����Ȩ�ޣ����滹������Ȩ�޻��ὲ��
	//����Ȩ��
public:

	//����
	int m_r;//�뾶
	//��Ϊ  �ڴ�����ͨ����һ��������������
	double calculateZC()//��ȡ�ܳ�����
	{
		return 2 * PI *m_r;
	}
};
*/
/*
//��װ�����������һ��ѧ����,������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
class Student
{
public://����Ȩ��
	//����


	//���е����Ժ���Ϊ������ͳһ��Ϊ��Ա
	//����Ҳ�г�Ա���� ��Ա����
	//��ΪҲ�г�Ա���� ��Ա����


	string Studentname;
	int StudentID;

	void showStudentname()
	{
		cout<<"������" << Studentname<<"ѧ�ţ�"<< StudentID << endl;
	}
	//ͨ����Ϊ�������������Ը�ֵ
	void setName(string name)//������ʱҪ���յ�����
	{
		Studentname = name;
	}
	void setID(int ID)
	{
		StudentID = ID;
	}
};
*/
/*
//����Ȩ������  
//����     public ����Ա���ڿ��Է���  ����Ҳ���Է���
//����     protected ����Ա���ڿ��Է��� ���ⲻ���Է��� ����Ҳ���Է��ʸ����б���������
//˽��     private�� ��Ա���ڿ��Է��� ���ⲻ���Է��ʣ�������˽���ں���̳��ǿ������� �̳еĶ��Ӷ������Է��ʸ��׵�˽������   
class Person
{
public://����Ȩ��
	
	string Name;
    
protected://����Ȩ��

	string Car;
private://˽��Ȩ��

	int Password;//���п�����
public:
		void func()
	{
			Name = "�ĳ�";
			Car = "·����ʤ������V8";
			Password = 253779;
	}

};
*/
/*
class C1
{
	int m_A;//Ĭ��Ȩ�ޡ���˽��
};
struct C2
{
	int m_A;//Ĭ��Ȩ�ޡ�������
};
*/
/*
//��Ա��������Ϊ˽��
//1�������Լ����ƶ�д��Ȩ��
//2������д���Լ��������Ч��
class Person
{
public:
	//��������
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_Name;
	}
	//��ȡ����
	void setAge(int age)//��д�����з���һ���Լ����ں�����һ����������void�ǿ�д��int double���־������ͣ���ô����Ҫ�����ݷ�����������mian�С���ô�����ṹ����Ҫ��return�����ķ�����䡣��void������Ҫ������������ʲô���ݣ�ֻ��Ҫ���������������ݵ������С�
	{
		if (age < 0 || age>150)
		{
			cout << "�����������󣬸�ֵʧ��" << endl;
			return;
		}
		m_Age = age;
	}
	int getAge()
	{
		return m_Age;
	};
	
	//string setIdol(string idol)
	//{
	//	m_Idol = idol;
	//}
private:
	string m_Name;//���� �ɶ���д

	int m_Age;// ���� ֻ�� �ڼ��������Ч��ʱ����д�ˣ����������0��150֮�䣩

	string m_Idol;//ż�� ֻд

};
*/
/*
//��װ����һ���������������������ж������������Ƿ���ȡ�
//1��������������
//2���������
//3�������Ϊ ��ȡ��������������
//4���ֱ�����ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
class Cube {
private:
	int m_l;//��
	int m_w;//��
	int m_h;//��
public:
	//���ó� ���ã�set��
	void setL(int l)
	{
		m_l = l;
	}
	//��ȡ��
	int getL()
	{
		return m_l;
	}
	//���ÿ�
	void setW(int w)
	{
		m_w = w;
	}
	//��ȡ��
	int getW()
	{
		return m_w;
	}
	//���ø�
	void setH(int h)
	{
		m_h = h;
	}
	//��ȡ��
	int getH()
	{
		return m_h;
	}
	int calculateS()
	{
		
		return 2*m_l*m_w+2*m_l*m_h+2*m_h*m_w;
	}
	int calculateV()
	{
		 
		return m_l * m_h * m_w ;
	}
	//���ó�Ա�����ж������������Ƿ����
	bool isSameByClass(Cube &c)
	{
		if (m_l == c.getL() && m_h == c.getH() && m_w == c.getW())
		{
			return true;
		}
		    return false;
	}

};
//����ȫ�ֺ����ж������������Ƿ����
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW())
	{
		return true;
	}
		return false;
}
*/
//��ϰ����2�����Բ�ù�ϵ
//���һ��Բ���ࣨCircle������һ�����ࣨPoint��,�ж϶��ߵù�ϵ
//����

/*
class Point
{
private:
	int m_X;
	int m_Y;
public:
	//����X
	void setX(int x)
	{
		m_X = x;
	}
	//��ȡX
	int getX()
	{
		return m_X;
	}
	void setY(int y)
	{
		m_X = y;
	}
	int getY()
	{
		return m_Y;
	}
};
*/
/*
class Circle
{
private:
	int m_R;//�뾶
	Point m_Center;//Բ�� //�����п�������һ������Ϊ�����еó�Ա����
public:
	//���ð뾶
	void setR (int r)
	{
		m_R = r;
	}
    //��ȡ�뾶
		int getR()
	{
		return m_R;
	}
	//����Բ��
	void setCenter(Point center)
	{
		m_Center = center;
	}
	//��ȡԲ��
	Point getCenter()
	{
		return m_Center;
	}
};
*/
/*
//�жϵ��Բ�ù�ϵ����
void isInCircle(Circle& c, Point& p)
{
	//��������֮��ľ��� ƽ��
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
     //����뾶��ƽ��
	int rDistance = c.getR() * c.getR();
	//�жϹ�ϵ
	if(distance==rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}


}
//����ĳ�ʼ��������
//1�����캯�� ���г�ʼ���Ĳ���
class Person
{
public:
	//1.1 ���캯��
	Person()
	{
		cout << "Person ���캯���ĵ���" << endl;
	}
	//2. ��������
	~Person()
	{
		cout << "Person ���������ĵ���" << endl;
	}

};
void test01()
{
	Person p;//��ջ�ϵ����ݣ�test01ִ����Ϻ󣬻��ͷ��������
}
//������������Ǳ����е�ʵ�֣�������ǲ��ṩ�����������ṩһ����ʵ�ֵĹ����������
*/

/*
//���캯���ķ��༰����
//����
//���ղ������� ��Ϊ�вκ��޲�
//�������ͷ��� ��Ϊ��ͨ�Ϳ���
class Person
{
public:
	//1.1 ���캯��
	//��ͨ����
	Person()
	{
		cout << "Person ���޲ι��캯���ĵ���" << endl;//�޲ι���Ҳ��Ĭ�Ϲ���
	}
	Person(int a)
	{
		age = a;
		cout << "Person ���вι��캯���ĵ���" << endl;//�в�
	}
	//2. ��������
	~Person()
	{
		cout << "Person ���������ĵ���" << endl;
	}
	//�������캯��
	Person(const Person& p)
	{
		//������������ϵ����е����ԣ�������������
		age = p.age;
		cout << "Person �������캯���ĵ���" << endl;
	}
	int age;
};
//����
void test01()
{
	//��ʽ�������ŷ�����ʾ������ʽת����
	//1�����ŷ�
	//Person p1;//Ĭ�ϣ��޲Σ����캯������
	//Person p2(10);//�вι��캯������
	//��ô�������ŷ����ÿ������캯��
	//Person p3(p2); //�������캯������
	//ע������һ
	//  �ڵ���Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��С���š�������
	// ��Ϊ �������д��룬����������Ϊ��һ������������,������Ϊ�ڴ�������
	// Person p1();
	// void func();
	//cout << "p2������Ϊ��" << p2.age << endl;
	//cout << "p3������Ϊ��" << p2.age << endl;
	//2����ʾ��
	//Person p1;//Ĭ�Ϲ���
	//Person p2 = Person(10);//�вι���
	//Person p3 = Person(p2);//��������

	//	Person(10);//�����ó������������� �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	//	cout << "aaaa" << endl;
	//ע������2
	//��Ҫ���ÿ������캯�� ��ʼ����������
	//Person(p3);//����������ΪPerson(p3)=== Person p3;����Ϊ��������
	//3����ʽת����
	Person p4 = 10;//�൱��д�� Person p4 =Person(10) �вι���
	Person p5 = p4;
}
*/

/*
//�������캯������ʱ��
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//2��ֵ���ݵķ�ʽ������������ֵ
//3��ֵ��ʽ���ؾֲ�����
class Person 
{
public:
	Person()
	{
		cout << "Person ���޲�(Ĭ��)���캯���ĵ���" << endl;
	}
	Person(int age)
	{
		m_Age = age;
		cout << "Person ���вι��캯���ĵ���" << endl;//�в�
	}
	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "Person �������캯���ĵ���" << endl;
	}
	int m_Age;
	~Person()
	{
		cout << "Person ���������ĵ���" << endl;
	}
};
/*void test01()
{
	//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
	Person p1(20);
	Person p2(p1);
	cout << "p2�����䣺" << p2.m_Age << endl;
}*/
/*void dowork(Person p)
{

}
void test02()
{
	//2��ֵ���ݵķ�ʽ������������ֵ
	Person p;
	dowork(p);
}
//3��ֵ��ʽ���ؾֲ�����

Person dowork2()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return Person(p1);
}
void test03()
{
	Person p = dowork2();
	cout << (int*)&p << endl;
}
*/
/*
//���캯���ĵ��ù���
//1������һ���࣬c++���������ÿ���඼���������������
//Ĭ�Ϲ��죨��ʵ�֣�
//������������ʵ�֣�
//�������죨ֻ������
class Person
{
public:
	Person()
	{
		cout << "Person ���޲�(Ĭ��)���캯���ĵ���" << endl;
	}
	Person(int age)
	{
		m_Age = age;
		cout << "Person ���вι��캯���ĵ���" << endl;//�в�
	}
	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "Person �������캯���ĵ���" << endl;
	}
	int m_Age;
	~Person()
	{
		cout << "Person ���������ĵ���" << endl;
	}
};
/*void test01()
{
	Person p;
	p.m_Age = 18;
	Person p2(p);//��ʹû��д�������캯����ϵͳҲ��Ĭ�ϰ���дһ��Ȼ��ֵ������p2��
	cout << "p2������Ϊ" << p2.m_Age << endl;
}*/
//2���������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��캯��������Ȼ�ṩ�������캯��
//�������д�˿������캯�����������Ͳ����ṩ��������ͨ���캯��
/*
void test02()
{
	Person p;
	Person p2(p);
	cout << "p2������Ϊ" << p2.m_Age << endl;
}
*/
/*
class Person
{
public:
	Person()
	{
		cout << "Person ���޲�(Ĭ��)���캯���ĵ���" << endl;
	}
	Person(int age,int height)
	{
		m_Age = age;
		m_Height=new int(height);
		cout << "Person ���вι��캯���ĵ���" << endl;//�в�
	}
	//�Լ�ʵ�ֿ������캯�� ���ǳ��������������
	Person(const Person& p)
	{
		m_Age = p.m_Age;
		//m_Height = p.m_Height;������Ĭ��ʵ�־������д���-ǳ����
		//�������
		m_Height=new int(*p.m_Height);
		cout << "Person �������캯���ĵ���" << endl;
	}
	int m_Age;//����
	int* m_Height;
	~Person()
	{
		//�������룬���������ٵ��������ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person ���������ĵ���" << endl;
	}
};
void test01()
{
	Person p1(18,160);
	cout << "p1������Ϊ" << p1.m_Age <<"���Ϊ��"<<*p1.m_Height<< endl;
	Person p2(p1);
	cout << "p2������Ϊ" << p2.m_Age << "���Ϊ��" << *p2.m_Height<< endl;



}
*/
/*
//��ʼ���б�
class Person
{
public:
	//��ͳ��ʼ������
	Person(int a, int b, int c)
	{
		m_A=a;
	    m_B=b;
		m_C=c;
	}
	//��ʼ���б��ʼ������
	Person() :m_A(10), m_B(20), m_C(30)
	{

	}
	//�����÷�ʽ
	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
	{

	}
private:
	int m_A;
	int m_B;
	int m_C;

};
void test01()
{
	Person p;
	
	Person p(10, 20, 30);
	Person p(10, 20, 30);
	cout <<"m_A=" << p.m_A << endl;
	cout << "m_B=" << p.m_B << endl;
	cout << "m_C=" << p.m_C << endl;
}
*/
/*
//�������Ϊ��ĳ�Ա
class Phone
{
public:
	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone�Ĺ��캯������" << endl;
	}

	~Phone()
	{
		cout << "Phone ���������ĵ���" << endl;
	}

	//Ʒ��
	string m_PName;
};
class Person
{
public:
	//����
	string m_Name;
	//�ֻ�
	Phone m_Phone;
	//Phone m_Phone = pName; ��ʽת����
	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person�Ĺ��캯������" << endl;
	}
	~Person()
	{
		cout << "Person ���������ĵ���" << endl;
	}

};
//��������Ķ�����Ϊ����ĳ�Աʱ�������������ʱ�����ȹ���������Ķ����ڹ�������
//������˳���빹���෴���Ƚ����
void test01()
{
	Person p("����", "ƻ��");
	cout << p.m_Name << "���ţ�" << p.m_Phone.m_PName << endl;
}
*/


/*
//��̬��Ա����
class Person
{
public:
	//1�����Զ��󶼹���ͬһ������
	//2������׶ξͷ����ڴ�
	//3�����������������ʼ������
	static int m_A;//��������
	
private:
	static int m_B; //��̬��Ա����Ҳ���з���Ȩ�޵�

};
int Person::m_A=100;//�����ʼ������
int Person::m_B=200;
void test01()
{
	Person p;
	cout << p.m_A << endl;
	Person p2;
	p2.m_A = 200; //���Զ��󶼹���ͬһ������
	cout << p.m_A << endl;
}
void test02()
{
	//��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ
	//1��ͨ��������з���
	//Person p;
	//cout << p.m_A << endl;
	 
	
	//2��ͨ���������з���  �Ǿ�̬��Աֻ��ͨ������������з���

	cout << Person::m_A << endl;

	//cout << Person::m_B << endl;˽��Ȩ���£����ⲻ���Է���
}
*/
/*
//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա�������ܷ��ʾ�̬��Ա����
class Person
{
public:
	//��̬��Ա����
	static void func()
	{
		m_A = 100;//��̬��Ա�������Է��ʾ�̬��Ա����
		//m_B = 200;//��̬��Ա���������Է��ʷǾ�̬��Ա����
		cout << "statci void func �ĵ���" << endl;
	}
	static int m_A;//��������
	int m_B;
	//��Ϊ����m_B���ض���������ԣ����������޷����ֵ������ĸ����������
	
private:
	static void func2()//��̬��Ա����Ҳ���з���Ȩ�޵�
	{
		cout << "statci void func2 �ĵ���" << endl;
	}


};

int Person::m_A = 0;
void test01()
{
	//1ͨ���������
	Person p;
	p.func();
	//2��ͨ����������
	Person::func();
	//Person::func2();//������ʲ���˽�о�̬��Ա����
} 
*/ 
/*
//��Ա���� �ͳ�Ա�����ֿ��洢
class Person
{
	int m_A;//�Ǿ�̬��Ա���� �������ĳһ��������
	static int m_B;//��̬��Ա���� �������� ���������ĳһ��������
	void func()//�Ǿ�̬��Ա����  ���������ĳһ��������
	{

	}
	static void func2() {}//��̬��Ա���� ���������ĳһ��������

};
int Person::m_B;//��������
void test01()
{
	Person p;
	//�ն���ռ���ڴ�ռ�Ϊ��1
	//c++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << " size of p=" << sizeof(p) << endl;
}
void test02()
{
	Person p;
	cout << " size of p=" << sizeof(p) << endl;//ֻҪ���ǿն��󣬾Ͱ���int���ͷ����ڴ�ռ�
}
*/
/*
//thisָ���ʹ��
class Person
{
public:
	Person(int age)//1��������Ƴ�ͻ
	{
		this->age = age;//thisָ����Ǳ����õĳ�Ա������������
	}
	int age;
	Person &PersonAddAge(Person& p)
	{
		this->age +=p.age;

		return *this;//thisָ��p2��ָ�룬��*thisָ��ľ���p2
	}
	Person(const Person& p)
	{
		age = p.age;
		cout << "Person �������캯���ĵ���" << endl;
	}
};
void test01()
{
	//Person p1(10);
	//cout << "p1������" << p1.age << endl;
}
//2�����ض�������*this
void test02()
{
	Person p1(10);

	Person p2(10);
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);//��ʽ���˼������׷��
	cout << "p2������" << p2.age << endl;
}
*/
/*
//��ָ����ʳ�Ա����
class Person
{
public:
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}
	void showClassAge()
	{
		//����ԭ������Ϊ�����ָ����ΪNULL
		//�����ʩ
		if (this == NULL)
		{
			return;//���if�����ṩ���뽡׳�ԣ���ֹ��ָ��
		}
		cout << "age=" <<this-> m_Age << endl;
	}
	int m_Age;
};
void test01()
{
	Person* p = NULL;
	p->showClassAge();//��Ϊ���Age�漰���˾����������ԣ�����ʱָ���ǿ�ָ��
	//p->showClassName();
}
*/
/*
//const���γ�Ա����
class Person 
{
public:
	int m_A;
	//������
	//thisָ��ı�����ָ�볣�� ָ���ָ���ǲ������޸ĵ�
	//const Person *const this;
	//�ڳ�Ա���������const���������ε���thisָ�룬��thisָ��ָ���ֵҲ�������޸�
	void showPerson() const
	{
		this->m_B=100;//�����������mutable�ؼ���,��ʹ�ڳ������У�Ҳ�����޸����ֵ��
		//this=NULL;//thisָ�벻�����޸�ָ���ָ��
		//this->m_A = 100;//���ǿ����޸�ָ��ָ������ݵ�ֵ��������const����ָ������ݵ�ֵҲ�����޸�
	}
	void func()
	{

	}
	mutable int m_B;//�����������mutable�ؼ���,��ʹ�ڳ������У�Ҳ�����޸����ֵ��
};
void test01()
{
	Person p;
	p.showPerson();
}
void test02()
{
	//������
	const Person p;//�ڶ���ǰ��const����Ϊ�����󣬲������޸Ķ�������
	//p.m_A = 100;//�������޸���ͨ����
	p.m_B = 100;//B������ֵ���ڳ�������Ҳ�����޸�
	
	//p.func();//������ֻ�ܵ��ó�����
}
*/
int main()
{

	//test01();
	 //test02();

	//test01();


    





	


	//test01();

	//test02();


	//test01();

	//test01();






	//test01();







	//test01();
















	/*
	//test01();
	test02();

*/










	/*
	//test01();
	//test02();
	test03();

*/








	/*
	test01();
*/








	/*
	Person p;
	//test01();
*/













	/*
	//����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//������
	Point p;
	p.setX(10);
	p.setY(10);
	//�жϹ�ϵ
	isInCircle(c, p);

*/

/*
	Cube c1;
	
	c1.setL(10);
	c1.setH(10);
	c1.setW(10);
	cout << "c1�����������" << c1.calculateS() << endl;
	cout << "c1�����������" << c1.calculateV() << endl;
	
	Cube c2;
	c2.setL(10);
	c2.setH(10);
	c2.setW(10);
	cout << "c2�����������" << c2.calculateS() << endl;
	cout << "c2�����������" << c2.calculateV() << endl;


	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "c1��c2�ǲ���ȵ�" << endl;
	}

	ret = c1.isSameByClass(c2);//���ó�Ա������ֻ�贫һ�������Ϳ���
	if (ret)
	{
		cout << "��Ա�����ж� c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "��Ա�����ж� c1��c2�ǲ���ȵ�" << endl;
	}
*/

	/*
	Person p;
	p.setName("���ľ�");
	cout << "������" << p.getName() << endl;
	//��������
	p.setAge(160);//�������ԭ����û���������
	//p.m_Age=20���������ԭ����������˽�е����ݣ�����û�����ù�����д���亯��
	cout << "����: " << p.getAge() << endl;//��ȡ����
	//p.setIdol("���׷�");
	//cout << "ż��" << p.getIdol() << endl;//ż����ֻд״̬ �����ʲ���

*/



/*
	//struct��class������
	// struct Ĭ��Ȩ���ǹ��� public
	//classĬ��Ȩ����˽�� private

	C1 c1;
	c1.m_A = 100;//�����ˣ����ܷ���
	C2 c2;
	c2.m_A = 100;

*/










	/*
	Person p1;
	p1.Name = "���";
	//p1.Car = "����s";//����Ȩ��������������ʲ���
	//p1.Password = 979797;//˽��Ȩ��������������ʲ���


*/










	/*
	Circle c1;//�ù�Բ�� ���������Բ�����󣩡���ʵ��������ͨ��һ���ഴ��һ������Ĺ���
	c1.m_r = 10;//��Բ��������Խ��и�ֵ
	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;

*/
	/*
	//����һ������ѧ�� ʵ��������
	Student s1;
	//��s1������и�ֵ����
	/*s1.Studentname = "xiachao";//д�ַ���ʱ������Ҫ��˫��������
	s1.StudentID = 2628382;
	s1.showStudentname();//���ú���Ҫ�ں������������

	s1.setName("xiachao");//������ʱҪ���͵�����
	s1.setID(2628382);
	s1.showStudentname();

*/










	/*
	//int a = 10;
	//func(a);//����const��
	//func(10);//����const��
	//func2(10);//��������������Ĭ�ϲ��������ֶ����ԣ������������
*/

	/*
	//func();
	//func(10);
	//func(3.14);
	//func(10, 3.14);
*/


	/*
	func(10,10);

*/











	/*
	cout << func(10,30) << endl;
*/











	/*
	//��������
	//ʹ�ó��������������βΣ���ֹ�����

	int a = 10;

	//����const֮�� �������������޸� int temp=10; const int &ref =temp;
	 const  int& ref = 10;//���ñ�����һ��Ϸ����ڴ�ռ�
	 ref=20//����const֮���Ϊֻ�����������޸�

	 //���������ó������÷�ֹ������ı�ʵ��
	int a = 100;
	showValue(a);
	cout << "a=" << a << endl;
*/












	/*
	 //�����������ķ���ֵ
	//1����Ҫ���ؾֲ�����������
	int &ref = test01();
	cout << "ref=" << ref << endl;//��Ϊ�ֲ����� �ڴ��Ѿ��ͷŲ��ٴ�����


	//2�������ĵ��ÿ�����Ϊ��ֵ
	int& ref2 = test02();
	cout << "ref2=" << ref2 << endl;
	test02() = 1000;//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
	cout << "ref2=" << ref2 << endl;
*/
















	/*
	int a = 10;
	int b = 20;
	 
	//mySwap01(a, b);//ֵ���ݣ��ββ�������ʵ�ε�
	//mySwap02(&a, &b);//��ַ���ݣ��βλ�����ʵ�ε�
	mySwap03(a , b);//���ô��ݣ��β�Ҳ������ʵ�ε�

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
*/









	/*
	//���û����﷨
	int a = 10;
	int& b = a;
	cout << "a=:" <<a<< endl;
	cout << "b=:" <<b<< endl;
	b = 100;
	cout << "a=:" <<a<< endl;
	cout << "b=:" <<b<<endl;
	
*/



/*
	test01();
	test02();

*/



	/*
	//�ڶ�����������


	int* p = func();
	cout << *p <<endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

*/



	/*
	//ջ������ע���������Ҫ���ؾֲ������ĵ�ַ
	//ջ���������ɱ����������ٺ��ͷ�

	int* p = func(1);
	cout << *p << endl;//��һ�ο��Դ�ӡ��ȷ�����֣�����Ϊ���������˱���
	cout << *p << endl;//�ڶ���������ݾͲ��ٱ�����


*/















/*
	//�ڴ�����


	//ȫ����
// ȫ�ֱ�������̬����������
//������ͨ�ֲ�����
	int a = 10;//��main��������ı���ȫ�Ǿֲ�����
	int b = 10;
	cout << "�ֲ�����a�ĵ�ַΪ: " << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ: " << (int)&b << endl;


	cout << "ȫ�ֱ���g_a�ĵ�ַΪ: " << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ: " << (int)&g_b << endl;

	//��̬����
	static int s_a = 10;//����ͨ����ǰ���static�����ھ�̬����Ҳ�����ȫ����
	static int s_b = 10;
	cout << "��̬����s_a�ĵ�ַΪ��" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַΪ��" << (int)&s_b << endl;

	//����  ��Ϊ�ַ������� �� const���εı���
	cout << "�ַ��������ĵ�ַ��" << (int)&"hello world" << endl;
	//const���εı�������Ϊ��
	//const���ε�ȫ�ֱ�����const���εľֲ�����

	cout << "ȫ�ֳ��� c_g_a�ĵ�ַΪ��" << (int)&c_g_a << endl;
	cout << "ȫ�ֳ��� c_g_b�ĵ�ַΪ��" << (int)&c_g_b << endl;

	const int c_l_a = 10;//c��const g��global l-local
	const int c_l_b = 10;
	cout << "�ֲ����� c_l_a�ĵ�ַΪ��" << (int)&c_l_a << endl;
	cout << "�ֲ����� c_l_b�ĵ�ַΪ��" << (int)&c_l_b << endl;


*/




	/*

	//���һ��Ӣ�۵Ľṹ�壬������Ա�����������䡢�Ա𣻴����ṹ�����飬�����д��5��Ӣ��
	//ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ��


	struct Hero HArray[5] = {
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	int len = sizeof(HArray) / sizeof(HArray[0]);
	
	BubbleSort(HArray, len);
    printIofo(HArray, len);

*/



















	/*
	//���������
	srand((unsigned int)time(NULL));

	//ѧУҪ��������Ŀ��ÿ����ʦ��5��ѧ����һ����������ʦ
	//���� �����ʦ��ѧ���ýṹ�壬��ʦ�ýṹ���У�����ʦ��������һ�����5��ѧ�������飬
	// ѧ����Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ�����մ�ӡ����ʦ�������Լ���ʦ����ѧ��������

	struct teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	printIofo(tArray, len);

*/













	/*
	struct Student s = { "����",15,70 };

	printStudent(&s);


*/


	/*
	struct Student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;

    printStudent1(s);//ֵ����
    printStudent2(&s);//��ַ����


	cout << "��main�����д�ӡ ������" << s.name << "���䣺" << s.age << "������" << s.score << endl;
*/
	
	












	/*
	teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;
	cout << " ��ʦ������ " << t.name
		 << " ��ʦ���䣺 " << t.age
		 << " ��ʦ��ţ� " << t.id 
		 <<"��ʦ����ѧ����������" << t.stu.name
	     << "��ʦ����ѧ�������䣺" << t.stu.age 
		 <<"��ʦ����ѧ���ķ�����"<< t.stu.score<<endl;

*/



	/*
	//����ѧ���ṹ�����
	//ͨ��ָ��ָ��ṹ�����
	//ͨ��ָ����ʽṹ������е�����
	struct Student s = { "����",18,100 };

	struct Student* p = &s;



	cout << " ������ " << p->name
		<< " ���䣺 " << p->age
		<< " ������ " << p->score << endl;

*/













	/*
	struct Student stuArray[3] =
	{
		{"����",18,100},
		{"����",28,99},
		{"����",38,66}
	};
		//Ҳ�����ȶ����ֵ
	stuArray[2].name = "����";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	for (int i = 0; i < 3; i++)
	{
		cout << " ������ " << stuArray[i].name 
			 << " ���䣺 " << stuArray[i].age 
			 << " ������ " << stuArray[i].score << endl;
	}

*/



	/*
     //ͨ��ѧ�����ʹ�������ѧ��  ����
	struct Student s1;//struct �ṹ�崴������ʱ���ؼ��ֿ���ʡ�ԣ����ṹ�嶨��ʱ������ʡ�ԡ�
	//��s1���Ը�ֵ��ͨ�� .���ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	cout << "������" << s1.name << "���䣺" << s1.age << "������" << s1.score << endl;

	struct Student s2 = { "����",19,80 };
	cout << "������" << s2.name << "���䣺" << s2.age << "������" << s2.score << endl;

	
	s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	cout << "������" << s3.name << "���䣺" << s3.age << "������" << s3.score << endl;


*/









	/*
	//�������� �� ��װһ������������ð������ʵ�ֶ������������������
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };//�ȴ�������
	int len = sizeof(arr) / sizeof(arr[0]);//���鳤��

	bubbleSort(arr, len);//ʵ��ð������
	printArray(arr, len);//��ӡ����������


*/










	/*

	//����ָ���������ò����������޸�ʵ�ε�ֵ


	int a = 10;
	int b = 20;
	swap02(&a, &b);//��ַ����
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//�����ַ���ݣ����Ըı�ʵ��

*/







	/*
	//����ָ�������������е�Ԫ��
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;
	int* p = arr;//arr����������׵�ַ

	for (int i = 0; i < 10; i++) 
	{
          cout << "����ָ�������ʵ�i��Ԫ��:" << *p << endl;
		  p++;
	}
	
	//p++;

	//cout << "����ָ�������ʵڶ���Ԫ��:" << *p << endl;


*/



	/*
	 //ָ����ռ�ڴ�ռ�
	int a = 10;
	int* p = &a;

	cout << "sizeof(int *)=" << sizeof(p) << endl;

    */



	/*
	int a = 10;
	//ָ�붨����﷨�� �������� * ָ���������
	int* p;
	//��ָ���¼����a�õ�ַ
	p = &a;
	cout << "a�õ�ַΪ��" << &a << endl;
	cout << "ָ��pΪ��" << p << endl;
	//ʹ��ָ��
	//����ͨ�������õ÷�ʽ���ҵ�ָ��ָ����ڴ�
	// ָ��ǰ�� * ��������ã��ҵ�ָ��ָ����ڴ��е�����
	*p = 1000;
	cout << "a=" << a << endl;
	cout << "*p= " << *p << endl;

*/




	/*
	
	int a = 10;
	int b = 20;

	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	*/



	/*
	int a = 10;
	int b = 20;
	
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//��������ֵ���ݵ�ʱ�򣬺������βη����κθı䣬������Ӱ��ʵ�Σ�

	swap(a, b);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


    */















	/*
	//a��b��Ϊ ʵ�ʲ��� ���ʵ��
	//�����ú���ʱ��ʵ�ε�ֵ�ᴫ�ݸ��β�
	int a = 10;
	int b = 20;
	int c = add(a, b);

	cout << "c=" << c<<endl;

*/















	/*
	//��ά����Ӧ�ð���
	int scores[3][3] = {

		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	
	string names[3] = { "����","����","����" };


	for (int i = 0; i < 3; i++) 
	{
		int sum = 0;//ͳ�Ʒ����ܺͱ���
		for (int j = 0; j < 3; j++)
		{

			sum += scores[i][j];

			//cout << scores[i][j] << " ";
			
			
		}

           cout << names[i]<<"���ܷ�Ϊ��" << sum << endl;
	}
	
	





    */








	/*
	//��ά����������;

	int arr[2][3] = {

		{1,2,3},
		{4,5,6}
	};
	cout << "��ά������ռ�õ��ڴ�ռ��С��" << sizeof(arr) << endl;
	cout << "��ά�����һ����ռ�õ��ڴ�ռ��С��" << sizeof(arr[0]) << endl;//�鿴��һ�е��ڴ�
	cout << "��ά�����һԪ����ռ�õ��ڴ�ռ��С��" << sizeof(arr[0][0]) << endl;
	//�ô���ͳ�ƶ�ά��������
	cout << "��ά���������Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά���������Ϊ��" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	//�׵�ַ
	cout << "��ά������׵�ַ��" << (int)arr << endl;
	cout << "��ά�����һ���׵�ַ��" << (int)arr[0] << endl;
	cout << "��ά����ڶ����׵�ַ��" << (int)arr[1] << endl;
	cout << "��ά�����һԪ����ռ�õ��ڴ�ռ��С��" << (int)&arr[0][0] << endl;//��ȥ������Ԫ�ص�ַҪ��ȡַ������&
	cout << "��ά����ڶ�Ԫ����ռ�õ��ڴ�ռ��С��" << (int)&arr[0][1] << endl;

*/


	/*
	//��ά���鶨�巽ʽ
	//��һ��
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << endl;
		}

	}
*/


	/*
	//�ڶ��ֶ��巽ʽ
	int arr[2][3] =

	{
		{1,2,3},
		{4,5,6}
	};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
				
		}
           cout<<endl;
	}

*/











	/*

	//����ð�����������������
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	
	cout << "����ǰ��" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//��ʼð������
	for (int i = 0; i < 9 - 1; i++)
	{
		//�ڲ�ѭ���Ա�
		for (int j = 0; j < 9-i-1; j++)
		{
			//�����һ�����ֱȵڶ������ִ�ʵ�ֽ�����������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];//�����������ֵİ취����ס
				arr[j] = arr[j+ 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "�����" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


*/









	/*
	//����Ԫ������

	int arr[5] = { 1,3,2,5,4 };
	cout << "��������ǰ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	int start = 0;//��¼��ʼ�±�
	int end = sizeof(arr)/sizeof(arr[0])-1;//��¼�����±�
	int temp = 0;

	while (start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;  //ʵ��Ԫ�ػ���
		start++;
		end--;//�����±�

	}
	cout << "�������ú�" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
*/






	/*

	//��ֻС������� һ�������м�¼������С��������ҵ�����ӡ���ص�С������
	//���趨һ�����ֵ��Ȼ��Ƚϣ��������������ֵ

	int arr[5] = { 300,350,500,400,250 };
	int max = 0;//���϶�һ�����ֵ

	for (int i = 0; i < 5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

      cout  << "���ֵ�С������Ϊ��" << max << endl;

*/









	/*
	
    int arr[10] = { 1,2,3,4,5,6,7,8,9.10 };
	cout << "��������ռ���ڴ�ռ��Ϊ��" << sizeof(arr) << endl;
	cout << "����ÿ��Ԫ��ռ���ڴ�ռ��Ϊ��" << sizeof(arr[0]) << endl;
	cout << "��������Ԫ�صĸ���Ϊ��" << sizeof(arr)/sizeof(arr[0]) << endl;
    cout << "�����׵�ַΪ��" <<  (int)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (int) & arr[0] << endl;  
	cout << "�����еڶ���Ԫ�ص�ַΪ��" << (int)&arr[1] << endl;

*/





	/*
	//�����ֶ��巽ʽ
	//���������ʱ�򣬱����г�ʼ����
	int arr3[] = { 90, 80, 70, 60, 50, 40, 30, 20, 10 };
	for (int i = 0; i < 9; i++)
	{
		cout << arr3[i] << endl;//ѭ�����
	}

*/









	/*

	//������������
	int arr[5];//��һ�ֵ�һ��ʽ
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	*/
	/*
	int arr2[5] = { 10,20,30,40,50 };  //�ڶ��ֶ��巽ʽ
	
	cout << arr2[0] << endl;
	cout << arr2[1] << endl;
	cout << arr2[2] << endl;
	cout << arr2[3] << endl;
	cout << arr2[4] << endl;


	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;//ѭ�����
	}

*/






	//�˷��ھ���  ����*���� = ������ �� ����С�ڵ��ڵ�ǰ������
	// ���ͦţ���ںúÿ���
	/*
	for (int i = 1; i <=9; i++)
	{
		//cout << i << endl;
		for (int j = 1; j <=i; j++)
		{
			cout << j <<" * "<< i << " = " << i*j << " ";			
		}
		cout << endl; //���в���
	}

*/









	//����Ƕ��ѭ��ʵ����ͼ
	/*
	
	for (int i = 0; i < 10; i++)
	{
		cout << " * " ;  
		for (int j = 0; j < 10; j++)
		{
			cout << " * ";

		}
		cout << endl;
	}

	cout << endl;


*/






	//��ϰ���� ����
	// ˼· ��  �����1��100��Щ���� ��100���������ҵ��������� ��Ϊ�������ӡ� �������� 
	// 7�ı���   x%7=0 ��λ��7 x%10=7 ʮλ��7 x/10=7
	/*
	for (int i = 1; i <=100; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10==7)
		{
			cout << "������" << endl;
		}
		else 
		{
			cout << i << endl;
		}
		
	}

	 */















	/*
	
	//����forѭ����ӡ����0~9
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}

*/


































	//��ϵ���� ˮ�ɻ��� ˮ�ɻ�����ָһ��3λ��������ÿ��λ�ϵ�����3����֮�͵���������
	// �����е���λ��������� ��������λ�����ҵ�ˮ�ɻ��� ��ȡ��λ ��������ȥ����10 ���Ի�ȡ��λ 153%10�� ��ȡʮλ �����ֳ�10 �õ���λ�� �ڶ�10ȡģ0����ȡ��λ�����ֳ���100�� �ж� ��λ^3+ʮλ^3+��λ^3 
/*
	int num = 100;
	do
	{
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;



		if (a* a* a + b * b * b + c * c * c == num)
		{
             cout << "��λ�����ˮ�ɻ���Ϊ" << num << endl;
		}



		
		num++;

	} while (num < 1000);
	
*/


















	/*
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	}
	while (num < 10);
	
*/
      system("pause");

      return 0;











	//while ѭ������ ������  
	// ϵͳ��Ҫ��������� ��ҽ��в²� �ж���ҵĲ²� �¶��˳���Ϸ �´���ʾ�µĽ�������С���·��صڶ���
	//������������ ���õ�ǰϵͳʱ���������������ֹÿ���������һ��
	/*
	srand((unsigned int)time(NULL));//���������
	int num=rand() % 100 + 1;//����0+1~99+1�������
	int val = 0;
	
	while (1)
	{
		cin >> val;
		if (val > num)
		{
			cout << "�´���" << endl;
		}
		else if (val < num) 
		{
			cout << "��С��" << endl;
		}
		else
		{
            cout << "�¶���" << endl;
			break;//������break�Ƴ���ǰѭ��
		}
		
	}
*/
























	//whiteѭ�� ����Ļ�д�ӡ0~9ʮ������
	/*
	int num = 0;
	while (num<10)
	{
		cout << num << endl;
		num++;
	}
	*/
















	//switch��� ����Ӱ��� 10~9 ���� ,,,,,,
	
 /*
cout << "�����Ӱ���" << endl;
	int score = 0;
	
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;
	switch (score)
	{
	case 10 :
		cout << "����Ϊ�Ǿ����Ӱ"  << endl;
		break;
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ�Ƿǳ��õ�Ӱ" << endl;
		break;
	case 7:
		cout << "����Ϊ�Ƿǳ��õ�Ӱ" << endl;
		break;
	case 6:
		cout << "����Ϊ�Ǻõ�Ӱ" << endl;
		break;
	case 5:
		cout << "����Ϊ�Ǻõ�Ӱ" << endl;
		break;
	default:
		cout << "����Ϊ����Ƭ" << endl;
		break;
	}

*/






	//��Ŀ����� ��a��b���Ƚϣ��������ֵ��ֵ������c
	/*
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);
	cout << "c=" << c << endl;
*/





	/*
	int A = 0;
	int B = 0;
	int C = 0;
	cout << "������С��A�����أ� " << endl;
	cin >> A;
	cout << "������С��B�����أ� " << endl;
	cin >> B;
	cout << "������С��C�����أ� " << endl;
	cin >> C;
	cout << "С��A�����أ� " << A << endl;
	cout << "С��B�����أ� " << B << endl;
	cout << "С��C�����أ� " << C << endl;

	if (A > B)
	{
		if (A > C)
		{
			cout << "С��A����" << endl;
		}

		else
		{
			cout << "С��C����" << endl;
		}
	}
	else
	{
		if (B > C)
		{
			cout << "С��B����" << endl;
		}
		else
		{
			cout << "С��C����" << endl;
		}
	}
	 
*/




























	/*
	int score = 0;//��ʾ����߿����� 
	cout << "������һ�������� " << endl;
	cin >> score; 
	cout << "������ķ����ǣ�" << score << endl;
	if (score > 600)
	{
		cout << "��ϲ��������һ����ѧ " << endl;
		if(score>700)
			{
			cout << "���ܿ��ϱ�����ѧ " << endl;
		}
		else if (score > 650)
			{
			cout << "���ܿ����廪��ѧ " << endl;
		}
		else
		{
            cout << "���ܿ��������ѧ " << endl;
		}
		
	}
	else if (score > 500)
	{
		cout << "��ϲ�������˶�����ѧ " << endl;
	}
	else if (score > 400)
	{
		cout << "��ϲ��������������ѧ " << endl;
	}
	else
	{
		cout << "δ�����˱��ƴ�ѧ�����ٽ����� " << endl;
	}
	    
*/























	/*int score = 0;
	cout << "������һ�������� " << endl;
	cin >> score;*/
	/*cout << "������ķ����ǣ�" << score << endl;
	if (score > 600)
	{
		cout << "��ϲ��������һ����ѧ " << endl;
	}
	else if (score > 500)
	{
		cout << "��ϲ�������˶�����ѧ " << endl;
	}
	else if (score > 400)
	{
		cout << "��ϲ��������������ѧ " << endl;
	}
	else
	{
		cout << "δ�����˱��ƴ�ѧ�����ٽ����� " << endl;
	}
	*/













	//if���нṹ

	// int score = 0;
	//cout << "������һ�������� " << endl;
	//cin >> score;
	//cout << "������ķ����ǣ�" << score << endl;
	//if (score > 600)
	//{
	//	cout << "��ϲ��������һ����ѧ " << endl;
//
	//}
	//else//������600�֣�ִ��else��������е�����
	//{
	//	cout << "δ������һ����ѧ " << endl;
	//}

	









	//ѡ��ṹ ����if���
	//�û���������������������600����Ϊ����һ����ѧ��������Ļ�����
	// 1.�û�������� 2. ��ӡ�û�����ķ��� 3.�жϷ����Ƿ����600��������ڣ���ô���
	//int score = 0;
	//cout << "������һ�������� " << endl;
	//cin >> score;
	//cout << "������ķ����ǣ�" << score << endl;
	//if (score > 600)
	//{
	//	cout << "��ϲ��������һ����ѧ " << endl;
	//}
	 

























	//int a = 10; //ǰ�õ������õ���ǰ�úͺ��õ�����
    //++a; //�ñ���+1
	//cout << "a=" << a << endl;
	//int b = 10;
	//b++;
	//cout << "b=" <<b << endl;
	////���� ǰ�������ñ���+1Ȼ����б��ʽ���� �������Ƚ��б��ʽ���� ���ñ���+1
	//int a2 = 10;
	//int b2 = ++a2 * 10;
	//cout << "a2=" << a2 << endl;
	//cout << "b2=" << b2 << endl;

	//int a3 = 10;
	//int b3 = a3++ * 10;
	//cout << "a3=" << a3 << endl;
	//cout << "b3=" << b3 << endl;//










	//1�����Ρ������͡��ַ��͡��ַ����͡�bool��������

	//int a = 0;
	//cout << "������α���a��ֵ"<< endl;
	//cin >> a;
	//cout << "���α���a = " << a<<endl;


	//float f = 3.14f;
	//cout << "��������ͱ���f��ֵ" << endl;
	//cin >> f;
	//cout << "�����ͱ���f = " << f << endl;

	//char ch = 'a';
	//cout << "����ַ��ͱ���a��ֵ" << endl;
	//cin >> ch;
	//cout << "�ַ��ͱ�������a = " << ch << endl;

	//string str = "hello";
	//cout << "����ַ���str��ֵ" << endl;
	//cin >> str;
	//cout << "�ַ���str = " << str << endl;

	//bool flag = false;
	//cout << "���bool����flag��ֵ" << flag<<endl;
	//cin >> flag;
	//cout << "bool����flag = " << flag<< endl;//bool����ֻҪ�Ƿ����ֵ��������
















	//bool flag = true;//����bool��������
	//cout << flag << endl;

	//flag = false;
	//cout << flag << endl;
	//cout << "bool������ռ�ڴ�ռ�" << sizeof(bool) << endl;//�鿴bool������ռ�ڴ�ռ�





	//char str1[] = "hello world";//c����ַ���
	//cout << str1 << endl;//ע������ �ַ����������������� �Ⱥź���Ҫ��˫���Ű����ַ���ֵ 
	
	//string str2 = "hello world";//ע������  ��c++������ַ���ʱ Ҫ����#include<string>ͷ�ļ�
	//cout << str2 << endl;










	//cout << "Hello World!\n" ;//����

	//cout << "\\"<<endl;//��б���ַ�

	//cout << "aaaa\tHello World!" << endl;//ˮƽ�Ʊ�
	//cout << "aa\tHello World!" << endl;
	//cout << "aaaaaa\tHello World!" << endl;// ��t������������ڴ��ڱȽ�����




	//char ch1 = 'a';
	//cout << ch1 << endl;
	//cout << " charռ���ڴ�ռ�Ϊ��" << sizeof(char) << endl;
	// << (int)ch1 << endl;//�鿴�ַ��ͱ�����Ӧ��ASCII����//a=97  A=65





	//float f1 = 3.14f;//float�������ֺ�������f
	//cout << "f1 = " << f1 << endl;
	//double d1 = 3.1415926;//Ĭ����������һ��С������λ��Ч���֣�������������λ����Ҫ���û�����
	//cout << "d1 = " << d1 << endl;
	//cout << " floatռ���ڴ�ռ�Ϊ��" << sizeof(float) << endl;
	//cout << " doubleռ���ڴ�ռ�Ϊ��" << sizeof(double) << endl;
	//float f2 = 3e2;//��ѧ��������3*10^2;
	//cout << "f2 = " << f2 << endl;
	//float f3 = 3e-2;//3*0.1^2
	//cout<< "f3 = " << f3 << endl;















	//short num3 = 32768;//-32768--32767
	//int num4 = 32768;
	//long num5 = 10;
	//cout << " intռ���ڴ�ռ�Ϊ��" << sizeof(num4) << endl;
	//long long num6 = 10;
	//cout << "num3 = " << num3 << endl;
	//cout << "num4 = " << num4 << endl;
	//cout << "num5 = " << num5 << endl;
	//cout << "num6 = " << num6 << endl;
	
	
	









	
	//int num1 = 10;
	//int num2 = 20;
	//int sum = num1 + num2;
	//cout << sum  <<endl;
	
	
	
	









	
	
	//cout << " һ���ܹ��м��� " << day << "��" << endl;
	//const int month = 12;
	//cout << " һ���ܹ��� " << month << "���·�" << endl;









	//int a = 10;
	//cout << " a = " << a << endl;//�������


	




   // log("Hello World!");//���hello world
   // std::cin.get();


}