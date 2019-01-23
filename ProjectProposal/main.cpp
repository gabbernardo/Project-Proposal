#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int score;
	string respond ;
	string username ;
	int age ;
	char choice;
	bool Final_Score = false;
	cout <<"=================================================================="<<endl;
	cout <<"==                                                              =="<<endl;
	cout <<"==                   WELCOME TO TRALSE!                         =="<<endl;
	cout <<"==                                                              =="<<endl;
	cout <<"=================================================================="<<endl;
	cout <<"Enter your username: ";
	cin >> username;
	cout <<"Enter your age: ";
	cin >> age;
	if( age >= 2 ){
		cout <<"You are able to take the quiz. "<< endl;
	}else{
		cout <<"Sorry you are not able to take the quiz. "<< endl;
		return 0;
	}
	cout <<"Are you ready to take the quiz "<< username <<"? Yes/ No"<< endl;
	cin >> respond;
	if(  respond == "Yes" || respond == "yes" ){
		cout <<" Goodluck and Have fun! "<< username << endl;
	}else{
		cout <<"Goodbye!"<<endl;
		return 0;
	}
do{
	cout <<"================================================================================="<<endl;
	cout <<"DIRECTION: Choose the correct answer. CAPITAL LETTERS ONLY"<<endl;
	cout <<"1. The earth is the fourth planet from the sun."<<endl;
	cout <<" A. True     B. False"<<endl;
	cout <<"Answer: ";
	cin >> choice;
	
	if(choice == 'B'|| choice == 'b'){
		cout <<" Your answer is correct!"<< endl;
		cout <<" You got 20pts, next question "<< endl;
		int point1 = 20;
		score = score + point1;
	}else{
		cout <<" Your answer is wrong! It is false because earth is the third planet from the sun"<< endl;
		cout <<" You got 0pt, next question "<< endl;
	}
	cout <<"================================================================================="<< endl;
	cout <<"2. The Planet moon has no moons."<<endl;
	cout <<" A. True     B. False" << endl;
	cout <<"Answer: ";
	cin >>choice;
	
	if(choice == 'A'|| choice == 'a'){
		cout <<" Your answer is correct!"<<endl;
		cout <<" You got 20pts, next question " << endl;
		int point2 = 20;
		score = score + point2;
	}else{
		cout <<" Your answer is wrong! The answer is true because Venus has no moon."<<endl;
		cout <<" You got 0pt, next question" << endl;
	}
	cout <<"================================================================================="<< endl;
	cout <<"3. Jupiter is composed mostly of iron."<< endl;
	cout <<" A. True     B. False"<< endl;
	cout <<"Answer: ";
	cin >> choice;
	
	if(choice == 'B'||choice == 'b'){
		cout <<" Your answer is correct!"<<endl;
		cout <<" You got 20pts, next question "<< endl;
		int point3 = 20;
		score = score + point3;
	}else{
		cout <<" Your answer is wrong! The answer is false because Jupiter is composed primarily of gaseous and liquid matter."<< endl;
		cout <<" You got 0pt, next question"<< endl;
	}
	cout <<"================================================================================="<< endl;
	cout <<"4. The sun is a star of average size."<< endl;
	cout <<" A. True     B. False"<<endl;
	cout <<"Answer: ";
	cin >> choice;
	
	if(choice == 'A' || choice == 'a'){
		cout <<" Your answer is correct!"<<endl;
		cout <<" You got 20pts, next question "<< endl;
		int point4 = 20;
		score = score + point4;
	}else{
		cout <<" Your answer is wrong! The answer is true because sun is a star of average size "<< endl;
		cout <<" You got 0pt, next question "<< endl;
	}
	cout <<"================================================================================="<< endl;
	cout <<"5. A lunar eclipse occurs when the sun passes"<< endl;
	cout <<" A. True     B. False"<< endl;
	cout <<" Answer: ";
	cin >> choice;
	
if(choice == 'B'||choice == 'b'){
		cout <<" Your answer is correct!"<< endl;
		cout <<" You got 20pts"<< endl;
		int point5 = 20;
		score = score + point5;
	}else{
		cout <<" Your answer is wrong! The answer is false because lunar eclipse occur when the Moon passes directly behind Earth and into its shadow. " << endl;
		cout <<" You got 0pt, next question" << endl;
	}
	cout  <<" This your final score: "<< score << endl << flush;
	system ("PAUSE");
	if(score>=60){
		system ("CLS");
		cout <<" Congratulations! You passed the quiz game. You received a reward!"<< endl;
		Final_Score = true;
	}else{
		system ("CLS");
		cout <<" Sorry! Try Again!"<< endl << flush;
		system ("PAUSE");
		system ("CLS");
	}
}while(Final_Score != true);
}