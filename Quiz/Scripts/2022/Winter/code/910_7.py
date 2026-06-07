try:
    
    try:
        print(1, end="")
        print(9!=1, end="")
        print(0, end="")
    except TypeError: 
        print(7, end="")
    except Exception: 
        print(2, end="")
    else:
        print(4, end="")
    finally:
        print(3, end="")
    
except: print('error')
