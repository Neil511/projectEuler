// find 10001 prime number
function isPrime(n){
  for(var i = 2; i <= Math.ceil(Math.sqrt(n)); i++){
    if(n % i === 0){
      return false;
    }
  }
  return true;
}

function main(n){
  // find n'th prime number
  var count = 1;
  var curNum = 1;

  while(n != count){
    curNum++;
    if(isPrime(curNum)){
      count++;
    }
  }
  return curNum;
}

console.log(main(10001));
