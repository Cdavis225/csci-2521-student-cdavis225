#include <iostream> 
#include <vector>

using namespace std;

int main() {
	int testScores[10];
	int avgScore;
	cout << "Enter 10 test scores" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> testScores[i];
		if (testScores[i] > 100 || testScores[i] < 0) {
			cout << "Invalid score entered!" << endl;
			break;
		} 
	}

	int highScore = testScores[0];
	for (int i = 0; i < 10; i++) {
		if (testScores[i] > highScore) {
			highScore = testScores[i];
		}
	}
	cout << "Highest Score: " << highScore << endl;

	int lowScore = testScores[9];
	for (int i = 0; i < 10; i++) {
		if (testScores[i] < lowScore) {
			lowScore = testScores[i];
		}
	}
	cout << "Lowest Score: " << lowScore << endl;

}

//void vectorSolution() {
//	vector <int> scores;
//}
//
//int main() {
//	arraySolution;
//	vectorSolution;
//
//	return 0;
//}