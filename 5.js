// straightforward; check if given number is
// divisible by all 2..20, if not for any i
// return false immediately
function divisibleByAll(n){
  for(var i = 2; i <= 20; i++){
    if(n % i != 0){
      return false;
    }
  }
  return true;
}

// loop until we find a number?
function main(){
  var num = 20;
  // to be divisible by 20, it must be a multiple
  // therefore, increase by 20 each iteration
  while(!divisibleByAll(num)){
    num += 20;
  }

  return num;
}

console.log(main());
