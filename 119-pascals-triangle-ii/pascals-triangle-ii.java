
class Solution {

    public List<Integer> getRow(int rowIndex) {
        List<Integer> ans = new ArrayList<>();
        ans.add(1);  

        for (int j = 1; j <= rowIndex; j++) {
          
            for (int i = ans.size() - 1; i > 0; i--) {
                ans.set(i, ans.get(i) + ans.get(i - 1));
            }
            ans.add(1);  
        }

        return ans;
    }
}