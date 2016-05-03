/*
 * main.cpp
 *
 *  Created on: May 3, 2016
 *      Author: Hailin.Cai
 */

#include <iostream>
using namespace std;

int main(){
	int cnt;
	int num;
	cin >> cnt;
	for (int i = 0; i < cnt; i++){
		cin >> num;
		int oneCnt = 0;
		while (num != 0){
			if ((num & 0x01) == 1){
				oneCnt ++;
			}
			num = num >> 1;
		}
		cout << oneCnt << endl;
	}
	return 0;
}

