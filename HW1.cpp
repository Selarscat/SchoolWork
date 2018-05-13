include <stdio.h>

int main() {
	
}


struct automaton {
	struct state[4] states;
	struct transition[6] transitions;
};

struct state {
	
};

struct transition {
	struct state previousState;
	char value;
	struct state nextstate;
};
