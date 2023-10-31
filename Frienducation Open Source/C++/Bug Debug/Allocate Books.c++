#include <iostream>
#include <vector>

bool isValid(std::vector<int> &arr, int pages, int m){
    int current_student = 0;
    int pages_allocated = 0;

    for(int i = 0; i< arr.size(); i++){
        if (arr[i]>pages){
            return false;
        }
        if(pages_allocated + arr[i] > pages){
            current_student++;
            if (current_student > m) {
                return false;
            }
            // If the next student cannot hold the remaining pages, then update the pages_allocated value
            if (i + 1 < arr.size() && pages_allocated + arr[i + 1] > pages) {
                pages_allocated = pages_allocated + arr[i] - pages;
            } else {
                pages_allocated = 0;
            }
        }else{
            pages_allocated += arr[i];
        }
    } 
    return true;
}
int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5}; // replace with your own input values
    int pages = 5; // replace with your own input value
    int m = 3; // replace with your own input value

    if (isValid(arr, pages, m)) {
        std::cout << "The book allocation is valid." << std::endl;
    } else {
        std::cout << "The book allocation is not valid." << std::endl;
    }

    return 0;
}
