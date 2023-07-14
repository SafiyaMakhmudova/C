const ekub=(n1, n2)=>{
    let arr1=[];
    let arr2=[];
    for (let i = 1, j=1; i <=n1, j<=n2 ; i++, j++) {
        if(n1%i==0 && n2%j==0){
            arr1.push(i);   
        }
    }
    
    return Math.max(...arr1);
};

console.log(ekub(3, 6));
