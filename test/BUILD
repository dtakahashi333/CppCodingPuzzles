cc_test(
    name="test_find_digits",
    srcs=["test_find_digits.cpp"],
    data=[
        "data/find_digits/input01.txt",
        "data/find_digits/output01.txt",
    ],
    copts=[
        "-Iexternal/gtest/googletest/include",
        "-Iexternal/gtest/googletest",
    ],
    deps=[
        "@googletest//:gtest",
        "@googletest//:gtest_main",
        "@bazel_tools//tools/cpp/runfiles",
        "//src:find_digits",
    ],
)

cc_test(
    name="test_append_and_delete",
    srcs=["test_append_and_delete.cpp"],
    data=glob([
        "data/append_and_delete/*.txt",
    ]),
    copts=[
        "-Iexternal/gtest/googletest/include",
        "-Iexternal/gtest/googletest",
    ],
    deps=[
        "@googletest//:gtest",
        "@googletest//:gtest_main",
        "@bazel_tools//tools/cpp/runfiles",
        "//src:append_and_delete",
    ],
)

cc_test(
    name="test_sherlock_and_squares",
    srcs=["test_sherlock_and_squares.cpp"],
    copts=[
        "-Iexternal/gtest/googletest/include",
        "-Iexternal/gtest/googletest",
    ],
    deps=[
        "@googletest//:gtest",
        "@googletest//:gtest_main",
        "@bazel_tools//tools/cpp/runfiles",
        "//src:sherlock_and_squares",
    ],
)

cc_test(
    name="test_library_fine",
    srcs=["test_library_fine.cpp"],
    data=glob([
        "data/library_fine/*.txt",
    ]),
    copts=[
        "-Iexternal/gtest/googletest/include",
        "-Iexternal/gtest/googletest",
    ],
    deps=[
        "@googletest//:gtest",
        "@googletest//:gtest_main",
        "@bazel_tools//tools/cpp/runfiles",
        "//src:library_fine",
    ],
)

cc_test(
    name="test_non_divisible_subset",
    srcs=["test_non_divisible_subset.cpp"],
    # data=glob([
    #     "data/non_divisible_subset/*.txt",
    # ]),
    copts=[
        "-Iexternal/gtest/googletest/include",
        "-Iexternal/gtest/googletest",
    ],
    deps=[
        "@googletest//:gtest",
        "@googletest//:gtest_main",
        "@bazel_tools//tools/cpp/runfiles",
        "//src:non_divisible_subset",
    ],
)

cc_test(
    name="test_jumping_on_clouds",
    srcs=["test_jumping_on_clouds.cpp"],
    # data=glob([
    #     "data/non_divisible_subset/*.txt",
    # ]),
    copts=[
        "-Iexternal/gtest/googletest/include",
        "-Iexternal/gtest/googletest",
    ],
    deps=[
        "@googletest//:gtest",
        "@googletest//:gtest_main",
        "@bazel_tools//tools/cpp/runfiles",
        "//src:jumping_on_clouds",
    ],
)

cc_test(
    name="test_acm_icpc_team",
    srcs=["test_acm_icpc_team.cpp"],
    # data=glob([
    #     "data/non_divisible_subset/*.txt",
    # ]),
    copts=[
        "-Iexternal/gtest/googletest/include",
        "-Iexternal/gtest/googletest",
    ],
    deps=[
        "@googletest//:gtest",
        "@googletest//:gtest_main",
        "@bazel_tools//tools/cpp/runfiles",
        "//src:acm_icpc_team",
    ],
)

cc_test(
    name="test_taum_bday",
    srcs=["test_taum_bday.cpp"],
    data=glob([
        "data/taum_bday/*.txt",
    ]),
    copts=[
        "-Iexternal/gtest/googletest/include",
        "-Iexternal/gtest/googletest",
    ],
    deps=[
        "@googletest//:gtest",
        "@googletest//:gtest_main",
        "@bazel_tools//tools/cpp/runfiles",
        "//src:taum_bday",
    ],
)

cc_test(
    name="test_organizing_containers",
    srcs=["test_organizing_containers.cpp"],
    # data=glob([
    #     "data/organizing_container/*.txt",
    # ]),
    copts=[
        "-Iexternal/gtest/googletest/include",
        "-Iexternal/gtest/googletest",
    ],
    deps=[
        "@googletest//:gtest",
        "@googletest//:gtest_main",
        "@bazel_tools//tools/cpp/runfiles",
        "//src:organizing_containers",
    ],
)

cc_test(
    name="test_encryption",
    srcs=["test_encryption.cpp"],
    # data=glob([
    #     "data/organizing_container/*.txt",
    # ]),
    copts=[
        "-Iexternal/gtest/googletest/include",
        "-Iexternal/gtest/googletest",
    ],
    deps=[
        "@googletest//:gtest",
        "@googletest//:gtest_main",
        "@bazel_tools//tools/cpp/runfiles",
        "//src:encryption",
    ],
)

cc_test(
    name="test_bigger_is_greater",
    srcs=["test_bigger_is_greater.cpp"],
    data=glob([
        "data/bigger_is_greater/*.txt",
    ]),
    copts=[
        "-Iexternal/gtest/googletest/include",
        "-Iexternal/gtest/googletest",
    ],
    deps=[
        "@googletest//:gtest",
        "@googletest//:gtest_main",
        "@bazel_tools//tools/cpp/runfiles",
        "//src:bigger_is_greater",
    ],
)
