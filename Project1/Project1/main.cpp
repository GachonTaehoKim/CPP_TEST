/*
�л� ���� �Է� ���α׷� ver 1.0

�ó�����
	- ���ǻ� ������� ����
	- �̸�, �߰����, �⸻��� ������ �ʿ���
	- ���� ������ �������̸�, �߾Ӱ����� ä���Ѵ�.

	- �ʱ������ �л� 10������ �Ѵ�. (������ ���̴� �����ϰ� �Ѵ�)


*/

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::endl;
using std::vector; using std::string;
using std::to_string; using std::sort; using std::generate;

struct Student_info {
	string name;
	double mid, fin, hw;
};

double grade(Student_info& s) {
	return 0.2 * s.mid + 0.4 * s.fin + 0.4 * s.hw;
}

int main() {
	srand((unsigned int)time(NULL));
	Student_info s;

	vector<Student_info> studentList;
	
	//������ �л� ����Ʈ�� ����
	for (int i = 0; i < 10; i++) {

		s.name = "NAME__" +  to_string(i);
		s.mid = rand() & 100;
		s.fin = rand() % 100;
		s.hw = rand() % 100;
		
		studentList.push_back(s);
		/*
		cout << "NAME: " << studentList[i].name << endl
			<< "MIDTERM " << studentList[i].mid << endl
			<< "FINAL " << studentList[i].fin << endl
			<< "HOMEWORK : " << studentList[i].hw << endl;
		*/
		cout << "STUDENT " << studentList[i].name << ": " << grade(studentList[i]) << endl;

		cout << endl;
	}

	
	return 0;
}