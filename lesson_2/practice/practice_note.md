今天上課學的是演算法時間複雜度
老師說O(n)跟O(n^2)差很多
如果n很大會差非常多
像for loop包for loop就會變n平方
還有一個例子是費氏數列
recursive寫法很慢
iteration比較快
公式是T(n)=T(n-1)+T(n-2)+1
所以大概是2的n次方
老師有寫一個cpp範例
int fib(int n){
if(n<=1) return n;
return fib(n-1)+fib(n-2);
}
這個跑很慢
後來老師說可以用dp
圖片在投影片上
好像是有一個表格慢慢算
這個東西之後在leetcode會一直用到

然後因為學長很懶
他留了一些
