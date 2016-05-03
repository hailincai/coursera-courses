/*
 * main.cpp
 *
 *  Created on: May 3, 2016
 *      Author: Hailin.Cai
 */

#include <iostream>
using namespace std;

int main(){
	int m, n;
	int sum = 0;

	cin >> m >> n;

	for(int i = m; i <= n; i++){
		if (i % 2 == 1){
			sum += i;
		}
	}

	cout << sum;

	return 0;
}


