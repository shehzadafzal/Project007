#include <iostream>





int main(){

	int Car1_b = 2000;
	int Car2_b = 2500;
	int Car3_b = 1000;
	
	int Car1_s = 5000;
	int Car2_s = 2800;
	int Car3_s = 2500;
	

	std::cout << "Car1 (Profit): $ "<< Car1_s - Car1_b <<"\n";
	std::cout << "Car2 (Profit): $ "<< Car2_s - Car2_b <<"\n";
	std::cout << "Car3 (Profit): $ "<< Car3_s - Car3_b <<"\n";
	std::cout << "-------------------------------------\n";
	std::cout << "Total Profit: $ "<< Car1_s - Car1_b+Car2_s - Car2_b+Car3_s - Car3_b << "\n";
	std::cout << "-------------------------------------\n";

	

	
	return 0;
}













