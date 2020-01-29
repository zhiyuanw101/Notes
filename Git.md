# Learning Git
[Github](https://help.github.com/en/github/using-git)
## Example: Sync through Github
1. Init Git:  
   ``git init``
2. Add remote:
   - First, make new repo on github, without makefile save extra work;
   - Then, ``git remote add origin <git@github.com:....>``
3. Push: default remote/branch name: origin/master
   
   ``git push  <REMOTENAME> <BRANCHNAME> ``

4. Fetch: default remote/branch name: origin/master

    ``git fetch  <REMOTENAME> <BRANCHNAME> ``

## `clone`
- Clones a repo to your current location, new folder named `REPOSITORY`
  
   ``git clone https://github.com/USERNAME/REPOSITORY.git``

- It is init as Git repository ( `git init` is done)
- A remote named `origin` is created, pointing to the URL you cloned from

## `fetch` 
- Use `fetch` to retrieve new work at remote. 
  
  ``git fetch <REMOTENAME> <BRANCHNAME>``
- Fetching from a repository grabs all the new remote-tracking branches and tags without merging those changes into your own branches.

## `merge` 
- Use `merge` to combine local changes with remote
  
  ``git merge <REMOTENAME> <BRANCHNAME>``
- Fetching from a repository grabs all the new remote-tracking branches and tags without merging those changes into your own branches.
## `pull` 
- `git pull` is a convenient shortcut for completing both git fetch and git mergein the same command:

  ``git pull <REMOTENAME> <BRANCHNAME>``