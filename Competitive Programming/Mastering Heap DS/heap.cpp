#include <bits/stdc++.h>
using namespace std;

void upheapify(vector<int> &heap, int idx){
	if (idx == 0) return;
	int pi = (idx - 1)/2;
	if(heap[pi] < heap[idx]){
		int temp = heap[pi];
		heap[pi] = heap[idx];
		heap[idx] = temp;
		upheapify(heap, pi);
	} else {
		return;
	}
}

void downheapify(vector<int> &heap, int i){
	int li = 2*i+1;
	int ri = 2*i+2;
	if(li >= heap.size() and ri >= heap.size()) return;
	int largestIdx = i;
	if(li < heap.size() and heap[li] > heap[largestIdx]){
		largestIdx = li;
	}
	if(ri < heap.size() and heap[ri] > heap[largestIdx]){
		largestIdx = ri;
	}
	if(largestIdx == i) return;
	swap(heap[i], heap[largestIdx]);
	downheapify(heap, largestIdx);
}

void deletePeek(vector<int> &heap) {
	swap(heap[0], heap[heap.size() - 1]);
	heap.pop_back();
	downheapify(heap, 0);
}

int main(){
	vector<int> heap;
	int n;
	cin>>n;
	for(int i=0; i<=n-1; i++){
		int x;
		cin>>x;
		heap.emplace_back(x);
		upheapify(heap, i);
	}
	for(int i=0; i<=heap.size()-1; i++){
		cout<<heap[i]<<" ";
	}
	cout<<endl;
	deletePeek(heap);
	for(int i=0; i<=heap.size()-1; i++){
		cout<<heap[i]<<" "; 
	}
	cout<<endl;
	priority_queue<int, vector<int>, greater<int> > pq;
	pq.push(10);
	pq.push(20);
	pq.push(30);
	pq.push(40);
	pq.push(50);
	pq.push(60);
	while(!pq.empty()) {
		cout<<pq.top()<<" ";
		pq.pop();
	}
}