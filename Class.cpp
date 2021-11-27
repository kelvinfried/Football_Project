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
		int Number;
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
			Number = 0;
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
				//std::cout<< "Test" << std::endl; _/ Test passed
				Players_on_pitch[ x ] = "Default Player Name";
			}
			
			for( int x = 0; x < FOUR; x++ )
			{
				//Players_on_bench[ x + 10 ] = Players.Name();
				//std::cout<< "Test" << std::endl;	//Only happens twice
				Players_on_bench[ x ] = "Default Player Name";
				//std::cout<< "Done" << std::endl;	// apperas to end after here on two turns
			} 
			//An object needs to be created inorder to referance it's attributes; So in theroy this should be done at run time of the game itself
			
			int Yellow_cards = 0;
			int Red_cards = 0;
		}
};

class Football_Stadium
{
	public:
		std::string Name;
		std::string Location;
		Football_Team Teams[2];
		float Location_of_ball;
		int Supporters;
		float Time_left;
	
		Football_Stadium()
		{
			const short TWO = 2;
			
			Name = "Default Stadium Name";
			Location = "Default Stadium Location";
			/*for( int x = 0; x < TWO; x++)
			{
				Teams[ x ] = "Default Team Name";
			}*/ //Lost track of what I was doing, This is dumb as I was already set the team name in the football team class. My bad
			
			Location_of_ball = 0.0f;
			Supporters = 0;
			Time_left = 90.0f;
		}
};

class RPG_Item
{
	public:
		std::string Name;
		int Value;
		int Weight;
		bool Weapon;
		int Damage;
		
		RPG_Item:
			Name = "Default Item Name";
			Item = 0;
			Weight = 0;
			Weapon = false;
			Damage = 0;
};

class RPG_Character
{
	public:
		int Height;
		int Mana;
		//std::string Inventory_Slots[ 10 ];
		RPG_Item Inventory_Slots[ 5 ];
			short Equipt_Weapon;
		
		int Start_location[ 2 ];
		int Current_location[ 2 ];
		
		RPG_Character:
			Height = 1;
			Mana =  0;
			/*for( int x = 0; x < 10; x++ )
			{
				Inventory_Slots[ x ] = "No Item in this slot";
			}*/
			Equipt_Weapon = 0;
			
			Start_location = { 0, 0 };
			Current_location{ 0, 0 };
			
		void Attack()
		{
		
		}
};

class RPG_Dungeon
{
	public:
		RPG_Character Player_character;
		RPG_Character Entity[ 16 ];	//Need to add a start location to this so it's not redundant
		
		/*int Location_Of_Player[ 2 ];
		int Start_location[ 2 ];
		int End_location[ 2 ];*/	//Not needed as these will be kept in the players class rather than in the dungeon
		
		int Entry_Point[ 2 ];
		int Exit_Point[ 2 ];
		
		RPG_Dungeon:
			Entry_Point = { 0, 0 };
			Exit_Point = { 0, 0 };
			
			
};

int main()
{
	Football_Player player_a; //Initialised an object from the class 
	
	std::cout<< "I am a football player with the name of: " << player_a.Name << std::endl;
	std::cout<< "" << std::endl;
	
	Football_Team Team_a;
	//std::cout<< "Gaming Test" << std::endl;

	std::cout<< "The football team has a name called: " << Team_a.Name << std::endl; 
	std::cout<< "" << std::endl;
	
	Football_Stadium Stadium_a;
	
	std::cout<< "The football stadium is called: " << Stadium_a.Name << " is located at " << Stadium_a.Location << std::endl;
	std::cout<< "The teams playing there are called " << Stadium_a.Teams[ 0 ].Name << " and " << Stadium_a.Teams[ 1 ].Name << std::endl;
	std::cout<< "" << std::endl;
	
	return 0;
}