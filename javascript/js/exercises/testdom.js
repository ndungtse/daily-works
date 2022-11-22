function sentReverser(wordIn) {
        var newword = [];
        var word = ''

        for (var i = wordIn.length - 1; i >= 0; i--) {
            newword.push(wordIn[i]);
        }
        for (var i = wordIn.length - 1; i >= 0; i--) {
          var n1 = newword[i];
          var n2 = newword[i + i];
          var n3 = newword[i +i]
        }
     return n2;
    }
    console.log(sentReverser('wer'));
