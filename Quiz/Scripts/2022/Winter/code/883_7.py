try:
    
    try:
        print(5, end="")
        print(int(3%2), end="")
        print(8, end="")
    except ValueError: 
        print(4, end="")
    except TypeError: 
        print(2, end="")
    else:
        print(0, end="")
    finally:
        print(2, end="")
    
except: print('error')
