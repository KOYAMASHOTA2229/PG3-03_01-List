#include <stdlib.h>
#include <list>
#include <iostream>

int main() {

	std::list<const char*>stationList{ "Tokyo","Kanda","Akihabara","Okachimacchi","Ueno","Uguisudani"
		,"Nippori","Tabata","Komagome","Komagome","Sugamo","Otsuka","Ikebukuro"
		,"Mejiro","Takadanobaba","Shin-Okubo","Sinjuku","Yoyogi","Harajuku","Shibuya","Ebisu" ,"Meguro"
		,"Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho","Simbashi","Yurakucho" };

	//1970年の駅名
	printf("1970年\n");

	//リストを順番に読み込み
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	//2019年の駅名
	printf("\n2019年\n");

	//新たな駅名をリストの適切な位置に挿入
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = stationList.insert(itr, "Nishi - Nippori");
			++itr;
		}
	}
	//リストを順番に読み込み
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	//2022年の駅名
	printf("\n2022年\n");

	//新たな駅名をリストの適切な位置に挿入
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = stationList.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}
	//リストを順番に読み込み
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	return 0;
}