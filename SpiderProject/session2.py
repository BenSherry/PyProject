from urllib.request import urlopen
from urllib.error import HTTPError
from bs4 import BeautifulSoup
URL250 = "https://movie.douban.com/top250"



def GetOnePage(url=URL250):
    html = urlopen(url)
    bsObj = BeautifulSoup(html.read(), features="html.parser")
    movielistol = bsObj.find('ol', {'class':'grid_view'})
    movie_dict ={}
    for movies in movielistol('li'):
        # get movie name in hd
        info = movies.find('div', attrs={'class':'info'})
        hd = info.find('div', attrs={'class':'hd'})
        movie_name = hd.find('span', attrs={'class':'title'}).getText()
        # get movie score in bd
        bd = info.find('div', attrs={'class':'bd'})
        star = bd.find('div', attrs={'class':'star'})
        rating_num = star.find('span', attrs={'class':'rating_num'}).getText()
        movie_dict[movie_name] = rating_num
    next_page = bsObj.find('span', attrs={'class':'next'}).find('a')
    if next_page:
        html = URL250+next_page['href']
    else:
        html = None
    return html, movie_dict

def GetAllData():
    html = URL250
    movie_dict ={}
    while html != None: 
        html, tempmovielist = GetOnePage(html)
        movie_dict.update(tempmovielist)
    return movie_dict

All250Data = GetAllData()
print(All250Data)