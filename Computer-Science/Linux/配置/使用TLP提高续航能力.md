
#### 安装 TLP 及相关包
```zsh
# 核心包
sudo pacman -S tlp tlp-rdw

# 图形化界面（需 AUR 助手，如 paru 或 yay）
paru -S tlpui   # 或 yay -S tlpui

# 可选：显示硬盘 S.M.A.R.T 数据
sudo pacman -S smartmontools
```

**ThinkPad 专用额外包**（强烈推荐）：
```zsh
sudo pacman -S tp_smapi acpi_call
```

#### 服务启用与冲突处理
```zsh
# 启用 TLP 主服务
sudo systemctl enable tlp.service

# 启用 NetworkManager 调度服务（用于无线电管理）
sudo systemctl enable NetworkManager-dispatcher.service

# 屏蔽 systemd 自带 rfkill 服务，避免与 TLP 冲突
sudo systemctl mask systemd-rfkill.service
sudo systemctl mask systemd-rfkill.socket
```

#### 立即启动并应用配置
```zsh
sudo tlp start      # 立即启动 TLP
sudo tlp-stat -s    # 检查是否运行（显示 "TLP enabled"）
```

#### 配置与管理
- 主配置文件：`/etc/tlp.conf`
  - 可手动编辑自定义电源策略
  - 修改后运行 `sudo tlp start` 使配置生效
- 图形化管理：运行 `tlpui`（安装后可用）

#### 常用命令
**注：本人未曾使用过**
```zsh
sudo tlp-stat -s    # 查看 TLP 状态
sudo tlp-stat -b    # 查看电池信息
sudo tlp-stat -w    # 查看无线设备状态
sudo tlp fullcharge # 强制满充（ThinkPad 电池校准时使用）
```