#!/bin/sh
# Propagate errors
set -e

if [ $branch_name = "develop" ]; then

    if [ $is_pull_request = true ]; then
    	bundle exec fastlane develop release_notes:"$TRAVIS_COMMIT_MESSAGE" is_merge:false
    else 
    	bundle exec fastlane develop release_notes:"$TRAVIS_COMMIT_MESSAGE" is_merge:true
    fi

elif [ $branch_name = "acceptance" ]; then

	if [ $is_pull_request = true ]; then
    	bundle exec fastlane acceptance release_notes:"$TRAVIS_COMMIT_MESSAGE" is_merge:false
    else 
    	bundle exec fastlane acceptance release_notes:"$TRAVIS_COMMIT_MESSAGE" is_merge:true
    fi
fi