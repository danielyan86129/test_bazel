load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

local_repository(
    name = "tetgen",
    path = "../3rdparty/tetgen",
)

local_repository(
    name = "ann",
    path = "../3rdparty/ann",
)

local_repository(
    name = "isosurface",
    path = "../3rdparty/isosurface_tao",
)

local_repository(
    name = "trimesh",
    path = "../3rdparty/trimesh2",
)

git_repository(
    name = "com_github_gflags_gflags",
    remote = "https://github.com/gflags/gflags.git",
    tag = "v2.2.2",
)
