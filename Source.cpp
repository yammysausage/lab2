#include<iostream>
#include<string>
#include"Header.h"

#include<fstream>
#include<cstdlib>
using namespace std;
int main() {
	class bmi now;
	string name;
	float high, weight,bmo;
	ifstream inFile("file.in.txt",ios::in);
	if (!inFile) {
		cerr << "failed" << endl;
		exit(1);
	}
	ofstream outFile("outfile.txt", ios::out);
	while (inFile >> high >> weight) {
		//bmi now;

		bmo=now.BMI(high, weight);
		
		
		if (!outFile) {
			cerr << "failed" << endl;
			exit(1);
			
			}
		if (high == 0)
		{
			exit(3);
		}
		outFile << now.BMI(high, weight)<<now.rank(bmo)<<endl;


		 
	 }

	 
	cin.get();
	return 0;


}