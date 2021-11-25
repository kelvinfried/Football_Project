#include <iostream>
#include <string>

//Classes
//Step 1 - Planning Phase.
//Data expected to see inside a footabll stadiums
//Football Players Vairables
	/*
	Player name	//str
	Prefered Foot	//Bool
	Height	//Float
	Weight	//Int
	Age	//Int
	Speed	//Float
	Ball Control	//Int
	Shooting	//int
	tackling	//Int
	Positioning	//int
	Fitness	int
	*/
//Footbal Team Vairables
	/*
	Team Name	//str
	Team Colour	//str
	Manager	//str
	
	Players	//Football playrs
	Players on pitch	//int
	Players on bench	//int
	Num of Red cards	//int
	Num of Yellow cards	//int
	*/
//Football Stadium Vairables
	/*
	Stadium Name	//str
	Stadium Location	//str
	Football Teams	//Football team
	
	Location of Ball	// float[2]
	num of supporters	//int
	Time Left in game	//float
	*/

class Football_Player
{
	public:
		std::string Name;
		bool Prefered_Foot;	//Left is 0, Right is 1.
		float Height;	//In Meters
		int Weight;	//In KG
		int Age;
		float Speed;	//M/S
		int Ball_Control;	//Generic Value, how well they can use the ball
		int Shooting;	//Genetic value, how well they can kick a ball
		int Tackling;	//How well they can tackle a ball
		int Positioning;	//How well the players position themself 
		int Fitness;	//How much stamina the player has.
	
		Football_Player()
		{
			Name = "Default Player Name";
			Height = 1.5;
			Weight = 50;
			Age = 18;
			Speed = 5;
			Ball_Control = 10;
			Shooting = 5;
			Tackling = 5;
			Positioning = 5;
			Fitness = 5;
		}
};

class Football_Team
{
	public:
		std::string Name;
		std::string Colour;
		std::string Manager;
		Football_Player Players[15];
		std::string Players_on_pitch[11];
		std::string Players_on_bench[4];
		int Yellow_cards;
		int Red_cards;
	
		Football_Team()
		{
			Name = "Default Team Name";
			Colour = "Black";
			Manager = "Default Manager Name";
		}
};

class Football_Stadium
{
	public:
	
		Football_Stadium()
		{
		}
};

int main()
{
	Football_Player player_a; //Initialised an object from the class 
	
	std::cout<< "I am a football player with the name of: " << player_a.Name << std::endl;
	
	return 0;
}