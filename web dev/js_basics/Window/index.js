// window is a global level object which represents browser window 
// dom -> whole html code is converted to an js object called as document. this whole is as document object model   (its just an hierarchy of object in tree form char->tag->token by tokeniser -> node -> DOM)
// bom = it allows js to talk to browser on anything other than content of page  ...browser obj model

// get element by .. is used to fetch the object from html doc which matches the given tag/class/.. etc
// by id it returns 1 obj and by class name it returns multiple 
// its applied on document 
// multiple bj returned are not in array its html structure





// ====================handling html using js+++++++++++++++



// accessing any element in html
// 1)getElementbyID
// 2)getElementsbyClassName
// 3)getElementsbyTagName
// 4)in browser select it and in console $0
// 5)query selector 
// document.querySelector('#header'); returns the Element id of that name
// querySelector('.header'); first one class with ...
// querySelector('header'); one element of tag with that name

// for all elements
// documents.queryselectorall("hidden");


// ========update existing content
// 1)innerhtml
// can get html elements or descends of html elements
// can set content of html element

// let a = dociumnt.querySelector(.hidden);
// console.log(a);

// console.log(a.innerhtml);      getter
// a.getHTML = ' ';               setter
 
// 2)outer html
// gives outer html hierarchy and sets same 

// 3)textcontent -gets and sets text content
// its same as inner html but it gets and sets the text content not all html

// Eg:
// any  tag is class pg
// let a =document.querySelector('.pg');
// console.log(a.textcontent);  all text is visible now
// a.innertext=' ';


// 4)innertext
// same as above only diffce is if in text we apply any tag like bold span then after renderand it will try to apply it or render it
// for textcontent it will consider it as text only and print <I></I> there
// innertext does not display hidden text bcz its rendering it






// ==========adding new content using js not actually writing in html
// let content = document.querySelector('.paraClass');
// let newopara = document.createElement('p');    //create para tag
// content.appendChild(newopara);         //attach new para so now in that calss new tag p is added at last




// ===========creating textnode ie tag with content
// let content = document.querySelector('.paraClass');
// let newopara = document.createElement('p');   
// newpara.textContent = 'HArsh kaggtdjd';
//    
// content.appendChild(newopara); 




// but above will add at end of class so for placing at particular

// 1) insertAdjacentHTML()
// called with where to insert (location) and what to insert
// 4 positions beforebegin ie location tag chya open tag cha pahile
// afterbegin-opentag nntr
// beforeend-closetag chya pahile
// agterend



// let content =$0;
// let text = document.createElement('h3');
// text.textContent='harsh';
// content.insertAdjacentElement('beforeBegin',text);
// accordingly if content goes inside a the parent then the properties of parent applied ie by afterbegin and beforeend



// =============removeChild     opposite of append child
// data needed = parent element & child to remove
// parent.removechild(childelement);
// eg=
// let parent =document.querySelector('.par');
// say inside the par class theres one p tag ie its child class name = chd
// let child = document.querySelector('.chd'); //its child 
// parent.removeChild(child);

// easy  if parent not known just find element to delete
// let parent = childElement.parent;
// then apply 
// parent.removeChild(child);




// // ====================changing css using js+++++++++++++++++
// let content = $0;
// 1).style (one at a time)
// content.style.color = 'red';
// 2)ccsText  (multiple)
// content.style.cssText='color:green backgroundcolor:yellow font-size:4rem'
// 3)setattribute(this can be used to set any attribute in that tag like style id class src etc)
// content.setAttribute("style","background-color:red; color:orange;");  
// content.setAttribute("id","a1");  
// 4).classname(change class name) manuplate class name and class propery change by tailwind or external sheet
// content.classname;   //give string of class names
// content.classname.trim  //deletes whitespace from corner in string
// content.classname.split(' ');  //give array of strings seperated by ' '



// 5)classlist   (mostly used) returns array of class
// provides methodes
// add class
// remove class
// toggle (add if absen remove if present)
// contain (if present or not)





