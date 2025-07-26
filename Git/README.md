# 📚 Git Training Notes

These notes cover Git concepts, commands, workflows, and version control systems in a simple and easy-to-understand format.

---

## 🔰 1. Introduction to Version Control

### ➤ Centralized Version Control Systems (CVCS)
- Single central server stores code.
- Example: **SVN**.
- ❗ Risk: If server crashes, data is lost.

### ➤ Distributed Version Control Systems (DVCS)
- Every user has a full copy of the repository.
- Example: **Git**, **Mercurial**.
- ✅ Safer, offline access, faster collaboration.

### ➤ Git and Its Features
- Free, open-source, fast, and distributed.
- Supports **branching**, **merging**, **versioning**, **collaboration**, and **offline work**.

---

## 🔁 2. Basic Workflow of Git

- **Local Repository**: Your project folder on your computer.
- **Remote Repository**: A version hosted on GitHub, GitLab, etc.
- **Staging Area (Index)**: Where files go before being committed.
- **Working Directory**: The actual files you edit.
- **HEAD**: Points to the current branch/commit.
- **Origin**: Default name for remote repo.
- **Master/Main**: Default branch in most repos.

---

## 💻 3. Git Commands vs GUI

### ➤ Local Repository Usage

| Action                          | Git Command                          |
|-------------------------------|--------------------------------------|
| Add file to staging           | `git add filename`                  |
| Commit changes                | `git commit -m "message"`           |
| Remove file                   | `git rm filename`                   |
| Check repo status             | `git status`                        |
| View commit history           | `git log`                           |

### ➤ Remote Repository Usage

| Action                          | Git Command                          |
|-------------------------------|--------------------------------------|
| Clone repository               | `git clone URL`                     |
| Push changes                   | `git push origin branchname`        |
| Create `.gitignore` file       | Add unwanted files/folders to ignore |

Example `.gitignore`:
```
node_modules/
.env
*.log
```

---

## 🌿 4. Branching Model

### ➤ Branching

| Action                          | Git Command                          |
|-------------------------------|--------------------------------------|
| Create a branch                | `git branch feature`                |
| Switch to branch               | `git checkout feature`              |
| Delete local branch            | `git branch -d feature`             |
| Push branch                    | `git push origin feature`           |
| View differences               | `git diff branch1 branch2`          |

### ➤ Merging

- `git merge branchname`: Merges another branch into current branch.
- **Merge conflicts** occur when the same file is changed in both branches.
- Git highlights conflict using:
  ```
  <<<<<<< HEAD
  your changes
  =======
  incoming changes
  >>>>>>> branchname
  ```

### ➤ Rebasing

- `git rebase main`: Rewrites commits from one branch onto another for a clean history.

---

## 🔖 5. Tags and Patches

| Action                          | Git Command                          |
|-------------------------------|--------------------------------------|
| Create a tag                   | `git tag v1.0`                      |
| Push a tag                     | `git push origin v1.0`              |
| Delete tag                     | `git tag -d v1.0`                   |
| Generate a patch               | `git format-patch -1`               |
| Apply a patch                  | `git apply patchfile.patch`         |

---

## 🔄 6. Pull Requests (PRs)

- A **pull request** is used to propose changes and merge branches in GitHub/GitLab.
- Team members can **review**, **comment**, and **approve** the changes before merging.
- Encourages **code review** and **team collaboration**.

---

## ✅ Sample Workflow

```bash
git init
git add .
git commit -m "Initial commit"
git branch -M main
git remote add origin https://github.com/username/repo.git
git push -u origin main
```

---

## 👨‍💻 Author

**Prince Kumar**  
🎓 Computer Science Student | 💻 Git Learner | 🚀 Passionate about Testing and DevOps

---

## 📎 License

This project is for learning purposes only.