from urllib.request import urlopen
from urllib.error import HTTPError
from bs4 import BeautifulSoup

def GetTitle(url):
    try:
        html = urlopen(url)
    except HTTPError as e:
        print(e)
        return None
    try:
        bsObj = BeautifulSoup(html.read(), features="html.parser")
        title = bsObj.body.h1
        return title
    except AttributeError as e:
        print(e)
        return None

print(GetTitle("http://www.pythonscraping.com/pages/page1.html"))