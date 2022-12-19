#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<string>

int RNG( void );
int RNG( int range );
void Parse( std::string input );

struct Person {
	int id;
	std::string name;
	int age;
	int health; // same thing
	Person *spouse;
	Person *children[ 10 ]; // max of 10 children lol
	struct Animal *pets[]; // max of 10 pets lol
};
struct Animal {
	int id;
	std::string name;
	int age;
	int health; // same thing
	Person *owner;
};
enum IllnessID {
	NONE = 0, // 0 - No illness
	FLU,      // 1 - Influenza
	COLD,     // 2 - Generic cold
	STOMACH,  // 3 - Generic stomach virus
	RSV,      // 4 - RSV
	COVID,    // 5 - COVID-19
	FORTNITE  // 6 - The fOrTnItE virus
};
struct Illness {
	IllnessID id;
	std::string name;
	int severity; // severity dictates the likelihood of survival. 0 = not harmful, 10 = certain death
};

struct Instance {
	bool running;
	int tick;
	bool paused;
};

int idcounter = 0;

int main( void ) {
	// initialize instance
	Instance instance = { false, 0, true };
	// initialize illnesses
	Illness S_NONE = { NONE, "no illness", -1 };
	Illness S_FLU = { FLU, "the flu", 4 };
	Illness S_COLD = { COLD, "a cold", 2 };
	Illness S_STOMACH = { STOMACH, "a stomach virus", 3 };
	Illness S_RSV = { RSV, "RSV", 5 };
	Illness S_COVID = { COVID, "COVID-19", 8 };
	Illness S_FORTNITE = { FORTNITE, "Fortnite", 10 };

	std::string input;
	
	// game loop
	while( instance.running ) {
		// debug
		std::cout<<"<Tick = "<<instance.tick<<">"<<std::endl;

		// command input
		std::cout<<"> ";
		std::cin>>input;
		Parse( input );

		// if playing, increment ticks
		if( !instance.paused ) instance.tick++;
	}
	std::cout<<"Exiting. Goodbye!"<<std::endl;
	return 0;
}
int RNG( void ) {
	int random = rand();
	return random;
}
int RNG( int range ) {
	int random = rand() % range;
	return random;
}
void Parse( std::string input ) {
	std::string temp;
	for( int i = 0; i <= input.size(); i++ ) {
		temp += input[ i ];

	}
}
void AddPersonBeginning( std::string name, int age, )
void AddPerson( std::string name ) {

}
void Marry( Person person1, Person person2 ) {

}