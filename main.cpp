#include <stdlib.h>
#include <list>
#include <iostream>

int main() {

	std::list<const char*>stationList{ "Tokyo","Kanda","Akihabara","Okachimacchi","Ueno","Uguisudani"
		,"Nippori","Tabata","Komagome","Komagome","Sugamo","Otsuka","Ikebukuro"
		,"Mejiro","Takadanobaba","Shin-Okubo","Sinjuku","Yoyogi","Harajuku","Shibuya","Ebisu" ,"Meguro"
		,"Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho","Simbashi","Yurakucho" };

	//1970�N�̉w��
	printf("1970�N\n");

	//���X�g�����Ԃɓǂݍ���
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	//2019�N�̉w��
	printf("\n2019�N\n");

	//�V���ȉw�������X�g�̓K�؂Ȉʒu�ɑ}��
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = stationList.insert(itr, "Nishi - Nippori");
			++itr;
		}
	}
	//���X�g�����Ԃɓǂݍ���
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	//2022�N�̉w��
	printf("\n2022�N\n");

	//�V���ȉw�������X�g�̓K�؂Ȉʒu�ɑ}��
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = stationList.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}
	//���X�g�����Ԃɓǂݍ���
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	return 0;
}