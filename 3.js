// checks if a number is prime
// for efficiency, we only have to go to sqrt of the number
// since any, for divisible one divisor must be <= sqrt(number)
function isPrime(n){
  for(var i = 2; i < Math.ceil(Math.sqrt(n)); i++){
    if(n % i === 0){
      return false;
    }
  }
  return true;
}

// for efficiency, we can check to see if the other divisor
// is prime, if we are incrementing i, the first prime divisor
// will be the largest possible, therefore we can terminate
function main(){
  var num = 600851475143;
  var lpf = 1;
  for(var i = 2; i < Math.ceil(Math.sqrt(num)); i++){
    if(num % i === 0){
      // Check i and other divisor
      if(isPrime(num / i)){
        return num / i;
      }
      if(isPrime(i)){
        lpf = i > lpf? i: lpf;
      }
    }
  }
  return lpf;
}

console.log(main());

