// HUFF.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Huffman.h"
#include <iostream>
using namespace std; 

//int argc, char* argv[]

int main()
{
	 
	//start by reading the file 

	//build table and other garbage and COMPRESS
	//start by writing the function that builds the 256 bit encoding table??
	//ignore possible loss of data warnings 
	//with combining signed and unsigned 

	//use: 
	//  (((int) c) & 0xff)) 
	//when doing arthimitic on characters 

	//SELF NOTES ON HOW THIS SHOULD WORK 

	//build frequency table 

	string fileName1, fileName2, fileName3, argumentType; 
	Huffman huffmanTree; 

	cin >> argumentType >> fileName1; 
	/*
	if (argc == 2)
	{
		//no file input 
		argumentType = argv[1]; 
	}
	else if (argc == 3)
	{
		//1 file 

		argumentType = argv[1]; 
		fileName1 = argv[2]; 
	}
	else if (argc == 4)
	{
		//2 files 

		argumentType = argv[1]; 
		fileName1 = argv[2]; 
		fileName2 = argv[3]; 
	}
	else if (argc == 5)
	{
		//3 files 

		argumentType = argv[1]; 
		fileName1 = argv[2]; 
		fileName2 = argv[3]; 
		fileName3 = argv[4];
	}
	else
	{
		//invalid argument 
		cout << "Invalid argument"; 
		return 1; 
	}
	*/ 


	//deal with arguments here 
	if (argumentType == "-t")
	{
		//build the tree file
		
	}
	else if (argumentType == "-e")
	{
		//build tree file and encode
		if (fileName2.empty())
		{
			fileName2 = fileName1 + ".huf"; 

			huffmanTree.EncodeFile(fileName1, fileName2); 
			return 0; 
		}
		else
		{
			huffmanTree.EncodeFile(fileName1, fileName2);
		}
	}
	else if (argumentType == "-et")
	{
		//encode from exsisting tree

	}
	else if (argumentType == "-d")
	{
		//decode

	}
	else if (argumentType == "-h")
	{
		//help

	}

	//skip chapter 5 and go to 6 

    std::cout << "Hello World!\n"; 
}

