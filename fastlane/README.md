fastlane documentation
----

# Installation

Make sure you have the latest version of the Xcode command line tools installed:

```sh
xcode-select --install
```

For _fastlane_ installation instructions, see [Installing _fastlane_](https://docs.fastlane.tools/#installing-fastlane)

# Available Actions

## iOS

### ios match_retrieve_develop

```sh
[bundle exec] fastlane ios match_retrieve_develop
```

Retrieve develop certificates and signing identity using Match

### ios match_update_develop

```sh
[bundle exec] fastlane ios match_update_develop
```

Retrieve and update (where needed) all provisioning profiles and signing identity for Development using Match

### ios test_unit

```sh
[bundle exec] fastlane ios test_unit
```

Retrieves the certificate and profiles out of a certain branch using the app id and team id and installs it into the keychain (if the operation is CI)

Retrieves the certificate and profiles of a certain type out of a certain branch using the app id and team id and installs it into the keychain (if the operation is CI)

Type can be any of following: appstore, adhoc, development, enterprise

Runs all the Unit tests

### ios develop

```sh
[bundle exec] fastlane ios develop
```

Creates Develop build

----

This README.md is auto-generated and will be re-generated every time [_fastlane_](https://fastlane.tools) is run.

More information about _fastlane_ can be found on [fastlane.tools](https://fastlane.tools).

The documentation of _fastlane_ can be found on [docs.fastlane.tools](https://docs.fastlane.tools).
