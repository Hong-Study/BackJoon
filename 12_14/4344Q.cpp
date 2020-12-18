/*
첫째 줄에는 테스트 케이스의 개수 C가 주어진다.

둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.
*/
#include<iostream>

using namespace std;

int main(){
	int Case;
	int count;
	double Average_score;
	cin >> count;
	for(int i=0;i<count;i++){
		double total = 0;
		double Average = 100.0;
		int UP = 0;
		cin >> Case;
		int* Student = new int[Case];
		for(int j=0;j<Case;j++){
			cin >> Student[j];
			total += Student[j];
		}
		Average_score = total/Case;
		for(int j=0;j<Case;j++){
			if(static_cast<double>(Student[j]) > Average_score)
				UP++;
		}
		Average = (Average / Case) * (double)UP;
		cout<<fixed;
        cout.precision(3);
		cout << Average << "%" << endl;
	}
}