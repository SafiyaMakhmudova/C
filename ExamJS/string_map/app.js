
String = function map(collback, a, b){
    let newarr=[];

    for (let i = 0; i < str.length; i++) {
        const element = str[i];
        newarr.push(collback(str[element]));
    }
    
    return newarr;
}

function salom( str){
    return "salom" + str;
}


let str="Sara";
let re = str.map(salom)
console.log(re);
