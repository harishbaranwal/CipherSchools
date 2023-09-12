#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode {
	 int val; 
	 ListNode* next;

};

int Final_Answer (ListNode* head) { 
	vector<int>arr;
	ListNode* current = head; 
	while (current) { 
		arr.push_back(current->val);
		current = current->next;
	}	

int n =arr.size();
int maximum = 0;

for (int i = 0; i < n / 2; ++i) {
	int twin_sum =arr[i] +arr[n - 1 - i]; 
	maximum = max(maximum, twin_sum); 
	}
	return maximum;
}

int main(){
	int n;
	cout << "Size: ";
	cin >> n;

	ListNode* head = nullptr;
	ListNode* tail = nullptr;

	cout << "Head= ";
	for (int i = 0; i < n; ++i) {
		int value;
		cin >> value;
		ListNode* newNode = new ListNode;
		newNode->val = value;
		newNode->next = nullptr;
		if (!head) {
			head = newNode;
			tail = newNode;
		} else {
			tail->next = newNode;
			tail = newNode;
		}
	}
 	int result = Final_Answer(head);
	cout << result << endl;

return 0; 
}