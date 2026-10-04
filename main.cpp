#include <iostream>
#include <map>
using namespace std;
int main() {
map<string, int> myMap;
// Insert key-value pairs
myMap["apple"] = 100;
myMap["banana"] = 150;
myMap["cherry"] = 200;
// Display all elements
cout << "Map contents:\n";
for (auto item : myMap) {
cout << item.first << ": " << item.second << endl;
}
// Access a value
cout << "\nValue of 'banana': " << myMap["banana"] <<endl;
// Erase a key
myMap.erase("apple");
// Display after deletion
cout << "\nAfter removing 'apple':\n";
for (auto item : myMap) {
cout << item.first << ": " << item.second << endl;
}
// Size of the map
cout << "\nMap size: " << myMap.size() << endl;
return 0;
}
