try:
    
    try:
        print(4, end="")
        print(9>=0, end="")
        print(7, end="")
    except Exception: 
        print(3, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(5, end="")
    
except: print('error')
