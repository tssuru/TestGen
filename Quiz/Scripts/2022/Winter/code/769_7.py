try:
    
    try:
        print(3, end="")
        print(int(0%0), end="")
        print(1, end="")
    except TypeError: 
        print(2, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(0, end="")
    finally:
        print(3, end="")
    
except: print('error')
