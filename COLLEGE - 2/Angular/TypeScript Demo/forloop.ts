/*for (var i = 0; i < 3; i++) {
  console.log ("Block statement execution no." + i);
}
*/

let arr = [10, 20, 30, 40];

for (var index in arr) {
  console.log(index); // prints indexes: 0, 1, 2, 3

  console.log(arr[index]); // prints elements: 10, 20, 30, 40
}