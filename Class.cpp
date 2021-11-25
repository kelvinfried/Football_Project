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
			const short ELEVEN = 11;
			const short FOUR = 4;
			
			Name = "Default Team Name";
			Colour = "Black";
			Manager = "Default Manager Name";
			//Player passed as it already has it's default values.
			for( int x = 0; x < ELEVEN; x++ )	//Trying to see if this works.
			{
				//Players_on_bench[ x ] = Players.Name();
				Players_on_bench[ x ] = "Default Player Name";
			}
			
			for( int x = 0; x < FOUR; x++ )
			{
				//Players_on_bench[ x + 10 ] = Players.Name();
				Players_on_bench[ x + 10 ] = "Default Player Name";
			} //An object needs to be created inorder to referance it's attributes; So in theroy this should be done at run time of the game itself
			int Yellow_cards = 0;
			int Red_cards = 0;
		}
};

class Football_Stadium
{
	public:
		std::string Stadium_name;
		std::string Stadium_location;
		Football_Team Teams[2];
		float Location_of_ball;
		int Supporters;
		float Time_left;
	
		Football_Stadium()
		{
			const short TWO = 2;
			
			Stadium_name = "Default Stadium Name";
			Stadium_location = "Default Stadium Location";
			for( int x = 0; x < TWO; x++)
			{
				Teams[ x ] = "Default Team Name";
			}
			
			Location_of_ball = 0.0f;
			Supporters = 0;
			Time_left = 90.0f;
		}
};

int main()
{
	Football_Player player_a; //Initialised an object from the class 
	
	std::cout<< "I am a football player with the name of: " << player_a.Name << std::endl;
	
	Football_Team Team_a;
	
	std::cout<< "The football team has a name called: " << Team_a.Name << std::endl; 
	
	return 0;
}