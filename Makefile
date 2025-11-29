# In your local repository
cd Assignment-2-Basic-forks-and-C-Style-Development

# Remove incorrect file
rm makefile

# Create correct Makefile (capital M)
nano Makefile
# Paste the content from above, save with Ctrl+O, Enter, Ctrl+X

# Verify it's correct
ls -la | grep Makefile

# Test it
make all

# Commit and push
git add Makefile
git rm makefile  # Remove old one from git
git commit -m "Fix Makefile name (capital M)"
git push
