'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    const vowel = [];
    const consonant = [];
    
    
    s.split("").forEach((item)=>{
        if(item == 'a' || item == 'e' || item == 'i' || item =='o' || item =='u' ){
            vowel.push(item)
        } else {
            consonant.push(item);
        }
    })
    
    const result = [...vowel,...consonant];
    
    result.map(e=> console.log(e))
}

// Alternative Ans from disscusstion
function vowelsAndConsonants(s) {
    const vowels = 'aeiou';
    var consonants = '';
    
    for(var i = 0; i < s.length; i++) {
       if (vowels.includes(s[i])) {
           console.log(s[i]);
       }
       else {
           consonants += s[i] + '\n';
       }
    }
    
    console.log(consonants.trim());
}
