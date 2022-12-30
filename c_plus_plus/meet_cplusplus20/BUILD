load("@rules_cc//cc:defs.bzl", "cc_library")
load("@rules_cc//cc:defs.bzl", "cc_binary")

package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":greet",
    ],
)

cc_library(
    name = "greet",
    srcs = [
        "greet.cc",
    ],
    hdrs = [
        "greet.h",
    ],
)
