# Markdown 基本語法示範檔

## 標題（Title）
Markdown 使用 `#` 來表示標題階層。


---

## 文字強調（Bold / Underline）

- **粗體文字**：用來標示重點
- __底線文字__：HTML 語法（Markdown 可混用）

> 建議：粗體是主流，底線知道就好

---

## 清單（List）

### 無序清單
- VS Code
- Markdown
- Terminal
  - cd
  - ls

### 有序清單
1. 開啟資料夾
2. 建立檔案
3. 編輯內容
4. 儲存

---

## Checkbox（待辦清單）

- [x] 安裝 VS Code
- [x] 學會開資料夾
- [ ] 學會 Markdown
- [ ] 寫 README.md

---

## 表格（Table）

| 指令 | 功能說明 |
|------|----------|
| cd   | 切換資料夾 |
| ls   | 列出檔案 |
| pwd  | 顯示目前位置 |

---

## 引用（Quote）

> Markdown 是工程師用來寫文件的語言  
> 不是排版語言，而是**結構語言**

---

## 圖片（Image）

![VS Code Logo](https://code.visualstudio.com/assets/images/code-stable.png)

> 圖片本質上也是「路徑」的應用

---

## 程式碼（Code）

### Inline code
請使用 `cd src` 進入資料夾。

### Code block
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello Markdown!" << endl;
    return 0;
}
