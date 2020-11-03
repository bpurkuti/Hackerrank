#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        Student(string fN, string lN, int id, vector<int> testScores):Person(fN,lN,id){
            this->testScores =testScores;
        }  
        
        const char calculate(){
            int avg=0;
            for(int i:testScores)
            {
                avg+=i;
            }
            avg = avg/(testScores.size());
            
            char c = ' ';
            
            if(90 <=avg && avg <=100)
            {
                c='O';
            }
            else if(80 <=avg && avg <90)
            {
                c='E';

            }
            else if(70 <=avg && avg <80)
            {
                c='A';

            }
            else if(55 <=avg && avg <70)
            {
                c='P';

            }
            else if(40 <=avg && avg <55)
            {
                c='D';
            }
            else
            {
                c='T';

            }
            
            return c;
        }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}