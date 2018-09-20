#include "BattleArenaHeader.h"

char BattleArena()
{
	Characters IronMan{ 100, "Iron Man", "Iron Blast", 5, 10 },
		WarMachine{ 100, "War Machine", "War Blast", 5, 10 },
		BlackWidow{ 100, "Black Widow", "Widow Blast", 5, 10 },
		BlackPanther{ 100, "Black Panther", "Panther Blast", 5, 10 },
		TheVision{ 100, "The Vision", "Vision Blast", 5, 10 },
		SpiderMan{ 100, "Spider-Man", "Spidey Blast", 5, 10 };

	Characters CaptainAmerica{ 100, "Caption America", "America Blast", 5, 10 },
		Hawkeye{ 100, "Hawkeye", "Eye Blast", 5, 10 },
		Falcon{ 100, "Falcon", "Falcon Blast", 5, 10 },
		BuckyBarnes{ 100, "Bucky Barnes", "Bucky Blast", 5, 10 },
		AntMan{ 100, "Ant Man", "Man Blast", 5, 10 },
		ScarletWitch{ 100, "Scarlet Witch", "Witch Blast", 5, 10 };

	Characters Team1[6] = { IronMan, WarMachine, BlackWidow, BlackPanther, TheVision, SpiderMan };
	Characters Team2[6] = { CaptainAmerica, Hawkeye, Falcon, BuckyBarnes, AntMan, ScarletWitch };

	Introduction(Team1, Team2, sizeof(Team1) / sizeof(Characters));


	return ' ';

}