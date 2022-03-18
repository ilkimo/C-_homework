#!/bin/bash

# Inits git submodules
if git submodule status | grep tests/googletest; then
  # google submodule installed
  echo "Google Test submodule installed correctly"
else
  # google submodule not installed
  git submodule add https://github.com/google/googletest.git tests/googletest
fi
git submodule update --init --recursive