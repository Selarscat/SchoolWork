include <stdio.h>

#define maxStates 25
void createDFA();
void loadDFA();
void runDFA(struct automaton DFA);

struct automaton {
	struct state startState;
	struct state endState;
	struct state[maxStates] states;
	struct transition[maxTransitions] transitions;

};
struct state {
	char value;
};
struct transition {
	struct state FromState;
	char trigger;
	struct state Nextstate;
};





int main() {
	int choice, done = 0;
	
	while (done == 0){
		printf("Please select: 1 Create a new DFA, 2 Load saved DFA")
		choice = getchar();
		if (choice == '1') then {
			//function for file creation
			createDFA();
			return 0;
			done = 1;
		}
		else if(choice == '2') then {
			//function for DFA loading from file
			loadDFA();
			return 0;
			done = 1;
		}
		else{
			printf("Not a valid select please try again.")
			done = 0;
		}
	}
	return -1;
}

void createDFA() {
	char stringNum[3];
	ThisAutomata = new automaton
	sprintf(stringNum, "%f", maxStates);
	printf("Please imput your state list in the following format: d,d,d,d,d (max " + stringNum + " states)")
	
	scanf(%)
	
	printf("Please input your start state now:")
	scanf("%c", ThisAutomata.startState)
}

void loadDFA() {
	infile = fopen ("../data.txt", "r");
	if (inData != NULL) {
    while ( readNum(inData, &num) != EOF ) {
      count++

      printf ("Num %d is %d\n", count, num);
      fprintf (outData, "Num %d is %d\n", count, num);
    }
}

int readDFA (FILE *inData, int *numPtr) {    
  int result;

  result = fscanf (inData, "%d", numPtr);

  return result; 
}


void runDFA() {
	while 
}


