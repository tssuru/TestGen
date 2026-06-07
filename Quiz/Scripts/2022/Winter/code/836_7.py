try:
    
    try:
        print(9, end="")
        print(int(0%3), end="")
        print(7, end="")
    except ValueError: 
        print(3, end="")
    except TypeError: 
        print(2, end="")
    else:
        print(9, end="")
    finally:
        print(5, end="")
    
except: print('error')
