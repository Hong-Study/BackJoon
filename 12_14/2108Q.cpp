/*
산술평균 : N개의 수들의 합을 N으로 나눈 값
중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
최빈값 : N개의 수들 중 가장 많이 나타나는 값
범위 : N개의 수들 중 최댓값과 최솟값의 차이
*/
#include<iostream>

using namespace std;

class Sort{		//퀵정렬 너무 어렵고;
	private:
	int tmp;
	public:
	Sort(){ tmp = 0; }
	void Quick_Sort(int* arr,int left, int right){
		if(left<right){
			int low = left+1;
			int high = right;
			int pivot = arr[left];
		
			while(low<high){
				while(low < right && arr[low]<pivot)
					low++;
				while(high > left && arr[high]>=pivot)
					high--;

				if(low<high){
					change(arr,low,high);
				}else{
					change(arr,left,high);
				}
			}
			
			Quick_Sort(arr, left, high-1);
			Quick_Sort(arr, high+1, right);
		}
			
	}
	void change(int* arr, int a, int b){
		tmp = arr[a];
		arr[a] = arr[b];
		arr[b] = tmp;
	}
};
int main(){
	Sort Quick_s;
	int max;
	int one;
	int gap[2] = {4000, 4000};
	int count;
	int much = 0;
	int PLUS[4001] = {0, };
	int MINUS[4001] = {0, };
	int total;
	int* number;
	cin >> count;
	number = new int[count];
	for(int i=0;i<count;i++){
		cin >> number[i];
		total += number[i];
		if(number[i]>=0){
			PLUS[number[i]]+=1;
			if(PLUS[number[i]] > max)
				max = PLUS[number[i]];
		}
		else{
			MINUS[-number[i]]+=1;
			if(MINUS[-number[i]] > max)
				max = MINUS[-number[i]];
		}
	}
	if(count != 1){
		for(int i=0;i<4001;i++){
			if(PLUS[i] == max){
				if(PLUS[i] < gap[0]){
					int tmp = gap[0];
					gap[0] = PLUS[i];
					gap[1] = tmp;
					much++;
				}
				else if(PLUS[i] < gap[1]){
					gap[1] = PLUS[i];
					much++;
				}
			}
		}
		for(int i=1;i<4001;i++){
			if(MINUS[i] == max){
				if(gap[0] >= 0){
					int tmp = gap[0];
					gap[0] = -MINUS[i];
					gap[1] = tmp;
					much++;
				}
				else if(-MINUS[i] > gap[0]){
					int tmp = gap[0];
					gap[0] = -MINUS[i];
					gap[1] = tmp;
					much++;
				}
				else if(gap[1] >= 0){
					gap[1] = -MINUS[i];
					much++;
				}
				else if(-MINUS[i] > gap[1]){
					gap[1] = -MINUS[i];
					much++;
				}
			}
		}
	}
	else{
		gap[0] = number[0];
	}
	Quick_s.Quick_Sort(number,0,count-1);
	cout<<fixed;
	cout.precision(0);
	cout<< (double)total/(double)count << endl;
	if(count%2 != 0)
		cout<<number[count/2]<<endl;
	else
		cout<<number[count/2-1]<<endl;
	if(count == 1 || much == 1)
		cout<<gap[0]<<endl;
	else
		cout<<gap[1]<<endl;
	cout << number[count-1] - number[0] << endl;
}