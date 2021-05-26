

var minDeletionSize = function(strs) {
    var length = strs.length;
    var word_length = strs[0].length
    var ctr = 0;
    if (length === 0) {
        return 0;
    }
    for(i = 0; i < word_length; ++i) {
        for (j = 1; j < length; ++j) {
            var cur_cha = strs[j].charCodeAt(i);
            var last_cha = strs[j - 1].charCodeAt(i);            
            if (cur_cha < last_cha) {
                ctr++;
                break;
            }
            
        }
    }
    return ctr;
};