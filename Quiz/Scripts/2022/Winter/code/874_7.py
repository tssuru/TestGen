try:
    
    try:
        print(7, end="")
        print(2==3, end="")
        print(4, end="")
    except ValueError: 
        print(8, end="")
    except TypeError: 
        print(9, end="")
    else:
        print(3, end="")
    finally:
        print(6, end="")
    
except: print('error')
