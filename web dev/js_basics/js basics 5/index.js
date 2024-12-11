// <!-- dom =  whole html is converted to the js object is called as dom-->


// <!-- Performance(measuring spped of code, Best practices, event loop ) -->

// adding p seperately
const t3 = performance.now();

for(let i =0;i<100;i++){
    let newEle = document.createElement('p');  
    newEle.textContent = 'this is para '+i;
    
    document.body.appendChild(newEle);
         
}
const t4 = performance.now();
console.log('Time:' +(t4-t3));







// bit optimised (created div added them in div and added at once)

const t1 = performance.now();
let newdiv = document.createElement('div');    

function func(event){  //listner to p
    console.log('newEle '+event.target.textContent);
}

newdiv.addEventListener('click',func);
for(let i =0;i<100;i++){
    let newEle = document.createElement('p');  
    newEle.textContent = 'this is para '+i;
    
    newdiv.appendChild(newEle);        
}
document.body.appendChild(newdiv);
const t2 = performance.now();
// how to find time?: calc performance now at begin of snipoet and end then t2-t1 gives time
console.log('Time:' +(t2-t1));



// there we were not wanting to use div but for optimization we used it.
// =================reflow and repaint
//whenever any element like p comes dom is updated
//reflow= all 'calculations' related to the dimensions, placement of the evement whats its  size
//repaint = whwnever layout updated  to 'drawing that layout pixel' by pixeel is repaint
//lower both good pracement


// ++++++++++document Fragement(optimization)
// first we add all elements to light weight fragement and that then ef and rp(so only one time)
let t5 = performance.now();

let fragement = document.createDocumentFragment();

for(let i =0;i<100;i++){
    let newEle = document.createElement('p');  
    newEle.textContent = 'this is para '+i;
    
    fragement.appendChild(newEle);
         
}
    document.body.appendChild(fragement);

    let t6 = performance.now();
    console.log((t6-t5));

// single threading= (1 command at a time)js is single threaded language. ie we execute according to the sequence of commands written not parallel 
// 1.run to completion ie complete all the lines of code without skipping
// 2.no multiple line at a time executed

// call stack= it is a stack tracking currently executing function and its sequence and js enjine keeps track of it


// ==================event loop
// synchronous = occurring at a same time eg pen camera are sinchronously working  one by one


// event listner is an asynchronous bcz it is not execute where it is written but after the action.
// 1.in js asynchronous code is executed by according to js event loop only
// 2.asyn code is handled by browser
// 
// ////////////////////////////event loop=============================
// type loupe and see video and code

// consider a code:
// 1)console.log(hi1);
// 2)Element.addeventListner('click',function(){console.log(h2)})
// 3)console.log(hi2);



// now we have call stack, browser and queue
// we we execute first main is loaded in stack -> console statement loaded , execute,remove->loaded event listner stack, stack will handover 'event listner func' load it on browser and tell execute when action occur  then it is removeed from stack -> console statement load execute and remove 
// now in betn any command if event is triggered then that function is loaded in queue (queue pushes the front stuff into stack once stack is empty) and it will wait to execute till all commands are executed and call st is empty then it will execute and get dequeue. and load in stack.
// and this is how concurrency is achieved or async code is executed



// **********************set timeout Method(another way of asynchronous code)
// it is method to execute a code after a set amount of time not exactly after that it might execute after a long amount of time but never befor that it is placed in loop so whwnever stack empty it will be executed 
// it also follow event loop just instead event listner here timeout browser handles function after that time to queue anology eventlistner is passed on action trigger

// setTimeout(
//     function(){
//         console.log('hi');
//     },5000
// );

// VIMP
// setTimeout(
//     function(){
//         console.log('hi');
//     },0
// );
// it means immediatly from stack to browser to queue and then it will be execute after stack empty 

// it is used majorly when you want to defer ie delay somethinfg till all will execute










