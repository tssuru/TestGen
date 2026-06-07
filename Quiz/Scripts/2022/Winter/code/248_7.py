try:
    
    try:
        print(6, end="")
        print(6<=4, end="")
        print(0, end="")
    except Exception: 
        print(9, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(8, end="")
    finally:
        print(7, end="")
    
except: print('error')
