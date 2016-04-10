// find 10001 prime number
function isPrime(n){
  for(var i = 2; i <= Math.ceil(Math.sqrt(n)); i++){
    if(n % i === 0 && n != i){
      return false;
    }
  }
  return true;
}

function main(n){
  // find n'th prime number
  var count = 0;
  var curNum = 1;

  while(n != count){
    curNum++;
    if(isPrime(curNum)){
      count++;
    }
  }
  return curNum;
}
console.log(isPrime(2));
console.log(main(10001));
