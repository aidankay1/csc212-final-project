#include <vector>
#include <algorithm>

class SegmentTreeMax {
   private:
    // The segment tree, represented by a 1D vector
    // The first element is always empty
    std::vector<int> tree;

   public:
    // Basic array constructor
    SegmentTreeMax(int *array, int size);
    // Vector constructor
    SegmentTreeMax(std::vector<int> vector);
    // Insert a value into the tree
    void Insert(int value);
    // Update the value at the specified index
    void Update(int index, int value);
    // Find the index of the specified value, if it exists in the tree
    unsigned int Search(int value);
    // Print a string representation of the tree to stdout
    void Print();
};
