# 期末報告 Git 練習（主線 + 分支 + 合併）

這個資料夾提供多個版本檔，讓你用「複製貼上內容」的方式練習 Git 的提交、分支、合併。

## 檔案說明
- `期末報告_v1`：初版內容
- `期末報告_v2`：加入文獻回顧與方法
- `期末報告_v3`：完善研究方法與初步結果
- `期末報告_v4`：加入原型與實驗設計
- `期末報告_v5`：加入評估指標與討論
- `期末報告_v6`：完成結論與展望
- `期末報告_v3_b1`：分支版（模型導向）
- `期末報告_v3_b1_v2`：分支版（加入實驗與指標）
- `期末報告_v3_b1_v3`：分支版（加入模型比較）

## 練習流程（主線 6 commits + 分支 3 commits）

### 0) 準備
1. 進入專案根目錄（已有 `.git`）
2. 進入 `lesson_3/practice`
3. 建立工作檔 `期末報告.md`

### 1) 主線（main/master）先做到 v3
每次都把 `期末報告.md` 內容「完整貼上」對應版本，再 commit：

1. `期末報告_v1` → `期末報告.md`  
   `git add lesson_3/practice/期末報告.md`  
   `git commit -m "report: v1"`
2. `期末報告_v2` → `期末報告.md`  
   `git add lesson_3/practice/期末報告.md`  
   `git commit -m "report: v2"`
3. `期末報告_v3` → `期末報告.md`  
   `git add lesson_3/practice/期末報告.md`  
   `git commit -m "report: v3"`

### 2) 從 v3 開分支，做 3 個 commit
從 v3 開出分支（名稱可自訂，以下用 `branch-b1`）：
`git switch -c branch-b1`

1. `期末報告_v3_b1` → `期末報告.md`  
   `git commit -am "branch: v3_b1"`
2. `期末報告_v3_b1_v2` → `期末報告.md`  
   `git commit -am "branch: v3_b1_v2"`
3. `期末報告_v3_b1_v3` → `期末報告.md`  
   `git commit -am "branch: v3_b1_v3"`

### 3) 回主線，完成 v4 → v6
回到主線後繼續：
`git switch <main-branch>`

1. `期末報告_v4` → `期末報告.md`  
   `git commit -am "report: v4"`
2. `期末報告_v5` → `期末報告.md`  
   `git commit -am "report: v5"`
3. `期末報告_v6` → `期末報告.md`  
   `git commit -am "report: v6"`

### 4) 合併分支回主線
`git merge branch-b1`

若出現衝突，通常會在「摘要」或「研究方法」附近。  
做法：保留兩邊重點內容，重新排版成一個完整章節後再提交。

### 5) 檢查結果
`git log --oneline --graph --decorate --all`

## 小提醒
- `<main-branch>` 請替換成你目前的主線分支名稱（`main` 或 `master`）。
- 每次貼上新版本後，記得 `git status` 確認變更。
