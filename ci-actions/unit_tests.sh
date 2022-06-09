#!/bin/sh
# Propagate errors
set -e

if [ $branch_name = "develop" ]; then
    bundle exec fastlane test_unit submit_sonnar:false
elif [ $branch_name = "acceptance" ]; then
    bundle exec fastlane test_unit submit_sonnar:true
fi