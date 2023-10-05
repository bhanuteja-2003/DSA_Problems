/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    if(nums.length===0){
        return init
    }
    let val = 0
    nums.forEach((ele ,ind)=>{
        init=fn(init ,nums[ind])
    })
    return init
};