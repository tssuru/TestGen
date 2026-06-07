try:
    
    try:
        print(2, end="")
        print(3==3, end="")
        print(8, end="")
    except Exception: 
        print(0, end="")
    except TypeError: 
        print(4, end="")
    else:
        print(1, end="")
    finally:
        print(5, end="")
    
except: print('error')
