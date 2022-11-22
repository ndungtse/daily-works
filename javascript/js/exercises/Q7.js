function check_vowels(word) {
  let vowels = ["a","e","i","o","u"];
  let vowCont = 0
  for (let i = 0; i < word.length; i++) {
    if(vowels.includes(word[i])) {
      vowCont++;
    }
    //   for (let j = 0; j < vowels.length; j++) {
    //     if (word[i] === vowels[j]) {
    //       vowCont ++;
    //   }
    // }
    }
      return vowCont;
  }


console.log(check_vowels("woqwwfrfou"));
