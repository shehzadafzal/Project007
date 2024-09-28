#include <iostream>




int main(){
//-------------------	

	int marks_in_english 	= 85;
	int marks_in_urdu 		= 72;
	int marks_in_islamyat 	= 91;
	int marks_in_Science	= 80;

	int TotalMarks = 400;
	
	float AverageMarks =
	(
		marks_in_english+ marks_in_urdu
		+marks_in_islamyat
		+marks_in_Science
	)/4;

	std::cout << "Student Average Marks are: ";
	std::cout << AverageMarks;
	std::cout << " out of 100";
	
	
	
//-----------------------	
	return 0;
}













