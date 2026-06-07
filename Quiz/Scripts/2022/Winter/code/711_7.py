try:
    
    try:
        print(8, end="")
        print(1==3, end="")
        print(0, end="")
    except Exception: 
        print(7, end="")
    except ValueError: 
        print(2, end="")
    else:
        print(5, end="")
    finally:
        print(4, end="")
    
except: print('error')
