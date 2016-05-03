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
    int score[100];

    cin >> n;
    for (int i = 0; i < n; i++){
    	cin >> score[i];
    }

    int highScore = score[0];
    for (int i = 1; i < n; i++){
    	if (score[i] > highScore){
    		highScore = score[i];
    	}
    }

    cout << highScore;
	return 0;
}

