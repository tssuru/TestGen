try:
    
    try:
        print(4, end="")
        print(int(9%1), end="")
        print(5, end="")
    except TypeError: 
        print(3, end="")
    except Exception: 
        print(5, end="")
    else:
        print(9, end="")
    finally:
        print(2, end="")
    
except: print('error')
