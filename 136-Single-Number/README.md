# 136. Single Number

## 💡 思考邏輯
這題要求在時間複雜度 $O(n)$ 且空間複雜度 $O(1)$ 的條件下找出陣列中唯一落單的數字。

### 核心概念：XOR (^ ) 的硬體特性
利用位元運算中的 XOR 邏輯閘特性：
1. **Self-Cancellation**: $x \oplus x = 0$ (相同的數會抵銷)
2. **Identity Element**: $x \oplus 0 = x$ (任何數與 0 運算不變)
3. **Commutative & Associative**: 運算順序不影響結果。

### 為什麼不用 Hash Map?
- **Hash Map**: 需要額外 $O(n)$ 空間存次數。
- **XOR**: 只需要一個 `int` 變數在記憶體中連續掃描，完全符合 $O(1)$ 空間要求，對 Cache 更友善。

## 🛠️ 硬體視角 (Memory Layout)
- `int* nums` 是記憶體的**起始位址**。
- 透過 `nums[i]` (即 `*(nums + i)`) 逐一從連續的 32-bit 儲存格中取出數值。
- 所有的「成雙」數字會在運算過程中自動變為 `0`，最後留下的就是答案。

## 🚀 複雜度
- **Time**: $O(n)$ - 掃描一次陣列。
- **Space**: $O(1)$ - 只使用一個變數 `ans`。
