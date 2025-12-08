var obj={
    name:"Akki",
    roll:21,
    print:function(){
        console.log("information")
        console.log(this.name)
    }
}
console.log(obj.print())

var obj1=new Object()
obj1.name="ankit"
obj1["age"]=19
obj1.print=function(){

}


class book{
    constructor(name,age){
        this.name=name
        this.age=age
    }
}
var obj=new book("saini",19)
console.log(obj.name)

function student(name,age){
    this.name=name
    this.age=age
}

var obj4=new student("ak", 19)