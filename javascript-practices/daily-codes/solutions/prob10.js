let n = 10;
for(let a = 1;a<=n;a++){
    for(i=2;i<=a;i++){
        if(n%i==0){
            console.log(`${a} is not a prime number`);
            break;
        }
    }
    if(a==i){
        console.log(`${a} is prime number`);
    }
}