try:
    
    try:
        print(3, end="")
        print(int(1/0), end="")
        print(4, end="")
    except ValueError: 
        print(0, end="")
    except TypeError: 
        print(3, end="")
    else:
        print(7, end="")
    finally:
        print(8, end="")
    
except: print('error')
