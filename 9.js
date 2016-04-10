// pythagorean triplet
// a + b + c = 1000
// a^2 + b^2 = c^2

function isPythagorean(a, b, c){
  return Math.pow(a, 2) + Math.pow(b, 2) === Math.pow(c, 2);
}

function main(n){
  for(var a = 1; a <= Math.ceil(n/2); a++){
    for(var b = 1; b <= Math.ceil(n/2); b++){
      var c = n - a - b;
      if(isPythagorean(a, b, c)){
        console.log(a + ' ' + b + ' ' + c);
        return a * b * c;
      }
    }
  }
}

console.log(main(1000));
