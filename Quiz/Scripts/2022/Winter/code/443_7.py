try:
    
    try:
        print(6, end="")
        print(7>9, end="")
        print(2, end="")
    except Exception: 
        print(1, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(9, end="")
    finally:
        print(5, end="")
    
except: print('error')
