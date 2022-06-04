#include <iostream>
#include "YouTubeChannel.h"

int main() {

	YouTubeChannel ytChannel;
	ytChannel.Name = "Work Life In Singapore";
	ytChannel.OwnerName = "Chee Wai Wong";
	ytChannel.SubscribersCount = 2000;
	ytChannel.PublishedVideoTitles = { "Orchard Road Virtual Tour","Sentosa Virtual Tour","Pulua Ubin Virtual Tour"};

	std::cout << "Name: " << ytChannel.Name << std::endl;
	std::cout << "Owner Name: " << ytChannel.OwnerName << std::endl;
	std::cout << "Subscribers Count: " << ytChannel.SubscribersCount << std::endl;
	
	//  ---- This will show error as, list, you need to use a loop to display the attributes. ----
	// std::cout << "Published Video Titles: " << ytChannel.PublishedVideoTitles << std::endl;

	for (std::string videoTitle : ytChannel.PublishedVideoTitles) {
		std::cout << "Published Video Titles: " << videoTitle << std::endl;
	}

}