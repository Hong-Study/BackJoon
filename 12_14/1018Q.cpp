#include<iostream>
#include<vector>
#include<string>

using namespace std;
vector<vector<char>> map;
vector <char>map2;
int main(){
	int N,M;
	int count1,count2 = 0;
	int min = 10000000;
	char a;
	string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
	};
	string BW[8] = {
			"BWBWBWBW",
			"WBWBWBWB",
			"BWBWBWBW",
			"WBWBWBWB",
			"BWBWBWBW",
			"WBWBWBWB",
			"BWBWBWBW",
			"WBWBWBWB"
	};
	cin>>N>>M;
	for(int i=0;i<N;i++){
		map.push_back(map2);
		for(int j=0;j<M;j++){
			cin>>a;
			map[i].push_back(a);
		}
	}
	for(int i=0;i<=N-8;i++){
		for(int j=0;j<=M-8;j++){
			count1 = 0;
			count2 = 0;
			for(int x = 0;x<8;x++){
				for(int y = 0;y<8;y++){
					if(WB[x][y] != map[x+i][y+j])
						count1++;
					if(BW[x][y] != map[x+i][y+j])
						count2++;
				}
			}
			if(min > count1)
				min = count1;
			if(min > count2)
				min = count2;
		}
	}
	cout<<min<<endl;
	
}