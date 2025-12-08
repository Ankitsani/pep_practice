var prompt=require('prompt-sync')()
var a=prompt("Enter the first number: ");
var b=prompt("Enter the Second number: ");
var c=prompt("Enter the Third number: ");
a=parseInt(a)
if(a>b && a>c){
    console.log("A is big")
}
else if(b>c && b>a){
    console.log("B is big")
}
else{
    console.log("c is big")
}
