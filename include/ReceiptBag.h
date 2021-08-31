//Camille Greer
#pragam once
#include "cs372vector.h"
using namespace std;
template <typename Receipt>
class Bag {
private:
	// More on this shortly
	Node<Thing> bagNode;
public:
	void insert(Receipt aReceipt) {
		bagNode.push_back(aReceipt);
	}
	Receipt pop() {
		return bagNode.pop();
	}
	int size() {
		return bagNode.size();
	}
	int count(Receipt aReceipt) {
		int totalFound = 0;
		int bagNodeSizeize = bagNode.size();
		for (int i = 0; i < bagNodeSize; i++) {
			if (bagNode[i] == aReceipt) {
				totalFound++;
			}
		}
		return totalFound;
	}

	int delete(Receipt aReceipt)
	{
		list::remove(Rececipt);
	}
};
