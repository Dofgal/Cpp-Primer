# Clear all the complied binary files ended with '.obj' and '.exe'
Get-ChildItem -Path "Chapter*" -Include @("*.obj", "*.exe") -Recurse | Remove-Item -Force
