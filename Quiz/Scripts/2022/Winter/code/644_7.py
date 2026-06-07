try:
    
    try:
        print(7, end="")
        print(2!=0, end="")
        print(1, end="")
    except TypeError: 
        print(0, end="")
    except Exception: 
        print(3, end="")
    else:
        print(4, end="")
    finally:
        print(8, end="")
    
except: print('error')
