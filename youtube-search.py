import webbrowser

def open_youtube_search(search_query):
    url = f"https://www.youtube.com/results?search_query={search_query}"
    webbrowser.open(url)

if __name__ == "__main__":
    search_query = input("Enter your YouTube search query: ")
    open_youtube_search(search_query)
