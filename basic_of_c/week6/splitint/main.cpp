/*
 * main.cpp
 *
 *  Created on: May 3, 2016
 *      Author: Hailin.Cai
 */


#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

    int tmp;
    cout << (n / 100) << endl;
    tmp = n % 100;
    cout << (tmp / 10) << endl;
    tmp = tmp % 10;
    cout << tmp;
	return 0;
}

