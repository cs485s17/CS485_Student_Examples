# CS485_Student_Examples

## GitHub Workflow Example ##

[First GitHub Practice](https://github.com/chaddcw/FirstGitPractice) from CS 360

## Connect a Visual Studio solution to an empty GitHub Repository

* Create an empty Git repository on GitHub.  Do not add a README or license at this point!
```
https://github.com/cs485s17/GitHubExample.git
```

* Create a new, empty directory to contain the VS Solution and local Git Repos:
```
c:\users\ME\Desktop\GitHubExample
```
* Start Visual Studio
```
Team Explorer
Projects ->  New Repos
Local Git Repos
New
c:\users\ME\Desktop\GitHubExample  (existing, empty directory from above)
Create
```
* Now add a VS Solution to the existing Git Repository:

```
Team Explorer
Connect
Double Click the newly created Repository (GitHubExample)
Solutions
New...
```

The ```Location``` should point at repos from above (```c:\users\ME\Desktop\GitHubExample```)

```
Edit Name: for the Project
Edit Solution name: for the Solution
CHECK Create Directory for Solution
UNCHECK Create New GitRepository
```
Finish building project as normal

```
Solution Explorer
Add file 
Edit file
```

Click the Pencil icon at the bottom right
```
Add Commit Message
Commit Staged
```
```
Add Commit Message
Commit All
```
Pencil now should be "Pencil Icon 0"

```
Team Explorer
Sync
Publish to Remote Repository
Get Started
https://github.com/cs485s17/GitHubExample.git   <-- the SSH address does not work, only https://
Publish
```

You may be asked for you GitHub account/password.

If you have Two Factor Authentication turned on for GitHub you MUST generate a Personal Access Token on GitHub and use the Personal Access Token instead of your password! 
Generate Personal Access Tokens here:  https://github.com/settings/tokens  
