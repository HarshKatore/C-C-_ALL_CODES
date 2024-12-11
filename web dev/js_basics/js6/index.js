// async code = event listner and set timeout

// API=application programming interface(it is an intermediate which is used to establish communication betn two software components)
// interface is the inter mediate which connects two processes like customer<-dealer->owner

// features of async code:
// 1.better error handling 
// 2.easy to debugger
// 3.clean and neat coding

// PROMISE:if u want "to execute anything in background parally" in js then we use promises
// you assinged any work to one part and you continue your work after that prt one will be  either in resolve or reject state
// its object represents completion or rej of asynchronous operation
// its not like function wait to be called its called already so execute
// similar just we added code if success and error if rejects
// eg.
// let p = new Promise(function(resolve,reject){
//     setTimeout(function(){
//         console.log('hi');
//     },5000);

//      resolve(404);   //either of these two will be there bcz if till these is executed then successfull ow error
//     reject(new Error('error aa gaya!!'));

// });
// console.log('2');
// write p on console if want to see status
// it is good practice to use promises for async code....

// #promise has 2 functions for two different results 1.then 2.catch
// 1.then:to perform operation on value returned after promise execute sucessfully or any general operation, it is used
// 2.to handle error catch

// let p = new Promise(function(resolve,reject){
//     setTimeout(function(){
//         console.log('hi');
//     },5000);
    
//      resolve(404);
//     reject(new Error('error aa gaya!!'));

// });
// p.then(value => console.log('ans= '+(value+5)));
// p.catch(e => console.log(e));


// multiple promices with dependencies on one another once one finish start next this is done by then()

// let p1 = new Promise(function(resolve, reject){
//     setTimeout(function(){
//         console.log('p1');
//     },2000);

//     resolve();
// });

// let op = p1.then(() => {
//     let p2 = new Promise(function(resolve, reject){
//         setTimeout(()=>{
//             console.log('p2');
//         },3000);
//         resolve('done');
//     })
//     return p2;
// });
// op.then(value => console.log('status:'+value));

// this is called 'promise chaining'.this  is very confusing for large scale so here we use async await(its special syntax used to work with promises) 
// func1 is maid async and func2 to start execution after func1 completion is made await 


// _____________________ASYNC AWAIT FUNCTION_________________________
// imp:    async func returns promises

// async function abc(){
//     return 'harsh';
// }
// console.log(abc());

// how to make one promise wait for other?
// async function util(){

//     let del = new Promise((resolve,reject) => {
//         setTimeout(()=>resolve('Delhi me mausam accha hai'),5000);
//     });

//     let mum = new Promise((resolve,reject) => {
//         setTimeout(()=>resolve('mumbai me mausam accha hai'),3000);
//     });


//     let dm = await del;      //once all code resolve ,start next(same like then())
//     let mm = await mum;

//     return [dm,mm];

// }
// console.log(util());






// fetch api (api is an interface betn two sw components to establish communication like we request fb.com request data  api goes to server and bring data and handover to client)
        // fetch api is used to send and receieve data on network

        // ;;;;;;get api
        // async function util(){
        //     //returns promise
        //     let content = await fetch('https://api.agify.io?name=meelad');  //till whole data  is fetch wait
        //     let op = await(content.json()); //convert to 'js object notation' format ie how object in js in written same in this format info is converted like {key:val , key:val}
        //     console.log(op);
        // }
        // util();   
        
        // some times along with url login credentials or api key has to be sent along with this 
        // syntax:
        //     fetch('url',options);
        // option is an object containing username,...etc and is its valid credential then respond apis are paid so needs to be provide to valid user

        //2;;;;;;;;post api(send)

        // for this also we use fetchapi just have to modify object to be send as option.

        //get this post call object from jsonplaceholder


        // async function helper(){
        //     let options= {
        //         method: 'POST',              //its post method ie sent
        //         body: JSON.stringify({       //converts json format/object format to string format
        //           title: 'Harsh',        //these 3 data fields key val are sent on server(link) to store on Database
        //           body: 'tagdi',
        //           userId: 123,
        //         }),
        //         headers: {
        //           'Content-type': 'application/json; charset=UTF-8',
        //         },
        //       };
    
        //       let content =await fetch('https://jsonplaceholder.typicode.com/posts', options);
        //       let response = content.json();
        //       return response;
        // }
       
        // async function utility(){
        //     let ans = helper();
        //     console.log(ans);
        // }

        // utility();





        // closures(VIMP)

        // 2 type of variable is there local and global
        // loacl are only betn block 
        // global is every where exception is if its made in fn then it destroyed in fn
        // every let and var creates new space and reserves it . if it is equated with already created premitive it copies and if eq with refrene type it becomes another name for that same refrence;
        
        //in below fn a is return ing a function which prints the val of variable which is created inside a mainwala function so  when this fn called it returns inner fn but when innerwala fn is called that time key will not be alive bcz its scope was within a only
        // function a(){
        //     let key=10;
        //     function b(){
        //         console.log(key);
        //     }
        //     return b;
        // }

        // let ans = a(); //this fn returned a fn printing key but this fn scope is vanish once we complete this fn
        // ans();   //how ans prints key its scope is within a only

        // here comes closure:
            // whwnever you make such nested fn , each fn creates a closure which binds function with its required data.
            // it is a top level entity which consists of  function code +"refrences" of data req(lexical environment)




            function a(){
                let key=10;
                console.log(key);
                function b(){
                    let key=5;
                    console.log(key);
                    function c(){
                        let key=0;
                        console.log(key);
                        function d(){
                            let key=15;
                            console.log(key);
                            
                        }
                        return d;
                    }
                    return c;
                }
                return b;
            }
    
            let ans = a(); 
            let ans2 =ans(); 
            let ans3=ans2();
            let ans4=ans3();


            // vimp: nested func = closure = refrence;



        // let a ='harsh';
        // {let a = 'katore';}
        // console.log(a);
        // here we equate a with a string not a variable of string so no address copy just it was confusion no connection




