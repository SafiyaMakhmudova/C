const random=(a)=>{
    return(b)=>{
        return(b)?  random(a+b):a;
    };
};

console.log(random(2)(3)(5)(15)());