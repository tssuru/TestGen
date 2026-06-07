try:
    
    try:
        print(9, end="")
        print(int(0/0), end="")
        print(1, end="")
    except TypeError: 
        print(4, end="")
    except ValueError: 
        print(2, end="")
    else:
        print(9, end="")
    finally:
        print(8, end="")
    
except: print('error')
