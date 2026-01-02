
#### 首次全局配置
```bash
# 设置用户名和邮箱
git config --global user.name "Your Name"
git config --global user.email "your@email.com"

# 查看配置是否生效
git config --list
```

#### 配置 SSH 密钥
```bash
# 创建 .ssh 目录并进入
mkdir -p ~/.ssh && cd ~/.ssh

# 生成 ed25519 密钥
ssh-keygen -t ed25519 -C "your@email.com"
# 直接回车使用默认路径，按提示可设置密码

# 查看公钥内容
cat ~/.ssh/id_ed25519.pub
```

**在 GitHub 上添加公钥**：
1. 登录 GitHub → Settings → SSH and GPG keys → New SSH key
2. 粘贴公钥内容

**测试 SSH 连接**：
```bash
ssh -T git@github.com
# 首次会出现确认提示，输入 yes
# 成功后显示：Hi username! You've successfully authenticated...
```

#### 临时代理设置
```bash
# 终端代理（当前会话有效）
export http_proxy=http://proxyAddress:port
export https_proxy=http://proxyAddress:port

# Git 全局代理
git config --global http.proxy http://proxyAddress:port
git config --global https.proxy http://proxyAddress:port

# 取消 Git 代理
git config --global --unset http.proxy
git config --global --unset https.proxy
```

#### 本地仓库初始化与首次推送
```bash
# 在项目目录下初始化 Git 仓库
git init

# 添加远程仓库（origin 为远程名，可自定义）
git remote add origin git@github.com:username/repo.git

# 首次提交并推送到 main 分支
git add .                          # 添加所有文件
git commit -m "Initial commit"     # 提交
git branch -M main                 # 强制重命名当前分支为 main
git push -u origin main            # 推送并设置上游分支
```

**后续日常操作**：
```bash
git add .
git commit -m "描述"
git push          # 因已设置 -u，后续可直接 push
```

#### 小贴士
- 若远程仓库已存在内容，先拉取再推送：
  ```bash
  git pull origin main --allow-unrelated-histories
  ```
- 查看远程仓库地址：
  ```bash
  git remote -v
  ```