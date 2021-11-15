#include<iostream>
using namespace std;
#include"workerManager.h"
//#include"employee.h"
//#include"worker.h"
//#include"boss.h"
//#include"manager.h"
int main()
{
	//创建对象
	WorkerManager wm;
	int choice;//用来记录用户的选择
	while (true)
	{
		//调用展示菜单成员函数
		wm.Show_Menu();
		cout << "请输入您的选择" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://退出程序
			wm.exitsystem();
				break;
		case 1://添加职工
			wm.Add_Emp();
			break;
		case 2://显示职工
			break;
		case 3://删除职工
			break;
		case 4://修改职工
			break;
		case 5://查找职工
			break;
		case 6://排序职工
			break;
		case 7://清空文档
			break;
		}
	}
	system("pause");
	return 0;
}