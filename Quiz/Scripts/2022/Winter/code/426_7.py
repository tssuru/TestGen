try:
    
    try:
        print(9, end="")
        print(int(2//2), end="")
        print(4, end="")
    except ValueError: 
        print(5, end="")
    except TypeError: 
        print(3, end="")
    else:
        print(5, end="")
    finally:
        print(0, end="")
    
except: print('error')
