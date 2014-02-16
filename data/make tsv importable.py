f = open("D:\git_repos\python-words\data\stripped-inflects.lat")
lines = f.read().splitlines()
f.close()
f = open("D:\git_repos\python-words\data\stripped-inflects.lat.edit", "w")
lens = [ st.count('\t') for st in lines ]
for n in range(0, len(lines)):
    lines[n] +='\t' * (max(lens) - lines[n].count('\t')) + '\n'

f.writelines(lines)
f.close()
