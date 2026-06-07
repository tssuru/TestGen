try:
    
    try:
        print(7, end="")
        print(int(4%1), end="")
        print(9, end="")
    except Exception: 
        print(3, end="")
    except TypeError: 
        print(6, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
