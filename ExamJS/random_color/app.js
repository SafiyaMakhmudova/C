const color=["0","1", "2", "3", "4","5", "6", "7","8", "9","a","b","c","e","f"];
let symbol= "#";

const randomColor=(color, symbol)=>{
    for(let i=0; i<6; i++){
        let rand = Math.floor(Math.random()*16);
        let a= color[rand];
        if(a!=undefined)
            symbol+=a;
    }
    return symbol;
}

const button =document.querySelector(".button");
const body  = document.querySelector(".body");
const div = document.querySelector("div")
let res='';

button.addEventListener("click", (e)=>{
    let rc=randomColor(color, symbol)
    console.log(rc);
    
    res+=`<h1>${rc}</h1>\n`
    div.innerHTML=res;
    body.style.cssText =`background-color: ${rc}`

})