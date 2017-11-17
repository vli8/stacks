//Victor Li
//Data Structures with Doctor Li Yanjun
//Lab 3.cpp 

#include<iostream>
#include "itemType.h"
#include "StackOnArray.h"
using namespace std;

main(){
	string x;
	ItemType item;
	StackOnArray stack1, stack2, tempStack;
	cout << "Please enter a word and we will check if this is a palindrome or not: " << endl;
	getline (cin,x);

	string word;
	for(int i = 0; i < x.length(); i++){
		if((x.at(i) >= 'A' && x.at(i) <= 'Z') or (x.at(i) >= 'a' && x.at(i) <= 'z')){
				word = word + x.at(i);
		}
	}

	for(int i = 0; i < word.length(); i++){
		item.Initialize(word.at(i));
		stack1.Push(item);
	}

	tempStack = stack1;
	cout << "Stack 1 is: " << endl;
	stack1.Print();

	for(int j = 0; j <= stack1.GetTop(); j){
		stack2.Push(stack1.Top());
		stack1.Pop();
	}
	cout << "Stack 2 is the reversed version of stack 1: "<< endl;
	stack2.Print();

	for(int i = 0; i <= tempStack.GetTop(); i){
		if(tempStack.Top().ComparedTo(stack2.Top())!= EQUAL){

			cout << "This is not a palindrome! Sorry!" << endl;
			break;
		}
		
		else{
			tempStack.Pop();
			stack2.Pop();

			if(tempStack.IsEmpty()){
			cout << "THis is a palindrome" << endl;	
			break;
			}
		}


	}
	return 0;
}
