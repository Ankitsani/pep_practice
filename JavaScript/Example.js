//writes a javascript function that takes a number as input and returns and the sum of the digit using a while  loop;
var prompt=require('prompt-sync')()
var a=parseInt(prompt("Enter the digit: "))
let sum=0;
let digit;
while(a>0){
    digit=a%10;
    sum+=digit;
    a=a/10;
}
console.log(sum)