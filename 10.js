// Updated isPrime predicate (accounts for n = 2)
function isPrime(n){
  for(var i = 2; i <= Math.ceil(Math.sqrt(n)); i++){
    if(n % i === 0 && n != i){
      return false;
    }
  }
  return true;
}

// increase count, check if it's prime and less than n
// take the sum of all prime counts less than n
function main(n){
  var sum = 0;
  var curNum = 1;
  while(true){
    curNum++;
    if((isPrime(curNum)) && (curNum < n)){
      sum += curNum;
      continue;
    }
    if(isPrime(curNum)) break;
  }
  return sum;
}

console.log(main(2000000));
