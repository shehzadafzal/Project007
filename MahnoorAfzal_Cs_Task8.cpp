#include <iostream>


int Parameter(int x, int y){
	
	return 2*(x+y);
}



int main(){

	std::cout << "Parameter of the Rectangle with 9 meters length and 6 meters width is: ";
	std::cout << Parameter(9,6);
	std::cout << " meters.";

	
	return 0;
}













