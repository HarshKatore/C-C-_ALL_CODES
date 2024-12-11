// cbf aka call back fn: when on a particular entity we call some operation by . and give some
//parameters and along with that we give one function and its defination in same parameter then is acbf
//a "cbf gets a object of the result of operation on entity in its parameter and on that we perform operation "
// for ex.: hete getlocation fn apply getcurrpos fn on nav.geo... and there is some result of tisfor future operation on this we have cbf showpos in which obj of result is argument and cbf operation on it nd displays it
function showPosition(position){
    let lat = position.coords.latitude;
    let longi = position.coords.longitude;

    console.log(lat);
    console.log(longi);
}

function getLocation(){
    if(navigator.geolocation){
        navigator.geolocation.getCurrentPosition(showPosition);
    }
    else{
        console.log("No geoloaction supported");
    }
 }


console.log('hello ji');
const API_KEY = "168771779c71f3d64106d8a88376808a";
// calling api is nothing but a network call(ie requesting somthing on nw) 
// we can not say certainly that the response will be done within certain time
// so so cant call it on main thread and make all other wait so put it in async and also api fetch returns promise which either resolve or give error so put in try catch
//api is called with fetch api to fetch the info
function logData(data){
    let newPara = document.createElement('p');
    newPara.textContent = `${data?.main?.temp.toFixed(2)} ℃`

    document.body.appendChild(newPara);
}
async function showWeather(){
    try{
        // let latitude = 15.3333;
    // let longitude = 74.0833; api used needs city not lang long so
    let city = "goa";
    
    const response =await fetch(`https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${API_KEY}&units=metric`);
    const data = await response.json();
    console.log("Weather data:-> " , data);


    logData(data);
    }catch(e){
        console.log(e);
    }
}
showWeather();
//to know how our json looks we can call print json object body or write link
// in browser add key and loacation.. etc get some code put it in json formatter
// online see json object from that we came to know data->main->temp go inner 



//professional way of working 
// 1)like password generator dont fetch all html element at once take one do task set
// 2)in above fn we have done multiple task fetch and update on uI but we should make seperate fn to print and async should only fetch and at last call that fn
//3.name of function be like fetchWeatherDetails

//2/// api for lang and lat
async function getCustomerWeatherDetails(){

    try{
        let latitude=15.3333;
        let longitude = 18.3333;
    
        let response = await fetch(`https://api.openweathermap.org/data/2.5/weather?lat=${latitude}&lon=${longitude}&appid=${API_KEY}&inits=metric`);
        let data = await response.json();
    
        
    }catch(error){
        console.log("coordinate doesn't exist!!!!", error);  //this will display in error like link was wrong or missinng some part but for wrong latituse or longi no error it will display their own lines..
    }

   

}
getCustomerWeatherDetails();