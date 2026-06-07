try:
    
    try:
        print(3, end="")
        print(7<=4, end="")
        print(2, end="")
    except ValueError: 
        print(6, end="")
    except Exception: 
        print(7, end="")
    else:
        print(5, end="")
    finally:
        print(2, end="")
    
except: print('error')
