/*
 * main.cpp
 *
 *  Created on: May 3, 2016
 *      Author: Hailin.Cai
 */


#include <iostream>
using namespace std;

int main(){
	int a[6];

	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5];
	int maxOdd = 0;
	int minEven = 100;
	for (int i = 0; i < 6; i++){
		if ((a[i] % 2 == 0) && (a[i] < minEven)){
			minEven = a[i];
		}else if ((a[i] % 2 == 1) && (a[i] > maxOdd)){
			maxOdd = a[i];
		}
	}

	//cout << maxOdd << minEven << endl;
	if (maxOdd > minEven){
		cout << maxOdd - minEven;
	}else{
		cout << minEven - maxOdd;
	}
	return 0;
}

