/*
 * main.cpp
 *
 *  Created on: May 3, 2016
 *      Author: Hailin.Cai
 */

#include <iostream>
using namespace std;

int main(){
	int i;
	cin >> i;

	//1,3,5 need to output NO, means odd number needs to NO
	if ((i == 1) ||
			(i == 3) ||
			(i == 5)){
		cout << "NO";
	}else{
		cout << "YES";
	}
	return 0;
}


