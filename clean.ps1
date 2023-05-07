# Clear all the compiled binary files ended with '.obj' and '.exe'
Get-ChildItem -Path "$($PSSCriptRoot)" -Include @("*.obj", "*.exe") -Recurse | Remove-Item -Force
