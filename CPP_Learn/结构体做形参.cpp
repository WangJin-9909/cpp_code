#if 0
/*
ֵ���ݣ��βθı䣬ʵ��Ҳ�ı�
��ַ���ݣ��βθı䣬ʵ�β��ı�
*/




#include <iostream>
#include<string>
using namespace std;
//����ѧ���ṹ��
struct Student{
	string name;
	int age;
	int score;
};



/*��ַ����*/
void print_stu_p(Student *stu)
{
	cout << "ѧ������  ��  " << stu->name << "ѧ������  :  " << stu->age << "ѧ���ɼ�  :  " << stu->score << endl;
}
/*ֵ����*/
void print_stu(Student stu)
{
	cout << "ѧ������  ��  " << stu.name << "ѧ������  :  " << stu.age << "ѧ���ɼ�  :  " << stu.score << endl;
}


int main(int argc, char *argv[])
{
	//�����ṹ�����
	
	Student stu1;
	stu1.name = "ZhangSan";
	stu1.age = 20;
	stu1.score = 87;
	

	//1.ֵ���ݵ÷�ʽʹ��
	print_stu(stu1);

	//2.ʹ�õ�ַ���ݵ÷�ʽ
	print_stu_p(&stu1);



	cin.get();

	return 0;
}

#endif // 0
