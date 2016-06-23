// Converts a number to a string then checks if it's a plaindrome
function isPalindrome(n){
  return n.toString() === (n.toString().split('').reverse().join(''));
}
// ------------------------------------------------------
// Test Cases
// 1001: "1001" -> [1, 0, 0, 1] -> [1, 0, 0, 1] -> "1001"
// ------------------------------------------------------

// console.log(isPalindrome(1001));
// console.log(isPalindrome(113));
function main(){
  var max = 0;
  for(var i = 0; i < 1000; i++){
    for(var j = 0; j < 1000; j++){
      if((isPalindrome(i * j)) && (i * j > max)){
        max = i * j;
      }
    }
  }
return max;
}

console.log(main());
