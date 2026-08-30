# Project Progress Log

A concise record of the project's development, DevOps workflow, issues encountered, and resolutions.

## Progress Overview

| Stage | Status |
|---|---|
| Project structure and C++ implementation | ✅ |
| Git repository and GitHub setup | ✅ |
| Feature-branch workflow | ✅ |
| CMake build configuration | ✅ |
| GitHub Actions CI | ✅ |
| Node.js 24 configuration | ✅ |
| CI troubleshooting | ✅ |
| Pull Request workflow | ✅ |
| Rebase and conflict resolution | ✅ |
| CI validation and merge | ✅ |
| README documentation | ✅ |

---

## Issues & Resolutions

### 1. Nested Repository

**Issue:** An accidental repository was created inside the project directory after cloning.

**Resolution:** Removed the nested repository and established the correct project root as the Git repository.

**Lesson:** Maintain a single, clearly defined repository root.

---

### 2. Incorrect `CMakeLists.txt` Filename

**Issue:** The feature branch contained an incorrectly named CMake configuration file.

**Resolution:** Renamed it to the required `CMakeLists.txt` and removed the incorrect duplicate.

**Lesson:** Filename casing matters, especially when CI runs on Linux.

---

### 3. CI Failed While `main` Was Correct

**Issue:** `main` contained the correct CMake file, but the feature branch still contained the incorrect version.

**Resolution:** Investigated the feature branch directly, identified the inconsistent `CMakeLists.txt`, corrected it, committed the fix, and pushed the changes.

**Lesson:** CI validates the code associated with the Pull Request branch, not simply the current state of `main`.

---

### 4. Misinterpreted GitHub Actions Workspace Path

**Issue:** The CI path appeared as `/home/runner/work/Celestial-body-OOP/Celestial-body-OOP`, which initially looked like an accidental nested repository.

**Resolution:** Confirmed that this is the normal GitHub Actions workspace structure.

**Lesson:** Always investigate the actual error before changing repository structure.

---

### 5. CMake Unavailable Locally

**Issue:** Local testing returned `bash: cmake: command not found`.

**Resolution:** Used the GitHub Actions environment to validate the CMake configuration and build.

**Lesson:** Local and CI environments may have different tools and configurations.

---

### 6. Incorrect Use of Git Pipe Operator

**Issue:** Attempted to chain Git commands using `git add . | git commit -m "message"`.

**Resolution:** Used sequential commands or `&&`:

`git add .`

`git commit -m "message"`

or:

`git add . && git commit -m "message"`

**Lesson:** `|` pipes command output, while `&&` executes the next command only when the previous command succeeds.

---

### 7. Local and Remote Feature Branches Diverged

**Issue:** Git rejected the push because the remote feature branch contained commits that were missing locally.

**Resolution:** Fetched the remote branch and rebased the local branch using `git fetch origin` and `git pull --rebase origin Feature/Github-Action-ci`.

**Lesson:** Local and remote branches can diverge and must be synchronized before pushing.

---

### 8. Rebase Conflict

**Issue:** The rebase produced an `add/add` conflict involving `CMakeLists.txt`.

**Resolution:** Resolved the conflict manually, staged the corrected file, and continued the rebase with `git rebase --continue`.

**Lesson:** Rebase conflicts must be resolved according to the intended final project state.

---

### 9. Push Rejected After Rebase

**Issue:** After rebasing, the feature branch history had changed, so a normal push was rejected.

**Resolution:** Used `git push --force-with-lease` to safely update the remote feature branch.

**Lesson:** `--force-with-lease` is safer than `--force` when pushing a rebased branch.

---

### 10. Historical CI Failure Remained Red

**Issue:** An older CI run remained marked as failed even after the underlying problem was fixed.

**Resolution:** No action was required. The failed run remained associated with its original commit, while subsequent commits generated new CI runs that passed.

**Lesson:** CI results are historical records tied to specific commits and do not change retroactively.

---

### 11. Pull Request Did Not Automatically Close Issue #2

**Issue:** Issue #2 was referenced in the Pull Request but was not automatically closed after merging.

**Resolution:** Used GitHub's closing keyword in the Pull Request description: `Closes #2`.

**Lesson:** Simply referencing an issue does not necessarily close it. GitHub's closing keywords must be used.

---

## Final CI Result

Checkout repository → ✓  
Set up Node.js 24 → ✓  
Configure CMake → ✓  
Build → ✓  
CI → ✓ PASSED

The Pull Request was successfully validated by CI and merged into `main` using squash and merge.

## Key DevOps Lessons

- Use feature branches for isolated development.
- Keep `main` stable.
- Use Pull Requests for controlled integration.
- Treat CI logs as the primary source of failure evidence.
- Understand `fetch`, `pull`, `rebase`, and conflict resolution.
- Keep build configuration consistent across environments.
- Understand that CI results are tied to individual commits.
- Use `--force-with-lease` carefully after rebasing.
- Use GitHub issue-closing keywords when appropriate.
- Prefer targeted fixes based on the actual root cause.

## Troubleshooting Workflow

CI Failure  
↓  
Read the CI logs  
↓  
Identify the failing step  
↓  
Inspect the relevant branch  
↓  
Find the root cause  
↓  
Apply the targeted fix  
↓  
Commit the change  
↓  
Push the branch  
↓  
Run CI again  
↓  
Verify the result  
↓  
Create / update Pull Request  
↓  
Merge after successful validation