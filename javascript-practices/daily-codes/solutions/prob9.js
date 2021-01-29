let n = 20;
let i;
for(i=2;i<=n;i++){
    if(n%i==0){
        console.log("Number is not Prime");
        break;
    }
}
if(n==i){
    console.log("Number is prime");
}