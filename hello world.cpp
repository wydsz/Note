#include <iostream>
using namespace std;//不管写任何c++文件都要写这俩行
void log(const char* message);//声明log函数
#include<string>//用c++风格定义字符串时，要包含这个头文件
#include"point.h"
#include"circle.h"
//#include"swap.h"
//#define day 7
#include"bubbleSort.h"
#include"printArray.h"
#include<ctime>
    //实现一个加法函数，功能事，传入俩个整形数据，计算数据相加的结果，并且返回；
	// 1、返回值类型 2、int 函数名3、 add 参数列表 （int num1 ,int num2） 4、函数体语句5、 return表达式
    //函数的定义
/*
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
*/
//实现俩个数字进行交换函数
//如果一个函数不需要返回值，声明的时候可以写void
/*
void swap(int num1, int num2)
{
	cout << "交换前数字是：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后数字是：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;



	return;//当返回值不需要的时候可以不写
}
*/
 //函数的声明
 //比较函数，实现俩个整形的数字进行比较，返回较大的值
/*
int max(int a, int b)
{
	return a > b ? a : b;//三目运算符
}
*/

//提前告诉编译器函数的存在，可以利用函数的声明
//函数声明  这样这个max函数就可以写到main后面
//int max(int a, int b)
/*void swap02(int* p1, int* p2)//接受地址
{

	int  temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
*/





//创建学生数据类型：学生包括（姓名、年龄、分数）
	// 语法 struct 类型名称 {成员列表}  自定义数据类型得本质就是 一些类型集合组成得一个类型

/*
struct Student
{


	string name;//姓名
	int age;//年龄
	int score; //分数




}s3;//创建一个结构体变量

*/

/*
//结构体数组 
// 1、定义结构体 2、 创建结构体数组 3、给结构体数组中得元素赋值 4、遍历结构体数组

struct Student
{

	string name;//姓名
	int age;//年龄
	int score; //分数


};
*/
/*
struct Student
{

	string name;//姓名
	int age;//年龄
	int score; //分数


};

struct teacher
{
	int id;//教师编号
	string name;//教师姓名
	int age;//教师年龄
	struct Student stu;//辅导得学生
};
*/
/*
struct Student
{

	string name;//姓名
	int age;//年龄
	int score; //分数


};

void printStudent1(struct Student s)//值传递
{
    s.age = 200;
	cout << "在子函数中打印 姓名：" << s.name << "年龄：" << s.age << "分数：" << s.score << endl;
}

void printStudent2(struct Student * p )//地址传递
{
	p->age = 200;
	cout << "在子函数2中打印 姓名：" << p->name << "年龄：" << p->age << "分数：" << p->score << endl;
}
*/
/*
struct Student
{

	string name;//姓名
	int age;//年龄
	int score; //分数


};
void printStudent(const struct Student *s)//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
{
	//s->age = 150;//加入const后，一旦有修改的操作就会报错，可以防止我们的误操作
	cout << "姓名：" << s->name << "年龄：" << s->age << "分数：" << s->score << endl;
}
*/
/*
struct Student
{

	string sname;//姓名
	int score; //分数


};
struct teacher
{
	string tname;//教师姓名
	struct Student sArray[5];
};
//给老师和学生赋值得函数
void allocateSpace(struct teacher tArray[],int len)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].tname = "Teacher_";
		tArray[i].tname += nameSeed[i];//在Teacher_追加abc 用+=

		//通过循环给每名老师所带的学生赋值
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
		cout << "老师姓名：" << tArray[i].tname << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].sname <<
				"考试分数："<< tArray[i].sArray[j].score<<endl;
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
//输出函数。
void printIofo(struct Hero HArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "英雄姓名：" << HArray[i].name
			<<"年龄：" << HArray[i].age
			<<"性别："<< HArray[i].sex<<endl;
	}
}
//冒泡排序 实现年龄的升序排列
void BubbleSort(struct Hero HArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		//内层循环对比
		for (int j = 0; j < len - i - 1; j++)
		{
			//如果第一个数字比第二个数字大，实现交换俩个数字
			if (HArray[j].age > HArray[j + 1].age)
			{
				struct Hero temp = HArray[j];//交换俩个数字的办法，记住
				HArray[j] = HArray[j + 1];
				HArray[j + 1] = temp;
			}
		}
	}

}
*/

/*
//全局变量
int g_a = 10;
int g_b = 10;


const int c_g_a = 10;//const修饰的全局变量，也叫全局常量
const int c_g_b = 10;
*/
/*
int * func(int b)//形参数据也会放在栈区
{

	int a = 10;//局部变量  目前存放在栈区，栈区的数据在函数执行完后自动释放
	return &a;//返回局部变量的地址

}
*/
/*
int * func()
{
	//利用new关键字  可以将数据开辟到堆区
	//指针本质也是局部变量，放在栈上，指针保存的数据是放在堆区
	int *p=new int(10);
	return p;


}
*/



//new得基本语法
//在堆区利用new开辟数组

/*
int* func()
{
	//在堆区创建整形数据
	//new返回是该数据类型得指针
	int * p=new int(10);
	return p;

}
void test01()
{
	int* p = func();
	cout << *p << endl;
	delete p;
	//堆区得数据 由程序员管理开辟，程序员管理释放
	//如果想释放堆区得数据，利用delete关键字删除
	//cout << *p << endl;//内存已经被释放，再次访问就是非法
}
void test02()
{
	//创建10整形数据得数组，在堆区

	int * arr =new int[10];//10代表数组有10个元素,记录这个数组得是首地址
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;

	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//释放堆区数组
	delete[]arr;//释放数组得时候，要加[]才可以
}
*/
//交换函数
/*
//1、值传递
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "mySwap01 a= " << a << endl;
	cout << "mySwap01 b= " << b << endl;
}
//2、地址传递
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3、引用传递
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
*/
/*
//引用做函数的返回值
	//1、不要返回局部变量的引用
int& test01()
{
	int a = 10;//局部变量存放在四区中的 栈区
	return a;
}
*/
//2、函数的调用可以作为左值
/*
int& test02() 
{
	static int a = 10;//静态变量，存放在全局区，全局区上的数据在程序结束后系统释放
	return a;
}
//打印数据函数
void showValue(const int &val)
{
	///val = 1000;
	cout << "val=" << val << endl;
}
*/
//函数默认参数
//如果我们自己传入数据，就用自己的数据，如果没有，那么用默认值
//语法： 返回值类型 函数名（形参=默认值）
//注意事项
//1、如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
//2、如果函数声明有默认参数，函数实现就不能有默认参数
//声明和实现只能有一个有默认参数 
/*
int func(int a, int b=20, int c = 30)
{
	return a + b + c;


}
*/
//占位参数
//目前现阶段的占位参数，我们还用不到，后面课程中会用到
//占位参数 还可以有默认参数
/*
void func(int a,int)
{
	cout << "this is func " << endl;
}
*/

//函数重载
//可以让函数名相同，提高复用性
/*
void func()
{
	cout << "func的调用" << endl;
}
void func(int a)
{
	cout << "func(int a)的调用!" << endl;
}
void func(double a)
{
	cout << "func(double a)的调用!" << endl;
}
void func(int a, double b)
{
	
		cout << "func(int a, double b)的调用!" << endl;
	
}
void func(double a, int b)
{

	cout << "func(double a, int b)的调用!" << endl;

}
*/
//注意事项
//函数的返回值不可以作为函数重载的条件

/*
//函数重载的注意事项
//1、引用作为重载的条件
void func(int& a)// int &a=10;不合法
{
	cout << "func(int &a)的调用" << endl;
}
void func(const  int& a)//const int &a=10; 合法 
{
	cout << "func(const int &a)的调用" << endl;
}
//2、函数重载碰到默认参数
void func2(int a,int b=10)
{
	cout << "func2( int a,int b=10)的调用" << endl;
}
void func2(int a)
{
	cout << "func2( int a)的调用" << endl;
}
*/


/*

//c++面向对象特性 封装
//设计一个圆类，求圆的周长
const double PI = 3.14;//常量PI
class	Circle //代表要设计一个类了。
{
	//访问权限（后面还有其他权限还会讲）
	//公共权限
public:

	//属性
	int m_r;//半径
	//行为  在代码中通常用一个函数来代表它
	double calculateZC()//获取周长函数
	{
		return 2 * PI *m_r;
	}
};
*/
/*
//封装案例——设计一个学生类,属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class Student
{
public://公共权限
	//属性


	//类中的属性和行为，我们统一成为成员
	//属性也叫成员属性 成员变量
	//行为也叫成员函数 成员方法


	string Studentname;
	int StudentID;

	void showStudentname()
	{
		cout<<"姓名：" << Studentname<<"学号："<< StudentID << endl;
	}
	//通过行为（函数）给属性赋值
	void setName(string name)//括号里时要接收的数据
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
//访问权限三种  
//公共     public —成员类内可以访问  类外也可以访问
//保护     protected —成员类内可以访问 类外不可以访问 儿子也可以访问父亲中保护的内容
//私有     private— 成员类内可以访问 类外不可以访问（保护和私有在后面继承那块有区别） 继承的儿子都不可以访问父亲的私有内容   
class Person
{
public://公共权限
	
	string Name;
    
protected://保护权限

	string Car;
private://私有权限

	int Password;//银行卡密码
public:
		void func()
	{
			Name = "夏超";
			Car = "路虎揽胜行政版V8";
			Password = 253779;
	}

};
*/
/*
class C1
{
	int m_A;//默认权限——私有
};
struct C2
{
	int m_A;//默认权限——公共
};
*/
/*
//成员属性设置为私有
//1、可以自己控制读写的权限
//2、对于写可以检测数据有效性
class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}
	//获取年龄
	void setAge(int age)//在写程序中发现一个自己对于函数的一个误区，若void那块写了int double这种具体类型，那么就是要有数据返还到主函数mian中。那么函数结构体中要有return这样的返还语句。若void，则不需要返还到主函数什么数据，只需要从主函数接收数据到（）中。
	{
		if (age < 0 || age>150)
		{
			cout << "年龄输入有误，赋值失败" << endl;
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
	string m_Name;//姓名 可读可写

	int m_Age;// 年龄 只读 在检测数据有效姓时可以写了（年龄必须在0到150之间）

	string m_Idol;//偶像 只写

};
*/
/*
//封装案例一：求立方体面积和体积并判断俩个立方体是否相等。
//1、创建立方体类
//2、设计属性
//3、设计行为 获取立方体面积和体积
//4、分别利用全局函数和成员函数判断俩个立方体是否相等
class Cube {
private:
	int m_l;//长
	int m_w;//宽
	int m_h;//高
public:
	//设置长 设置（set）
	void setL(int l)
	{
		m_l = l;
	}
	//获取长
	int getL()
	{
		return m_l;
	}
	//设置宽
	void setW(int w)
	{
		m_w = w;
	}
	//获取宽
	int getW()
	{
		return m_w;
	}
	//设置高
	void setH(int h)
	{
		m_h = h;
	}
	//获取高
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
	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube &c)
	{
		if (m_l == c.getL() && m_h == c.getH() && m_w == c.getW())
		{
			return true;
		}
		    return false;
	}

};
//利用全局函数判断来个立方体是否相等
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW())
	{
		return true;
	}
		return false;
}
*/
//练习案例2：点和圆得关系
//设计一个圆形类（Circle），和一个点类（Point）,判断二者得关系
//点类

/*
class Point
{
private:
	int m_X;
	int m_Y;
public:
	//设置X
	void setX(int x)
	{
		m_X = x;
	}
	//获取X
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
	int m_R;//半径
	Point m_Center;//圆心 //在类中可以让另一个类作为本类中得成员存在
public:
	//设置半径
	void setR (int r)
	{
		m_R = r;
	}
    //获取半径
		int getR()
	{
		return m_R;
	}
	//设置圆心
	void setCenter(Point center)
	{
		m_Center = center;
	}
	//获取圆心
	Point getCenter()
	{
		return m_Center;
	}
};
*/
/*
//判断点和圆得关系函数
void isInCircle(Circle& c, Point& p)
{
	//计算俩点之间的距离 平方
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
     //计算半径得平方
	int rDistance = c.getR() * c.getR();
	//判断关系
	if(distance==rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}


}
//对象的初始化和清理
//1、构造函数 进行初始化的操作
class Person
{
public:
	//1.1 构造函数
	Person()
	{
		cout << "Person 构造函数的调用" << endl;
	}
	//2. 析构函数
	~Person()
	{
		cout << "Person 析构函数的调用" << endl;
	}

};
void test01()
{
	Person p;//在栈上的数据，test01执行完毕后，会释放这个对象。
}
//构造和析构都是必须有的实现，如果我们不提供，编译器会提供一个空实现的构造和析构。
*/

/*
//构造函数的分类及调用
//分类
//按照参数分类 分为有参和无参
//按照类型分类 分为普通和拷贝
class Person
{
public:
	//1.1 构造函数
	//普通构造
	Person()
	{
		cout << "Person 的无参构造函数的调用" << endl;//无参构造也叫默认构造
	}
	Person(int a)
	{
		age = a;
		cout << "Person 的有参构造函数的调用" << endl;//有参
	}
	//2. 析构函数
	~Person()
	{
		cout << "Person 析构函数的调用" << endl;
	}
	//拷贝构造函数
	Person(const Person& p)
	{
		//将传入的人身上的所有的属性，拷贝到我身上
		age = p.age;
		cout << "Person 拷贝构造函数的调用" << endl;
	}
	int age;
};
//调用
void test01()
{
	//方式——括号法、显示法、隐式转换法
	//1、括号法
	//Person p1;//默认（无参）构造函数调用
	//Person p2(10);//有参构造函数调用
	//怎么利用括号法调用拷贝构造函数
	//Person p3(p2); //拷贝构造函数调用
	//注意事项一
	//  在调用默认构造函数的时候，不要加小括号——（）
	// 因为 下面这行代码，编译器会认为是一个函数的声明,不会认为在创建对象
	// Person p1();
	// void func();
	//cout << "p2的年龄为：" << p2.age << endl;
	//cout << "p3的年龄为：" << p2.age << endl;
	//2、显示法
	//Person p1;//默认构造
	//Person p2 = Person(10);//有参构造
	//Person p3 = Person(p2);//拷贝构造

	//	Person(10);//单独拿出来是匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象
	//	cout << "aaaa" << endl;
	//注意事项2
	//不要利用拷贝构造函数 初始化匿名对象
	//Person(p3);//编译器会认为Person(p3)=== Person p3;会认为对象声明
	//3、隐式转换法
	Person p4 = 10;//相当于写了 Person p4 =Person(10) 有参构造
	Person p5 = p4;
}
*/

/*
//拷贝构造函数调用时机
//1、使用一个已经创建完毕的对象来初始化一个新对象
//2、值传递的方式给函数参数传值
//3、值方式返回局部对象
class Person 
{
public:
	Person()
	{
		cout << "Person 的无参(默认)构造函数的调用" << endl;
	}
	Person(int age)
	{
		m_Age = age;
		cout << "Person 的有参构造函数的调用" << endl;//有参
	}
	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "Person 拷贝构造函数的调用" << endl;
	}
	int m_Age;
	~Person()
	{
		cout << "Person 析构函数的调用" << endl;
	}
};
/*void test01()
{
	//1、使用一个已经创建完毕的对象来初始化一个新对象
	Person p1(20);
	Person p2(p1);
	cout << "p2的年龄：" << p2.m_Age << endl;
}*/
/*void dowork(Person p)
{

}
void test02()
{
	//2、值传递的方式给函数参数传值
	Person p;
	dowork(p);
}
//3、值方式返回局部对象

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
//构造函数的调用规则
//1、创建一个类，c++编译器会给每个类都添加至少三个函数
//默认构造（空实现）
//析构函数（空实现）
//拷贝构造（只拷贝）
class Person
{
public:
	Person()
	{
		cout << "Person 的无参(默认)构造函数的调用" << endl;
	}
	Person(int age)
	{
		m_Age = age;
		cout << "Person 的有参构造函数的调用" << endl;//有参
	}
	Person(const Person& p)
	{
		m_Age = p.m_Age;
		cout << "Person 拷贝构造函数的调用" << endl;
	}
	int m_Age;
	~Person()
	{
		cout << "Person 析构函数的调用" << endl;
	}
};
/*void test01()
{
	Person p;
	p.m_Age = 18;
	Person p2(p);//即使没有写拷贝构造函数，系统也会默认帮你写一个然后值拷贝到p2上
	cout << "p2的年龄为" << p2.m_Age << endl;
}*/
//2、如果我们写了有参构造函数，编译器就不再提供默认构造函数，但依然提供拷贝构造函数
//如果我们写了拷贝构造函数，编译器就不再提供其他的普通构造函数
/*
void test02()
{
	Person p;
	Person p2(p);
	cout << "p2的年龄为" << p2.m_Age << endl;
}
*/
/*
class Person
{
public:
	Person()
	{
		cout << "Person 的无参(默认)构造函数的调用" << endl;
	}
	Person(int age,int height)
	{
		m_Age = age;
		m_Height=new int(height);
		cout << "Person 的有参构造函数的调用" << endl;//有参
	}
	//自己实现拷贝构造函数 解决浅拷贝带来的问题
	Person(const Person& p)
	{
		m_Age = p.m_Age;
		//m_Height = p.m_Height;编译器默认实现就是这行代码-浅拷贝
		//深拷贝操作
		m_Height=new int(*p.m_Height);
		cout << "Person 拷贝构造函数的调用" << endl;
	}
	int m_Age;//年龄
	int* m_Height;
	~Person()
	{
		//析构代码，将堆区开辟的数据做释放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person 析构函数的调用" << endl;
	}
};
void test01()
{
	Person p1(18,160);
	cout << "p1的年龄为" << p1.m_Age <<"身高为："<<*p1.m_Height<< endl;
	Person p2(p1);
	cout << "p2的年龄为" << p2.m_Age << "身高为：" << *p2.m_Height<< endl;



}
*/
/*
//初始化列表
class Person
{
public:
	//传统初始化操作
	Person(int a, int b, int c)
	{
		m_A=a;
	    m_B=b;
		m_C=c;
	}
	//初始化列表初始化属性
	Person() :m_A(10), m_B(20), m_C(30)
	{

	}
	//更灵活得方式
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
//类对象作为类的成员
class Phone
{
public:
	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone的构造函数调用" << endl;
	}

	~Phone()
	{
		cout << "Phone 析构函数的调用" << endl;
	}

	//品牌
	string m_PName;
};
class Person
{
public:
	//姓名
	string m_Name;
	//手机
	Phone m_Phone;
	//Phone m_Phone = pName; 隐式转换法
	Person(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person的构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person 析构函数的调用" << endl;
	}

};
//当其它类的对象作为本类的成员时，创建本类对象时会优先构造其它类的对象，在构造自身。
//析构的顺序与构造相反。先进后出
void test01()
{
	Person p("张三", "苹果");
	cout << p.m_Name << "拿着：" << p.m_Phone.m_PName << endl;
}
*/


/*
//静态成员变量
class Person
{
public:
	//1、所以对象都共享同一份数据
	//2、编译阶段就分配内存
	//3、类内声明，类外初始化操作
	static int m_A;//类内声明
	
private:
	static int m_B; //静态成员变量也是有访问权限的

};
int Person::m_A=100;//类外初始化操作
int Person::m_B=200;
void test01()
{
	Person p;
	cout << p.m_A << endl;
	Person p2;
	p2.m_A = 200; //所以对象都共享同一份数据
	cout << p.m_A << endl;
}
void test02()
{
	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式
	//1、通过对象进行访问
	//Person p;
	//cout << p.m_A << endl;
	 
	
	//2、通过类名进行访问  非静态成员只能通过创建对象进行访问

	cout << Person::m_A << endl;

	//cout << Person::m_B << endl;私有权限下，类外不可以访问
}
*/
/*
//静态成员函数
//所有对象共享同一个函数
//静态成员函数智能访问静态成员变量
class Person
{
public:
	//静态成员函数
	static void func()
	{
		m_A = 100;//静态成员函数可以访问静态成员变量
		//m_B = 200;//静态成员函数不可以访问非静态成员变量
		cout << "statci void func 的调用" << endl;
	}
	static int m_A;//类内声明
	int m_B;
	//因为数据m_B是特定对象的属性，但编译器无法区分到底是哪个对象的属性
	
private:
	static void func2()//静态成员函数也是有访问权限的
	{
		cout << "statci void func2 的调用" << endl;
	}


};

int Person::m_A = 0;
void test01()
{
	//1通过对象访问
	Person p;
	p.func();
	//2、通过类名访问
	Person::func();
	//Person::func2();//类外访问不到私有静态成员函数
} 
*/ 
/*
//成员变量 和成员函数分开存储
class Person
{
	int m_A;//非静态成员变量 属于类的某一个对象上
	static int m_B;//静态成员变量 类内声明 不属于类的某一个对象上
	void func()//非静态成员函数  不属于类的某一个对象上
	{

	}
	static void func2() {}//静态成员函数 不属于类的某一个对象上

};
int Person::m_B;//类外声明
void test01()
{
	Person p;
	//空对象占用内存空间为：1
	//c++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	cout << " size of p=" << sizeof(p) << endl;
}
void test02()
{
	Person p;
	cout << " size of p=" << sizeof(p) << endl;//只要不是空对象，就按照int类型分配内存空间
}
*/
/*
//this指针的使用
class Person
{
public:
	Person(int age)//1、解决名称冲突
	{
		this->age = age;//this指向的是被调用的成员函数所属对象
	}
	int age;
	Person &PersonAddAge(Person& p)
	{
		this->age +=p.age;

		return *this;//this指向p2的指针，而*this指向的就是p2
	}
	Person(const Person& p)
	{
		age = p.age;
		cout << "Person 拷贝构造函数的调用" << endl;
	}
};
void test01()
{
	//Person p1(10);
	//cout << "p1的年龄" << p1.age << endl;
}
//2、返回对象本身用*this
void test02()
{
	Person p1(10);

	Person p2(10);
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);//链式编程思想无限追加
	cout << "p2的年龄" << p2.age << endl;
}
*/
/*
//空指针访问成员函数
class Person
{
public:
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}
	void showClassAge()
	{
		//报错原因是因为传入的指针是为NULL
		//解决措施
		if (this == NULL)
		{
			return;//这段if就是提供代码健壮性，防止空指针
		}
		cout << "age=" <<this-> m_Age << endl;
	}
	int m_Age;
};
void test01()
{
	Person* p = NULL;
	p->showClassAge();//因为这个Age涉及到了具体对象的属性，而此时指针是空指针
	//p->showClassName();
}
*/
/*
//const修饰成员函数
class Person 
{
public:
	int m_A;
	//常函数
	//this指针的本质是指针常量 指针的指向是不可以修改的
	//const Person *const this;
	//在成员函数后面加const，本质修饰的是this指针，让this指针指向的值也不可以修改
	void showPerson() const
	{
		this->m_B=100;//特殊变量，加mutable关键字,即使在常函数中，也可以修改这个值，
		//this=NULL;//this指针不可以修改指针的指向
		//this->m_A = 100;//但是可以修改指针指向的内容的值，但加了const后，针指向的内容的值也不能修改
	}
	void func()
	{

	}
	mutable int m_B;//特殊变量，加mutable关键字,即使在常函数中，也可以修改这个值，
};
void test01()
{
	Person p;
	p.showPerson();
}
void test02()
{
	//常对象
	const Person p;//在对象前加const，变为常对象，不允许修改对象属性
	//p.m_A = 100;//不可以修改普通对象
	p.m_B = 100;//B是特殊值，在常对象下也可以修改
	
	//p.func();//常对象只能调用常函数
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
	//创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//创建点
	Point p;
	p.setX(10);
	p.setY(10);
	//判断关系
	isInCircle(c, p);

*/

/*
	Cube c1;
	
	c1.setL(10);
	c1.setH(10);
	c1.setW(10);
	cout << "c1立方体面积：" << c1.calculateS() << endl;
	cout << "c1立方体体积：" << c1.calculateV() << endl;
	
	Cube c2;
	c2.setL(10);
	c2.setH(10);
	c2.setW(10);
	cout << "c2立方体面积：" << c2.calculateS() << endl;
	cout << "c2立方体体积：" << c2.calculateV() << endl;


	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1和c2是相等得" << endl;
	}
	else
	{
		cout << "c1和c2是不相等得" << endl;
	}

	ret = c1.isSameByClass(c2);//利用成员函数，只需传一个参量就可以
	if (ret)
	{
		cout << "成员函数判断 c1和c2是相等得" << endl;
	}
	else
	{
		cout << "成员函数判断 c1和c2是不相等得" << endl;
	}
*/

	/*
	Person p;
	p.setName("刘文静");
	cout << "姓名：" << p.getName() << endl;
	//年龄设置
	p.setAge(160);//这个错误原因是没有这个函数
	//p.m_Age=20；这个错误原因是年龄是私有的数据，并且没有设置公共的写年龄函数
	cout << "年龄: " << p.getAge() << endl;//获取年龄
	//p.setIdol("李易峰");
	//cout << "偶像：" << p.getIdol() << endl;//偶像是只写状态 外界访问不到

*/



/*
	//struct和class的区别
	// struct 默认权限是公共 public
	//class默认权限是私有 private

	C1 c1;
	c1.m_A = 100;//报错了，不能访问
	C2 c2;
	c2.m_A = 100;

*/










	/*
	Person p1;
	p1.Name = "别别";
	//p1.Car = "奔驰s";//保护权限内容在类外访问不到
	//p1.Password = 979797;//私有权限内容在类外访问不到


*/










	/*
	Circle c1;//用过圆类 创建具体的圆（对象）——实例化——通过一个类创建一个对象的过程
	c1.m_r = 10;//给圆对象的属性进行赋值
	cout << "圆的周长为：" << c1.calculateZC() << endl;

*/
	/*
	//创建一个具体学生 实例化对象
	Student s1;
	//给s1对象进行赋值操作
	/*s1.Studentname = "xiachao";//写字符串时，俩边要用双引号引上
	s1.StudentID = 2628382;
	s1.showStudentname();//引用函数要在函数后面加括号

	s1.setName("xiachao");//括号里时要发送的数据
	s1.setID(2628382);
	s1.showStudentname();

*/










	/*
	//int a = 10;
	//func(a);//调无const的
	//func(10);//调有const的
	//func2(10);//当函数重载碰到默认参数，出现二义性，避免这种情况
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
	//常量引用
	//使用场景：用来修饰形参，防止误操作

	int a = 10;

	//加上const之后 编译器将代码修改 int temp=10; const int &ref =temp;
	 const  int& ref = 10;//引用必须引一块合法的内存空间
	 ref=20//加入const之后变为只读，不可以修改

	 //函数中利用常量引用防止误操作改变实参
	int a = 100;
	showValue(a);
	cout << "a=" << a << endl;
*/












	/*
	 //引用做函数的返回值
	//1、不要返回局部变量的引用
	int &ref = test01();
	cout << "ref=" << ref << endl;//作为局部变量 内存已经释放不再存在了


	//2、函数的调用可以作为左值
	int& ref2 = test02();
	cout << "ref2=" << ref2 << endl;
	test02() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值
	cout << "ref2=" << ref2 << endl;
*/
















	/*
	int a = 10;
	int b = 20;
	 
	//mySwap01(a, b);//值传递，形参不会修饰实参的
	//mySwap02(&a, &b);//地址传递，形参会修饰实参的
	mySwap03(a , b);//引用传递，形参也会修饰实参的

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
*/









	/*
	//引用基本语法
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
	//在堆区开辟数据


	int* p = func();
	cout << *p <<endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

*/



	/*
	//栈区数据注意事项——不要返回局部变量的地址
	//栈区的数据由编译器管理开辟和释放

	int* p = func(1);
	cout << *p << endl;//第一次可以打印正确的数字，是因为编译器做了保留
	cout << *p << endl;//第二次这个数据就不再保留了


*/















/*
	//内存四区


	//全局区
// 全局变量、静态变量、常量
//创建普通局部变量
	int a = 10;//在main函数里面的变量全是局部变量
	int b = 10;
	cout << "局部变量a的地址为: " << (int)&a << endl;
	cout << "局部变量b的地址为: " << (int)&b << endl;


	cout << "全局变量g_a的地址为: " << (int)&g_a << endl;
	cout << "全局变量g_b的地址为: " << (int)&g_b << endl;

	//静态变量
	static int s_a = 10;//在普通变量前面夹static，属于静态变量也会放在全局区
	static int s_b = 10;
	cout << "静态变量s_a的地址为：" << (int)&s_a << endl;
	cout << "静态变量s_b的地址为：" << (int)&s_b << endl;

	//常量  分为字符串常量 和 const修饰的变量
	cout << "字符串常量的地址：" << (int)&"hello world" << endl;
	//const修饰的变量还分为：
	//const修饰的全局变量，const修饰的局部变量

	cout << "全局常量 c_g_a的地址为：" << (int)&c_g_a << endl;
	cout << "全局常量 c_g_b的地址为：" << (int)&c_g_b << endl;

	const int c_l_a = 10;//c—const g—global l-local
	const int c_l_b = 10;
	cout << "局部常量 c_l_a的地址为：" << (int)&c_l_a << endl;
	cout << "局部常量 c_l_b的地址为：" << (int)&c_l_b << endl;


*/




	/*

	//设计一个英雄的结构体，包括成员的姓名、年龄、性别；创建结构体数组，数组中存放5名英雄
	//通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果


	struct Hero HArray[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	int len = sizeof(HArray) / sizeof(HArray[0]);
	
	BubbleSort(HArray, len);
    printIofo(HArray, len);

*/



















	/*
	//随机数种子
	srand((unsigned int)time(NULL));

	//学校要做毕设项目，每名老师带5个学生，一共有三个老师
	//需求 设计老师和学生得结构体，老师得结构体中，有老师得姓名和一个存放5名学生得数组，
	// 学生成员得姓名、考试分数、创建数组存放3名老师，通过函数给每个老师及所带得学生赋值，最终打印出老师得数据以及老师所带学生的数据

	struct teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	printIofo(tArray, len);

*/













	/*
	struct Student s = { "张三",15,70 };

	printStudent(&s);


*/


	/*
	struct Student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;

    printStudent1(s);//值传递
    printStudent2(&s);//地址传递


	cout << "在main函数中打印 姓名：" << s.name << "年龄：" << s.age << "分数：" << s.score << endl;
*/
	
	












	/*
	teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;
	cout << " 老师姓名： " << t.name
		 << " 老师年龄： " << t.age
		 << " 老师编号： " << t.id 
		 <<"老师辅导学生的姓名：" << t.stu.name
	     << "老师辅导学生的年龄：" << t.stu.age 
		 <<"老师辅导学生的分数："<< t.stu.score<<endl;

*/



	/*
	//创建学生结构体变量
	//通过指针指向结构体变量
	//通过指针访问结构体变量中得数据
	struct Student s = { "张三",18,100 };

	struct Student* p = &s;



	cout << " 姓名： " << p->name
		<< " 年龄： " << p->age
		<< " 分数： " << p->score << endl;

*/













	/*
	struct Student stuArray[3] =
	{
		{"张三",18,100},
		{"李四",28,99},
		{"王五",38,66}
	};
		//也可以先定义后赋值
	stuArray[2].name = "赵六";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	for (int i = 0; i < 3; i++)
	{
		cout << " 姓名： " << stuArray[i].name 
			 << " 年龄： " << stuArray[i].age 
			 << " 分数： " << stuArray[i].score << endl;
	}

*/



	/*
     //通过学生类型创建具体学生  三种
	struct Student s1;//struct 结构体创建变量时，关键字可以省略，但结构体定义时不可以省略。
	//给s1属性赋值，通过 .访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名：" << s1.name << "年龄：" << s1.age << "分数：" << s1.score << endl;

	struct Student s2 = { "李四",19,80 };
	cout << "姓名：" << s2.name << "年龄：" << s2.age << "分数：" << s2.score << endl;

	
	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	cout << "姓名：" << s3.name << "年龄：" << s3.age << "分数：" << s3.score << endl;


*/









	/*
	//案例描述 ： 封装一个函数，利用冒泡排序，实现对整型数组得升序排序
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };//先创建数组
	int len = sizeof(arr) / sizeof(arr[0]);//数组长度

	bubbleSort(arr, len);//实现冒泡排序
	printArray(arr, len);//打印排序后的数组


*/










	/*

	//利用指针作函数得参数，可以修改实参得值


	int a = 10;
	int b = 20;
	swap02(&a, &b);//地址传递
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//如果地址传递，可以改变实参

*/







	/*
	//利用指针来访问数组中得元素
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "第一个元素为：" << arr[0] << endl;
	int* p = arr;//arr就是数组得首地址

	for (int i = 0; i < 10; i++) 
	{
          cout << "利用指针来访问第i个元素:" << *p << endl;
		  p++;
	}
	
	//p++;

	//cout << "利用指针来访问第二个元素:" << *p << endl;


*/



	/*
	 //指针所占内存空间
	int a = 10;
	int* p = &a;

	cout << "sizeof(int *)=" << sizeof(p) << endl;

    */



	/*
	int a = 10;
	//指针定义得语法： 数据类型 * 指针变量名；
	int* p;
	//让指针记录变量a得地址
	p = &a;
	cout << "a得地址为：" << &a << endl;
	cout << "指针p为：" << p << endl;
	//使用指针
	//可以通过解引用得方式来找到指针指向得内存
	// 指针前加 * 代表解引用，找到指针指向得内存中得数据
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
	//当我们做值传递的时候，函数的形参发生任何改变，并不会影响实参；

	swap(a, b);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


    */















	/*
	//a和b成为 实际参数 简称实参
	//当调用函数时候，实参的值会传递给形参
	int a = 10;
	int b = 20;
	int c = add(a, b);

	cout << "c=" << c<<endl;

*/















	/*
	//二维数组应用案例
	int scores[3][3] = {

		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	
	string names[3] = { "张三","李四","王五" };


	for (int i = 0; i < 3; i++) 
	{
		int sum = 0;//统计分数总和变量
		for (int j = 0; j < 3; j++)
		{

			sum += scores[i][j];

			//cout << scores[i][j] << " ";
			
			
		}

           cout << names[i]<<"的总分为：" << sum << endl;
	}
	
	





    */








	/*
	//二维数组名称用途

	int arr[2][3] = {

		{1,2,3},
		{4,5,6}
	};
	cout << "二维数组所占用的内存空间大小：" << sizeof(arr) << endl;
	cout << "二维数组第一行所占用的内存空间大小：" << sizeof(arr[0]) << endl;//查看第一行得内存
	cout << "二维数组第一元素所占用的内存空间大小：" << sizeof(arr[0][0]) << endl;
	//用代码统计二维数组数据
	cout << "二维数组得行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组得列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	//首地址
	cout << "二维数组的首地址：" << (int)arr << endl;
	cout << "二维数组第一行首地址：" << (int)arr[0] << endl;
	cout << "二维数组第二行首地址：" << (int)arr[1] << endl;
	cout << "二维数组第一元素所占用的内存空间大小：" << (int)&arr[0][0] << endl;//当去看具体元素地址要用取址符——&
	cout << "二维数组第二元素所占用的内存空间大小：" << (int)&arr[0][1] << endl;

*/


	/*
	//二维数组定义方式
	//第一种
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
	//第二种定义方式
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

	//利用冒泡排序进行升序排列
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	
	cout << "排序前：" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//开始冒泡排序
	for (int i = 0; i < 9 - 1; i++)
	{
		//内层循环对比
		for (int j = 0; j < 9-i-1; j++)
		{
			//如果第一个数字比第二个数字大，实现交换俩个数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];//交换俩个数字的办法，记住
				arr[j] = arr[j+ 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "排序后：" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


*/









	/*
	//数组元素逆置

	int arr[5] = { 1,3,2,5,4 };
	cout << "数组逆置前：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	int start = 0;//记录起始下标
	int end = sizeof(arr)/sizeof(arr[0])-1;//记录结束下标
	int temp = 0;

	while (start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;  //实现元素互唤
		start++;
		end--;//更新下标

	}
	cout << "数组逆置后：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
*/






	/*

	//五只小猪称体重 一个数组中记录了物质小猪的体重找到并打印最重的小猪体重
	//先设定一个最大值，然后比较，如果大则更新最大值

	int arr[5] = { 300,350,500,400,250 };
	int max = 0;//先认定一个最大值

	for (int i = 0; i < 5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

      cout  << "最胖的小猪体重为：" << max << endl;

*/









	/*
	
    int arr[10] = { 1,2,3,4,5,6,7,8,9.10 };
	cout << "整个数组占用内存空间的为：" << sizeof(arr) << endl;
	cout << "整个每个元素占用内存空间的为：" << sizeof(arr[0]) << endl;
	cout << "整个数组元素的个数为：" << sizeof(arr)/sizeof(arr[0]) << endl;
    cout << "数组首地址为：" <<  (int)arr << endl;
	cout << "数组中第一个元素地址为：" << (int) & arr[0] << endl;  
	cout << "数组中第二个元素地址为：" << (int)&arr[1] << endl;

*/





	/*
	//第三种定义方式
	//定义数组的时候，必须有初始长度
	int arr3[] = { 90, 80, 70, 60, 50, 40, 30, 20, 10 };
	for (int i = 0; i < 9; i++)
	{
		cout << arr3[i] << endl;//循环输出
	}

*/









	/*

	//数组三种类型
	int arr[5];//第一种第一方式
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
	int arr2[5] = { 10,20,30,40,50 };  //第二种定义方式
	
	cout << arr2[0] << endl;
	cout << arr2[1] << endl;
	cout << arr2[2] << endl;
	cout << arr2[3] << endl;
	cout << arr2[4] << endl;


	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;//循环输出
	}

*/






	//乘法口诀表  列数*行数 = 计算结果 ； 列数小于等于当前行数、
	// 这个挺牛逼在好好看看
	/*
	for (int i = 1; i <=9; i++)
	{
		//cout << i << endl;
		for (int j = 1; j <=i; j++)
		{
			cout << j <<" * "<< i << " = " << i*j << " ";			
		}
		cout << endl; //换行操作
	}

*/









	//利用嵌套循环实现星图
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






	//练习案例 敲七
	// 思路 ：  先输出1到100这些数字 从100个数字中找到特殊数字 改为“敲桌子” 特殊数字 
	// 7的倍数   x%7=0 个位有7 x%10=7 十位有7 x/10=7
	/*
	for (int i = 1; i <=100; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10==7)
		{
			cout << "敲桌子" << endl;
		}
		else 
		{
			cout << i << endl;
		}
		
	}

	 */















	/*
	
	//利用for循环打印数字0~9
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}

*/


































	//联系案例 水仙花数 水仙花数是指一个3位数，他的每个位上的数字3次幂之和等于它本身
	// 将所有的三位数进行输出 在所有三位数中找到水仙花数 获取个位 （对数字去摸与10 可以获取个位 153%10） 获取十位 （数字除10 得到俩位数 在对10取模0）获取百位（数字除与100） 判断 个位^3+十位^3+百位^3 
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
             cout << "百位里面的水仙花数为" << num << endl;
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











	//while 循环案例 猜数字  
	// 系统先要生成随机数 玩家进行猜测 判断玩家的猜测 猜对退出游戏 猜错提示猜的结果过大过小重新返回第二步
	//添加随机数种子 利用当前系统时间生成随机数，防止每次随机数都一样
	/*
	srand((unsigned int)time(NULL));//真正随机数
	int num=rand() % 100 + 1;//生成0+1~99+1的随机数
	int val = 0;
	
	while (1)
	{
		cin >> val;
		if (val > num)
		{
			cout << "猜大了" << endl;
		}
		else if (val < num) 
		{
			cout << "猜小了" << endl;
		}
		else
		{
            cout << "猜对了" << endl;
			break;//可以用break推出当前循环
		}
		
	}
*/
























	//white循环 在屏幕中打印0~9十个数字
	/*
	int num = 0;
	while (num<10)
	{
		cout << num << endl;
		num++;
	}
	*/
















	//switch语句 给电影打分 10~9 经典 ,,,,,,
	
 /*
cout << "请给电影打分" << endl;
	int score = 0;
	
	cin >> score;
	cout << "您打的分数为：" << score << endl;
	switch (score)
	{
	case 10 :
		cout << "您认为是经典电影"  << endl;
		break;
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为是非常好电影" << endl;
		break;
	case 7:
		cout << "您认为是非常好电影" << endl;
		break;
	case 6:
		cout << "您认为是好电影" << endl;
		break;
	case 5:
		cout << "您认为是好电影" << endl;
		break;
	default:
		cout << "您认为是烂片" << endl;
		break;
	}

*/






	//三目运算符 将a和b做比较，变量大的值赋值给变量c
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
	cout << "请输入小猪A的体重： " << endl;
	cin >> A;
	cout << "请输入小猪B的体重： " << endl;
	cin >> B;
	cout << "请输入小猪C的体重： " << endl;
	cin >> C;
	cout << "小猪A的体重： " << A << endl;
	cout << "小猪B的体重： " << B << endl;
	cout << "小猪C的体重： " << C << endl;

	if (A > B)
	{
		if (A > C)
		{
			cout << "小猪A最重" << endl;
		}

		else
		{
			cout << "小猪C最重" << endl;
		}
	}
	else
	{
		if (B > C)
		{
			cout << "小猪B最重" << endl;
		}
		else
		{
			cout << "小猪C最重" << endl;
		}
	}
	 
*/




























	/*
	int score = 0;//提示输入高考分数 
	cout << "请输入一个分数： " << endl;
	cin >> score; 
	cout << "您输入的分数是：" << score << endl;
	if (score > 600)
	{
		cout << "恭喜您考上了一本大学 " << endl;
		if(score>700)
			{
			cout << "您能考上北京大学 " << endl;
		}
		else if (score > 650)
			{
			cout << "您能考上清华大学 " << endl;
		}
		else
		{
            cout << "您能考上人民大学 " << endl;
		}
		
	}
	else if (score > 500)
	{
		cout << "恭喜您考上了二本大学 " << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您考上了三本大学 " << endl;
	}
	else
	{
		cout << "未考上了本科大学，请再接再厉 " << endl;
	}
	    
*/























	/*int score = 0;
	cout << "请输入一个分数： " << endl;
	cin >> score;*/
	/*cout << "您输入的分数是：" << score << endl;
	if (score > 600)
	{
		cout << "恭喜您考上了一本大学 " << endl;
	}
	else if (score > 500)
	{
		cout << "恭喜您考上了二本大学 " << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您考上了三本大学 " << endl;
	}
	else
	{
		cout << "未考上了本科大学，请再接再厉 " << endl;
	}
	*/













	//if多行结构

	// int score = 0;
	//cout << "请输入一个分数： " << endl;
	//cin >> score;
	//cout << "您输入的分数是：" << score << endl;
	//if (score > 600)
	//{
	//	cout << "恭喜您考上了一本大学 " << endl;
//
	//}
	//else//不大于600分，执行else后大括号中的内容
	//{
	//	cout << "未考上了一本大学 " << endl;
	//}

	









	//选择结构 单行if语句
	//用户输入分数，如果分数大于600，视为考上一本大学，并在屏幕上输出
	// 1.用户输入分数 2. 打印用户输入的分数 3.判断分数是否大于600，如果大于，那么输出
	//int score = 0;
	//cout << "请输入一个分数： " << endl;
	//cin >> score;
	//cout << "您输入的分数是：" << score << endl;
	//if (score > 600)
	//{
	//	cout << "恭喜您考上了一本大学 " << endl;
	//}
	 

























	//int a = 10; //前置递增后置递增前置和后置的区别
    //++a; //让变量+1
	//cout << "a=" << a << endl;
	//int b = 10;
	//b++;
	//cout << "b=" <<b << endl;
	////区别 前置是先让变量+1然后进行表达式运算 后置是先进行表达式运算 后让变量+1
	//int a2 = 10;
	//int b2 = ++a2 * 10;
	//cout << "a2=" << a2 << endl;
	//cout << "b2=" << b2 << endl;

	//int a3 = 10;
	//int b3 = a3++ * 10;
	//cout << "a3=" << a3 << endl;
	//cout << "b3=" << b3 << endl;//










	//1、整形、浮点型、字符型、字符串型、bool类型输入

	//int a = 0;
	//cout << "请给整形变量a赋值"<< endl;
	//cin >> a;
	//cout << "整形变量a = " << a<<endl;


	//float f = 3.14f;
	//cout << "请给浮点型变量f赋值" << endl;
	//cin >> f;
	//cout << "浮点型变量f = " << f << endl;

	//char ch = 'a';
	//cout << "请给字符型变量a赋值" << endl;
	//cin >> ch;
	//cout << "字符型变量变量a = " << ch << endl;

	//string str = "hello";
	//cout << "请给字符串str赋值" << endl;
	//cin >> str;
	//cout << "字符串str = " << str << endl;

	//bool flag = false;
	//cout << "请给bool类型flag赋值" << flag<<endl;
	//cin >> flag;
	//cout << "bool类型flag = " << flag<< endl;//bool类型只要是非零的值都代表真
















	//bool flag = true;//创建bool数据类型
	//cout << flag << endl;

	//flag = false;
	//cout << flag << endl;
	//cout << "bool类型所占内存空间" << sizeof(bool) << endl;//查看bool类型所占内存空间





	//char str1[] = "hello world";//c风格字符串
	//cout << str1 << endl;//注意事项 字符串后面必须加中括号 等号后面要用双引号包含字符串值 
	
	//string str2 = "hello world";//注意事项  用c++风格定义字符串时 要包含#include<string>头文件
	//cout << str2 << endl;










	//cout << "Hello World!\n" ;//换行

	//cout << "\\"<<endl;//反斜线字符

	//cout << "aaaa\tHello World!" << endl;//水平制表
	//cout << "aa\tHello World!" << endl;
	//cout << "aaaaaa\tHello World!" << endl;// 、t作用是让输出黑窗口比较整齐




	//char ch1 = 'a';
	//cout << ch1 << endl;
	//cout << " char占用内存空间为：" << sizeof(char) << endl;
	// << (int)ch1 << endl;//查看字符型变量对应的ASCII的码//a=97  A=65





	//float f1 = 3.14f;//float定义数字后面必须加f
	//cout << "f1 = " << f1 << endl;
	//double d1 = 3.1415926;//默认情况下输出一个小数是六位有效数字，如果想输出更多位数需要配置环境。
	//cout << "d1 = " << d1 << endl;
	//cout << " float占用内存空间为：" << sizeof(float) << endl;
	//cout << " double占用内存空间为：" << sizeof(double) << endl;
	//float f2 = 3e2;//科学计数法：3*10^2;
	//cout << "f2 = " << f2 << endl;
	//float f3 = 3e-2;//3*0.1^2
	//cout<< "f3 = " << f3 << endl;















	//short num3 = 32768;//-32768--32767
	//int num4 = 32768;
	//long num5 = 10;
	//cout << " int占用内存空间为：" << sizeof(num4) << endl;
	//long long num6 = 10;
	//cout << "num3 = " << num3 << endl;
	//cout << "num4 = " << num4 << endl;
	//cout << "num5 = " << num5 << endl;
	//cout << "num6 = " << num6 << endl;
	
	
	









	
	//int num1 = 10;
	//int num2 = 20;
	//int sum = num1 + num2;
	//cout << sum  <<endl;
	
	
	
	









	
	
	//cout << " 一周总共有几天 " << day << "天" << endl;
	//const int month = 12;
	//cout << " 一年总共有 " << month << "个月份" << endl;









	//int a = 10;
	//cout << " a = " << a << endl;//定义变量


	




   // log("Hello World!");//输出hello world
   // std::cin.get();


}