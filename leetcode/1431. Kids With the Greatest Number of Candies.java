class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {

        List<Boolean> output = new ArrayList<>();
        boolean l = false;
        for (int i = 0; i < candies.length; i++) {
            int s = candies[i] + extraCandies;
            for (int j = 0; j < candies.length; j++) {
                if (s < candies[j]) {
                    l = false;
                    break;
                } else if (s > candies[j]) {
                    l = true;
                }
            }
            output.add(l);
        }
        return output;
    }
}