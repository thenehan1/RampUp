import os
from git import Repo
import git
import glob
import shutil

#---------INITIALIZE----------

ICP_ROOT = os.getenv('ICP_ROOT')
try:
    shutil.rmtree(ICP_ROOT)
except:
    pass
if not os.path.exists(ICP_ROOT):
    os.mkdir(ICP_ROOT)

#------------------------ 1. Obtain swconfig ----------------------------------------
print("1. Obtain swconfig repo")

swconfig_path = os.path.join(os.getcwd(),"swconfig")
swconfig_again = input("Clone swconfig afresh? (Skip to use existing) (y/n)")

if 'y' in swconfig_again.lower() or 'swconfig' not in os.listdir():
    shutil.rmtree("swconfig")
    os.mkdir("swconfig")
    sw_config_url="git@github.com:intel-innersource/drivers.qat.common.swfconfig.git"
    Repo.clone_from(sw_config_url,os.path.join(swconfig_path)) 

swconfig_file = os.path.join(swconfig_path,'QAT/LIN/QAT17_MAIN')

print("Done!")

#------------------------ 2. Getting urls from github_urls.txt ---------------------------

print("2. Obtain urls from github_urls.txt")
urls = {}
with open('github_urls.txt') as f:
        for line in f:
                i = 0
                while line[i]!=':':
                        i+=1
                urls[line[:i].strip('"')] = line[i+1:-1].strip('"')

#for key, value in urls.items():
#       print(f"{key} --> {value}")

print("Done!")

#------------------------ 3. Getting branches from swconfig file ----------------------------------
print("3. Get branches from swconfig file")
branches = {}

with open(swconfig_file) as f:
        for line in f:
                if '=' in line:
                    line = line.strip().split('=')
                    branches[line[0]] = line[1]
#for key, value in branches.items():
#       print(f"{key} ----> {value}")
print("Done!")

#------------------------ 4. CLONE ------------------------------------------------------

print("4. Clone")
i = 1
for key in branches:
    print(f"Processing {i} -> {key}")
    try:
        repo = Repo.clone_from(urls[key], os.path.join(ICP_ROOT,urls[key].split('.')[-2]))
        repo.git.checkout(branches[key])
        print(f"{i} Done")
    except:
        print(f"{i} Skipped")
    i+=1

print("Finish!")
