try:
    
    try:
        print(0, end="")
        print(9<=0, end="")
        print(1, end="")
    except TypeError: 
        print(6, end="")
    except ValueError: 
        print(7, end="")
    else:
        print(0, end="")
    finally:
        print(4, end="")
    
except: print('error')
