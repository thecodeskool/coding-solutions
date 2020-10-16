#include <iostream>
#include <vector>
using namespace std;


vector<int> merge(vector<int> A, vector<int> B) {

	int sizeA = A.size();
	int sizeB = B.size();

	int ptrA = 0, ptrB = 0;
	vector<int> C;

	while(true) {
		if (A[ptrA] < B[ptrB]) {
			C.push_back(A[ptrA]);
			ptrA++;
		} else {
			C.push_back(B[ptrB]);
			ptrB++;
		}

		if (ptrA >= sizeA || ptrB >= sizeB) break;

	}

	for(int i=ptrA; i<sizeA; i++) {
		C.push_back(A[i]);
	}

	for(int i=ptrB; i<sizeB; i++) {
		C.push_back(B[i]);
	}

	return C;

}

int main() {
	int n, m;
	cin>>n;
	vector<int> A(n);

	for (int i=0;i<n;i++)cin>>A[i];

	cin>>m;
	vector<int> B(m);

	for (int i=0;i<m;i++)cin>>B[i];

	vector<int> C = merge(A, B);

	cout<<"A: ";
	for (int i = 0; i < A.size(); ++i) {
		cout<<A[i]<<" ";
	}
	cout<<endl;

	cout<<"B: ";
	for (int i = 0; i < B.size(); ++i) {
		cout<<B[i]<<" ";
	}
	cout<<endl;
	
	cout<<"C: ";
	for (int i = 0; i < C.size(); ++i) {
		cout<<C[i]<<" ";
	}
	cout<<endl;
	return 0;

}