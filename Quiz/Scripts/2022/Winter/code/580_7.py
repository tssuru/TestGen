try:
    
    try:
        print(0, end="")
        print(1>0, end="")
        print(9, end="")
    except ValueError: 
        print(4, end="")
    except Exception: 
        print(3, end="")
    else:
        print(2, end="")
    finally:
        print(5, end="")
    
except: print('error')
