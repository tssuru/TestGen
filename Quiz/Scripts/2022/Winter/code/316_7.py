try:
    
    try:
        print(3, end="")
        print(5==6, end="")
        print(0, end="")
    except TypeError: 
        print(1, end="")
    except ValueError: 
        print(9, end="")
    else:
        print(9, end="")
    finally:
        print(7, end="")
    
except: print('error')
