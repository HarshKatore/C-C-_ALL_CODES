// object  is an entity which have some property and behaviours in it

// variables are camel case harshKatore

let obj = {
     a : 12,
     b : 18,
     draw(){
        console.log('draw');
     }
};

console.log(obj.a);
obj.draw();

// instead of making writing this lines repetitively to create a object we will make a function which will return an object


// 1 factory function
function createObj(x,y){

    return obj = {
        a : x,
        b : y,
        draw: function(){
           console.log('draw');
        }
   };
}

let o1 = createObj(1,2);
o1.draw();
console.log(o1.a);
console.log(o1.b);

// 2 construction function(here pascal notation HarshKatore)

function CreateRect(){
    this.length = 1;
    this.br = 2; 
    this.draw=function(){
        console.log("yes");
    }
}
// obj creation
let rectObj  = new CreateRect();
console.log(rectObj.br);

// dynamic object

rectObj.color = 'yellow';   //added this attribute
console.log(rectObj);

delete rectObj.color;
console.log(rectObj);

// object constructor
console.log(rectObj.constructor);

// function is also an object and has constructor  and this is how they are created at backend
let a = new Function('x','y',
    ` this.length = x;
    this.br = y;
    this.draw=function(){
        console.log("yes");
    }`
 )
 let object = new a(2,3);
 console.log(object.br);



//  primitive and refrence 
// number string boolean etc are premitive while object function array are refrence type
// when we equate premitive as the are premitive they copy content and has two different locations
// but when refrence type equate the copy refrences sonchanges on one reflect on other 
// ie premitives are copied by value and refrences copied by addresses


// for in loop

let sq = {
    a:1,
    b:2
};

for(let key in sq){
    console.log(key, sq[key]);
}

// for of loop (can be applied on iterables only these are continous ds like map arrays)
// for(let key of sq){
//     console.log(key);
// } cant do on object as its not iterable but one hack is there...

for(let key of Object.keys(sq)){
    console.log(key);
}
for(let key of Object.entries(sq)){
    console.log(key);
}

let array = [12, 11,43];
for(let i of array){
    console.log(i);
}

// how to find is there a particular property in an object

if('color' in sq){
    console.log('yes');
} 
else{
    console.log('NO');
}

// cloning an object
// 1 
let b = {ans:12};
let c = {};
for(let key in b){
    c[key] = b[key]
}
// 2
let e = Object.assign({},b);

// 3
let f = {...b};


/////////////////////math objects see various methods of math object



//string are of two types primitive and object see various methods of string as object

let nameH = 'harsh';
let nameK = new String('katore');
console.log(typeof nameH);




// by applying . premitive to object
console.log(nameH.length);
console.log(nameH.length);



let ans = 'this is my css';
let words = ans.split(' '); //split by space
console.log(words);




// template literal->`
let str = 'ans is correct';
console.log('hi \n boys');

// for doing this we can do it by ` back tick aside 1
let sr = `harsh
katore           bhai`;
console.log(sr);

// make anything dynamic in string
let word = 'dc';
let man = `hiewjbdd and ${word}`;
console.log(man);



// escape notations some literals cant be directly displayed like ' bcz they have some meaning so we encode then by writing \ before
console.log('hi boys \' ');


// date
let date = new Date();
let date2 = new Date('June 20 2003 7:15');
let date3 = new Date('2003, 7, 20, 3');

console.log(date);

// arrays (collectn of different type of items)
// creations 
let no = [11, 12 ,3 ,4];

no.push(9); //at end
no.unshift(999);//start
no.splice(2, 1, 'w', 1, 3);//mid index delete count and elements
console.log(no);
console.log(no.indexOf(3));
console.log(no.indexOf(11,3));

// if present or not indexof ==-1 then absent
console.log(no.includes(3));
// arr of objects
let course = [
    {no:1,q:23},
    {no:2,q:22}
];
console.log(course);
// note: if you try to use indexof in this then ans is always -1 as object that you try to search is not an entity its an refrence so both are on diff address so cant find
console.log(course.indexOf({no:1,q:23}));

// to do this we use call back fn its a funcn passes in another fn then invoc inside that outer fn to complete some task
let x = course.find(
    function(c){
    return c.q == 22;
})

// in short can be written as
// == check if value equal and === check if val and type both eq
let y = course.find(c => c.q == 22);  
console.log(x);
console.log(y);

// delete
let arr = [1,2,3,4,5];
arr.pop();   //ending
arr.shift();  //begin
arr.splice(2,1); //mid   index and no of elements
console.log(arr);


// emptying an array
// let arr1 = [1,2,3,4,5,6];
// let arr2 = arr1;
// arr1=[]; //this variable is containig this[] but on position value present bcz arr2 is coping refrence
// console.log(arr1); 
// console.log(arr2); //see

let arr3 = [1,2,3,4,5,6];
let arr4 = arr3;
arr3.length = 0;   //best practice
console.log(arr3); 
console.log(arr4);

// combining and slicing

let arr5 = [1,2,3,4,5,6];
let arr6 = [1,2,3];
console.log(arr5.concat(arr6));

// by spread operator
let arrr = [...arr5, ...arr6];
let arrr2 = [...arr5,2,2, ...arr6];



let arr7 = arr5.slice(2,4);  //gave startings idx and ending+1 index
console.log(arr7);
//if gave starting idx only then all from that ....if not both then all


// copy using spread
let arrr3 =[...arrr]; 

for(let val of arrr){
    console.log(val);
}

// for each loop ....req call back fn
arrr.forEach(function(z){
    console.log(z);
});

// same by arrow

arrr.forEach(z=>console.log(z));





// joining array to make string  by something in betn into single line
let num = [1,2,3,4,5,55,6];
console.log(num.join('|'));

//spliting string it single array to parts
let name1 = 'harsh is a kind boy';
let k = name1.split(' ')
console.log(k);
console.log(k.join('+'));

// sorting
let n1=[40,30,10,20,50];
n1.sort()
console.log(n1);
console.log(n1.reverse());

// above was sorting by converting into string so not as our expectation 
// try by call back fn for both premitive ie above and object

// filter
let numb = [1,3,-9,-6];

// let filt = numb.filter(
//     function(val){
//         return val>=0;
//     }
// );

let filt = numb.filter(val => val>=0);
console.log(filt);


// mapping (maps each element of array to something else)
let ar = [1,2,3,4];

// let items = ar.map(
//     function(val){
//         return 'age: ' + val;
//     }
// );

let items = ar.map(val => 'age'+val);

console.log(items);
console.log(ar);

// mapping object
let dsa = [4,2,-5,-7];
let ds = dsa.filter(val=>val>=0);
// let item2 = ds.map(
//    function(val){
//     return {om:val};
//    }
// );

let item2 = ds.map(val=>{ om:val });
console.log(item2);

// chain ing
let ans2 = dsa.filter(val=>val>=0)
                .map(val=>{ om:val });


// function block of code to achieve a specific task readibility bulky reusability buggy
write();
function write(){
     console.log('write');  
}
write();
// hoisting is the process of moving function decleration to the top of file handled by js engine(chrome= google v8 , firefox = spidermonkey )

// function assignment
// fn(); fn assignment cant be use before decleration

// named fn assignment
let fn = function fun(){
    console.log('fun');  
}

// annonymous fn assign
let l = function (){
    console.log('enj');  
}
fn();
// fun(); cant do
let fn2 = fn;
fn2();

// fn are also dynamic send any no of parameters
function add(a,b){
    return a+b;
}
console.log(add(1,2));
console.log(add(1)); //not a no.
console.log(add());
console.log(add(1,2,3,4));



// for extra values passed theres a special 'object' in js called as arguments 
// it maps arguments value with key 0 1 2...its not array
function add2(a){
    console.log(arguments);
    let sum = 0;
    for(let i of arguments){
        sum += i;
    }
    return sum;
}
console.log(add2(1,2,3,4,4,5,6,7));


// way 2: by spread operator rest parameter (it creates array not object)
function add3(...args){
    console.log(args);
    let sum = 0;
    for(let i of args){
        sum += i;
    }
    return sum;
}
console.log(add3(1,2,3,4,4,5,6,7));

// before rest parameter there can be another parameter also but not after it.like(a,...args)

// default parameter= if value not sent then consider that
// for giving default parameters to any argument its all right should be default


function bank( a=100){
    console.log(a);
}
bank();

let e1 ={
 l:'a',
 m:'b'
};



// this are placeholders ie they dynamically replace the content 
function call(){
    return `${e1.l}${e1.m}`;
}

console.log(call());
// instead writing again and again we make fn in object called getter and setter


// getter setters

let harsh = {
    a:1,
    b:2,

get call(){
    return `${harsh.a} ${harsh.b}`;
},

set call(value){
    if(typeof value !== String){
        throw new Error("no boys");
    }
    let parts = value.split(' ');  //string to array
    this.a =parts[0];
    this.b=parts[1];
} 

};

// console.log(harsh.call);    //no () bcz its not a function
// harsh.call = 'harsh katore';
// console.log(harsh.call);

// error handling using try and catch block
// try{
// harsh.call =true;
// }
// catch(e){
//     alert(e);
// }
// console.log(harsh.call);
// flow first in try block probable statements written;
//  from there flow goes to setter where in if we creater error
//  obje with message in it  then in try it return and there
// / error occured execution goes to catch where in e of argument
//  that msg stored and by using alert we pop up msg


// let scope is in {}
// and var whole except inside function 
// const is same as var in scope 

let h=[1,2,3,4];
for(var i of h){
    console.log(i);
}
console.log(i);



//reducing an array like sum

// note see callback fn is written in specific pattern for specific fn like reduce etc.
let arr8=[1,2,3,4,5,6];
let soln=arr8.reduce((accumulator,currval) => accumulator+currval, 0);
// here its behaving same as looping for sum  accumulator is sum variable curr is ith val and they are adding and return ing 0 is initilized val of accumulator
console.log(soln);






