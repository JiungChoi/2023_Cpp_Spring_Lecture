#include<iostream>
using namespace std;

class tv
{
	bool power;
	int channel;
	int volume;
public :
	void PowerOn() {
		power = true;
	}
	void PoserOff() {
		power = false;
	}
	void IncChannel() {
		if (power) {
			channel = (channel + 1) % 1000;
		}
	}
	void DecChannel() {
		if (power) {
			channel = (1000 + (channel - 1)) % 1000;
		}
	}
	void IncVolume() {
		if (power) {
			volume = (volume + 1) % 1000;
		}
	}
	void DecVolume();
	void showInfo();
	void initInfo();
};

void tv::showInfo() {
	if (power) {
		cout << "Channel : " << channel << endl;
		cout << "Volume : " << volume << endl;
	}
}

void tv::initInfo() {
	channel = 0;  volume = 0;
}

int main() {
	tv t1, t2, t3;
	t1.PowerOn(); t1.initInfo();
	t1.IncChannel(); t1.IncChannel(); t1.IncChannel(); t1.IncChannel(); t1.showInfo();
	t1.DecChannel(); t1.DecChannel(); t1.showInfo();
	t1.initInfo(); t1.showInfo();
	

	return 0;
}
