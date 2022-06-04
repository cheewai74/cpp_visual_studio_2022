#pragma once

#include <iostream>
#include <list>
#include <string>

class YouTubeChannel
{
public:
	std::string Name;
	std::string OwnerName;
	int SubscribersCount;
	std::list<std::string> PublishedVideoTitles;

};

