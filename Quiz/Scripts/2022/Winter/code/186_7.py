try:
    
    try:
        print(0, end="")
        print(1==5, end="")
        print(5, end="")
    except TypeError: 
        print(6, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(7, end="")
    finally:
        print(1, end="")
    
except: print('error')
