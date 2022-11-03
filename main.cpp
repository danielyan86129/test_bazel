#include <iostream>
// Tetgen
#include <tetgen/tetgen.h>
// ANN
#include <ann/ANN.h>
// Tao's isosurface
#include <isosurface/UniGrid.h>
// trimesh
#include "TriMesh.h"

int main(int argc, char *argv[]) {
  std::cout << "Testing~~~" << std::endl;

  tetgenio::polygon p{nullptr, 10};
  std::cout << "Polygon has " << p.numberofvertices << " vertices" << std::endl;

  ANNpointArray arr = annAllocPts(10, 3);
  ANNkd_tree ann_tree(arr, 10, 3);
  std::cout << "=====> ANN stuff..." << std::endl;
  ann_tree.Print(ANNbool::ANNfalse, std::cout);

  UniTreeNode nd{0, 1, nullptr};

  return 0;
}