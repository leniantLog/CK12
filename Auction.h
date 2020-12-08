/**************************************************************

File name : auction.h
Author : 
Description : This file is the header file for auction class

****************************************************************/


#include <iostream>
#include <cassert>
#include <string>

using namespace std;

#ifndef AUC_H
#define AUC_H

class Auction {	
	std::string mDescription;
	double mMinimumPrice;	
	double mCurrentBid = -1;
	int mTotalNumberofBids =0;
	bool mAuctionIsOpen = 0;



public :


Auction (std::string description, double minprice);
void readDescription ();
string getDescription ();
void readmMinimumPrice ();
void getmMinimumPrice () ;
double getmCurrentBid ();
void getmTotalNumberofBids ();
void openAuction ();
void closeAuction ();
bool lessThan (double currbid, double newbid);
bool bid (double amount);
int numberOfBids ();
bool wasSuccessful ();
double winningBid ();
};

#endif
