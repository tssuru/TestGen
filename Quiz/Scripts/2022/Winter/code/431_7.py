try:
    
    try:
        print(9, end="")
        print(6!=3, end="")
        print(3, end="")
    except TypeError: 
        print(7, end="")
    except ValueError: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(8, end="")
    
except: print('error')
