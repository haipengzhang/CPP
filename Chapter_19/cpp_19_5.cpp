#include <set>
#include <iostream>
#include <string>
using namespace std;

template <typename T>
void DisplayContents(const T& input) {
	for (auto iElement = input.cbegin(); iElement != input.cend(); ++iElement) {
		cout << *iElement << ' ';
	}
	cout << endl;
}

struct ContactItem
{
	string strContactsName;
	string strPhoneNumber;
	string strDisplayRepresentation;

	ContactItem(const string& strName, const string& strNumber) {
		strContactsName = strName;
		strPhoneNumber = strNumber;
		strDisplayRepresentation = (strContactsName + ": " + strDisplayRepresentation);
	}

	// used by set::find()
	bool operator ==(const ContactItem& itemToCompare) const {
		return (itemToCompare.strContactsName == this->strContactsName);
	}

	// used as a sort predicate
	bool operator <(const ContactItem& itemToCompare) const {
		return (this->strContactsName < itemToCompare.strContactsName);
	}

	// used in displaycontents via cout
	operator const char*() const {
		return strDisplayRepresentation.c_str();
	}
};

int main() {
	set<ContactItem> setContacts;
	setContacts.insert(ContactItem("Jack Welsch", "+1 7889 879 879"));
	setContacts.insert(ContactItem("Bill Gates", "+1 97 7897 8799 8"));
	setContacts.insert(ContactItem("Angela Merkel", "+49 23456 5466"));
	setContacts.insert(ContactItem("Vladimir Putin", "+7 6645 4564 797"));
	setContacts.insert(ContactItem("Manmohan Singh", "+91 234 4564 789"));
	setContacts.insert(ContactItem("Barack Obama", "+1 745 641 314"));
	DisplayContents(setContacts);

	cout << "Enter a person whose number you wish to delete:";
	string nameInput;
	getline(cin, nameInput);

	auto iContactFound = setContacts.find(ContactItem(nameInput, ""));
	if (iContactFound != setContacts.end()) {
		setContacts.erase(iContactFound);
		cout << "Displaying contents after erasing: " << nameInput << endl;
		DisplayContents(setContacts);
	} else {
		cout << "Contact not found" << endl;
	}

	return 0;
}


