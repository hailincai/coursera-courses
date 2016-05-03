/*
 * main.cpp
 *
 *  Created on: May 3, 2016
 *      Author: Hailin.Cai
 */


#include <iostream>
using namespace std;

int main(){
	int h, r;

	cin >> h >> r;

	double hold = 3.14159 * r * r * h;
	double bucketNum = (20 * 1000) / hold;
	int bucketNum1 = (int)bucketNum;
	if ((bucketNum - bucketNum1) > 0){
		bucketNum1 ++;
	}

	cout << bucketNum1;
	return 0;
}

