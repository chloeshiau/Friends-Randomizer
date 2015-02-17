#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h>

using namespace std;
int main() {
	srand (time(0));
	int season[10] = {1,2,3,4,5,6,7,8,9,10};
	int randSeason = season[rand() % 10];
	cout << "Let's pick a random season and episode from Friends" << endl;
	cout << "Season: " << randSeason << endl;

	if(randSeason != 3 || randSeason != 6  || randSeason != 10 ) {
		int episodes[24] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
		int randEpisodes = episodes[rand() % 24];
		cout << "Episode: " << randEpisodes << endl;
	}
	else if(randSeason == 3 || randSeason == 6) {
		int episodes2[25] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
		int randEpisodes2 = episodes2[rand() % 25];		
		cout << "Episode: " << randEpisodes2 << endl;
	}
	else {
		int episodes3[17] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
		int randEpisodes3 = episodes3[rand() % 17];	
		cout << "Episode: " << randEpisodes3 << endl;	
	}
}