try:
    with open('docs/readme.txt', 'w') as f:
        f.write('Create a new text file!')
except FileNotFoundError:
    print("The 'docs' directory does not exist")
