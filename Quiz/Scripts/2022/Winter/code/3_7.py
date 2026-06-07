try:
    
    try:
        print(7, end="")
        print(int(9%2), end="")
        print(3, end="")
    except TypeError: 
        print(8, end="")
    except ValueError: 
        print(1, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
