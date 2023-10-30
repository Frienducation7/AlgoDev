    public static void main(String[] args) {
        int[] array = {1, 2, 3, 4};
        findAllSubarrays(array);
    }

    private static void findAllSubarrays(int[] array) {
        List<List<Integer>> result = new ArrayList<>();

        for (int i = 0; i < array.length; i++) {
            List<Integer> subarray = new ArrayList<>();
            for (int j = i; j < array.length; j++) {
                subarray.add(array[j]);
                result.add(new ArrayList<>(subarray));
            }
        }

        // Print the result
        for (List<Integer> subarray : result) {
            System.out.println(subarray);
        }
    }
