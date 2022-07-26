#include "SegmentTreeMax.hpp"

SegmentTreeMax::SegmentTreeMax(int *array, int size) {
    tree.resize(2 * size);

    // Copy data into second half of tree
    for (int i = 0; i < size; i++) {
        tree[size + i] = array[i];
    }

    CalculateMaxes();
}

SegmentTreeMax::SegmentTreeMax(std::vector<int> vector) {
    tree.resize(2 * vector.size());

    // Copy data into second half of tree
    std::copy(vector.begin(), vector.end(), tree.begin() + vector.size());

    CalculateMaxes();
}

SegmentTreeMax::SegmentTreeMax(std::string filename) {
    std::ifstream file(filename);

    std::vector<int> data;

    int n;
    // Add integers to vector until end of file is reached
    while (file >> n) {
        data.push_back(n);
    }

    tree.resize(2 * data.size());
    // Copy data into second half of tree
    std::copy(data.begin(), data.end(), tree.begin() + data.size());
    CalculateMaxes();
}

void SegmentTreeMax::CalculateMaxes() {
    // This implementation inspired by Stable Sort on YouTube (https://youtu.be/xztU7lmDLv8)

    for (int i = tree.size() / 2 - 1; i > 0; i--) {
        tree[i] = std::max(tree[2 * i], tree[2 * i + 1]);
    }
}

void SegmentTreeMax::Insert(int value) {
    // To copy into the tree   
    std::vector<int> data;
    data.resize(tree.size() / 2);
    std::copy(tree.begin() + data.size(), tree.end(), data.begin());

   // To add a value to the data
   data.push_back(value);

  // To rebuild the tree
  tree.clear();
  tree.resize(2 * data.size());

  // To copy data into second half of the tree
  std::copy(data.begin(), data.end(), tree.begin() + data.size());
  CalculateMaxes();
}

void SegmentTreeMax::Update(int index, int value) {
}

unsigned int SegmentTreeMax::Search(int value) {
}

void SegmentTreeMax::Print() {
    int count = 0;
    int row = 1;
    
    // To loop through the tree
    for (unsigned int i = 1; i < tree.size(); i++){
        std::cout << tree[i] << " ";
        count++;
    
       // End of row, break line and update to next row
       if (count == row || i == tree.size() - 1){
           std::cout << std::endl;
           count = 0;
           row *= 2;
       }
    }
}

void SegmentTreeMax::GenerateDotVisualization(std::string filename) {
    // Open the file for writing
    std::ofstream of(filename);

    of << "graph SegmentTree {\n\n";
    
    // Draw the root node
    of << "\t" << 1 << " [label = \"" << tree[1] << "\"] [style=\"filled\"] [fillcolor=\"#99ff88\"]\n";
    
    // Label each node
    // This allows multiple nodes with the same value to exist
    for (int i = 2; i < tree.size(); i++) {
        of << "\t" << i << " [label = \"" << tree[i] << "\"]\n";
    }
    
    of << "\n";

    // Draw the edges between each node
    for (int i = 2; i < tree.size(); i++) {
        // If a node is chosen as the max of two elements, make the edge bold
        bool max_of_pair = (tree[i] == tree[i / 2]);
        of << "\t" << i / 2 << " -- " << i << (max_of_pair ? " [penwidth=3]" : "") << "\n";
    }

    of << "\n}";
}
