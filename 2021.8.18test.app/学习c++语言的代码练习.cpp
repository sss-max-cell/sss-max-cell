//01结构体数组的学习
//#include<iostream>
//using namespace std;
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	student s[3] =//注意对于结构体数组的定义，在c++的语言中struct关键字，是可以省落得
//	{
//		{"张三",19,100},//定义结构体数组
//		{"李四",18,99},
//		{"王五",20,100}
//	};
//	s[1].age = 17;//可以进行修改，结构体中的数组。
//}
//02对于随机数rand的研究
//#include<iostream>
//using namespace std;
//int main()
//{
//	
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		int num = rand() % 61 + 40;//经过测试发现得出结论，它%几就可以得到0~几-1的数
//		cout << num << endl;
//	}
//		
//		
//}
//03深入对for循环进行理解
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		cout << "hehe" << endl;
//	}
//}
//04