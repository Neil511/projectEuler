var prev = 1;
var cur = 2;
var sum = 0;

while(cur < 4000000){
    if(cur % 2 === 0){
        sum += cur;
    }

    var temp = prev;
    prev = cur;
    cur += temp;
}

console.log(sum);
