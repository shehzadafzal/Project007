#include <iostream>





int main(){

	int e_s = 85;
	int e_t = 100;
	
	int u_s = 120;
	int u_t = 150;

	int p_s = 130;
	int p_t = 150;

	int c_s = 160;
	int c_t = 200;

	int i_s = 95;
	int i_t = 100;


	std::cout<< "SUBJECTS       OBTAINED MARKS       SUBJECT MARKS\n";
	std::cout<< "------------------------------------------------\n";
	std::cout<< "English			"<<e_s<<"						"<<e_t<<"\n";
	std::cout<< "Urdu			"<<u_s<<"						"<<u_t<<"\n";
	std::cout<< "Physics			"<<p_s<<"						"<<p_t<<"\n";
	std::cout<< "Chemistry		"<<c_s<<"						"<<c_t<<"\n";
	std::cout<< "Islamiyat		"<<i_s<<"						"<<i_t<<"\n";
	std::cout<< "\n";
	std::cout<< "Total Marks   : 	"<<e_s+u_s+p_s+c_s+i_s<<"						"<<e_t+u_t+p_t+c_t+i_t<<"\n";
	std::cout<< "Average Marks : 	"<<(e_s+u_s+p_s+c_s+i_s)/5<<"\n";
	std::cout<< "Percentage    : 	"<<100*(e_s+u_s+p_s+c_s+i_s)/(e_t+u_t+p_t+c_t+i_t)<<"%\n";


	
	return 0;
}













