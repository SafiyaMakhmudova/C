
let str="xvrRt";
let number=5;

let alfh=["a", "b", "d", "e","f", "g", "h", "i", "j", "k", 'l', "m", "n", "o", "p", "q", "r",
        "s", "t", "u", "v", "x", "y", "z"]; 

str=str.toLowerCase().split("");

let result='';
let temp;

for (let i = 0; i < str.length; i++) {
        if(alfh.includes(str[i])){
                temp=alfh.indexOf(str[i])+number;
                if( temp<24){
                        result+=alfh[temp];
                } else{
                        news = temp-24;
                        result+=alfh[news];
                }
        }
}
console.log(result);
