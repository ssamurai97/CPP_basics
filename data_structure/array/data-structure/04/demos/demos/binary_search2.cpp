#include<iostream>
#include<vector>
#include<string>

int binarysearch(int a[],int size, int key){

	auto lo =  0;

	int hi = size-1;
	while(lo <= hi){
		int mid = (lo + hi) / 2;
		if(a[mid] == key){
			return key;
		}else if(a[mid] < key ){
			lo = mid + 1;
		}else if(a[mid] > key){
			hi = mid - 1;
		}
	return -1;
	}
}




int main(){

 std::vector<int> v {1,3,3,5,6,7,3,21,11,2,33,56,7,87,76,9};

   auto eleven = binarysearch(v.data(),v.size(), 11);

   std::cout<<"binary search in the elements: \n";

   for(const auto& vi : v){
	   std::cout<< vi <<' ';
   }

   std::cout<<'\n';

   std::cout<<"element: "<<" 11 "<< eleven <<'\n';
}
