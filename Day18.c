#include <stdio.h>

// ---- ����ü ----
// ���� ���� ������� ��Ƽ� �ϳ��� ���ο� �ڷ����� ����� ����
// ����ü ������ ����� ������ ���� ����ü����.��� �������� �����Ѵ�.
//				 ex) struct Data d;
//					 d.data1 = 10;
// ����ü�� ũ��� ����ü ������� ��� ���� ũ���̴�.
// 
// �⺻ ����ü ����;
//		struct ����ü �̸� {
//			���;
//		};

// �⺻ ����ü ����
// struct Data {
//	  int data1;
//    int data2;
//	  int data3;
// };

// ��Ī�� �̿��� ����ü ����
// ��Ī�� �̿��ؼ� ������ ���� ����ü �̸�, ��Ī ��� ��� ����
/*typedef struct Data {
	int data1;
	int data2;
}Da;*/

// �͸� ����ü
// �͸� ����ü�� ����ϸ� ����ü �̸����� ���� ���� x, ��Ī�� ��� ����
/*typedef struct {
	int data1;
	int data2;
}Da;*/

typedef struct Student {
	int kor, mat, eng, total;
	double avg;
	char grade;
}Student;

void Total(int kor, int mat, int eng, int* total)
{
	*total = kor + mat + eng;
}

void Avg(int total, double* avg)
{
	*avg = total / 3.0;
}

void Grade(double avg, char* grade)
{
	switch ((int)avg / 10)
	{
	case 10:
	case 9:
		*grade = 'A';
		break;
	case 8:
		*grade = 'B';
		break;
	case 7:
		*grade = 'C';
		break;
	case 6:
		*grade = 'D';
		break;
	default:
		*grade = 'F';
		break;
	}
}

int main()
{
	/*struct Data d;
	Da d2;

	d.data1 = 10;
	d.data2 = 20;

	printf("���: %d %d\n", d.data1, d.data2);
	printf("d�� ũ��: %d\n", sizeof(d));*/

	Student st, st2;

	printf("����, ����, ���� ���� �Է�: ");
	scanf_s("%d %d %d", &st.kor, &st.mat, &st.eng);

	Total(st.kor, st.mat, st.eng, &st.total);
	Avg(st.total, &st.avg);
	Grade(st.avg, &st.grade);

	printf("����: %d\n", st.total);
	printf("���: %.2f\n", st.avg);
	printf("���: %c\n", st.grade);

	return 0;
}