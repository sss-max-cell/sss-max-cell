#include<iostream>//������е��ѵ�
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
	string arr = "abcde" ;//�ַ�������char��һά����
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
			int random = rand() % 41 +60;//���������⣬����������䣿���������պ���֮ʱ�ڽ��н���
			grout[i].sarray[j].score = random;
		}

	}

}
void print(struct teacher tarray[], int len)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		cout << "��ʦ������" << tarray[i].name << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << tarray[i].sarray[j].name2 << "  ѧ���ɼ���" << tarray[i].sarray->score << endl;
		}
	}
	
}
int main()
{
	//�������������
	srand((unsigned int)time(NULL));
	//���庬��������ʦ������
	teacher grout[3];
	//����ʦ��ͬѧ����Ϣ���и�ֵ
	int len = sizeof(grout) / sizeof(grout[0]);
	test(grout, len );
	//���д�ӡ����
	print(grout, len );
}