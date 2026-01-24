# 演算法筆記：時間複雜度與費氏數列

## 一、時間複雜度的概念

老師提到，**時間複雜度（Time Complexity）** 用來描述演算法在輸入變大時，執行時間成長的速度。

常見例子包括：

- `O(n)`
- `O(n^2)`

> 當輸入 `n` 很大時，`O(n^2)` 會比 `O(n)` 慢非常多。

---

## 二、巢狀迴圈的影響

如果程式中出現：

- 一個 `for` 迴圈  
- 裡面又包一個 `for` 迴圈  

那時間複雜度通常會變成：

$$
O(n^2)
$$

---

## 三、費氏數列（Fibonacci Sequence）

### 1️⃣ 遞迴寫法（Recursive）

老師示範了一個 **C++ 遞迴版本** 的費氏數列實作：

```cpp
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}



6. practice(taylor_series):
- 對函數做單點近似的方式
   $$
   f(x) = f(a) + f'(a)(x - a) + \frac{f''(a)}{2!}(x - a)^2 + \frac{f'''(a)}{3!}(x - a)^3 + \cdots
   $$
7. maxwell equations(integral form)
    $$
    \begin{aligned}
    &\oint_{\partial \Sigma} \mathbf{E} \cdot d\mathbf{l} = -\frac{d}{dt} \iint_{\Sigma} \mathbf{B} \cdot d\mathbf{A} \\
    &\oint_{\partial \Sigma} \mathbf{B} \cdot d\mathbf{l} = \mu_0 \iint_{\Sigma} \mathbf{J} \cdot d\mathbf{A} + \mu_0 \epsilon_0 \frac{d}{dt} \iint_{\Sigma} \mathbf{E} \cdot d\mathbf{A} \\
    &\iint_{\partial V} \mathbf{E} \cdot d\mathbf{A} = \frac{1}{\epsilon_0} \iiint_{V} \rho \, dV \\
    &\iint_{\partial V} \mathbf{B} \cdot d\mathbf{A} = 0
    \end{aligned}
    $$
8. maxwell equations(differential form)
    $$
    \begin{aligned}
    &\nabla \times \mathbf{E} = -\frac{\partial \mathbf{B}}{\partial t} \\
    &\nabla \times \mathbf{B} = \mu_0 \mathbf{J} + \mu_0 \epsilon_0 \frac{\partial \mathbf{E}}{\partial t} \\
    &\nabla \cdot \mathbf{E} = \frac{\rho}{\epsilon_0} \\
    &\nabla \cdot \mathbf{B} = 0
    \end{aligned}
    $$
