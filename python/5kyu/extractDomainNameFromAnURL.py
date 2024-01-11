def domain_name(url):
    result = ""
    if "https://" in url:
        result = url[url.index("https://") + 8:]
    elif "http://" in url:
        result = url[url.index("http://") + 7:]
    else:
        result = url
        
    if "www." in result:
        result = result[result.index("www.") + 4:]
        
    return result[:result.index(".")]
