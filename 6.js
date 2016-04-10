function divisibleByThree(a, b, c){
  if(a % 3 === 0) return a;
  if(b % 3 === 0) return b;
  return c;
}

function main(n){
  var a = n;
  var b = n + 1;
  var c = 2 * n + 1;
  // sum of 1..100 squared
  // sum of 1^2..n^2 = n(n+1)(n+2)/6 (Calulus 2)
  // using the formula normally will cause overflow
  // must divide by 2 and 3 while retaining integers
  // one of the numbers n, n+1, n+2 must be even (divisible by 2)
  // one of the other two remaining numbers must be divisible by 3
  // divide before multiplying to avoid overflow
  var num1;
  // find divisible by 3 first (3n term)
  switch(divisibleByThree(a, b, c)){
    case a:
      num1 = a/3 * b/2 * c;
      break;
    case b:
      num1 = a/2 * b/3 * c;
      break;
    case c:
      num1 = a * b/2 * c/3;
      break;
    default:
      console.log("Error, none divisible by 3! (Mathematically not possible)");
  }
  // square of sum of 1..100
  // su of 1..n = n(n+1)/2 (Calculus 2)
  // divide the even number by 2 to avoid overflow
  var num2 = (a % 2 === 0)? a/2 * b : a * b/2;
  num2 = Math.pow(num2, 2);

  console.log("Num1: " + num1);
  console.log("Num2: " + num2);
  return num2 - num1;
}

console.log(main(100))
