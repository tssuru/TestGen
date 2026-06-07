try:
    
    try:
        print(5, end="")
        print(1>=9, end="")
        print(7, end="")
    except ValueError: 
        print(4, end="")
    except Exception: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(6, end="")
    
except: print('error')
