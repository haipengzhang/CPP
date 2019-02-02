#include <iostream>
using namespace std;

class Fish {
public:
	virtual void Swim() {
		cout << "Fish swims in water" << endl;
	}

	// base class should always have virtual destructor
	virtual ~Fish(){}
};

class Tuna : public Fish {
public:
	void Swim() {
		cout << "Tuna swims real fast in the sea" << endl;
	}
	void BecomeDinner() {
		cout << "Tuna became dinner in Sushi" << endl;
	}
};

class Carp : public Fish {
public:
	void Swim() {
		cout << "Carp swims real slow in the lake" << endl;
	}
	void Talk() {
		cout << "Carp talked crap" << endl;
	}
};

void DetectFishType(Fish* inputFish) {
	// 会动态检测，相当于iskindof，如果返回为null，证明转换失败
	Tuna* pIsTuma = dynamic_cast<Tuna*>(inputFish);
	if (pIsTuma) {
		cout << "Detected tuna, making tuna dinner: " << endl;
		pIsTuma->BecomeDinner();
	}

	Carp* pIsCarp = dynamic_cast<Carp*>(inputFish);
	if (pIsCarp) {
		cout << "Detected Carp, making tuna talk: " << endl;
		pIsCarp->Talk();
	}
	cout << "Verifying type using virtual Fish::Swim: " << endl;
	inputFish->Swim(); //访问虚函数
}

int main() {
	Carp myLunch;
	Tuna myDinner;

	DetectFishType(&myDinner);
	cout << endl;
	DetectFishType(&myLunch);

	return 0;
}





