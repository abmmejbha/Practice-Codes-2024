// কোনো sentence  এ কতগুলো vowel আছে তা নির্ণয় করা যায় কিভাবে?

//let sentence = "ami ki dekheci haay akela pothe dariye se cilo dure dure takiye"

const vowels = ["a", "e", "i", "o", "u", "A", "E", "I", "O", "U"];

function countVowels(sentence) {
  let count = 0;
  const letters = Array.from(sentence);

  letters.forEach(function (value) {
    if (vowels.includes(value)) {
      count++;
    }
  });
  return count;
}
console.log(countVowels("I love Bangladesh"));
