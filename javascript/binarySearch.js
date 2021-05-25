

var search = function(nums, target) {
    var len = nums.length;
    var smaller = 0;
    var bigger = len - 1;
    //console.log(bigger);
    if (len === 1) {
        return(nums[0] === target ? 0 : -1);
    }
    while(smaller <= bigger) {
        var mid = Math.floor((smaller + bigger) / 2);
        if (smaller === bigger - 1){
            if(nums[smaller] === target) {
                return smaller;
            } else if (nums[bigger] === target) {
                return bigger;
            } else {
                break;
            }
        }
        if (nums[mid] > target) {
            bigger = mid;
            continue;
        } else if (nums[mid] < target) {
            smaller = mid;
            continue;
        } else {
            return mid;
        }
    }
    return -1;
 };

