from bs4 import BeautifulSoup
import response
import requests

url = input("Enter your Url : ")
response = requests.get(url)


soup = BeautifulSoup(response.text, 'html.parser') 

with open('rohit.html', "w+") as f:
    f.write(soup.prettify())

for link in soup.find_all('a'):
    print(link.get('href'))

print(soup.get_text())