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

void SegmentTreeMax::CalculateMaxes() {
    // This implementation inspired by Stable Sort on YouTube (https://youtu.be/xztU7lmDLv8)
    
    for (int i = tree.size() / 2 - 1; i > 0; i--) {
        tree[i] = std::max(tree[2 * i], tree[2 * i + 1]);
    }
}

void SegmentTreeMax::Insert(int value) {

}

void SegmentTreeMax::Update(int index, int value) {
    
}

unsigned int SegmentTreeMax::Search(int value) {

}

void SegmentTreeMax::Print() {

}
