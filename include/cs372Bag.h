//Camille Greer
#include "cs372vector.h"
using namespace std;
template <typename Thing>
class Bag {
private:
	// More on this shortly
	Node<Thing> bagNode;
public:
	void insert(Thing aThing) {
		bagNode.push_back(aThing);
	}
	Thing pop() {
		return bagNode.pop();
	}
	int size() {
		return bagNode.size();
	}
	int count(Thing aThing) {
		int totalFound = 0;
		int bagNodeSizeize = bagNode.size();
		for (int i = 0; i < bagNodeSize; i++) {
			if (bagNode[i] == aThing) {
				totalFound++;
			}
		}
		return totalFound;
	}

};

