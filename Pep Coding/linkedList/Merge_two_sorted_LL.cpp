#include<bits/stdc++.h>
#include "linkedListFunction.cpp"
using namespace std;


Node* mergeSortedLL(Node* head1, Node* head2)
{
	Node* fh = NULL;
	Node* ft = NULL;

	while (head1 != NULL && head2 != NULL)
	{
		if (fh == NULL)
		{
			if (head1->data <= head2->data)
			{
				fh = head1;
				ft = head1;

				head1 = head1->next;
			} else {
				fh = head2;
				ft = head2;

				head2 = head2->next;
			}
		}
		else {
			if (head1->data <= head2->data)
			{

				ft->next = head1;
				ft = ft->next;
				head1 = head1->next;
			} else {
				ft ->next = head2;
				ft = ft->next;
				head2 = head2->next;
			}
		}
	}
	while (head1 != NULL) {
		ft->next = head1;
		ft = ft->next;
		head1 =  head1->next;

	}
	while (head2 != NULL) {
		ft->next = head2;
		ft = ft->next;
		head2 =  head2->next;

	}

	return fh;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);

#endif

	Node* head1 = takeInput();
	Node* head2 = takeInput();
	Node* finalHead = mergeSortedLL(head1, head2);
	printLL(finalHead);

	return 0;

}