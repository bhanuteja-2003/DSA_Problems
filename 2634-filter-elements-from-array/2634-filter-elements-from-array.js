/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    var arrm=[];
    arr.forEach((ele,ind)=>{
        if(fn(ele,ind)){
            arrm.push(arr[ind])
        }
    })
    return arrm
};