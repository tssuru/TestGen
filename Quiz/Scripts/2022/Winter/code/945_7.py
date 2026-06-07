try:
    
    try:
        print(3, end="")
        print(0>=4, end="")
        print(5, end="")
    except TypeError: 
        print(9, end="")
    except Exception: 
        print(7, end="")
    else:
        print(6, end="")
    finally:
        print(8, end="")
    
except: print('error')
