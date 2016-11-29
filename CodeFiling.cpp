#include <iostream>

int* fibonacciGenerator(int first, int second, int terms){
	
	int *sequence = new int[terms];
	
	//static int sequence[terms];
	
	sequence[0] = first;
	sequence[1] = second;
	
	for(int j = 2; j < terms; j++){
		sequence[j] = sequence[j-1] + sequence[j-2];
	}
	
	return sequence;
}


int fibGen(int first){
	
	if(first == 0){
		return 0;
	}
	else if(first == 1){
		return 1;
	}
	else{
		return ( fibGen(first-1) + fibGen(first-2) );
	}
	
}




int main(){
	
	int *p;
	
	p = fibonacciGenerator(1,1,20);
	
	for( int i = 0; i < 20; i++ ){
		std::cout << "Term " << i;
		std::cout << " = " << *(p+i) << "\n";
	}
	
	int n = 20;
	
	for(int c = 1; c <= n; c++){
		std::cout << fibGen(c) << "\n";
	}
	
	
	delete[] p;
	
	std::cout << "Deleted successfully";
	
	return 0;
}