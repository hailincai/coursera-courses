/*
 * main.cpp
 *
 *  Created on: May 3, 2016
 *      Author: Hailin.Cai
 */


#include <iostream>
using namespace std;

int main(){
	int numCnt;
	int num[100];
	int oneCnt = 0;
	int fiveCnt = 0;
	int tenCnt = 0;

	//input how many number we want
	cin >> numCnt;
	for (int i = 0; i < numCnt; i++){
		cin >> num[i];
	}

	//loop through the array, and count it
	for (int i = 0; i < numCnt; i++){
		if (num[i] == 1)
			oneCnt ++;
		else if (num[i] == 5)
			fiveCnt ++;
		else if (num[i] == 10)
			tenCnt ++;
	}

	cout << oneCnt << endl;
	cout << fiveCnt << endl;
	cout << tenCnt;

	return 0;
}

