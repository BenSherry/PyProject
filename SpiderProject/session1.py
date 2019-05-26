from urllib.request import urlopen
from urllib.error import HTTPError
from bs4 import BeautifulSoup
def GetContext(url,content_type):
    try:
        html = urlopen(url)
    except HTTPError as e:
        print(e)
        return None
    try:
        bsObj = BeautifulSoup(html.read(), features="html.parser")
        if content_type == 0 :# get title  
            content = bsObj.body.h1
            return content
        elif content_type == 1: #get name list
            NameList = bsObj.find_all("span", {"class":"green"})
            return NameList
    except AttributeError as e:
        print(e)
        return None


print(GetContext("http://www.pythonscraping.com/pages/page1.html",0))
Namelists = GetContext("http://www.pythonscraping.com/pages/warandpeace.html",1)
for name in Namelists:
    print(name.get_text())