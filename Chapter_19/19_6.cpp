1.
less()

2.

3.
size() count()用来计算某个元素的个数

1.
struct FindContactItemByNum {
	bool operator()(const CContactItems& lsh, const CContactItems& rsh) const {
		return (lsh.strPhoneNumber < rsh.strPhoneNumber);
	}
};

2.

struct Word {
private:
	string word;
	string desc;
public:
	Word(string& inputWord, string& inputDesc) {
		word = inputWord;
		desc = inputDesc;
	}
	string getWord() {
		return word;
	}
	string getDesc() {
		return desc;
	}

	bool operator ==(const Word compareWord) {
		return compareWord.getWord() == this->word;
	}

	bool operator <(const Word compareWord) {
		return this->word < compareWord.getWord();
	}

	operator const char*() const {
		return this->word;
	}
};

template <typename T>
void DisplayContents(const T& input) {
	for (auto iElement = input.cbegin(); iElement != input.cend(); ++iElement) {
		cout << *iElement << ' ';
	}
	cout << endl;
}

int main() {
	mulitset<Word> myMSet;
	set<Word> mySet;
	myMSet.insert(Word("Love", "a kind of emotion"));
	myMSet.insert(Word("Love", "a kind of emotion"));
	DisplayContents(myMSet);

	mySet.insert(Word("Love", "a kind of emotion"));
	mySet.insert(Word("Love", "a kind of emotion"));
	DisplayContents(mySet);

	return 0;
}


