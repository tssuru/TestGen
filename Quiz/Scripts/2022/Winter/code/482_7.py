try:
    
    try:
        print(2, end="")
        print(int(9%3), end="")
        print(3, end="")
    except Exception: 
        print(8, end="")
    except TypeError: 
        print(0, end="")
    else:
        print(5, end="")
    finally:
        print(2, end="")
    
except: print('error')
