#include<iostream>//这个题有点难的
using namespace std;
#include<Ctime>
struct student
{
	string name2;
	int score;
};
struct teacher
{
	string name;
	struct student sarray[5];

};
void test(teacher grout[], int len)
{
	string arr = "abcde" ;//字符串就是char的一维数组
	int i = 0;
	for (i = 0; i < len; i++)
	{
		grout[i].name = "teacher_";
		grout[i].name += arr[i];
		int j = 0;
		for (j = 0; j< 5; j++)
		{
			grout[i].sarray[j].name2 = "student_";
			grout[i].sarray[j].name2 += arr[j];
			int random = rand() % 41 +60;//这里有问题，其随机数不变？？？？等日后开窍之时在进行解答吧
			grout[i].sarray[j].score = random;
		}

	}

}
void print(struct teacher tarray[], int len)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		cout << "教师姓名：" << tarray[i].name << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tarray[i].sarray[j].name2 << "  学生成绩：" << tarray[i].sarray->score << endl;
		}
	}
	
}
int main()
{
	//铺设随机数种子
	srand((unsigned int)time(NULL));
	//定义含有三个老师的数组
	teacher grout[3];
	//对老师和同学的信息进行赋值
	int len = sizeof(grout) / sizeof(grout[0]);
	test(grout, len );
	//进行打印数据
	print(grout, len );
}