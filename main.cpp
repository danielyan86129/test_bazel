#include <array>
#include <iostream>

// Tetgen
#include <tetgen/tetgen.h>
// ANN
#include <ann/ANN.h>
// Tao's isosurface
#include <isosurface/UniGrid.h>
// trimesh
#include <trimesh/KDtree.h>
#include <trimesh/TriMesh.h>
// gflags
#include <gflags/gflags.h>

// test gflags
DEFINE_bool(big_menu, true, "Include 'advanced' options in the menu listing");
DEFINE_string(languages, "english,french,german",
              "comma-separated list of languages to offer in the 'lang' menu");

int main(int argc, char *argv[]) {
  std::cout << "Testing~~~" << std::endl;

  tetgenio::polygon p{nullptr, 10};
  std::cout << "Polygon has " << p.numberofvertices << " vertices" << std::endl;

  ANNpointArray arr = annAllocPts(10, 3);
  ANNkd_tree ann_tree(arr, 10, 3);
  std::cout << "=====> ANN stuff..." << std::endl;
  ann_tree.Print(ANNbool::ANNfalse, std::cout);

  std::cout << "=====> isosurface stuff..." << std::endl;
  UniTreeNode nd{0, 1, nullptr};

  std::vector<std::array<float, 3>> pts(10, {1.0f, 1.0f, 1.0f});
  trimesh::KDtree *tree = new trimesh::KDtree(pts);
  delete tree;

  // check gflag var
  std::cout << "=====> gflags stuff..." << std::endl;
  std::cout << "FLAG_big_menu = " << FLAGS_big_menu << std::endl;

  return 0;
}