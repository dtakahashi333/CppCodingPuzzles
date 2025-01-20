## To build the unit-test, use the following command:
bazel test --cxxopt=-std=c++14 --test_output=all //test:test_circular_array_rotation
## To stop the bazel server.
bazel shutdown
https://bazel.build/reference/command-line-reference
