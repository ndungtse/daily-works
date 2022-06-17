function seconds (arr) {
  let arrSort = arr.toString().split('').sort();
      let firstsec = arrSort[1]
      let lastsec =arrSort[arrSort.length-2];

      console.log("the second lowest number is " +firstsec + " and " + " the second greatest number is " + lastsec)

}
console.log(seconds(1458745));
/*

function Second_Greatest_Lowest(arr_num)
{
  arr_num.sort(function(x,y)
           {
           return x-y;
           });
  var uniqa = [arr_num[0]];
  var result = [];

  for(var j=1; j < arr_num.length; j++)
  {
    if(arr_num[j-1] !== arr_num[j])
    {
      uniqa.push(arr_num[j]);
    }
  }
    result.push(uniqa[1],uniqa[uniqa.length-2]);
  return result.join(',');
  }

console.log(Second_Greatest_Lowest([8,2,3,4,7]));*/
