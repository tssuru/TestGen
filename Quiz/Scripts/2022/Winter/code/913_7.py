try:
    
    try:
        print(1, end="")
        print(7==3, end="")
        print(2, end="")
    except ValueError: 
        print(5, end="")
    except TypeError: 
        print(3, end="")
    else:
        print(4, end="")
    finally:
        print(3, end="")
    
except: print('error')
