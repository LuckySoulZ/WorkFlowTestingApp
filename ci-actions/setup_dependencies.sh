#!/bin/sh
echo "Installing dependencies..."
ruby -v

# Install gems
bundle install

# Install app badge plugin 
brew install imagemagick

#pod install --repo-update

# This will solve fastlane path issues.
export PATH="$HOME/.fastlane/bin/fastlane_lib:$PATH"
