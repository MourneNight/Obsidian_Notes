
来源：Reddit r/neovim 帖子（适用于 LazyVim的TokyoNight 主题）
https://www.reddit.com/r/neovim/comments/15j87k7/lazyvim_setting_transparent_background/

#### 步骤
1. 在 LazyVim 配置目录下创建文件：
   ```
   ~/.config/nvim/lua/plugins/colorscheme.lua
   ```

2. 在该文件中添加以下内容：
```lua
return {
  {
    "folke/tokyonight.nvim",
    opts = {
      transparent = true,          -- 整体启用透明背景
      styles = {
        sidebars = "transparent", -- 侧边栏透明（如 NvimTree、Trouble 等）
        floats   = "transparent", -- 浮动窗口透明（如 LSP hover、cmp 菜单等）
      },
    },
  },
}
```

