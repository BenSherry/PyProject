from urllib.request import urlopen
from urllib.error import HTTPError
from bs4 import BeautifulSoup
from urllib.request import urlretrieve
from urllib.parse import quote #if url contain chinese, need this and string
import string
from time import strftime, localtime #show time
def downloadpic():
    url = "http://download.xunleizuida.com/1905/神盾局特工第六季-03.mp4"
    s = quote(url,safe=string.printable) #url contain chinese,quote it, if not this is necessary
    print(strftime("download start at:%Y-%m-%d %H:%M:%S", localtime()))
    urlretrieve(s, "shield-03.mp4") 
    print(strftime("download end at:%Y-%m-%d %H:%M:%S", localtime()))
downloadpic()
