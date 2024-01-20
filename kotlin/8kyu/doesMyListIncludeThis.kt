fun include(arr: IntArray, item : Int): Boolean {
    for (i in arr) {
        if (i == item) {
            return  true
        }
    }
    return false
}
