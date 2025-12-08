// <!DOCTYPE html>
// <html>
// <head>
//     <title>Vowel Counter</title>
// </head>
// <body>
//     <input id="inputText" placeholder="Enter text">
//     <button onclick="let text = document.getElementById('inputText').value;
//                      let vowels = text.match(/[aeiouAEIOU]/g);
//                      document.getElementById('result').innerText = vowels ? vowels.length : 0;">Count</button>
//     <p id="result"></p>
// </body>
// </html>
var words="Hello World";
words=words.toLowerCase();
var count=0;
for(var i=0;i<words.length();i++){
    if(i=='a'||i=='i'||i=='e'||i=='o'||i=='u'){
        count++;
    }
}
console.log(count);