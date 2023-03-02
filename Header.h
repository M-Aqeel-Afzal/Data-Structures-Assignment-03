#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<sstream>
#include<cmath>
//#include"pch.h"
using namespace std;
template <typename Type>
struct LinkedList {

	template <typename TypeValue>
	struct Node {
		TypeValue value;
		Node<TypeValue>* Next;
	};
	int Length = 0;
	Node<Type>* Head = NULL;

	//Insert val in the LinkedList
	void insert(Type val) {
		Node<Type>* temp = new  Node<Type>;
		Node<Type>* temp1;
		temp1 = Head;
		temp->value = val;
		temp->Next = NULL;
		if (Head == NULL)
			Head = temp;
		else
		{
			while (temp1 != NULL)
			{
				if (temp1->Next == NULL)
				{
					temp1 - Next = temp;
					Length++;
					break;
				}
			}
		}
	}

	//This function returns value at i'th index
	Type& get(int Index) {

	}

	void display() {

	}
	//Function to return length of LinkedList
	int getLength() {

	}

};

//This function takes a File path as an input, preprocesses it and then returns a LinkedList of strings in csv format
//This function also writes the rows in a csv file i.e. preProcessed.csv
LinkedList<string> preProcessing(string FilePath) {


	vector<string> v1;
	string word = "", line = "";
	fstream f1;
	f1.open(FilePath, ios::in);
	for (int i = 0; i < 16; i++)
	{
		getline(f1, line);
		stringstream str(line);
		while (getline(str, word, ','))
		{

			v1.push_back(word);
		}
		for (int i = 0; i < v1.size(); i++)
		{
			cout << v1[i] << "  ";
		}
		cout << endl;
		v1.clear();
	}
	f1.close();
}

//This function takes path of a preprocessed csv file and loads it into LinkedList
LinkedList<string> read_csv(string FilePath) {

}
//This function takes any specific Feature and calculate Entropy.
float calculateEntropyOnFeature(LinkedList<string> Dataset, int FeatureIndex) {
	vector<string> v1;
	string line = "", word = "";
	double d1 = 0, d2 = 0;
	float f1 = 0.0;
	for (int i = 0; i <= Dataset.Length; i++)
	{

		if (FeatureIndex == i)
		{
			stringstream str(line);
			while (getline(str, word, ','))
			{

				v1.push_back(word);
			}

			for (int i = 0; i < v1.size(); i++)
			{
				if (v1[0] == v1[i])
					d1++;
				if (v1[1] == v1[i])
					d2++;
			}
			f1 = d1 * (log(d1) / log(2));
			f1 = f1 + d2 * (log(d2) / log(2));
			return f1;
		}
		Dataset.Head = Dataset.Head->Next;
	}

}

//This function takes Labels as an input and calculate Total Entropy.
float calculateTotalEntropy(LinkedList<string> Dataset) {

}

//Data Structure to maintain Nodes in a Tree
template<typename T>
struct treeNode {

};

//Data Structure to maintain Tree for training, predictions and traversal
template <typename T>
struct Tree {

	void build_tree(LinkedList<T> trainDataset, int start, int WindowSize) {

	}

	//Takes a testDataset and rowIndex as input and returns a potential string i.e. 'Good'
	T predictOne(LinkedList<T> testDataset, int rowIndex) {

	}

	//Takes a testDataset as input and returns a potential predictions as LinkedList<string> i.e. {'Good','Excellent','Notfound'}
	LinkedList<T> predictAll(LinkedList<T> testDataset) {

	}

	//This function computes accuracy after training
	float accuracy(LinkedList<T> testDataset) {

	}

	//This function returns string in csv format i.e. "1,16,2,9" after traversing in preOrder fashion.
	//Check Test Case for better understanding of output
	string preOrderTraversal() {

	}

	//This function returns string in csv format i.e. "1,16,2,9" after traversing in inOrder fashion
	//Check Test Case for better understanding of output
	string inOrderTraversal() {

	}

	//This function returns string in csv format i.e. "1,16,2,9" after traversing in postOrder fashion
	//Check Test Case for better understanding of output
	string postOrderTraversal() {

	}
};


//Data Structure to maintain Multiple Trees for training and predictions
template <typename T>
struct Forest {

	//Constructor to set some data members 
	Forest(int NTrees, int WindowSize, int stepSize) {

	}

	//This function calls train on each tree individually by following the sliding window logic and keeps track of those trees.
	void build_forest(LinkedList<T> trainDataset) {

	}

	//This function takes predictions on 1 entry of testDataset from all Trees and then merge them together, 
	//and only gives those entries whose occurence is maximum in that list and return that.
	LinkedList<T> predictOne(LinkedList<T> testDataset, int rowIndex) {

	}

	//This function takes predictions on all entries of testDataset from all Trees and then merge them together, 
	//and only gives those entries whose occurence is maximum in that list and return that.
	LinkedList<LinkedList<T>> predictAll(LinkedList<T> testDataset) {

	}


	float accuracy(LinkedList<T> testDataset) {

	}

};

#pragma once
