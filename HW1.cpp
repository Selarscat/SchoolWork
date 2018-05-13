include <stdio.h>

#define maxStates 25
#define maxTransitions 100
int createDFA();
int loadDFA();
int runDFA(struct automaton DFA);
char readDFA (FILE*, int*); 


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
	char fileName[20];
	while (done == 0){
		printf("Please select: 1 Create a new DFA, 2 Load saved DFA");
		choice = getchar();
		if (choice == '1') {
			//function for file creation
			if (createDFA() == 0) {
			return 0;
			done = 1;
			}
			else{
			printf("Error in createDFA");
			return -1;
			}
		}
		else if(choice == '2') {
			//function for DFA loading from file
			printf("please enter the filename of the DFA to load.")
			scanf("%s",fileName);
			strcat(fileName, ".txt");
			if(loadDFA(fileName) == 0) {
			return 0;
			done = 1;
			}
			else{
			printf("Error in loadDFA");
			return -1;
		}
		}
		else{
			printf("Not a valid select please try again.");
			done = 0;
		}
	}
	return -1;
}

int createDFA() {
	char fileName[20];
	fileName = "../";
	char inputValue[3];
	char fileOutput[400];
	int i = 0;
	ThisAutomata = new automaton
	printf("Please imput your state list in the following format: ddddd (max 25 states)");
	scanf("%c", ThisAutomata.states);
//TODO: error check to see if included in states
	printf("Please input your start state now:");
	scanf("%c", ThisAutomata.startState);
//TODO: error check to see if included in states	
	printf("Please input your end state now:");
	scanf("%c", ThisAutomata.endState);
	printf("Please input your transition stages in the format (startstate,tigger,endstate) enter XXX to finished transition creation.");
	
	while (scanf("%s", inputValue) != "XXX" && i < 100){
		ThisAutomata.transitions[i].Fromstate = inputValue[0];
		ThisAutomata.transitions[i].trigger = inputValue[1];
		ThisAutomata.transitions[i].Nextstate = inputValue[2];
		i++;
		if (i < 100)
		printf("Please input your transition stages in the format (startstate,tigger,endstate) enter XXX to finished transition creation.");
		else
		printf("Transitions are full, no more may be entered.");
	}
//TODO:Error check the char input for states so they match that they are a type or specific character
	printf("Please enter the filename for this dfa to be saved.");
	scanf("%s", fileName);
	strcat(fileName, ".txt");
	
	outfile = fopen (fileName, "w");
	if (outfile == NULL){
		prinf("Error LN 102.")
		return -1;
	}
	
	fileOutput = 
	
	
	
	
	fprintf(outfile, "%s", fileOutput)
	fclose(outfile);
	printf("Save Worked!");
	
	loadDFA(fileName);	
}

int loadDFA(char *fileName[20]]) {
	infile = fopen (fileName, "r");
	if (inData != NULL) {
    while ( readDFA(inData, &num) != EOF ) {
      count++

      
    }
}

int readDFA (FILE *inData, int *numPtr) {    
  char result;

  result = fscanf (inData, "%c", numPtr);

  return result; 
}


int runDFA() {
	while 
}


