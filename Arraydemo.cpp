#include "Array.cpp"

int main(){
	cout<<"INSERTION OPERATIONS\n";
	Array<int> myArray;
	cout<<"INSERTION AT END \n";
	myArray.insert_at_end(3);
	myArray.insert_at_end(5);
	myArray.insert_at_end(6);
	cout<<myArray;
	cout<<"INSERTION AT BEGINNING \n";
	myArray.insert_at_beg(10);
	myArray.insert_at_beg(12);
	myArray.insert_at_beg(14);
	cout<<myArray;
	cout<<"INSERTION AT POSITION \n";
	myArray.insert_at_pos(20,3);
	myArray.insert_at_pos(30,4);
	cout<<myArray;
	cout<<"SEARCHING OPERATIONS: \n";
	cout<<"LINEAR SEARCH \n";
	int lin=myArray.linear_search(20);
	cout<<"INDEX POSITION :"<<lin<<endl;
	cout<<"BINARY SEARCH \n";
	int bin=myArray.binary_search(10);
	cout<<"INDEX POSITION:"<<bin<<endl;
	cout<<"DELETION OPERATIONS: \n";
	cout<<"DELETION AT BEGINNING \n";
	myArray.delete_at_beg();
	cout<<myArray;
	cout<<"DELETION AT END \n";
	myArray.delete_at_end();
	cout<<myArray;
	cout<<"DELETION AT INDEX \n";
	myArray.delete_at_index(2);
	cout<<myArray<<endl;
	cout<<"SORTING OPERATIONS: \n";
	myArray.selection_sort();
	cout<<"AFTER SELECTION SORT:\n"<<myArray;
	myArray.insert_at_beg(23);
	myArray.insert_at_beg(45);
	myArray.bubble_sort();
	cout<<"AFTER BUBBLE SORT:\n"<<myArray;

	
	
	return 0;
}
