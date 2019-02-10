#include <list>
#include <string>
#include <iostream>
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

	// Constructor and destructor
	ContactItem(const string& strName, const string& strNumber) {
		strContactsName = strName;
		strPhoneNumber = strNumber;
		strDisplayRepresentation = (strContactsName + ": " + strPhoneNumber);
	}

	// used by list::remove() given contact list item
	bool operator == (const ContactItem& itemToCompare) const {
		return (itemToCompare.strContactsName == this->strContactsName);
	}

	// used by list::sort() without parameters
	bool operator < (const ContactItem& itemToCompare) const {
		return (this->strContactsName < itemToCompare.strContactsName);
	}

	operator const char*() const {
		return strDisplayRepresentation.c_str();
	}
};

bool SortOnNumber(const ContactItem& item1, const ContactItem& item2) {
	return (item1.strPhoneNumber < item2.strPhoneNumber);
}

int main() {
	list<ContactItem> contacts;
	contacts.push_back(ContactItem("Jack Welsch", "+1 7889 879 879"));
	contacts.push_back(ContactItem("Bill Gates", "+1 97 7897 8799 8"));
	contacts.push_back(ContactItem("Angela Merkel", "+49 23456 5466"));
	contacts.push_back(ContactItem("Vladimir Putin", "+7 6645 4564 797"));
	contacts.push_back(ContactItem("Manmohan Singh", "+91 234 4564 789"));
	contacts.push_back(ContactItem("Barack Obama", "+1 745 641 314"));

	cout << "List in initial order: " << endl;
	DisplayContents(contacts);

	contacts.sort();
	cout << "After sorting in alphabetical order via operator<:" << endl;
	DisplayContents(contacts);

	contacts.sort(SortOnNumber);
	cout << "After sorting in order of phone numbers via predicate:" << endl;
	DisplayContents(contacts);

	cout << "After erasing Putin from the list: ";
	contacts.remove(ContactItem("Vladimir", ""));
	DisplayContents(contacts);

	return 0;
}



