/*
학생 성적 입력 프로그램 ver 1.0

시나리오
	- 편의상 입출력은 영어
	- 이름, 중간고사, 기말고사 점수가 필요함
	- 숙제 점수는 가변적이며, 중앙값으로 채점한다.

	- 초기버전은 학생 10명으로 한다. (숙제의 길이는 동일하게 한다)


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
	
	//임의의 학생 리스트를 만듬
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