# ofxYAML

A wrapper for [yaml-cpp](https://github.com/jbeder/yaml-cpp) 0.6.3

Tested with [OpenFrameworks](http://openframeworks.cc) (0.11.0).
Works with linux64 only.
PR with osx & windows libraries would be appreciated. 

### Usage

You can use the OF Project Generator to add this addon in your project.

```cpp
#include "ofxYAML.h"
```

Place your yaml file in the bin/data folder and access it with:

```cpp
yaml.load("config.yaml");

int framerate = yaml["frameRate"].as<int>();
bool verticalSync = yaml["verticalSync"].as<bool>();
string title = yaml["title"].as<string>();
```
