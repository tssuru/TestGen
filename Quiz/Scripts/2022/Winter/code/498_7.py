try:
    
    try:
        print(8, end="")
        print(int(6/2), end="")
        print(3, end="")
    except TypeError: 
        print(0, end="")
    except ValueError: 
        print(2, end="")
    else:
        print(1, end="")
    finally:
        print(5, end="")
    
except: print('error')
