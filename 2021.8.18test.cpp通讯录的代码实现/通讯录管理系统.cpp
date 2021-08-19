#include<iostream>
using namespace std;
#include<string>
#define MAX 1000
//菜单界面
void showmen()
{
	cout << "*****************************" << endl;
	cout << "*****   1、添加联系人   *****" << endl;
	cout << "*****   2、显示联系人   *****" << endl;
	cout << "*****   3、删除联系人   *****" << endl;
	cout << "*****   4、查找联系人   *****" << endl;
	cout << "*****   5、修改联系人   *****" << endl;
	cout << "*****   6、清空联系人   *****" << endl;
	cout << "*****   0、退出通讯录   *****" << endl;
	cout << "*****************************" << endl;
}
//1设计一下联系人的结构体
struct person
{
	//姓名
	string m_name;
	//性别  1男 2女
	int m_sex;
	//年龄
	string m_age;
	//电话
	string m_phone;
	//住址
	string m_addr;

};
//2设计通讯录结构体
struct addressbooks
{
	//通讯录中保存的联系人的数组
	struct person personarray[MAX];
	//通讯录中当前联系人的个数
	int m_size;
};
//1添加联系人
void addperson(addressbooks *abs)
{
	//进行判断通讯录是否可以继续添加
	if (abs->m_size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
	}
	else
	{
		//添加具体的联系人
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personarray[abs->m_size].m_name = name;
		//性别
		while (true)
		{
			int a = 0;
			cout << "请输入性别：" << endl;
			cout << "1 男生 2女生" << endl;
			cin >> a;
			if (a == 1 || a == 2)
			{
				abs->personarray[abs->m_size].m_sex = a;
				break;
			}
			else
			{
				cout << "输入的性别无效，请重新输入" << endl;
			}
		}
		//年龄
		while (true)
		{
			cout << "请输入年龄" << endl;
			int age = 0;
			cin >> age;
			if (age > 0 && age < 100)
			{
				abs->personarray[abs->m_size].m_age = age;
				break;
			}
			else
			{
				cout << "您输入的年龄有误，请重新输入" << endl;
			}
		}
		//电话
		cout << "请输入联系电话：" << endl;
		string tele ;
		cin >> tele;
		abs->personarray[abs->m_size].m_phone = tele;
		//家庭住址
		cout << "请输入家庭住址：" << endl;
		string adder ;
		cin >> adder;
		abs->personarray[abs->m_size].m_addr = adder;
		//对通讯录中的信息进行更新
		abs->m_size++;
		cout << "添加成功" << endl;
		system("pause");//请按任意键继续
		system("cls");//清屏操作
	}
}
//2显示联系人信息的函数
void show(addressbooks abs)
{
	if (abs.m_size == 0)
	{
		cout << "通讯录里面的人数为零" << endl;
	}
	else
	{
		for (int i = 0; i < abs.m_size; i++)
		{
			cout << "姓名：" << abs.personarray[i].m_name<<"\t"
				<< "年龄：" << abs.personarray[i].m_age<<"\t"
				<< "性别：" << (abs.personarray[i].m_sex==1?"男":"女")<<"\t"
				<< "电话：" << abs.personarray[i].m_phone<<"\t"
				<< "住址：" << abs.personarray[i].m_addr << endl;
		}
	}
	system("pause");//请按任意键继续
	system("cls");//进行清屏操作
}
//检测联系人是否存在，如果存在的话返回在数组中的位置，不存在返回-1
int isexist(addressbooks* abs, string name)
{
	int i = 0;
	for (i = 0; i < abs->m_size; i++)
	{
		if (abs->personarray[i].m_name == name)
		{
			cout << "找到此人" << endl;
			return i;//找到啦，就返回这个在数组中的下标
		}
	}
	cout << "查无此人" << endl;
	return -1;//一直到结束都没有找到，则返回-1；
}
//3删除指定的联系人
void deletePerson(addressbooks* abs)
{
	cout << "请输入要删除的联系人" << endl;
	string name;
	cin >> name;
	int ret = isexist(abs, name);
		if (ret != -1)//ret==-1这样去写
		{
			//查到此人，要进行删除
			for (int i = ret; i < abs->m_size; i++)
			{
				abs->personarray[i] = abs->personarray[i + 1];
			}
			abs->m_size--;//更新通讯中的信息
			cout << "删除成功" << endl;
		}
		system("pause");
		system("cls");
}
//4查找联系人的代码
void seeperson(addressbooks abs)
{
	cout << "请输入要删除的联系人" << endl;
	string name;
	cin >> name;
	int ret = isexist(&abs, name);
	if (ret != -1)
	{
		cout << "姓名：" << abs.personarray[ret].m_name << "\t"
			<< "年龄：" << abs.personarray[ret].m_age << "\t"
			<< "性别：" << (abs.personarray[ret].m_sex == 1 ? "男" : "女") << "\t"
			<< "电话：" << abs.personarray[ret].m_phone << "\t"
			<< "住址：" << abs.personarray[ret].m_addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");//按任意键继续
	system("cls");//清屏
}
//5修改联系人信息
void modifyPerson(addressbooks* abs)
{
	cout << "请输入要修改的联系人" << endl;
	string name;
	cin >> name;
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		//姓名
		string name;
		cout << "请输入名字" << endl;
		cin >> name;
		abs->personarray[ret].m_name = name;
		//性别
		while (true)
		{
			int a = 0;
			cout << "请输入性别：" << endl;
			cout << "1 男生 2女生" << endl;
			cin >> a;
			if (a == 1 || a == 2)
			{
				abs->personarray[ret].m_sex = a;
				break;
			}
			else
			{
				cout << "输入的性别无效，请重新输入" << endl;
			}
		}
		//年龄
		while (true)
		{
			cout << "请输入年龄" << endl;
			int age = 0;
			cin >> age;
			if (age > 0 && age < 100)
			{
				abs->personarray[ret].m_age = age;
				break;
			}
			else
			{
				cout << "您输入的年龄有误，请重新输入" << endl;
			}
		}
		//电话
		cout << "请输入联系电话：" << endl;
		string tele;
		cin >> tele;
		abs->personarray[ret].m_phone = tele;
		//家庭住址
		cout << "请输入家庭住址" << endl;
		string adder;
		cin >> adder;
		abs->personarray[ret].m_addr = adder;
		cout << "修改成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");//按任意键继续
	system("cls");//清屏
}
//清空所有联系人
void cleanPerson(addressbooks* abs)
{
	abs->m_size = 0;
	cout << "通讯录已经清空" << endl;
	system("pause");//按任意键继续
	system("cls");//清屏
}
int main()
{
	//创建通讯录结构体变量
	addressbooks abs;
	//初始化通讯录中当前人员的个数
	abs.m_size = 0;
	int select = 0;
	
	while (true)
	{
		//菜单调用
		showmen();
		cin >> select;
		switch (select)
		{
		case 1:
			addperson(&abs);
			break;//1、添加联系人
		case 2:
			//创建显示通讯录中联系人的信息的函数
			show(abs);
			break;//2、显示联系人
		case 3:
		/*{cout << "请输入一个删除联系人的姓名" << endl;
		string name;
		cin >> name;
			if ((isexist(&abs, name)) == -1)//这是注释
			{
			cout << "查无此人" << endl;
			}
		}*/
			deletePerson(&abs);
			break;//3、删除联系人
		case 4:
			seeperson(abs);
			break;//4、查找联系人
		case 5:
			modifyPerson(&abs);
			break;//5、修改联系人
		case 6:
			cleanPerson(&abs);
			break;//6、清空联系人
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");//它的作用是会让屏幕上打印出来，请按任意键继续。然后您随便按个任意键就可以啦
			break;//0、退出通讯录
		}
	}
	return 0;
}