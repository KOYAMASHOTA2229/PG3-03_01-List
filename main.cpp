#include <stdlib.h>
#include <list>
#include <iostream>

int main() {

	std::list<const char*>stationList{ "Tokyo","Kanda","Akihabara","Okachimacchi","Ueno","Uguisudani"
		,"Nippori","Tabata","Komagome","Komagome","Sugamo","Otsuka","Ikebukuro"
		,"Mejiro","Takadanobaba","Shin-Okubo","Sinjuku","Yoyogi","Harajuku","Shibuya","Ebisu" ,"Meguro"
		,"Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho","Simbashi","Yurakucho" };

	printf("1970年\n");

	//1970年の駅名
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	//2019年の駅名
	printf("")

	return 0;
}