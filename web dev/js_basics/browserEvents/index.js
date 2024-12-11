// event object (so funin add eve lis got event obj named event and we have printed it so prints info of an event)
// let cont = document.querySelector('.wrapper');
// document.addEventListener('click', function(event){
//     console.log(event);
//  });


// default actions= the tag like button a have defaulr actions so to prevent those actions we have .preventdefault()
// let content = document.querySelectorAll('a');
// // content will get array of all the a tag element so can acces by content[1] etc
// let a = content[1];
// console.log(a);

// a.addEventListener('click',function(event){
//     event.preventDefault();
//     console.log('done!');
// });

// =====too many events   (in this event each p is having its own
//  event listner and function creating object seperately though
//  has same so its getting bulky and unoptimised so if listner 
// is one and each p atach to it then it will be more optimised 
// if we write the function out and use same each time ,,,also 
// we can optimise more by applying listner on div rather than p
//  bcz in in div is having listner, but due to this p lost the 
// individuality bcz we click on div container its event occurs
// so here we use .target.textcontent it prints the text of the element due to which event is occured)


// let newdiv = document.createElement('div');    //created div tag

// function func(event){  //listner to p
//     console.log('newEle '+event.target.textContent);
// }

// newdiv.addEventListener('click',func);
// for(let i =0;i<100;i++){
//     let newEle = document.createElement('p');  //created p
//     newEle.textContent = 'this is para '+i;
    
//     newdiv.appendChild(newEle);        //add each p into div
// }
// document.body.appendChild(newdiv);          //add div in doc




//////////////////////////////////////////////////////////////////////////////////
// use of nodeName

let ele= document.querySelector("article");
ele.addEventListener('click',function(event){
    if(event.target.nodeName ==='SPAN'){
    console.log('span pe click kia to sirf uska hi contant display hoga not whole article see '+ event.target.textContent);
    }
});
// if we click on span tag content thhen span tag content iss print but if on para then both span and paras content print but we want only spans content to be printed so ....we use nodename SPAN


// we write script at end bcz if written before and the content on which functionality is being applied is not loaded then its faulty so once all loaded we apply functionality
// so how will we know all html loaded theres one event for it called dom content loaded
// inspect->network-> bottom time is shown


//one of the way to add js in head tag
/*{ <script>
    document.addEventListener('domContentLoaded',
    function(){
        //write js here this executes once all loading done
    });
</script> } */