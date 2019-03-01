#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	int i=0;
	float y,a;
	float x[20];
	ifstream source("score1.txt");
	string line;
	ofstream dest("result.txt");
	while(getline(source,line)){
	dest << i+1 << " : "; 
	y = atof(line.c_str());
	x[i]=y;
	sort(x[i],20);
	dest << x[i] << "\n";
	i++;
	}
	return 0;
	dest.close();
}

