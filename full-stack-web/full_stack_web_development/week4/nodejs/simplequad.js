var disc = require("./discriminant");
var a = 1, b = 4, c = 1;

var root1 = (-b - Math.sqrt(disc(a, b, c))) / (2*a);
var root2 = (-b + Math.sqrt(disc(a, b, c))) / (2*a);

console.log("Roots are " + root1 + " " + root2);
