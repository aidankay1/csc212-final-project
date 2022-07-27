# CSC 212 Final Project: Segment Tree

University of Rhode Island / Summer 2022

Aidan Kelly, Hannah Naphosaysavath, Olugbenga Olufasola

---

For the final project, we elected to implement the Segment Tree data structure in C++. We were given approximately four weeks to complete the project, which included a written report, an oral presentation, and computer-generated visualizations based on our data structure.

| | Aidan Kelly | Hannah Naphosaysavath | Olugbenga Olufasola |
| ----------- | ----------- | ----------- | ----------- |
| Code | Class skeleton, .DOT visualization & Compilation instructions | Update() & Search () | Insert() & Print() |
| Report | Implementation | Introduction | Methods |
| Presentation | Explain Code | Descriptions & Applications | Explain Plot & Time Complexity |

## Building & Usage
To test this implementation, create a `main.cpp` file and add any of the functionality outlined in `SegmentTreeMax.hpp`. To compile with GCC, use `g++ main.cpp SegmentTreeMax.cpp -o main`. Then, simply run the program with `./main`.

To incorporate this implementation into your own code, add the relevant methods and be sure to link `SegmentTreeMax.cpp` at compile time. To avoid bloated build commands, consider creating a makefile for your project.

## What is data structure
Data structure is a method used to store and organize data. It gives us a way of arranging data on computer so that the data can be processed, accessed, and update efficiently. Data structure play an important role in alogrithm design and how the alogrithms are used within computer which is why it is important to used the right data structure for a project depending on the requirements for the project. There are two categoies which data structure are divided into but for this project the non-primitives data structure is what we are going to step into because the project fall into the non-primitves data structure of linear and non-linear data structure.

#### Types of data structure
* Linear data structure

   It is a data structure where data element are arrange sequentially or linearly one after the other. Linear data structure are easy to implement since they have data element linearly one after the other. Examples of linear data structure are array, stack, queue, and linked list.

* Non-linear data structure

   It is a data structure where data element are not arrange sequentially or linearly one after the other but instead data element are arrange in hierachical where one element is connect to one element or more elements. They are not esay to implement but non linear data structure utilizes computer memory efficiently. Examples of non-linear data structure are trees and graph.
 
   ![image](https://user-images.githubusercontent.com/90344642/180303491-5957d3a3-9513-4d8f-981d-7ae74f6675a7.png) 
   
   The data structure hierarchy showing the linear and non-linear data structure
   
## Introdution
Segement Tree are tree data structure that are used for storing information about intervals or array segment and to answer quesries
