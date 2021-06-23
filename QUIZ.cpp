//Japanese Quiz App
#include<iostream>
#include<string>

struct Quiz {
	std::string question;
	char correct; //correct answer
	std::string option[4]; //list of options for your answer
};

char PrintQuiz(std::string question, std::string options[4]) {
	char answer;
	std::cout << " " << question << std::endl;
	std::cout << " A. " << options[0] << std::endl;
	std::cout << " B. " << options[1] << std::endl;
	std::cout << " C. " << options[2] << std::endl;
	std::cout << " D. " << options[3] << std::endl;
	std::cout << " Choose A-D " << ": ";

	//For Answers
	while (true) {
		std::cin >> answer;
		if (answer >= 97 && answer <= 122){
			answer -= 32; // To convert upper and lower case. The ASCII codes for a-z are 97-122.
			              //The ASCII codes for A - Z are 65 - 90
		}
		if ((answer != 'A') && (answer != 'B') && (answer != 'C') && (answer != 'D')) {
			std::cout << "Choose A, B, C, or D" << std::endl;
		}
		if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
			return answer;
			break;
		}
	} 
}

void main()
{
	std::cout << "*****  Welcome to the Japanese Quiz  *****" << std::endl;
	std::cout << "*****  Answer 5 Questions  *****" << std::endl;
	std::cout << " " << std::endl;

	char answer_input;
	// Changing Q#10 15 or more to add more questions (arrays).
	Quiz Q10[] = { {"What is 'rain' in Japanese?", 'B',{"‚Í‚ê","‚ ‚ß","‚­‚à‚è","‚ä‚«"}},
		{"What is 'Thunder' in Japanese?", 'C',{"‚¶‚µ‚ñ","‚Ð‚å‚¤","‚©‚Ý‚È‚è","‚ä‚«"}},
		{"What is 'Sun' in Japanese?", 'A',{"‚½‚¢‚æ‚¤","‚Â‚«","‚Ù‚µ","‚»‚ç"}},
		{"What is 'Star' in Japanese?", 'C',{"‚½‚¢‚æ‚¤","‚Â‚«","‚Ù‚µ","‚»‚ç"}},
		{"What is 'Moon' in Japanese?", 'B',{"‚ä‚«","‚Â‚«","‚Ù‚µ","‚¤‚Ý"}},
		{"What is 'Cloud' in Japanese?", 'D',{"‚ä‚«","‚Í‚ê","‚ ‚ß","‚­‚à‚è"}},
		{"What is 'Money' in Japanese?", 'A',{"‚¨‚©‚Ë","‚Ù‚ñ","‚±‚ê","‚¹‚ñ"}},
		{"What is 'This' in Japanese?", 'C',{"‚»‚ê","‚ ‚ê","‚±‚ê","‚Ç‚ê"}},
		{"What is 'That' in Japanese?", 'B',{"‚»‚ê","‚ ‚ê","‚±‚ê","‚Ç‚ê"}},
		{"What is 'Which' in Japanese?", 'D',{"‚»‚ê","‚ ‚ê","‚±‚ê","‚Ç‚ê"}}
	};

	for (int i = 0; i <= 9;i++) { // counts start with 0... - Q#-1 for i
		std::cout << " #Question" << i + 1 << std::endl;
		answer_input = PrintQuiz(Q10[i].question, Q10[i].option);
		if (answer_input == Q10[i].correct) {
			std::cout << "Correct!" << std::endl;
			std::cout << "Let's try the next question!" << std::endl;
			std::cout << " " << std::endl;
		}
		if (answer_input != Q10[i].correct) {
			std::cout << "Incorrect" << std::endl;
			std::cout << std::endl << "The correct answer is : " << Q10[i].correct << std::endl;
		}
	}
	std::cout << "   " << std::endl;
	std::cout << "         You have Completed!   " << std::endl;
	std::cout << "         Enjoy Learning!! " << std::endl;

	system("pause>0");
}