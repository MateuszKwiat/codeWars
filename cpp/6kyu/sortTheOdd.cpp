class Kata
{  
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
      for (int i = 0; i < array.size(); i++) {
        if (array[i] % 2 != 0) {
          for (int j = i + 1; j <  array.size(); j++) {
            if (array[j] % 2 != 0 && array[i] > array[j]) {
              int temp = array[i];
              array[i] = array[j];
              array[j] = temp;
            }
          }
        }
        else
          continue;
      }
      
        return array;
    }
};