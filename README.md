#Skadi
An on-going reference project for C++14 and related tools while all the cool kids are off doing the javascripts.

##Dev Guide
###Visual Studio Code
https://code.visualstudio.com/docs/languages/cpp
####Building right in the Editor
https://code.visualstudio.com/docs/editor/tasks

Example tasks.json (build and run with *Ctrl+Shift+B*):
```
{
    // See https://go.microsoft.com/fwlink/?LinkId=733558
    // for the documentation about the tasks.json format
    "version": "0.1.0",
    "command": "g++",
    "isShellCommand": true,
    "args": ["-Wall", "-g", "-std=c++11", "${file}"],
    "showOutput": "always"
}
```
-std value can be:
* c++11
* c++1y (for c++14)
* c++14 (used to indicate c++14 for later g++ versions)
###Style Guide
https://google.github.io/styleguide/cppguide.html

##Testing
https://github.com/philsquared/Catch/blob/master/docs/tutorial.md