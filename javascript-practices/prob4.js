let sideA = 5;
let sideB = 19;
let sideC = 124;
if(sideA==sideB && sideB==sideC){
    console.log("Triangle is equilateral");
}
else if(sideA == sideB || sideB==sideC || sideA==sideC){
    console.log("Triangle is isosceles");
}
else{
    console.log("Triangle is scalene");
}