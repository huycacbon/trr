#include<iostream>
#include<fstream>

using namespace std;



int main() {
	ifstream input1("input1.txt");
	fstream output1;
	output1.open("input1_1.txt",ios::out);
	int** matrix = new int*[6];
	for (int i = 0; i < 6;i++) {
		matrix[i] = new int[6];
	}

	for (int i = 0; i < 6;i++) {
		for (int j = 0; j < 6;j++) {
			input1 >> matrix[i][j];
		}
	}
	output1 << 6;
	output1 << endl;
	
	for (int i = 0; i < 6; i++) {
		int count = 0;
		for (int j = 0; j < 6; j++) {
			if (matrix[i][j] == 1) {
				count++;
				output1 << j<<" ";
			}
		}
		output1 <<"  " << count;
		output1<< endl;
	}
	ifstream
}

