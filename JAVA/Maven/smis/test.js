function myReverse(word) {
	let reversedWord = "";
	for (let i = word.length - 1; i >= 0; i--) {
		reversedWord += word[i];
	}
	return reversedWord;
}
console.log(myReverse("umwana"));
