try:
    
    try:
        print(7, end="")
        print(0==2, end="")
        print(1, end="")
    except Exception: 
        print(2, end="")
    except ValueError: 
        print(3, end="")
    else:
        print(4, end="")
    finally:
        print(8, end="")
    
except: print('error')
