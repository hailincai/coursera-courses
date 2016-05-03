/*
 * main.cpp
 *
 *  Created on: May 3, 2016
 *      Author: Hailin.Cai
 */

#include <iostream>
using namespace std;

int main(){
	int arrCnt;
	int arr[100];
	int targetArr[100];

	cin >> arrCnt;
	for (int i = 0; i < arrCnt; i++){
		cin >> arr[i];
	}

	//copy the reverse sort number to another array
	for (int i = (arrCnt - 1); i >= 0; i--){
		targetArr[(arrCnt - 1) - i] = arr[i];
	}

	//output
	for (int i = 0; i < arrCnt; i++){
		cout << targetArr[i] << ' ';
	}

	return 0;
}



