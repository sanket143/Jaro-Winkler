# Jaro-Winkler

Here is the C++ function for Jaro-Winkler distance as illustrated on wikipedia

https://en.wikipedia.org/wiki/Jaro%E2%80%93Winkler_distance

https://www.npmjs.com/package/jaro-winkler


# What's Inside

I've wrote a jw_distance function which gives jaro-winkler-distance.

Paste the function in your source code to use that function.

# NOTE:
```
INPUT:  developer, developes
OUTPUT: 0.955556

INPUT:  developer, seveloper
OUTPUT: 0.925926
```
Both case have same number of different case but still got different Outputs because in the first case first four characters were similar gives more confidence on the similarity and so the score. \[ Thats Not An Error \]

# Node.js Addon

```
$ cd addon
$ sudo apt-get install node-gyp
$ node-gyp configure build
```

*Inside main.js*
```
const addon = require("./build/Realease/algo");
```
